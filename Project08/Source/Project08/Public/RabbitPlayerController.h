#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RabbitPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class PROJECT08_API ARabbitPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ARabbitPlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* JumpAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* SprintAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
	TSubclassOf<UUserWidget> HUDWidgetClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUD")
	UUserWidget* HUDWidgetInstance;
	
	UFUNCTION(BlueprintCallable, Category = "HUD")
	UUserWidget* GetHUDWidget() const;

protected:
	virtual void BeginPlay() override;
};
