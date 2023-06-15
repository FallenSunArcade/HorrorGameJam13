﻿// Fill out your copyright notice in the Description page of Project Settings.

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
	AHG_ShootingBooth();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tent", meta = (AllowPrivateAccess))
	UStaticMeshComponent* Tent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tent", meta = (AllowPrivateAccess))
	UStaticMeshComponent* WoodenFrame = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Track", meta = (AllowPrivateAccess))
	UStaticMeshComponent* Track = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Track", meta = (AllowPrivateAccess))
	USplineComponent* SplineComponent = nullptr;
};
