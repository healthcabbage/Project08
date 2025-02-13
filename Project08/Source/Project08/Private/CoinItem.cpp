#include "CoinItem.h"
#include "Engine/World.h"
#include "RabbitGameStateBase.h"

ACoinItem::ACoinItem()
{
	PointValue = 0;
	ItemType = "DefaultCoin";
}

void ACoinItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (UWorld* World = GetWorld())
		{
			if (ARabbitGameStateBase* GameState =  World->GetGameState<ARabbitGameStateBase>())
			{
				GameState->AddScore(PointValue);
			}
		}
		DestoryItem();
	}
}
