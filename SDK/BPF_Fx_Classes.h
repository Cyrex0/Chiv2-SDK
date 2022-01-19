#pragma once

/**
 * Name: chiv2
 * Version: 123456
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BPF_Fx.BPF_Fx_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_Fx_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ResetAllPostProcessEffects(class UObject* __WorldContext);
		void STATIC_GetCharacterStatesFxObject(class AActor* Actor, class UObject* __WorldContext, class UCharacterFx_C** CharacterStatesFx, bool* Success);
		void STATIC_GetCharacterFxObject(class AActor* Actor, class UObject* __WorldContext, class UCharacterFx_C** Character_Fx, bool* Success);
		void STATIC_Is_Character_In_Shove_Or_Jab_Or_Headbutt_Attack(class ATBLCharacter* Character, class UObject* __WorldContext, bool* Return_Value);
		void STATIC_IsValidSelfDamageType(class UDamageSource* DamageType, class UObject* __WorldContext, bool* Return);
		void STATIC_ShouldPlayEpicDeathVO(const struct FDamageTakenEvent& DamageTakenEvent, class UObject* __WorldContext, bool* Return_Value);
		void STATIC_DisablePreVisualizationListener(class UObject* Listener, class UObject* __WorldContext);
		void STATIC_EnablePreVisualizationListener(class UObject* Listener, class UClass* Item, class UObject* __WorldContext);
		void STATIC_TBL_PresetWorldCameraShake(WorldCameraShakeType_EWorldCameraShakeType Selection, const struct FVector& Epicenter, class UObject* __WorldContext);
		void STATIC_IsNPC(class AActor* Actor, class UObject* __WorldContext, bool* Return_Value);
		void STATIC_GetActorCameraManger(class UObject* Actor, class UObject* __WorldContext, class APlayerCameraManager** PlayerCameraManager, bool* Success);
		void STATIC_GetSwitchStateFromWeaponMaterial(TBL_EWeaponMaterial WeaponMaterial, class UObject* __WorldContext, class FString* SwitchState);
		void STATIC_GetPhysMatSwitchState(class UPhysicalMaterial* PhysMat, class UObject* __WorldContext, class FString* SwitchState);
		bool STATIC_IsBlockingHitAWorldHit(const struct FProjectileHitParams& HitParams, class UObject* __WorldContext);
		void STATIC_SetCharacterMaterialParam__vector_(class AActor* Actor, const class FName& Name, const struct FVector& Value, class UObject* __WorldContext);
		void STATIC_GetCrosshair(class UObject* __WorldContext, bool* Success);
		void STATIC_SetWeaponMaterialParam__scalar_(class AActor* Actor, const class FName& Name, float Value, class UObject* __WorldContext);
		void STATIC_SetCharacterMaterialParam__scalar_(class AActor* Actor, const class FName& Name, float Value, class UObject* __WorldContext);
		void STATIC_IsDownedDamage(const struct FDamageTakenEvent& Event, class UObject* __WorldContext, bool* _);
		void STATIC_GetPainStateFromDamage(float Damage, class UObject* __WorldContext, class FString* CharacterPainState);
		void STATIC_GetAttackSwitchStateFromAttackInfo(const struct FAttackInfo& AttackInfo, class UObject* __WorldContext, class FString* AttackState);
		void STATIC_GetArmorTypeNameFromActor(class AActor* Actor, class UObject* __WorldContext, class FName* ArmorName);
		void STATIC_IsLocalCharacter(class AActor* Actor, class UObject* __WorldContext, bool* _);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
