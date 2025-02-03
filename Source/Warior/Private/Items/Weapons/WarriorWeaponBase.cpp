// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Weapons/WarriorWeaponBase.h"
#include "Components/BoxComponent.h"

// Sets default values
AWarriorWeaponBase::AWarriorWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	SetRootComponent(WeaponMesh);

	WeaponBoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("WeaponBoxCollision"));
	WeaponBoxCollision->SetupAttachment(WeaponMesh);
	WeaponBoxCollision->SetBoxExtent(FVector(20.f));
	WeaponBoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

