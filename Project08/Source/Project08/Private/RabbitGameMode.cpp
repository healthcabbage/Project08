#include "RabbitGameMode.h"
#include "RabbitCharacter.h"
#include "RabbitPlayerController.h"

ARabbitGameMode::ARabbitGameMode()
{
	DefaultPawnClass = ARabbitCharacter::StaticClass();
	PlayerControllerClass = ARabbitPlayerController::StaticClass();
}
