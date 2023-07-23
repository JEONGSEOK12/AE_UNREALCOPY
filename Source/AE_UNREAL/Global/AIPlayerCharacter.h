// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Global/GlobalCharacter.h"
#include "AIPlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AE_UNREAL_API AAIPlayerCharacter : public AGlobalCharacter
{
	GENERATED_BODY()


public:
	AAIPlayerCharacter();

private:
	UPROPERTY(Category = "Components", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmComponent;

	UPROPERTY(Category = "Components", EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	void Tick(float _Delta) override;
};
