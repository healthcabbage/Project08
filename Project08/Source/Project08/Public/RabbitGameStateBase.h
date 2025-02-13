#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "RabbitGameStateBase.generated.h"

UCLASS()
class PROJECT08_API ARabbitGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	ARabbitGameStateBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score")
	int32 Score;

	UFUNCTION(BlueprintPure, Category = "Score")
	int32 GetScore() const;
	UFUNCTION(BlueprintCallable, Category = "Score")
	void AddScore(int32 Amount);
};
