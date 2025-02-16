 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "WarriorEnemyGameplayAbility.generated.h"

class AWarriorEnemyBaseCharacter;
class UEnemyCombatComponent;
/**
 * 
 */
UCLASS()
class WARIOR_API UWarriorEnemyGameplayAbility : public UWarriorGameplayAbility
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	AWarriorEnemyBaseCharacter* GetEnemyCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	UEnemyCombatComponent* GetEnemyCombatComponent();

	UFUNCTION(BlueprintPure, Category = "Warrior|Ability")
	FGameplayEffectSpecHandle MakeEnemyDamageAttackSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, const FScalableFloat& InDamageSkalableFloat);

private:
	TWeakObjectPtr<AWarriorEnemyBaseCharacter> CachedWarriorEnemyCharacter;
};
