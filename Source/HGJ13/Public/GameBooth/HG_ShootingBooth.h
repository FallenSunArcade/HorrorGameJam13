// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HG_GameBoothBase.h"
#include "HG_ShootingBooth.generated.h"

class USplineComponent;

UCLASS()
class HGJ13_API AHG_ShootingBooth : public AHG_GameBoothBase
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHG_ShootingBooth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
