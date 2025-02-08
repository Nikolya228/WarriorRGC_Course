// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimInstances/WarriorBaseAnimInstances.h"
#include "WarriorHeroLinkedAnimLayer.generated.h"

class UWarriorHeroAnimInstances;
/**
 * 
 */
UCLASS()
class WARIOR_API UWarriorHeroLinkedAnimLayer : public UWarriorBaseAnimInstances
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, meta = (NotBlueprintThreadSafe))
	UWarriorHeroAnimInstances* GetHeroAnimInstance() const;
};
