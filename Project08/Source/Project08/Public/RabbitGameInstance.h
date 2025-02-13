#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "RabbitGameInstance.generated.h"

UCLASS()
class PROJECT08_API URabbitGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	URabbitGameInstance();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GameData")
	int32 TotalScore;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GameData")
	int32 CurrentLevelIndex;

	UFUNCTION(BlueprintCallable, Category = "GameData")
	void AddToScore(int32 Amount);
};
