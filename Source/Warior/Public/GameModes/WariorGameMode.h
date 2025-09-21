// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Warior/WarriorTypes/WarriorEnumTypes.h"
#include "WariorGameMode.generated.h"

/**
 * 
 */
UCLASS()
class WARIOR_API AWariorGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AWariorGameMode();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game Settings")
	EWarriorGameDifficulty CurrentGameDifficulty;

public:
	FORCEINLINE EWarriorGameDifficulty GetCurrentGameDifficulty() const { return CurrentGameDifficulty; };
};
