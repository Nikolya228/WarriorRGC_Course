// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/WarriorBaseAnimInstances.h"
#include "WarriorFunctionLibrary.h"

bool UWarriorBaseAnimInstances::DoesOwnerHaveTag(FGameplayTag TagToCheck)
{
	if (APawn* OwningPawn = TryGetPawnOwner())
	{
		UWarriorFunctionLibrary::NativeDoesActorHaveTag(OwningPawn, TagToCheck);
	}

	return false;
}
