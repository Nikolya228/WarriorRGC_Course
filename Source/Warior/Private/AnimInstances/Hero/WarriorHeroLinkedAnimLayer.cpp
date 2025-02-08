// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/Hero/WarriorHeroLinkedAnimLayer.h"
#include "AnimInstances/Hero/WarriorHeroAnimInstances.h"

UWarriorHeroAnimInstances* UWarriorHeroLinkedAnimLayer::GetHeroAnimInstance() const
{
    return Cast<UWarriorHeroAnimInstances>(GetOwningComponent()->GetAnimInstance());
}
