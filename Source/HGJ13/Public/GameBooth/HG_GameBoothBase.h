// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HG_GameBoothBase.generated.h"

UCLASS()
class HGJ13_API AHG_GameBoothBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHG_GameBoothBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
