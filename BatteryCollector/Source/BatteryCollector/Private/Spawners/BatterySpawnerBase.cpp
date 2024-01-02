// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryCollector/Public/Spawners/BatterySpawnerBase.h"

#include "BatteryCollector/Public/Pickups/PickupBase.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values
ABatterySpawnerBase::ABatterySpawnerBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MinSpawnDelay = 0.5f;
	MaxSpawnDelay = 5.0f;
	
	SpawnVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("Spawner"));
}

// Called when the game starts or when spawned
void ABatterySpawnerBase::BeginPlay()
{
	Super::BeginPlay();

	RandomSpawnDelay = FMath::RandRange(MinSpawnDelay, MaxSpawnDelay);

	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle,
										this,
										&ABatterySpawnerBase::SpawnBatteryActor,
										RandomSpawnDelay,
										false);
}

// Called every frame
void ABatterySpawnerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector ABatterySpawnerBase::GetRandomSpawnPoint() const
{
	const FVector SpawnOrigin = SpawnVolume->Bounds.Origin;
	const FVector SpawnLimits = SpawnVolume->Bounds.BoxExtent;

	return UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnLimits);
}

void ABatterySpawnerBase::SpawnBatteryActor()
{
	// Make sure we have an Actor to spawn
	if(!ActorToSpawn) return;
	// Set random rotation
	FRotator Rotation;
	Rotation.Yaw = FMath::RandRange(1, 3) * 360.0f;
	Rotation.Pitch =  FMath::RandRange(1, 3) * 360.0f;
	Rotation.Roll = FMath::RandRange(1, 3) * 360.0f;
	
	// Set up spawn parameters
	FActorSpawnParameters Params;

	Params.Owner = this;
	Params.Instigator = GetInstigator();
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	
	// Spawn Actor
	if(!GetWorld()) return;

	APickupBase* SpawnedActor = GetWorld()->SpawnActor<APickupBase>(ActorToSpawn, GetRandomSpawnPoint(), Rotation, Params);
	
	RandomSpawnDelay = FMath::RandRange(MinSpawnDelay, MaxSpawnDelay);
	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle,
										this,
										&ABatterySpawnerBase::SpawnBatteryActor,
										RandomSpawnDelay,
										false);
}

