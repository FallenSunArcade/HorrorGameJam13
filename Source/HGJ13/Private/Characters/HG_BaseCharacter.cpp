// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/HG_BaseCharacter.h"


// Sets default values
AHG_BaseCharacter::AHG_BaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AHG_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHG_BaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AHG_BaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

