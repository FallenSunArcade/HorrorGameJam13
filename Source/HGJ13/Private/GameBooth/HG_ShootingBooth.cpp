// Fill out your copyright notice in the Description page of Project Settings.


#include "GameBooth/HG_ShootingBooth.h"

#include "Components/SplineComponent.h"


AHG_ShootingBooth::AHG_ShootingBooth()
{
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	Tent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tent"));
	Tent->SetupAttachment(RootComponent);

	WoodenFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wooden Frame"));
	WoodenFrame->SetupAttachment(RootComponent);

	Track = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Track"));
	Track->SetupAttachment(RootComponent);

	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	SplineComponent->SetupAttachment(Track);
}

void AHG_ShootingBooth::BeginPlay()
{
	Super::BeginPlay();
	
}

