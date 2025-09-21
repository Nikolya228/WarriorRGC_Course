// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModes/WariorSurvivalGameMode.h"

void AWariorSurvivalGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AWariorSurvivalGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWariorSurvivalGameMode::SetCurrentCurrentSurvivalGameModeState(EWarriorSurvivalGameModeState InState)
{
	CurrentSurvivalGameModeState = InState;
	OnSurvivalGameModeStateChange.Broadcast(CurrentSurvivalGameModeState);
}
