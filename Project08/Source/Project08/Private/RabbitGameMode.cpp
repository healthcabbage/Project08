#include "RabbitGameMode.h"
#include "RabbitCharacter.h"

ARabbitGameMode::ARabbitGameMode()
{
	DefaultPawnClass = ARabbitCharacter::StaticClass();
}
