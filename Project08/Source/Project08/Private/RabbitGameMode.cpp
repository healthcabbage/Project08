#include "RabbitGameMode.h"
#include "RabbitCharacter.h"
#include "RabbitPlayerController.h"
#include "RabbitGameStateBase.h"

ARabbitGameMode::ARabbitGameMode()
{
	DefaultPawnClass = ARabbitCharacter::StaticClass();
	PlayerControllerClass = ARabbitPlayerController::StaticClass();
	GameStateClass = ARabbitGameStateBase::StaticClass();
}
