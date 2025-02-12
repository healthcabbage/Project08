#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"

UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};


class PROJECT08_API IItemInterface
{
	GENERATED_BODY()

public:
	virtual void OnItemOverlap(AActor* OverlapActor) = 0;
	virtual void OnItemEndOverlap(AActor* OverlapActor) = 0;
	virtual void ActivateItem(AActor* Activator) = 0;
	virtual FName GetItemType() const = 0;

	// 지뢰, 힐링, 코인
	// 힐링, 코인 - 즉시 발동형 - 오버랩
	// 지뢰 - 범위 내에 오버랩 - 발동이 5초뒤 폭발 - 오버랩 - 데미지
};
