// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/HG_DialogComponent.h"
#include "AIController.h"

UHG_DialogComponent::UHG_DialogComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UHG_DialogComponent::OnInteraction_Implementation()
{
	IHG_Interactable::OnInteraction_Implementation();
}

void UHG_DialogComponent::BeginPlay()
{
	Super::BeginPlay();
	AIController = GetWorld()->SpawnActor<AAIController>(AAIController::StaticClass());
}
