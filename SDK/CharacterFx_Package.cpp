/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00E8F910
	 * 		Name   -> Function CharacterFx.CharacterFx_C.UnequipState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterFx_C::UnequipState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.UnequipState");
		
		UCharacterFx_C_UnequipState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA4090
	 * 		Name   -> Function CharacterFx.CharacterFx_C.Spawn Blood Decal
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FHitResult                                  bpp__Hit__pf__const                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsDeathDecal__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Causer__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsRagdollHit__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAbilitySpec*                                bpp__AbilityRef__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::Spawn_Blood_Decal(const struct FHitResult& bpp__Hit__pf__const, bool bpp__IsDeathDecal__pf, class AActor* bpp__Causer__pf, bool bpp__IsRagdollHit__pf, class UAbilitySpec* bpp__AbilityRef__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.Spawn Blood Decal");
		
		UCharacterFx_C_Spawn_Blood_Decal_Params params {};
		params.bpp__Hit__pf__const = bpp__Hit__pf__const;
		params.bpp__IsDeathDecal__pf = bpp__IsDeathDecal__pf;
		params.bpp__Causer__pf = bpp__Causer__pf;
		params.bpp__IsRagdollHit__pf = bpp__IsRagdollHit__pf;
		params.bpp__AbilityRef__pf = bpp__AbilityRef__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA3F70
	 * 		Name   -> Function CharacterFx.CharacterFx_C.SpawnHeadExplosionEffect
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class ATBLCharacter*                               bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLCharacter*                               bpp__Causer__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__HitLocation__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::SpawnHeadExplosionEffect(class ATBLCharacter* bpp__Character__pf, class ATBLCharacter* bpp__Causer__pf, const struct FVector& bpp__HitLocation__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.SpawnHeadExplosionEffect");
		
		UCharacterFx_C_SpawnHeadExplosionEffect_Params params {};
		params.bpp__Character__pf = bpp__Character__pf;
		params.bpp__Causer__pf = bpp__Causer__pf;
		params.bpp__HitLocation__pf = bpp__HitLocation__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA3DA0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.SpawnGoreFx
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		GorePiece_EGorePiece                               bpp__Piece__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Bone__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Location__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACharacter*                                  bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_EHeadGoreAction                                bpp__HeadGoreAction__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_ELimbGoreAction                                bpp__LimbGoreAction__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::SpawnGoreFx(GorePiece_EGorePiece bpp__Piece__pf, const class FName& bpp__Bone__pf, const struct FVector& bpp__Location__pf, class ACharacter* bpp__Character__pf, TBL_EHeadGoreAction bpp__HeadGoreAction__pf, TBL_ELimbGoreAction bpp__LimbGoreAction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.SpawnGoreFx");
		
		UCharacterFx_C_SpawnGoreFx_Params params {};
		params.bpp__Piece__pf = bpp__Piece__pf;
		params.bpp__Bone__pf = bpp__Bone__pf;
		params.bpp__Location__pf = bpp__Location__pf;
		params.bpp__Character__pf = bpp__Character__pf;
		params.bpp__HeadGoreAction__pf = bpp__HeadGoreAction__pf;
		params.bpp__LimbGoreAction__pf = bpp__LimbGoreAction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA3CC0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.SpawnBloodDecalParticle
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     bpp__Location__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMaterialInstanceConstant*                   bpp__DecalMaterial__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::SpawnBloodDecalParticle(const struct FVector& bpp__Location__pf, class UMaterialInstanceConstant* bpp__DecalMaterial__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.SpawnBloodDecalParticle");
		
		UCharacterFx_C_SpawnBloodDecalParticle_Params params {};
		params.bpp__Location__pf = bpp__Location__pf;
		params.bpp__DecalMaterial__pf = bpp__DecalMaterial__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA38B0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.Should Ragdoll
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Causer__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__HitLocaton__pf__const                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Impulse__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__HitBone__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__DamageTakerCombatState__pf                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__AttachParent__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		GorePiece_EGorePiece                               bpp__GorePiece__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageTakenEvent                           bpp__DamageEvent__pf                                       (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__AttachedToBallistaBolt__pf                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Ragdoll__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::Should_Ragdoll(class AActor* bpp__Actor__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__HitLocaton__pf__const, const struct FVector& bpp__Impulse__pf, const class FName& bpp__HitBone__pf, const class FName& bpp__DamageTakerCombatState__pf, class AActor* bpp__AttachParent__pf, GorePiece_EGorePiece bpp__GorePiece__pf, const struct FDamageTakenEvent& bpp__DamageEvent__pf, bool bpp__AttachedToBallistaBolt__pf, bool* bpp__Ragdoll__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.Should Ragdoll");
		
		UCharacterFx_C_Should_Ragdoll_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Causer__pf = bpp__Causer__pf;
		params.bpp__HitLocaton__pf__const = bpp__HitLocaton__pf__const;
		params.bpp__Impulse__pf = bpp__Impulse__pf;
		params.bpp__HitBone__pf = bpp__HitBone__pf;
		params.bpp__DamageTakerCombatState__pf = bpp__DamageTakerCombatState__pf;
		params.bpp__AttachParent__pf = bpp__AttachParent__pf;
		params.bpp__GorePiece__pf = bpp__GorePiece__pf;
		params.bpp__DamageEvent__pf = bpp__DamageEvent__pf;
		params.bpp__AttachedToBallistaBolt__pf = bpp__AttachedToBallistaBolt__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Ragdoll__pf != nullptr)
			*bpp__Ragdoll__pf = params.bpp__Ragdoll__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA3820
	 * 		Name   -> Function CharacterFx.CharacterFx_C.SetWeaponBloodLevel
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     bpp__Object__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::SetWeaponBloodLevel(class UObject* bpp__Object__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.SetWeaponBloodLevel");
		
		UCharacterFx_C_SetWeaponBloodLevel_Params params {};
		params.bpp__Object__pf = bpp__Object__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA3790
	 * 		Name   -> Function CharacterFx.CharacterFx_C.SetPhysicsVelocityToZero
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         bpp__Mesh__pf                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::SetPhysicsVelocityToZero(class UPrimitiveComponent* bpp__Mesh__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.SetPhysicsVelocityToZero");
		
		UCharacterFx_C_SetPhysicsVelocityToZero_Params params {};
		params.bpp__Mesh__pf = bpp__Mesh__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA36C0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.SetCutMaterialEffects
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__HitBone__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__x__pfT                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::SetCutMaterialEffects(const class FName& bpp__HitBone__pf, class AActor* bpp__x__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.SetCutMaterialEffects");
		
		UCharacterFx_C_SetCutMaterialEffects_Params params {};
		params.bpp__HitBone__pf = bpp__HitBone__pf;
		params.bpp__x__pfT = bpp__x__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA3520
	 * 		Name   -> Function CharacterFx.CharacterFx_C.RemoveLocalFxStack
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UParticleSystem*                             bpp__Particle__pf__const                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                bpp__Value__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::RemoveLocalFxStack(class UParticleSystem* bpp__Particle__pf__const, int bpp__Value__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.RemoveLocalFxStack");
		
		UCharacterFx_C_RemoveLocalFxStack_Params params {};
		params.bpp__Particle__pf__const = bpp__Particle__pf__const;
		params.bpp__Value__pf = bpp__Value__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA35F0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.RemoveLocalFx
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UParticleSystem*                             bpp__Particle__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                bpp__Intensity__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::RemoveLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.RemoveLocalFx");
		
		UCharacterFx_C_RemoveLocalFx_Params params {};
		params.bpp__Particle__pf = bpp__Particle__pf;
		params.bpp__Intensity__pf = bpp__Intensity__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA3440
	 * 		Name   -> Function CharacterFx.CharacterFx_C.RemoveHelmeet
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     bpp__Direction__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Attacker__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::RemoveHelmeet(const struct FVector& bpp__Direction__pf, class AActor* bpp__Attacker__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.RemoveHelmeet");
		
		UCharacterFx_C_RemoveHelmeet_Params params {};
		params.bpp__Direction__pf = bpp__Direction__pf;
		params.bpp__Attacker__pf = bpp__Attacker__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F950
	 * 		Name   -> Function CharacterFx.CharacterFx_C.RemoveDrunkEffect
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterFx_C::RemoveDrunkEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.RemoveDrunkEffect");
		
		UCharacterFx_C_RemoveDrunkEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA3170
	 * 		Name   -> Function CharacterFx.CharacterFx_C.RangedCombatEvent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__PrevState__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAttackInfo                                 bpp__AttackInfo__pf                                        (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UCombatState*                                bpp__combatState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::RangedCombatEvent(const class FName& bpp__NewState__pf, const class FName& bpp__PrevState__pf, const struct FAttackInfo& bpp__AttackInfo__pf, class UCombatState* bpp__combatState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.RangedCombatEvent");
		
		UCharacterFx_C_RangedCombatEvent_Params params {};
		params.bpp__NewState__pf = bpp__NewState__pf;
		params.bpp__PrevState__pf = bpp__PrevState__pf;
		params.bpp__AttackInfo__pf = bpp__AttackInfo__pf;
		params.bpp__combatState__pf = bpp__combatState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2FA0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.QueueBloodParticlePlacement
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     bpp__CharMeshLocation__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__HitLocation__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__CauserLocation__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__HitActorlocation__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsRagdollHit__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::QueueBloodParticlePlacement(const struct FVector& bpp__CharMeshLocation__pf, const struct FVector& bpp__HitLocation__pf, const struct FVector& bpp__CauserLocation__pf, const struct FVector& bpp__HitActorlocation__pf, bool bpp__IsRagdollHit__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.QueueBloodParticlePlacement");
		
		UCharacterFx_C_QueueBloodParticlePlacement_Params params {};
		params.bpp__CharMeshLocation__pf = bpp__CharMeshLocation__pf;
		params.bpp__HitLocation__pf = bpp__HitLocation__pf;
		params.bpp__CauserLocation__pf = bpp__CauserLocation__pf;
		params.bpp__HitActorlocation__pf = bpp__HitActorlocation__pf;
		params.bpp__IsRagdollHit__pf = bpp__IsRagdollHit__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2F10
	 * 		Name   -> Function CharacterFx.CharacterFx_C.PlayWwiseForceFeedback
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               bpp__AKxEvent__pfT                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::PlayWwiseForceFeedback(class UAkAudioEvent* bpp__AKxEvent__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.PlayWwiseForceFeedback");
		
		UCharacterFx_C_PlayWwiseForceFeedback_Params params {};
		params.bpp__AKxEvent__pfT = bpp__AKxEvent__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2DA0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.PlayParrySparkParticle
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FParryEventState                            bpp__ParryEventState__pf__const                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class ATBLCharacter*                               bpp__BlockingCharacter__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLCharacter*                               bpp__BlockedCharacter__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::PlayParrySparkParticle(const struct FParryEventState& bpp__ParryEventState__pf__const, class ATBLCharacter* bpp__BlockingCharacter__pf, class ATBLCharacter* bpp__BlockedCharacter__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.PlayParrySparkParticle");
		
		UCharacterFx_C_PlayParrySparkParticle_Params params {};
		params.bpp__ParryEventState__pf__const = bpp__ParryEventState__pf__const;
		params.bpp__BlockingCharacter__pf = bpp__BlockingCharacter__pf;
		params.bpp__BlockedCharacter__pf = bpp__BlockedCharacter__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2CA0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.PlayDeathSound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		GorePiece_EGorePiece                               bpp__Selection__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_EHeadGoreAction                                bpp__HeadGoreAction__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_ELimbGoreAction                                bpp__LimbGoreAction__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::PlayDeathSound(GorePiece_EGorePiece bpp__Selection__pf, TBL_EHeadGoreAction bpp__HeadGoreAction__pf, TBL_ELimbGoreAction bpp__LimbGoreAction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.PlayDeathSound");
		
		UCharacterFx_C_PlayDeathSound_Params params {};
		params.bpp__Selection__pf = bpp__Selection__pf;
		params.bpp__HeadGoreAction__pf = bpp__HeadGoreAction__pf;
		params.bpp__LimbGoreAction__pf = bpp__LimbGoreAction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2C00
	 * 		Name   -> Function CharacterFx.CharacterFx_C.PlayDeathAnimation
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__xx__pfTT                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::PlayDeathAnimation(bool* bpp__xx__pfTT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.PlayDeathAnimation");
		
		UCharacterFx_C_PlayDeathAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__xx__pfTT != nullptr)
			*bpp__xx__pfTT = params.bpp__xx__pfTT;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2B10
	 * 		Name   -> Function CharacterFx.CharacterFx_C.PerformLineTraceForFoot
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ATBLCharacter*                               bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      bpp__PhysMatString__pf                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::PerformLineTraceForFoot(class ATBLCharacter* bpp__Character__pf, class FString* bpp__PhysMatString__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.PerformLineTraceForFoot");
		
		UCharacterFx_C_PerformLineTraceForFoot_Params params {};
		params.bpp__Character__pf = bpp__Character__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__PhysMatString__pf != nullptr)
			*bpp__PhysMatString__pf = params.bpp__PhysMatString__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA29F0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnWorldHit
	 * 		Flags  -> (Native, Event, Public, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Location__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPhysicalMaterial*                           bpp__PhysMaterial__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnWorldHit(class AActor* bpp__Actor__pf, const struct FVector& bpp__Location__pf, class UPhysicalMaterial* bpp__PhysMaterial__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnWorldHit");
		
		UCharacterFx_C_OnWorldHit_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Location__pf = bpp__Location__pf;
		params.bpp__PhysMaterial__pf = bpp__PhysMaterial__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2850
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnWasParried
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class ATBLCharacter*                               bpp__ThisCharacter__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLCharacter*                               bpp__OtherCharacter__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FParryEventState                            bpp__ParryEventState__pf                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnWasParried(class ATBLCharacter* bpp__ThisCharacter__pf, class ATBLCharacter* bpp__OtherCharacter__pf, const struct FParryEventState& bpp__ParryEventState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnWasParried");
		
		UCharacterFx_C_OnWasParried_Params params {};
		params.bpp__ThisCharacter__pf = bpp__ThisCharacter__pf;
		params.bpp__OtherCharacter__pf = bpp__OtherCharacter__pf;
		params.bpp__ParryEventState__pf = bpp__ParryEventState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA27C0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnTeamChanged_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ATBLTeam*                                    bpp__NewTeam__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnTeamChanged_Event_1(class ATBLTeam* bpp__NewTeam__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnTeamChanged_Event_1");
		
		UCharacterFx_C_OnTeamChanged_Event_1_Params params {};
		params.bpp__NewTeam__pf = bpp__NewTeam__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2730
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnStaminaCostFailed
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class FName                                        bpp__Event__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnStaminaCostFailed(const class FName& bpp__Event__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnStaminaCostFailed");
		
		UCharacterFx_C_OnStaminaCostFailed_Params params {};
		params.bpp__Event__pf = bpp__Event__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2440
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnRagdollHit
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      bpp__HitTaker__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__HitCauser__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInventoryItem*                              bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  bpp__HitResult__pf__const                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__HitDirection__pf__const                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Damage__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageSource*                               bpp__DamageSource__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Projectile__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__AttackName__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnRagdollHit(class AActor* bpp__HitTaker__pf, class AActor* bpp__HitCauser__pf, class AInventoryItem* bpp__Weapon__pf, const struct FHitResult& bpp__HitResult__pf__const, const struct FVector& bpp__HitDirection__pf__const, float bpp__Damage__pf, class UDamageSource* bpp__DamageSource__pf, class AActor* bpp__Projectile__pf, const class FName& bpp__AttackName__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnRagdollHit");
		
		UCharacterFx_C_OnRagdollHit_Params params {};
		params.bpp__HitTaker__pf = bpp__HitTaker__pf;
		params.bpp__HitCauser__pf = bpp__HitCauser__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		params.bpp__HitResult__pf__const = bpp__HitResult__pf__const;
		params.bpp__HitDirection__pf__const = bpp__HitDirection__pf__const;
		params.bpp__Damage__pf = bpp__Damage__pf;
		params.bpp__DamageSource__pf = bpp__DamageSource__pf;
		params.bpp__Projectile__pf = bpp__Projectile__pf;
		params.bpp__AttackName__pf = bpp__AttackName__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA22A0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnParrySuccess
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class ATBLCharacter*                               bpp__ThisCharacter__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLCharacter*                               bpp__OtherCharacter__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FParryEventState                            bpp__ParryEventState__pf                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnParrySuccess(class ATBLCharacter* bpp__ThisCharacter__pf, class ATBLCharacter* bpp__OtherCharacter__pf, const struct FParryEventState& bpp__ParryEventState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnParrySuccess");
		
		UCharacterFx_C_OnParrySuccess_Params params {};
		params.bpp__ThisCharacter__pf = bpp__ThisCharacter__pf;
		params.bpp__OtherCharacter__pf = bpp__OtherCharacter__pf;
		params.bpp__ParryEventState__pf = bpp__ParryEventState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2210
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnMountSiegeEngine
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class ASiegeEngine*                                bpp__SiegeEngine__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnMountSiegeEngine(class ASiegeEngine* bpp__SiegeEngine__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnMountSiegeEngine");
		
		UCharacterFx_C_OnMountSiegeEngine_Params params {};
		params.bpp__SiegeEngine__pf = bpp__SiegeEngine__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B74650
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnMatchEnded_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterFx_C::OnMatchEnded_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnMatchEnded_Event_1");
		
		UCharacterFx_C_OnMatchEnded_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2140
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnInventoryProjectileHitPassiveShield
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AInventoryItem*                              bpp__Shield__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInventoryItem*                              bpp__Projectile__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnInventoryProjectileHitPassiveShield(class AInventoryItem* bpp__Shield__pf, class AInventoryItem* bpp__Projectile__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnInventoryProjectileHitPassiveShield");
		
		UCharacterFx_C_OnInventoryProjectileHitPassiveShield_Params params {};
		params.bpp__Shield__pf = bpp__Shield__pf;
		params.bpp__Projectile__pf = bpp__Projectile__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1F80
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnInventoryItemDamageStateChanged
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AInventoryItem*                              bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_EInventoryItemDamagedState                     bpp__DamagedState__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnInventoryItemDamageStateChanged(class AInventoryItem* bpp__Item__pf, TBL_EInventoryItemDamagedState bpp__DamagedState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnInventoryItemDamageStateChanged");
		
		UCharacterFx_C_OnInventoryItemDamageStateChanged_Params params {};
		params.bpp__Item__pf = bpp__Item__pf;
		params.bpp__DamagedState__pf = bpp__DamagedState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA2050
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnInventoryItemDamaged
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AInventoryItem*                              bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryItemDamagedParams                 bpp__Params__pf                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnInventoryItemDamaged(class AInventoryItem* bpp__Item__pf, const struct FInventoryItemDamagedParams& bpp__Params__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnInventoryItemDamaged");
		
		UCharacterFx_C_OnInventoryItemDamaged_Params params {};
		params.bpp__Item__pf = bpp__Item__pf;
		params.bpp__Params__pf = bpp__Params__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1F00
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnInventoryActionFailed
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		TBL_EFailedInventoryAction                         bpp__Action__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnInventoryActionFailed(TBL_EFailedInventoryAction bpp__Action__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnInventoryActionFailed");
		
		UCharacterFx_C_OnInventoryActionFailed_Params params {};
		params.bpp__Action__pf = bpp__Action__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1E30
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnHealOverTimeStart
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		TBL_EHealingSource                                 bpp__HealingSource__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLPlayerState*                             bpp__InstigatingPlayerState__pf__const                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnHealOverTimeStart(TBL_EHealingSource bpp__HealingSource__pf, class ATBLPlayerState* bpp__InstigatingPlayerState__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnHealOverTimeStart");
		
		UCharacterFx_C_OnHealOverTimeStart_Params params {};
		params.bpp__HealingSource__pf = bpp__HealingSource__pf;
		params.bpp__InstigatingPlayerState__pf__const = bpp__InstigatingPlayerState__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E92170
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnHealOverTimeEnd
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UCharacterFx_C::OnHealOverTimeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnHealOverTimeEnd");
		
		UCharacterFx_C_OnHealOverTimeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1D60
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnHealOverTimeAdded
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		TBL_EHealingSource                                 bpp__HealingSource__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLPlayerState*                             bpp__InstigatingPlayerState__pf__const                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnHealOverTimeAdded(TBL_EHealingSource bpp__HealingSource__pf, class ATBLPlayerState* bpp__InstigatingPlayerState__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnHealOverTimeAdded");
		
		UCharacterFx_C_OnHealOverTimeAdded_Params params {};
		params.bpp__HealingSource__pf = bpp__HealingSource__pf;
		params.bpp__InstigatingPlayerState__pf__const = bpp__InstigatingPlayerState__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1CE0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnGamepadInputModeChanged_Event_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              bpp__GamepadInputMode__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnGamepadInputModeChanged_Event_1(TBL_EGamepadInputMode bpp__GamepadInputMode__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnGamepadInputModeChanged_Event_1");
		
		UCharacterFx_C_OnGamepadInputModeChanged_Event_1_Params params {};
		params.bpp__GamepadInputMode__pf = bpp__GamepadInputMode__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1C10
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnDismountSiegeEngine
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class ASiegeEngine*                                bpp__SiegeEngine__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Forced__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnDismountSiegeEngine(class ASiegeEngine* bpp__SiegeEngine__pf, bool bpp__Forced__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnDismountSiegeEngine");
		
		UCharacterFx_C_OnDismountSiegeEngine_Params params {};
		params.bpp__SiegeEngine__pf = bpp__SiegeEngine__pf;
		params.bpp__Forced__pf = bpp__Forced__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1B60
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnDamageTaken
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnDamageTaken(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnDamageTaken");
		
		UCharacterFx_C_OnDamageTaken_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1AB0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnDamageCaused
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnDamageCaused(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnDamageCaused");
		
		UCharacterFx_C_OnDamageCaused_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1980
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnCrowdControlNoDamage
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AActor*                                      bpp__OwningActor__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__combatState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCrowdControlParams                         bpp__CrowdControlParams__pf                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnCrowdControlNoDamage(class AActor* bpp__OwningActor__pf, const class FName& bpp__combatState__pf, const struct FCrowdControlParams& bpp__CrowdControlParams__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnCrowdControlNoDamage");
		
		UCharacterFx_C_OnCrowdControlNoDamage_Params params {};
		params.bpp__OwningActor__pf = bpp__OwningActor__pf;
		params.bpp__combatState__pf = bpp__combatState__pf;
		params.bpp__CrowdControlParams__pf = bpp__CrowdControlParams__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA18F0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnConstruct
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnConstruct(class AActor* bpp__Actor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnConstruct");
		
		UCharacterFx_C_OnConstruct_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA15E0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnCombatStateChanged
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__PreviousState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAttackInfo                                 bpp__EventAttackInfo__pf__const                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UCombatState*                                bpp__InCombatState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnCombatStateChanged(class AActor* bpp__Actor__pf, const class FName& bpp__PreviousState__pf, const class FName& bpp__NewState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf__const, class UCombatState* bpp__InCombatState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnCombatStateChanged");
		
		UCharacterFx_C_OnCombatStateChanged_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__PreviousState__pf = bpp__PreviousState__pf;
		params.bpp__NewState__pf = bpp__NewState__pf;
		params.bpp__EventAttackInfo__pf__const = bpp__EventAttackInfo__pf__const;
		params.bpp__InCombatState__pf = bpp__InCombatState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1530
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnCharacterLanded
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FLandedResult                               bpp__LandedResult__pf__const                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnCharacterLanded(const struct FLandedResult& bpp__LandedResult__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnCharacterLanded");
		
		UCharacterFx_C_OnCharacterLanded_Params params {};
		params.bpp__LandedResult__pf__const = bpp__LandedResult__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA14A0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnBlocked
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnBlocked(class AActor* bpp__Actor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnBlocked");
		
		UCharacterFx_C_OnBlocked_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FB50
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnAssemble_CharacterFx
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterFx_C::OnAssemble_CharacterFx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnAssemble_CharacterFx");
		
		UCharacterFx_C_OnAssemble_CharacterFx_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FAF0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnAnimNotifyStepEvent
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UCharacterFx_C::OnAnimNotifyStepEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnAnimNotifyStepEvent");
		
		UCharacterFx_C_OnAnimNotifyStepEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1320
	 * 		Name   -> Function CharacterFx.CharacterFx_C.OnAbilityError
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AActor*                                      bpp__Initiator__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_EResultCode                                    bpp__Code__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AAbilityInvocation*                          bpp__Invocation__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__AttackName__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      bpp__ItemClass__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnAbilityError(class AActor* bpp__Initiator__pf, TBL_EResultCode bpp__Code__pf, class AAbilityInvocation* bpp__Invocation__pf, const class FName& bpp__AttackName__pf, class UClass* bpp__ItemClass__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.OnAbilityError");
		
		UCharacterFx_C_OnAbilityError_Params params {};
		params.bpp__Initiator__pf = bpp__Initiator__pf;
		params.bpp__Code__pf = bpp__Code__pf;
		params.bpp__Invocation__pf = bpp__Invocation__pf;
		params.bpp__AttackName__pf = bpp__AttackName__pf;
		params.bpp__ItemClass__pf = bpp__ItemClass__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1290
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GotoRagdoll
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ATBLCharacter*                               bpp__x__pfT                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GotoRagdoll(class ATBLCharacter* bpp__x__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GotoRagdoll");
		
		UCharacterFx_C_GotoRagdoll_Params params {};
		params.bpp__x__pfT = bpp__x__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA1170
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GoreEvent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageTakenEvent__pf                                  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GoreEvent(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GoreEvent");
		
		UCharacterFx_C_GoreEvent_Params params {};
		params.bpp__DamageTakenEvent__pf = bpp__DamageTakenEvent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA10D0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.Get This Actor Health Percent
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__Health__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::Get_This_Actor_Health_Percent(float* bpp__Health__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.Get This Actor Health Percent");
		
		UCharacterFx_C_Get_This_Actor_Health_Percent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Health__pf != nullptr)
			*bpp__Health__pf = params.bpp__Health__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0FF0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GetWeaponRagdollImpulseStrength (Body)
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      bpp__Attacker__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Force__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GetWeaponRagdollImpulseStrength__Body_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GetWeaponRagdollImpulseStrength (Body)");
		
		UCharacterFx_C_GetWeaponRagdollImpulseStrength__Body__Params params {};
		params.bpp__Attacker__pf = bpp__Attacker__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Force__pf != nullptr)
			*bpp__Force__pf = params.bpp__Force__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0F10
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Limb)
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      bpp__Attacker__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Force__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GetRangedRagdollImpulseStrength__Limb_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Limb)");
		
		UCharacterFx_C_GetRangedRagdollImpulseStrength__Limb__Params params {};
		params.bpp__Attacker__pf = bpp__Attacker__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Force__pf != nullptr)
			*bpp__Force__pf = params.bpp__Force__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0E30
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Body)
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      bpp__Attacker__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Force__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GetRangedRagdollImpulseStrength__Body_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Body)");
		
		UCharacterFx_C_GetRangedRagdollImpulseStrength__Body__Params params {};
		params.bpp__Attacker__pf = bpp__Attacker__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Force__pf != nullptr)
			*bpp__Force__pf = params.bpp__Force__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0D50
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GetRagdollImpulseStrength (Limb)
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      bpp__Attacker__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Force__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GetRagdollImpulseStrength__Limb_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GetRagdollImpulseStrength (Limb)");
		
		UCharacterFx_C_GetRagdollImpulseStrength__Limb__Params params {};
		params.bpp__Attacker__pf = bpp__Attacker__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Force__pf != nullptr)
			*bpp__Force__pf = params.bpp__Force__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0C70
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GetPlayerCameraManager
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerCameraManager*                        bpp__PlayerCameraManager__pf                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Success__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GetPlayerCameraManager(class APlayerCameraManager** bpp__PlayerCameraManager__pf, bool* bpp__Success__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GetPlayerCameraManager");
		
		UCharacterFx_C_GetPlayerCameraManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__PlayerCameraManager__pf != nullptr)
			*bpp__PlayerCameraManager__pf = params.bpp__PlayerCameraManager__pf;
		if (bpp__Success__pf != nullptr)
			*bpp__Success__pf = params.bpp__Success__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0BD0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GetLocalPlayerState
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ATBLPlayerState*                             bpp__AsTBLPlayerxState__pfT                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GetLocalPlayerState(class ATBLPlayerState** bpp__AsTBLPlayerxState__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GetLocalPlayerState");
		
		UCharacterFx_C_GetLocalPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AsTBLPlayerxState__pfT != nullptr)
			*bpp__AsTBLPlayerxState__pfT = params.bpp__AsTBLPlayerxState__pfT;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0AC0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GetHitDirection
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Causer__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Taker__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__HitDirection__pf                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GetHitDirection(class AActor* bpp__Causer__pf, class AActor* bpp__Taker__pf, float* bpp__HitDirection__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GetHitDirection");
		
		UCharacterFx_C_GetHitDirection_Params params {};
		params.bpp__Causer__pf = bpp__Causer__pf;
		params.bpp__Taker__pf = bpp__Taker__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__HitDirection__pf != nullptr)
			*bpp__HitDirection__pf = params.bpp__HitDirection__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0950
	 * 		Name   -> Function CharacterFx.CharacterFx_C.GetBloodParticle
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__Ability__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInventoryItem*                              bpp__Item__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UParticleSystem*                             bpp__Particle__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsValid__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::GetBloodParticle(const class FName& bpp__Ability__pf, class AInventoryItem* bpp__Item__pf, class UParticleSystem** bpp__Particle__pf, bool* bpp__IsValid__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.GetBloodParticle");
		
		UCharacterFx_C_GetBloodParticle_Params params {};
		params.bpp__Ability__pf = bpp__Ability__pf;
		params.bpp__Item__pf = bpp__Item__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Particle__pf != nullptr)
			*bpp__Particle__pf = params.bpp__Particle__pf;
		if (bpp__IsValid__pf != nullptr)
			*bpp__IsValid__pf = params.bpp__IsValid__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA07D0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ForceFeedback (Directional)
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UForceFeedbackEffect*                        bpp__ForceFeedbackEffect__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__IntensityMultiplier__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Location__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    bpp__Rotation__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ForceFeedback__Directional_(class UForceFeedbackEffect* bpp__ForceFeedbackEffect__pf, float bpp__IntensityMultiplier__pf, const struct FVector& bpp__Location__pf, const struct FRotator& bpp__Rotation__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ForceFeedback (Directional)");
		
		UCharacterFx_C_ForceFeedback__Directional__Params params {};
		params.bpp__ForceFeedbackEffect__pf = bpp__ForceFeedbackEffect__pf;
		params.bpp__IntensityMultiplier__pf = bpp__IntensityMultiplier__pf;
		params.bpp__Location__pf = bpp__Location__pf;
		params.bpp__Rotation__pf = bpp__Rotation__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0700
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ForceFeedback
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UForceFeedbackEffect*                        bpp__ForceFeedbackEffect__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__IntensityMultiplier__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ForceFeedback(class UForceFeedbackEffect* bpp__ForceFeedbackEffect__pf, float bpp__IntensityMultiplier__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ForceFeedback");
		
		UCharacterFx_C_ForceFeedback_Params params {};
		params.bpp__ForceFeedbackEffect__pf = bpp__ForceFeedbackEffect__pf;
		params.bpp__IntensityMultiplier__pf = bpp__IntensityMultiplier__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F8B0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.FadeEmber
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterFx_C::FadeEmber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.FadeEmber");
		
		UCharacterFx_C_FadeEmber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0680
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_8
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ExecuteUbergraph_CharacterFx_8(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_8");
		
		UCharacterFx_C_ExecuteUbergraph_CharacterFx_8_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0600
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_37
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ExecuteUbergraph_CharacterFx_37(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_37");
		
		UCharacterFx_C_ExecuteUbergraph_CharacterFx_37_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0580
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_24
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ExecuteUbergraph_CharacterFx_24(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_24");
		
		UCharacterFx_C_ExecuteUbergraph_CharacterFx_24_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0500
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_22
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ExecuteUbergraph_CharacterFx_22(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_22");
		
		UCharacterFx_C_ExecuteUbergraph_CharacterFx_22_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0400
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_19
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ExecuteUbergraph_CharacterFx_19(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_19");
		
		UCharacterFx_C_ExecuteUbergraph_CharacterFx_19_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0380
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_18
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ExecuteUbergraph_CharacterFx_18(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_18");
		
		UCharacterFx_C_ExecuteUbergraph_CharacterFx_18_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0480
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_2
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ExecuteUbergraph_CharacterFx_2(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_2");
		
		UCharacterFx_C_ExecuteUbergraph_CharacterFx_2_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0300
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_1
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ExecuteUbergraph_CharacterFx_1(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_1");
		
		UCharacterFx_C_ExecuteUbergraph_CharacterFx_1_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F970
	 * 		Name   -> Function CharacterFx.CharacterFx_C.EquipState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterFx_C::EquipState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.EquipState");
		
		UCharacterFx_C_EquipState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FA30
	 * 		Name   -> Function CharacterFx.CharacterFx_C.DrunkCameraShakeTick
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterFx_C::DrunkCameraShakeTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.DrunkCameraShakeTick");
		
		UCharacterFx_C_DrunkCameraShakeTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F370
	 * 		Name   -> Function CharacterFx.CharacterFx_C.DisableClientBloodSplatter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterFx_C::DisableClientBloodSplatter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.DisableClientBloodSplatter");
		
		UCharacterFx_C_DisableClientBloodSplatter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA01E0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.DeathGore
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageTakenEvent__pf                                  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::DeathGore(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.DeathGore");
		
		UCharacterFx_C_DeathGore_Params params {};
		params.bpp__DamageTakenEvent__pf = bpp__DamageTakenEvent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA0090
	 * 		Name   -> Function CharacterFx.CharacterFx_C.CrosshairEvent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__Event__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Scaling__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsPositive__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::CrosshairEvent(const class FName& bpp__Event__pf, bool bpp__Enable__pf, float bpp__Scaling__pf, bool bpp__IsPositive__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.CrosshairEvent");
		
		UCharacterFx_C_CrosshairEvent_Params params {};
		params.bpp__Event__pf = bpp__Event__pf;
		params.bpp__Enable__pf = bpp__Enable__pf;
		params.bpp__Scaling__pf = bpp__Scaling__pf;
		params.bpp__IsPositive__pf = bpp__IsPositive__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9FFC0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.CrosshairDamageTakenEvent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__Damage__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__HitDirection__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::CrosshairDamageTakenEvent(float bpp__Damage__pf, float bpp__HitDirection__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.CrosshairDamageTakenEvent");
		
		UCharacterFx_C_CrosshairDamageTakenEvent_Params params {};
		params.bpp__Damage__pf = bpp__Damage__pf;
		params.bpp__HitDirection__pf = bpp__HitDirection__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9FDF0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.CrosshairDamageEvent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__Event__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDamageTakenEvent                           bpp__Damage__pf                                            (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsEnemy__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::CrosshairDamageEvent(const class FName& bpp__Event__pf, const struct FDamageTakenEvent& bpp__Damage__pf, bool bpp__IsEnemy__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.CrosshairDamageEvent");
		
		UCharacterFx_C_CrosshairDamageEvent_Params params {};
		params.bpp__Event__pf = bpp__Event__pf;
		params.bpp__Damage__pf = bpp__Damage__pf;
		params.bpp__IsEnemy__pf = bpp__IsEnemy__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9FD50
	 * 		Name   -> Function CharacterFx.CharacterFx_C.CanRemoveHelmet
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__CanRemoveHelmet__pf                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::CanRemoveHelmet(bool* bpp__CanRemoveHelmet__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.CanRemoveHelmet");
		
		UCharacterFx_C_CanRemoveHelmet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__CanRemoveHelmet__pf != nullptr)
			*bpp__CanRemoveHelmet__pf = params.bpp__CanRemoveHelmet__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9FCB0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.CanAddLocalFx
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__x__pfT                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::CanAddLocalFx(bool* bpp__x__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.CanAddLocalFx");
		
		UCharacterFx_C_CanAddLocalFx_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__x__pfT != nullptr)
			*bpp__x__pfT = params.bpp__x__pfT;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9F880
	 * 		Name   -> Function CharacterFx.CharacterFx_C.BreakAtClosestBone
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Causer__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__HitLocaton__pf__const                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Impulse__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__HitBone__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsRagdollHit__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__DamageTakerCombatState__pf                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__AttachParent__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTBL_FGoreEvent                             bpp__GoreEvent__pf                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsKillingBlow__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Success__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		GorePiece_EGorePiece                               bpp__Selection__pf                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__BoneName__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::BreakAtClosestBone(class AActor* bpp__Actor__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__HitLocaton__pf__const, const struct FVector& bpp__Impulse__pf, const class FName& bpp__HitBone__pf, bool bpp__IsRagdollHit__pf, const class FName& bpp__DamageTakerCombatState__pf, class AActor* bpp__AttachParent__pf, const struct FTBL_FGoreEvent& bpp__GoreEvent__pf, bool bpp__IsKillingBlow__pf, bool* bpp__Success__pf, GorePiece_EGorePiece* bpp__Selection__pf, class FName* bpp__BoneName__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.BreakAtClosestBone");
		
		UCharacterFx_C_BreakAtClosestBone_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Causer__pf = bpp__Causer__pf;
		params.bpp__HitLocaton__pf__const = bpp__HitLocaton__pf__const;
		params.bpp__Impulse__pf = bpp__Impulse__pf;
		params.bpp__HitBone__pf = bpp__HitBone__pf;
		params.bpp__IsRagdollHit__pf = bpp__IsRagdollHit__pf;
		params.bpp__DamageTakerCombatState__pf = bpp__DamageTakerCombatState__pf;
		params.bpp__AttachParent__pf = bpp__AttachParent__pf;
		params.bpp__GoreEvent__pf = bpp__GoreEvent__pf;
		params.bpp__IsKillingBlow__pf = bpp__IsKillingBlow__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Success__pf != nullptr)
			*bpp__Success__pf = params.bpp__Success__pf;
		if (bpp__Selection__pf != nullptr)
			*bpp__Selection__pf = params.bpp__Selection__pf;
		if (bpp__BoneName__pf != nullptr)
			*bpp__BoneName__pf = params.bpp__BoneName__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9F620
	 * 		Name   -> Function CharacterFx.CharacterFx_C.BeakBodyPart
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class ACharacter*                                  bpp__Char__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__BoneName__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Impulse__pf__const                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__HitLocation__pf__const                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		GorePiece_EGorePiece                               bpp__Selection__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_EHeadGoreAction                                bpp__HeadGoreAction__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_ELimbGoreAction                                bpp__LimbGoreAction__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__SpawnedItem__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCharacterFx_C::BeakBodyPart(class ACharacter* bpp__Char__pf, const class FName& bpp__BoneName__pf, const struct FVector& bpp__Impulse__pf__const, const struct FVector& bpp__HitLocation__pf__const, GorePiece_EGorePiece bpp__Selection__pf, TBL_EHeadGoreAction bpp__HeadGoreAction__pf, TBL_ELimbGoreAction bpp__LimbGoreAction__pf, bool bpp__SpawnedItem__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.BeakBodyPart");
		
		UCharacterFx_C_BeakBodyPart_Params params {};
		params.bpp__Char__pf = bpp__Char__pf;
		params.bpp__BoneName__pf = bpp__BoneName__pf;
		params.bpp__Impulse__pf__const = bpp__Impulse__pf__const;
		params.bpp__HitLocation__pf__const = bpp__HitLocation__pf__const;
		params.bpp__Selection__pf = bpp__Selection__pf;
		params.bpp__HeadGoreAction__pf = bpp__HeadGoreAction__pf;
		params.bpp__LimbGoreAction__pf = bpp__LimbGoreAction__pf;
		params.bpp__SpawnedItem__pf = bpp__SpawnedItem__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9F510
	 * 		Name   -> Function CharacterFx.CharacterFx_C.AttachToBallistaBolt
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Projectile__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Attached__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::AttachToBallistaBolt(class AActor* bpp__Actor__pf, class AActor* bpp__Projectile__pf, bool* bpp__Attached__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.AttachToBallistaBolt");
		
		UCharacterFx_C_AttachToBallistaBolt_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Projectile__pf = bpp__Projectile__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Attached__pf != nullptr)
			*bpp__Attached__pf = params.bpp__Attached__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9F2B0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ApplyRagdollImpactImpulse
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FHitResult                                  bpp__Hit__pf__const                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Attacker__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     bpp__Projectile__pf__const                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__HitDirection__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Scaling__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__AbilitiesTableRow__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageSource*                               bpp__DamageSource__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ApplyRagdollImpactImpulse(const struct FHitResult& bpp__Hit__pf__const, class AActor* bpp__Attacker__pf, class UObject* bpp__Projectile__pf__const, const struct FVector& bpp__HitDirection__pf, float bpp__Scaling__pf, const class FName& bpp__AbilitiesTableRow__pf, class UDamageSource* bpp__DamageSource__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ApplyRagdollImpactImpulse");
		
		UCharacterFx_C_ApplyRagdollImpactImpulse_Params params {};
		params.bpp__Hit__pf__const = bpp__Hit__pf__const;
		params.bpp__Attacker__pf = bpp__Attacker__pf;
		params.bpp__Projectile__pf__const = bpp__Projectile__pf__const;
		params.bpp__HitDirection__pf = bpp__HitDirection__pf;
		params.bpp__Scaling__pf = bpp__Scaling__pf;
		params.bpp__AbilitiesTableRow__pf = bpp__AbilitiesTableRow__pf;
		params.bpp__DamageSource__pf = bpp__DamageSource__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9F220
	 * 		Name   -> Function CharacterFx.CharacterFx_C.ApplyDrunkEffect
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::ApplyDrunkEffect(bool bpp__Enable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.ApplyDrunkEffect");
		
		UCharacterFx_C_ApplyDrunkEffect_Params params {};
		params.bpp__Enable__pf = bpp__Enable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9F070
	 * 		Name   -> Function CharacterFx.CharacterFx_C.AddLocalFxStack
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UParticleSystem*                             bpp__Particle__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                bpp__Value__pf__const                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::AddLocalFxStack(class UParticleSystem* bpp__Particle__pf, int bpp__Value__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.AddLocalFxStack");
		
		UCharacterFx_C_AddLocalFxStack_Params params {};
		params.bpp__Particle__pf = bpp__Particle__pf;
		params.bpp__Value__pf__const = bpp__Value__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9F150
	 * 		Name   -> Function CharacterFx.CharacterFx_C.AddLocalFx
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UParticleSystem*                             bpp__Particle__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                bpp__Intensity__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::AddLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.AddLocalFx");
		
		UCharacterFx_C_AddLocalFx_Params params {};
		params.bpp__Particle__pf = bpp__Particle__pf;
		params.bpp__Intensity__pf = bpp__Intensity__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9EFE0
	 * 		Name   -> Function CharacterFx.CharacterFx_C.AddKill
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::AddKill(class AActor* bpp__Actor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.AddKill");
		
		UCharacterFx_C_AddKill_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E92290
	 * 		Name   -> Function CharacterFx.CharacterFx_C.AddHelmetForce
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterFx_C::AddHelmetForce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterFx.CharacterFx_C.AddHelmetForce");
		
		UCharacterFx_C_AddHelmetForce_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> DelegateFunction CharacterFx.CharacterFx_C.TeamChangedSignature__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		class ATBLTeam*                                    bpp__NewTeam__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::TeamChangedSignature__DelegateSignature(class ATBLTeam* bpp__NewTeam__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction CharacterFx.CharacterFx_C.TeamChangedSignature__DelegateSignature");
		
		UCharacterFx_C_TeamChangedSignature__DelegateSignature_Params params {};
		params.bpp__NewTeam__pf = bpp__NewTeam__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> DelegateFunction CharacterFx.CharacterFx_C.OnGamepadInputModeSwitchEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              bpp__GamepadInputMode__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterFx_C::OnGamepadInputModeSwitchEvent__DelegateSignature(TBL_EGamepadInputMode bpp__GamepadInputMode__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction CharacterFx.CharacterFx_C.OnGamepadInputModeSwitchEvent__DelegateSignature");
		
		UCharacterFx_C_OnGamepadInputModeSwitchEvent__DelegateSignature_Params params {};
		params.bpp__GamepadInputMode__pf = bpp__GamepadInputMode__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> DelegateFunction CharacterFx.CharacterFx_C.MatchEndedSignature__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 */
	void UCharacterFx_C::MatchEndedSignature__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction CharacterFx.CharacterFx_C.MatchEndedSignature__DelegateSignature");
		
		UCharacterFx_C_MatchEndedSignature__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCharacterFx_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterFx_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CharacterFx.CharacterFx_C");
		return ptr;
	}

}


