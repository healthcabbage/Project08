#include "RabbitGameMode.h"
#include "RabbitCharacter.h"
#include "RabbitPlayerController.h"
#include "RabbitGameState.h"

ARabbitGameMode::ARabbitGameMode()
{
	DefaultPawnClass = ARabbitCharacter::StaticClass();
	PlayerControllerClass = ARabbitPlayerController::StaticClass();
	GameStateClass = ARabbitGameState::StaticClass();
}
