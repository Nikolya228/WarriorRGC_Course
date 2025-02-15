// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"

namespace WarriorGameplayTags
{

#pragma region InputTags

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipAxe);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_LightAttack_Axe);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_HeavyAttack_Axe);

#pragma endregion

#pragma region PlayersTags

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Light_Axe);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Heavy_Axe);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_HitPause);

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Axe);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_HitPause);

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_JumpToFinisher);

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Light);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Heavy);

#pragma endregion

#pragma region EnemyTags
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Melee);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Ability_Ranged);

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Weapon);

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Status_Strafing);

#pragma endregion

#pragma region SharedTags
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Ability_HitReact);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Ability_Death);

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Event_MeleeHit);
	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Event_HitReact);

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_SetByCaller_BaseDamage);

	WARIOR_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Status_Death);

#pragma endregion
}
