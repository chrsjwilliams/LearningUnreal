// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectorGameMode.h"
#include "BatteryCollectorCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

ABatteryCollectorGameMode::ABatteryCollectorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	DelayTime = 0.2f;
	DecayAmount = -50.0f;
	
}

void ABatteryCollectorGameMode::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle PowerDecayTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(PowerDecayTimerHandle, this, &ABatteryCollectorGameMode::StartPowerLevelDecay, DelayTime, true);
}

void ABatteryCollectorGameMode::StartPowerLevelDecay()
{
	// Get a reference to Player class
	ABatteryCollectorCharacter* Player = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	// If Power Level is > 0 Call function to update Player's power Level
	if(Player && Player->GetCurrentPowerLevel() > 0.0f)
	{
		Player->UpdateCurrentPowerLevel(DecayAmount);
	}
}


