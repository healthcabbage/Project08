#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RabbitCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class PROJECT08_API ARabbitCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ARabbitCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;

protected:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



};
