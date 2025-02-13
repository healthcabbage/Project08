#include "HealingItem.h"
#include "RabbitCharacter.h"

AHealingItem::AHealingItem()
{
	HealAmount = 20;
	ItemType = "Healing";
}

void AHealingItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if(ARabbitCharacter * PlayerCharacter = Cast<ARabbitCharacter>(Activator))
		{
			PlayerCharacter->AddHealth(HealAmount);
		}

		DestoryItem();
	}
}
