// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warior/Components/PawnExtensionComponentBase.h"
#include "GameplayTagContainer.h"
#include "PawnCombatComponent.generated.h"

class AWarriorWeaponBase;
/**
 * 
 */
UCLASS()
class WARIOR_API UPawnCombatComponent : public UPawnExtensionComponentBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	void RegisterSpawnedWeapon(FGameplayTag InWeaponTagToRegister, AWarriorWeaponBase* InWeaponToRegister, bool bRegisterAsEquipWeapon = false);

	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCarriedWeaponByTag(FGameplayTag InWeaponToGet) const;

	UPROPERTY(BlueprintReadWrite, Category = "Warrior|Combat")
	FGameplayTag CurrentEquippedWeaponTag;

	UFUNCTION(BlueprintCallable, Category = "Warrior|Combat")
	AWarriorWeaponBase* GetCharacterCurrentEquippedWeapon() const;

private:
	TMap<FGameplayTag, AWarriorWeaponBase*> CharacterCarriedWeaponMap;
};
