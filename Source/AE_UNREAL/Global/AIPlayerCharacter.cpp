// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/AIPlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

AAIPlayerCharacter::AAIPlayerCharacter() 
{
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComponent->TargetArmLength = 800.0f;
	SpringArmComponent->bDoCollisionTest = true;
	SpringArmComponent->SetupAttachment(RootComponent);


	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->FieldOfView = 45.0f;
	CameraComponent->SetupAttachment(SpringArmComponent);
	// SpringArmComponent
}

void AAIPlayerCharacter::Tick(float _Delta)
{
	// SpringArmComponent->AddLocalRotation();
	// AddControllerYawInput(100);
}