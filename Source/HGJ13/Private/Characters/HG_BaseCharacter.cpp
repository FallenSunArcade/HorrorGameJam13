// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/HG_BaseCharacter.h"

#include "Components/HG_DialogComponent.h"


AHG_BaseCharacter::AHG_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	DialogComponent = CreateDefaultSubobject<UHG_DialogComponent>(TEXT("Dialog Component"));
}

void AHG_BaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


