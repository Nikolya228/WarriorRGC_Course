// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameModes/WariorGameMode.h"
#include "WariorSurvivalGameMode.generated.h"

UENUM(BlueprintType)
enum class EWarriorSurvivalGameModeState : uint8
{
	WaitSpawnNewWave,
	SpawningNewWave,
	InProgress,
	WaveCompleted,
	AllWavesDone,
	PlayerDied
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSurvivalGameModeStateChangeDelegate, EWarriorSurvivalGameModeState, CurrentState);

/**
 * 
 */
UCLASS()
class WARIOR_API AWariorSurvivalGameMode : public AWariorGameMode
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:

	void SetCurrentCurrentSurvivalGameModeState(EWarriorSurvivalGameModeState InState);
	UPROPERTY()
	EWarriorSurvivalGameModeState CurrentSurvivalGameModeState;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnSurvivalGameModeStateChangeDelegate OnSurvivalGameModeStateChange;
};
