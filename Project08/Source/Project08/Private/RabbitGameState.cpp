#include "RabbitGameState.h"
#include "RabbitGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "SpawnVolume.h"
#include "CoinItem.h"

ARabbitGameState::ARabbitGameState()
{
	Score = 0;
	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;
	CurrentLevelIndex = 0;
	MaxLevels = 5;
	ItemToSpawn = 40;
	LevelMapNames = { "BasicLevel", "IntermediateLevel", "AdvancedLevel", "BasicLevel", "AdvancedLevel" };

	LevelDuration = 60.0f;
}

void ARabbitGameState::BeginPlay()
{
	Super::BeginPlay();

	StartLevel();
}

int32 ARabbitGameState::GetScore() const
{
	return Score;
}

void ARabbitGameState::AddScore(int32 Amount)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		URabbitGameInstance* RabbitGameInstance = Cast<URabbitGameInstance>(GameInstance);
		if (RabbitGameInstance)
		{
			RabbitGameInstance->AddToScore(Amount);
		}
	}
}

void ARabbitGameState::OnGameOver()
{
	UE_LOG(LogTemp, Warning, TEXT("Game Over!"));
}

void ARabbitGameState::OnCoinCollected()
{
	CollectedCoinCount++;
	UE_LOG(LogTemp, Warning, TEXT("Coin Collected: %d / %d"),
		CollectedCoinCount,
		SpawnedCoinCount);

	if (SpawnedCoinCount > 0 && CollectedCoinCount >= SpawnedCoinCount)
	{
		EndLevel();
	}
}

void ARabbitGameState::StartLevel()
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		URabbitGameInstance* RabbitGameInstance = Cast<URabbitGameInstance>(GameInstance);
		if (RabbitGameInstance)
		{
			CurrentLevelIndex = RabbitGameInstance->CurrentLevelIndex;
		}
	}

	SpawnedCoinCount = 0;
	CollectedCoinCount = 0;

	TArray<AActor*> FoundVolumes;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundVolumes);

	ItemToSpawn += CurrentLevelIndex * 10;

	UE_LOG(LogTemp, Warning, TEXT("ItemToSpawn :  %d "), ItemToSpawn);
	
	for (int32 i = 0; i < ItemToSpawn; i++)
	{
		if (FoundVolumes.Num() > 0)
		{
			ASpawnVolume* SpawnVolume = Cast<ASpawnVolume>(FoundVolumes[0]);
			if (SpawnVolume)
			{
				AActor* SpawnedActor = SpawnVolume->SpawnRandomItem();
				if (SpawnedActor && SpawnedActor->IsA(ACoinItem::StaticClass()))
				{
					SpawnedCoinCount++;
				}

			}
		}
	}

	GetWorldTimerManager().SetTimer(
		LevelTimerHandle,
		this,
		&ARabbitGameState::OnLevelTimeUp,
		LevelDuration,
		false
	);

	UE_LOG(LogTemp, Warning, TEXT("Level %d Start!, Spawned %d coin"),
		CurrentLevelIndex + 1,
		SpawnedCoinCount);
}

void ARabbitGameState::OnLevelTimeUp()
{
	EndLevel();
}

void ARabbitGameState::EndLevel()
{
	GetWorldTimerManager().ClearTimer(LevelTimerHandle);

	if (UGameInstance* GameInstance = GetGameInstance())
	{
		URabbitGameInstance* RabbitGameInstance = Cast<URabbitGameInstance>(GameInstance);
		if (RabbitGameInstance)
		{
			AddScore(Score);
			CurrentLevelIndex++;
			RabbitGameInstance->CurrentLevelIndex = CurrentLevelIndex;
		}
	}

	if (CurrentLevelIndex >= MaxLevels)
	{
		OnGameOver();
		return;
	}

	if (LevelMapNames.IsValidIndex(CurrentLevelIndex))
	{
		UGameplayStatics::OpenLevel(GetWorld(), LevelMapNames[CurrentLevelIndex]);
	}
	else
	{
		OnGameOver();
	}
}
