﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HG_DuckTarget.generated.h"

class UCapsuleComponent;
class UStaticMeshComponent;
class USplineComponent;
class UCurveFloat;

UCLASS()
class HGJ13_API AHG_DuckTarget : public AActor
{
	GENERATED_BODY()

public:
	AHG_DuckTarget();
	
	void MoveDuckOnSpline(USplineComponent* Spline, float SplinePosition);
	
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category = "Components")
	UCapsuleComponent* Collision = nullptr;

	UPROPERTY(EditAnywhere, Category = "Components")
	UStaticMeshComponent* StaticMesh = nullptr;

	UPROPERTY(EditAnywhere, Category = "Movement")
	UCurveFloat* CurveFloat = nullptr;

	//FTim
	
};
