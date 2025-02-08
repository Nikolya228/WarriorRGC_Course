// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Warior/DataAssets/StartUpData/DataAsset_StartUpBase.h"
#include "Warior/WarriorTypes/WarriorStructTypes.h"
#include "DataAsset_HeroStartUpData.generated.h"

/**
 * 
 */
UCLASS()
class WARIOR_API UDataAsset_HeroStartUpData : public UDataAsset_StartUpBase
{
	GENERATED_BODY()
	
public:
	virtual void GiveToAbilitySystemComponent(UWarriorAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1) override;

private:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData", meta = (TitleProperty = "InputTag"))
	TArray<FWarriorHeroAbilitySet> HeroStartUpAbilitySets;
};
