#include "BaseItem.h"

ABaseItem::ABaseItem()
{
 
	PrimaryActorTick.bCanEverTick = true;

}

void ABaseItem::OnItemOverlap(AActor* OverlapActor)
{
}

void ABaseItem::OnItemEndOverlap(AActor* OverlapActor)
{
}

void ABaseItem::ActivateItem(AActor* Activator)
{
}

FName ABaseItem::GetItemType() const
{
	return ItemType;
}

void ABaseItem::DestoryItem()
{
	Destroy();
}


