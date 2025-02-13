#include "RabbitGameInstance.h"

URabbitGameInstance::URabbitGameInstance()
{
	TotalScore = 0;
	CurrentLevelIndex = 0;
}

void URabbitGameInstance::AddToScore(int32 Amount)
{
	TotalScore += Amount;
	UE_LOG(LogTemp, Warning, TEXT("Total Score Updated : %d"), TotalScore);
}

