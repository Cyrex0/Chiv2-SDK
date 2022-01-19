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
	 * 		Offset -> 0x00EAFB90
	 * 		Name   -> Function HorseFx.HorseFx_C.SpawnGoreBlood
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		GorePiece_EGorePiece                               bpp__Piece__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Bone__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Location__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACharacter*                                  bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::SpawnGoreBlood(GorePiece_EGorePiece bpp__Piece__pf, const class FName& bpp__Bone__pf, const struct FVector& bpp__Location__pf, class ACharacter* bpp__Character__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.SpawnGoreBlood");
		
		UHorseFx_C_SpawnGoreBlood_Params params {};
		params.bpp__Piece__pf = bpp__Piece__pf;
		params.bpp__Bone__pf = bpp__Bone__pf;
		params.bpp__Location__pf = bpp__Location__pf;
		params.bpp__Character__pf = bpp__Character__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAFAC0
	 * 		Name   -> Function HorseFx.HorseFx_C.RagdollHorse
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACharacter*                                  bpp__Char__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__BoneName__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::RagdollHorse(class ACharacter* bpp__Char__pf, const class FName& bpp__BoneName__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.RagdollHorse");
		
		UHorseFx_C_RagdollHorse_Params params {};
		params.bpp__Char__pf = bpp__Char__pf;
		params.bpp__BoneName__pf = bpp__BoneName__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAF9D0
	 * 		Name   -> Function HorseFx.HorseFx_C.PerformHorseFootTrace
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AHorse*                                      bpp__Horse__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      bpp__PhysMatString__pf                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::PerformHorseFootTrace(class AHorse* bpp__Horse__pf, class FString* bpp__PhysMatString__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.PerformHorseFootTrace");
		
		UHorseFx_C_PerformHorseFootTrace_Params params {};
		params.bpp__Horse__pf = bpp__Horse__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__PhysMatString__pf != nullptr)
			*bpp__PhysMatString__pf = params.bpp__PhysMatString__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAF6E0
	 * 		Name   -> Function HorseFx.HorseFx_C.OnRagdollHit
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
	void UHorseFx_C::OnRagdollHit(class AActor* bpp__HitTaker__pf, class AActor* bpp__HitCauser__pf, class AInventoryItem* bpp__Weapon__pf, const struct FHitResult& bpp__HitResult__pf__const, const struct FVector& bpp__HitDirection__pf__const, float bpp__Damage__pf, class UDamageSource* bpp__DamageSource__pf, class AActor* bpp__Projectile__pf, const class FName& bpp__AttackName__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.OnRagdollHit");
		
		UHorseFx_C_OnRagdollHit_Params params {};
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
	 * 		Offset -> 0x00EAF650
	 * 		Name   -> Function HorseFx.HorseFx_C.OnMountSiegeEngine
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class ASiegeEngine*                                bpp__SiegeEngine__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::OnMountSiegeEngine(class ASiegeEngine* bpp__SiegeEngine__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.OnMountSiegeEngine");
		
		UHorseFx_C_OnMountSiegeEngine_Params params {};
		params.bpp__SiegeEngine__pf = bpp__SiegeEngine__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAF520
	 * 		Name   -> Function HorseFx.HorseFx_C.OnHorseFxEvent
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        bpp__EventName__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__EventScale__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                bpp__EventTags__pf__const                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::OnHorseFxEvent(const class FName& bpp__EventName__pf, float bpp__EventScale__pf, TArray<class FName> bpp__EventTags__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.OnHorseFxEvent");
		
		UHorseFx_C_OnHorseFxEvent_Params params {};
		params.bpp__EventName__pf = bpp__EventName__pf;
		params.bpp__EventScale__pf = bpp__EventScale__pf;
		params.bpp__EventTags__pf__const = bpp__EventTags__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAF450
	 * 		Name   -> Function HorseFx.HorseFx_C.OnDismountSiegeEngine
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class ASiegeEngine*                                bpp__SiegeEngine__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Forced__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::OnDismountSiegeEngine(class ASiegeEngine* bpp__SiegeEngine__pf, bool bpp__Forced__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.OnDismountSiegeEngine");
		
		UHorseFx_C_OnDismountSiegeEngine_Params params {};
		params.bpp__SiegeEngine__pf = bpp__SiegeEngine__pf;
		params.bpp__Forced__pf = bpp__Forced__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAF3A0
	 * 		Name   -> Function HorseFx.HorseFx_C.OnDamageTaken
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::OnDamageTaken(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.OnDamageTaken");
		
		UHorseFx_C_OnDamageTaken_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAF2F0
	 * 		Name   -> Function HorseFx.HorseFx_C.OnDamageCaused
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::OnDamageCaused(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.OnDamageCaused");
		
		UHorseFx_C_OnDamageCaused_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAEFE0
	 * 		Name   -> Function HorseFx.HorseFx_C.OnCombatStateChanged
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__PreviousState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAttackInfo                                 bpp__EventAttackInfo__pf__const                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UCombatState*                                bpp__InCombatState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::OnCombatStateChanged(class AActor* bpp__Actor__pf, const class FName& bpp__PreviousState__pf, const class FName& bpp__NewState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf__const, class UCombatState* bpp__InCombatState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.OnCombatStateChanged");
		
		UHorseFx_C_OnCombatStateChanged_Params params {};
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
	 * 		Offset -> 0x00E8F9B0
	 * 		Name   -> Function HorseFx.HorseFx_C.OnAssemble_HorseFx
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UHorseFx_C::OnAssemble_HorseFx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.OnAssemble_HorseFx");
		
		UHorseFx_C_OnAssemble_HorseFx_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E92170
	 * 		Name   -> Function HorseFx.HorseFx_C.OnAnimNotifyStepEvent
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UHorseFx_C::OnAnimNotifyStepEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.OnAnimNotifyStepEvent");
		
		UHorseFx_C_OnAnimNotifyStepEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAEF50
	 * 		Name   -> Function HorseFx.HorseFx_C.HorseImpactSound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               bpp__AkEvent__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::HorseImpactSound(class UAkAudioEvent* bpp__AkEvent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.HorseImpactSound");
		
		UHorseFx_C_HorseImpactSound_Params params {};
		params.bpp__AkEvent__pf = bpp__AkEvent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAEE70
	 * 		Name   -> Function HorseFx.HorseFx_C.HitParticle
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__HitBone__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__NewLocation__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::HitParticle(const class FName& bpp__HitBone__pf, const struct FVector& bpp__NewLocation__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.HitParticle");
		
		UHorseFx_C_HitParticle_Params params {};
		params.bpp__HitBone__pf = bpp__HitBone__pf;
		params.bpp__NewLocation__pf = bpp__NewLocation__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAED90
	 * 		Name   -> Function HorseFx.HorseFx_C.GetRagdollForce (Limb)
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      bpp__Attacker__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Force__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::GetRagdollForce__Limb_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.GetRagdollForce (Limb)");
		
		UHorseFx_C_GetRagdollForce__Limb__Params params {};
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
	 * 		Offset -> 0x00EAECB0
	 * 		Name   -> Function HorseFx.HorseFx_C.GetRagdollForce (Body)
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      bpp__Attacker__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Force__pf                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::GetRagdollForce__Body_(class AActor* bpp__Attacker__pf, float* bpp__Force__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.GetRagdollForce (Body)");
		
		UHorseFx_C_GetRagdollForce__Body__Params params {};
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
	 * 		Offset -> 0x00EAEC30
	 * 		Name   -> Function HorseFx.HorseFx_C.ExecuteUbergraph_HorseFx_4
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::ExecuteUbergraph_HorseFx_4(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.ExecuteUbergraph_HorseFx_4");
		
		UHorseFx_C_ExecuteUbergraph_HorseFx_4_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAEB10
	 * 		Name   -> Function HorseFx.HorseFx_C.DeathGore
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageTakenEvent__pf                                  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::DeathGore(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.DeathGore");
		
		UHorseFx_C_DeathGore_Params params {};
		params.bpp__DamageTakenEvent__pf = bpp__DamageTakenEvent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAEA00
	 * 		Name   -> Function HorseFx.HorseFx_C.CrosshairEvent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__Event__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Enable__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Scaling__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::CrosshairEvent(const class FName& bpp__Event__pf, bool bpp__Enable__pf, float bpp__Scaling__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.CrosshairEvent");
		
		UHorseFx_C_CrosshairEvent_Params params {};
		params.bpp__Event__pf = bpp__Event__pf;
		params.bpp__Enable__pf = bpp__Enable__pf;
		params.bpp__Scaling__pf = bpp__Scaling__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAE820
	 * 		Name   -> Function HorseFx.HorseFx_C.BreakAtClosestBone
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Causer__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__HitLocaton__pf__const                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Impulse__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__HitBone__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__Success__pf                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHorseFx_C::BreakAtClosestBone(class AActor* bpp__Actor__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__HitLocaton__pf__const, const struct FVector& bpp__Impulse__pf, const class FName& bpp__HitBone__pf, bool* bpp__Success__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseFx.HorseFx_C.BreakAtClosestBone");
		
		UHorseFx_C_BreakAtClosestBone_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Causer__pf = bpp__Causer__pf;
		params.bpp__HitLocaton__pf__const = bpp__HitLocaton__pf__const;
		params.bpp__Impulse__pf = bpp__Impulse__pf;
		params.bpp__HitBone__pf = bpp__HitBone__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Success__pf != nullptr)
			*bpp__Success__pf = params.bpp__Success__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseFx_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseFx_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass HorseFx.HorseFx_C");
		return ptr;
	}

}


