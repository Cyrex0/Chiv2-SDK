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
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldStartProjectileCounterWindow
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::ShouldStartProjectileCounterWindow(class ATBLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldStartProjectileCounterWindow");
		
		UGameplayRules_C_ShouldStartProjectileCounterWindow_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldProjectileAttackBeCountered
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               HitCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              AttackingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::ShouldProjectileAttackBeCountered(class ATBLCharacter* HitCharacter, class AInventoryItem* AttackingItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldProjectileAttackBeCountered");
		
		UGameplayRules_C_ShouldProjectileAttackBeCountered_Params params {};
		params.HitCharacter = HitCharacter;
		params.AttackingItem = AttackingItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldStartActiveRiposteWindow
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::ShouldStartActiveRiposteWindow(class ATBLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldStartActiveRiposteWindow");
		
		UGameplayRules_C_ShouldStartActiveRiposteWindow_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ApplyDamageConditions
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageTakenEvent                           DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	bool UGameplayRules_C::ApplyDamageConditions(class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ApplyDamageConditions");
		
		UGameplayRules_C_ApplyDamageConditions_Params params {};
		params.HitActor = HitActor;
		params.DamageEvent = DamageEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.DisarmWhenHitDuringThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               HitCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EOnHitEffect                                   HitEffect                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameplayRules_C::DisarmWhenHitDuringThrow(class ATBLCharacter* HitCharacter, TBL_EOnHitEffect HitEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.DisarmWhenHitDuringThrow");
		
		UGameplayRules_C_DisarmWhenHitDuringThrow_Params params {};
		params.HitCharacter = HitCharacter;
		params.HitEffect = HitEffect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldBlockSameAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               AttackingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               DefendingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::ShouldBlockSameAttack(class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldBlockSameAttack");
		
		UGameplayRules_C_ShouldBlockSameAttack_Params params {};
		params.AttackingCharacter = AttackingCharacter;
		params.DefendingCharacter = DefendingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldPlayDamageTaken
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           DamageTakenEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	bool UGameplayRules_C::ShouldPlayDamageTaken(const struct FDamageTakenEvent& DamageTakenEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldPlayDamageTaken");
		
		UGameplayRules_C_ShouldPlayDamageTaken_Params params {};
		params.DamageTakenEvent = DamageTakenEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.TutorialCanDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               InitiatorCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::TutorialCanDamage(class ATBLCharacter* InitiatorCharacter, class AActor* TargetActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.TutorialCanDamage");
		
		UGameplayRules_C_TutorialCanDamage_Params params {};
		params.InitiatorCharacter = InitiatorCharacter;
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.GetDisarmImpulse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AInventoryItem*                              AttackerItem                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitDirection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UGameplayRules_C::GetDisarmImpulse(class AInventoryItem* AttackerItem, const struct FVector& HitDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.GetDisarmImpulse");
		
		UGameplayRules_C_GetDisarmImpulse_Params params {};
		params.AttackerItem = AttackerItem;
		params.HitDirection = HitDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.OnProjectileHit
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EOnProjectileHitEffect                         OutHitEffect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutBounceVelocityModifier                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              Projectile                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EOnProjectileHitEffect                         InHitEffect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  InHitResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		float                                              InBounceVelocityModifier                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameplayRules_C::OnProjectileHit(TBL_EOnProjectileHitEffect* OutHitEffect, float* OutBounceVelocityModifier, class AInventoryItem* Projectile, TBL_EOnProjectileHitEffect InHitEffect, const struct FHitResult& InHitResult, float InBounceVelocityModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.OnProjectileHit");
		
		UGameplayRules_C_OnProjectileHit_Params params {};
		params.Projectile = Projectile;
		params.InHitEffect = InHitEffect;
		params.InHitResult = InHitResult;
		params.InBounceVelocityModifier = InBounceVelocityModifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHitEffect != nullptr)
			*OutHitEffect = params.OutHitEffect;
		if (OutBounceVelocityModifier != nullptr)
			*OutBounceVelocityModifier = params.OutBounceVelocityModifier;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.CheckIfCounterAttackIsSuccessful
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               HitCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               AttackingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              AttackingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              DefenderItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::CheckIfCounterAttackIsSuccessful(class ATBLCharacter* HitCharacter, class ATBLCharacter* AttackingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefenderItem, const class FName& AttackName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.CheckIfCounterAttackIsSuccessful");
		
		UGameplayRules_C_CheckIfCounterAttackIsSuccessful_Params params {};
		params.HitCharacter = HitCharacter;
		params.AttackingCharacter = AttackingCharacter;
		params.AttackingItem = AttackingItem;
		params.DefenderItem = DefenderItem;
		params.AttackName = AttackName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldCounterReadyStateAttackBeCountered
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               HitCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::ShouldCounterReadyStateAttackBeCountered(class ATBLCharacter* HitCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldCounterReadyStateAttackBeCountered");
		
		UGameplayRules_C_ShouldCounterReadyStateAttackBeCountered_Params params {};
		params.HitCharacter = HitCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldNormalAttackBeCountered
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               HitCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::ShouldNormalAttackBeCountered(class ATBLCharacter* HitCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldNormalAttackBeCountered");
		
		UGameplayRules_C_ShouldNormalAttackBeCountered_Params params {};
		params.HitCharacter = HitCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.DidSuccessfulCounter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCounter                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplayRules_C::DidSuccessfulCounter(class ATBLCharacter* Character, bool* IsCounter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.DidSuccessfulCounter");
		
		UGameplayRules_C_DidSuccessfulCounter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCounter != nullptr)
			*IsCounter = params.IsCounter;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldAttackBeCountered
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               HitCharacter                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               AttackingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              AttackingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              DefenderItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::ShouldAttackBeCountered(class ATBLCharacter* HitCharacter, class ATBLCharacter* AttackingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefenderItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldAttackBeCountered");
		
		UGameplayRules_C_ShouldAttackBeCountered_Params params {};
		params.HitCharacter = HitCharacter;
		params.AttackingCharacter = AttackingCharacter;
		params.AttackingItem = AttackingItem;
		params.DefenderItem = DefenderItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.GetGoreEventOnDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           DamageTakenEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bIsRagdollHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShouldApplyConditions                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FTBL_FGoreEvent UGameplayRules_C::GetGoreEventOnDamage(const struct FDamageTakenEvent& DamageTakenEvent, bool bIsRagdollHit, bool bShouldApplyConditions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.GetGoreEventOnDamage");
		
		UGameplayRules_C_GetGoreEventOnDamage_Params params {};
		params.DamageTakenEvent = DamageTakenEvent;
		params.bIsRagdollHit = bIsRagdollHit;
		params.bShouldApplyConditions = bShouldApplyConditions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.GetCurrentAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NonHeavy                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        AttackName                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameplayRules_C::GetCurrentAttack(class ATBLCharacter* Character, bool NonHeavy, class FName* AttackName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.GetCurrentAttack");
		
		UGameplayRules_C_GetCurrentAttack_Params params {};
		params.Character = Character;
		params.NonHeavy = NonHeavy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackName != nullptr)
			*AttackName = params.AttackName;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldStartCounterWindow
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::ShouldStartCounterWindow(class ATBLCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldStartCounterWindow");
		
		UGameplayRules_C_ShouldStartCounterWindow_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldLoseLimb
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           DamageEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               LoseLimb                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BleedOut                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplayRules_C::ShouldLoseLimb(const struct FDamageTakenEvent& DamageEvent, bool* LoseLimb, bool* BleedOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldLoseLimb");
		
		UGameplayRules_C_ShouldLoseLimb_Params params {};
		params.DamageEvent = DamageEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LoseLimb != nullptr)
			*LoseLimb = params.LoseLimb;
		if (BleedOut != nullptr)
			*BleedOut = params.BleedOut;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldComboCancelQueue
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttackInfo                                 Attack                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool UGameplayRules_C::ShouldComboCancelQueue(const class FName& CombatState, const struct FAttackInfo& Attack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldComboCancelQueue");
		
		UGameplayRules_C_ShouldComboCancelQueue_Params params {};
		params.CombatState = CombatState;
		params.Attack = Attack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.GetComboTimingPolicy
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EComboTimingPolicy                             InComboTimingPolicy                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttackInfo                                 PrevAttack                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		struct FAttackInfo                                 NextAttack                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	TBL_EComboTimingPolicy UGameplayRules_C::GetComboTimingPolicy(TBL_EComboTimingPolicy InComboTimingPolicy, class ATBLCharacter* Character, const class FName& CombatState, const struct FAttackInfo& PrevAttack, const struct FAttackInfo& NextAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.GetComboTimingPolicy");
		
		UGameplayRules_C_GetComboTimingPolicy_Params params {};
		params.InComboTimingPolicy = InComboTimingPolicy;
		params.Character = Character;
		params.CombatState = CombatState;
		params.PrevAttack = PrevAttack;
		params.NextAttack = NextAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.DidHitLimb
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USkinnedMeshComponent*                       Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ParentBoneName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::DidHitLimb(class USkinnedMeshComponent* Target, const class FName& BoneName, const class FName& ParentBoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.DidHitLimb");
		
		UGameplayRules_C_DidHitLimb_Params params {};
		params.Target = Target;
		params.BoneName = BoneName;
		params.ParentBoneName = ParentBoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldScoreKill
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDeathDamageTakenEvent                      DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	bool UGameplayRules_C::ShouldScoreKill(class AController* Killer, class AController* Killed, const struct FDeathDamageTakenEvent& DamageEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldScoreKill");
		
		UGameplayRules_C_ShouldScoreKill_Params params {};
		params.Killer = Killer;
		params.Killed = Killed;
		params.DamageEvent = DamageEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.IsStandardAttack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplayRules_C::IsStandardAttack(class ATBLCharacter* Character, bool* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.IsStandardAttack");
		
		UGameplayRules_C_IsStandardAttack_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.OnDamageTaken
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EOnHitEffect                                   OutHitEffect                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_ECrowdControlVariant                           OutCrowdControlVariant                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EOnHitEffect                                   InHitEffect                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_ECrowdControlVariant                           InCrowdControlVariant                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageTakenEvent                           DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              AttackingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAttackType*                                 AttackType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameplayRules_C::OnDamageTaken(TBL_EOnHitEffect* OutHitEffect, TBL_ECrowdControlVariant* OutCrowdControlVariant, TBL_EOnHitEffect InHitEffect, TBL_ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent, const class FName& AttackName, class AInventoryItem* AttackingItem, class UAttackType* AttackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.OnDamageTaken");
		
		UGameplayRules_C_OnDamageTaken_Params params {};
		params.InHitEffect = InHitEffect;
		params.InCrowdControlVariant = InCrowdControlVariant;
		params.HitActor = HitActor;
		params.DamageEvent = DamageEvent;
		params.AttackName = AttackName;
		params.AttackingItem = AttackingItem;
		params.AttackType = AttackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHitEffect != nullptr)
			*OutHitEffect = params.OutHitEffect;
		if (OutCrowdControlVariant != nullptr)
			*OutCrowdControlVariant = params.OutCrowdControlVariant;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.WasItemDestroyed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplayRules_C::WasItemDestroyed(class AInventoryItem* Item, bool* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.WasItemDestroyed");
		
		UGameplayRules_C_WasItemDestroyed_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.GetCrowdControlVariant
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_ECrowdControlVariant                           InCrowdControlVariant                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InventoryItemClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class FName                                        AbilityName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAttackType*                                 AttackType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOnHorse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	TBL_ECrowdControlVariant UGameplayRules_C::GetCrowdControlVariant(TBL_ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const class FName& CombatState, class UClass* InventoryItemClass, const class FName& AbilityName, class UAttackType* AttackType, bool IsOnHorse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.GetCrowdControlVariant");
		
		UGameplayRules_C_GetCrowdControlVariant_Params params {};
		params.InCrowdControlVariant = InCrowdControlVariant;
		params.HitActor = HitActor;
		params.CombatState = CombatState;
		params.InventoryItemClass = InventoryItemClass;
		params.AbilityName = AbilityName;
		params.AttackType = AttackType;
		params.IsOnHorse = IsOnHorse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.IsShieldEquipped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplayRules_C::IsShieldEquipped(class ATBLCharacter* Character, bool* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.IsShieldEquipped");
		
		UGameplayRules_C_IsShieldEquipped_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.IsHeavyAttack
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplayRules_C::IsHeavyAttack(class ATBLCharacter* Character, bool* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.IsHeavyAttack");
		
		UGameplayRules_C_IsHeavyAttack_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.IsSprintAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplayRules_C::IsSprintAttack(class ATBLCharacter* Character, bool* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.IsSprintAttack");
		
		UGameplayRules_C_IsSprintAttack_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.OnParryBreak
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               AttackingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               DefendingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              AttackingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              DefendingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::OnParryBreak(class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.OnParryBreak");
		
		UGameplayRules_C_OnParryBreak_Params params {};
		params.AttackingCharacter = AttackingCharacter;
		params.DefendingCharacter = DefendingCharacter;
		params.AttackingItem = AttackingItem;
		params.DefendingItem = DefendingItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.GetAttackerBlockedPolicy
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EAttackerBlockedPolicy                         InAttackerBlockedPolicy                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               AttackingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               DefendingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              AttackingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              DefendingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSameAttackClash                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	TBL_EAttackerBlockedPolicy UGameplayRules_C::GetAttackerBlockedPolicy(TBL_EAttackerBlockedPolicy InAttackerBlockedPolicy, class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem, bool bSameAttackClash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.GetAttackerBlockedPolicy");
		
		UGameplayRules_C_GetAttackerBlockedPolicy_Params params {};
		params.InAttackerBlockedPolicy = InAttackerBlockedPolicy;
		params.AttackingCharacter = AttackingCharacter;
		params.DefendingCharacter = DefendingCharacter;
		params.AttackingItem = AttackingItem;
		params.DefendingItem = DefendingItem;
		params.bSameAttackClash = bSameAttackClash;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.GetDefenderBlockedPolicy
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldDisarm                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TBL_EDefenderBlockedPolicy                         InDefenderBlockedPolicy                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               AttackingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               DefendingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              AttackingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              DefendingItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bProjectileAttack                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSameAttackClash                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWasBlockedWithParryForgivenessWindow                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	TBL_EDefenderBlockedPolicy UGameplayRules_C::GetDefenderBlockedPolicy(bool* bShouldDisarm, TBL_EDefenderBlockedPolicy InDefenderBlockedPolicy, class ATBLCharacter* AttackingCharacter, class ATBLCharacter* DefendingCharacter, class AInventoryItem* AttackingItem, class AInventoryItem* DefendingItem, bool bProjectileAttack, bool bSameAttackClash, bool bWasBlockedWithParryForgivenessWindow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.GetDefenderBlockedPolicy");
		
		UGameplayRules_C_GetDefenderBlockedPolicy_Params params {};
		params.InDefenderBlockedPolicy = InDefenderBlockedPolicy;
		params.AttackingCharacter = AttackingCharacter;
		params.DefendingCharacter = DefendingCharacter;
		params.AttackingItem = AttackingItem;
		params.DefendingItem = DefendingItem;
		params.bProjectileAttack = bProjectileAttack;
		params.bSameAttackClash = bSameAttackClash;
		params.bWasBlockedWithParryForgivenessWindow = bWasBlockedWithParryForgivenessWindow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldDisarm != nullptr)
			*bShouldDisarm = params.bShouldDisarm;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.Disarm
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DuringParryEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameplayRules_C::Disarm(class AInventoryItem* Item, bool DuringParryEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.Disarm");
		
		UGameplayRules_C_Disarm_Params params {};
		params.Item = Item;
		params.DuringParryEvent = DuringParryEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.IsBlocking
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               AttackingCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UGameplayRules_C::IsBlocking(class ATBLCharacter* Character, const class FName& AttackName, const class FName& CombatState, class ATBLCharacter* AttackingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.IsBlocking");
		
		UGameplayRules_C_IsBlocking_Params params {};
		params.Character = Character;
		params.AttackName = AttackName;
		params.CombatState = CombatState;
		params.AttackingCharacter = AttackingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameplayRules.GameplayRules_C.ShouldGotoDowned
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Initiator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AbilityName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageTakenEvent                           DamageTakenEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	bool UGameplayRules_C::ShouldGotoDowned(class AActor* Target, class AActor* Initiator, const class FName& AbilityName, class AInventoryItem* InventoryItem, class UDamageSource* DamageType, const struct FDamageTakenEvent& DamageTakenEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayRules.GameplayRules_C.ShouldGotoDowned");
		
		UGameplayRules_C_ShouldGotoDowned_Params params {};
		params.Target = Target;
		params.Initiator = Initiator;
		params.AbilityName = AbilityName;
		params.InventoryItem = InventoryItem;
		params.DamageType = DamageType;
		params.DamageTakenEvent = DamageTakenEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameplayRules_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayRules_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameplayRules.GameplayRules_C");
		return ptr;
	}

}


