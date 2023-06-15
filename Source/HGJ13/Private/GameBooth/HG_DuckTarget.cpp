// Fill out your copyright notice in the Description page of Project Settings.


#include "GameBooth/HG_DuckTarget.h"

#include "Components/CapsuleComponent.h"


AHG_DuckTarget::AHG_DuckTarget()
{
	PrimaryActorTick.bCanEverTick = false;

	Collision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collision"));
	SetRootComponent(Collision);

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	StaticMesh->SetupAttachment(Collision);
}

void AHG_DuckTarget::MoveDuckOnSpline(USplineComponent* Spline, float SplinePosition)
{
	
}

void AHG_DuckTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

