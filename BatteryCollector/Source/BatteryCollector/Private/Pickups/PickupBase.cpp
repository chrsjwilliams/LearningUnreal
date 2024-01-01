// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryCollector/Public/Pickups/PickupBase.h"


// Sets default values
APickupBase::APickupBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bIsActive = true;
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
	RootComponent = PickupMesh;
}

bool APickupBase::IsPickUpActive() const
{
	return bIsActive;
}

void APickupBase::SetPickUpIsActive(bool isActive)
{
	bIsActive = isActive;
}

void APickupBase::BeginPlay()
{
	Super::BeginPlay();
}

void APickupBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
