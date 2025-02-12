#include "MineItem.h"

AMineItem::AMineItem()
{
	ExplostionDelay = 5.0f;
	ExplostionRadius = 300.0f;
	ExplostionDelay = 30.0f;
	ItemType = "Mine";
}

void AMineItem::ActivateItem(AActor* Activator)
{
	DestoryItem();
}
