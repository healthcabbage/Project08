#include "RabbitPlayerController.h"
#include "RabbitGameState.h"
#include "EnhancedInputSubsystems.h"
#include "Blueprint/UserWidget.h"

ARabbitPlayerController::ARabbitPlayerController()
	: InputMappingContext(nullptr),
	MoveAction(nullptr),
	JumpAction(nullptr),
	LookAction(nullptr),
	SprintAction(nullptr),
	HUDWidgetClass(nullptr)
{

}

UUserWidget* ARabbitPlayerController::GetHUDWidget() const
{
	return HUDWidgetInstance;
}

void ARabbitPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* SubSystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				SubSystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}

	if (HUDWidgetClass)
	{
		HUDWidgetInstance = CreateWidget<UUserWidget>(this, HUDWidgetClass);
		if (HUDWidgetInstance)
		{
			HUDWidgetInstance->AddToViewport();
		}
	}

	ARabbitGameState* RabbitGameState = GetWorld() ? GetWorld()->GetGameState<ARabbitGameState>() : nullptr;
	if (RabbitGameState)
	{
		RabbitGameState->UpdateHUD();
	}
}
