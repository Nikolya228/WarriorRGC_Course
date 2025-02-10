// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warior/Characters/WarriorBaseCharacter.h"
#include "WarriorEnemyBaseCharacter.generated.h"

class UEnemyCombatComponent;

/**
 * 
 */
UCLASS()
class WARIOR_API AWarriorEnemyBaseCharacter : public AWarriorBaseCharacter
{
	GENERATED_BODY()
	
public:
	AWarriorEnemyBaseCharacter();

#pragma region PawnCombatInterface

	virtual UPawnCombatComponent* GetPawnCombatComponent() const override;

#pragma endregion

protected:
#pragma region APawn_Interface

	virtual void PossessedBy(AController* NewController) override;

#pragma endregion

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	UEnemyCombatComponent* EnemyCombatComponent;

public:
	FORCEINLINE UEnemyCombatComponent* GetEnemyCombatComponent() const { return EnemyCombatComponent; };

private:
	void InitEnemyStartUpData();
};
