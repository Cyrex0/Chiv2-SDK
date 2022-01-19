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
	 * 		Name   -> Function HorseGameplayRules.HorseGameplayRules_C.GetCrowdControlVariant
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
	TBL_ECrowdControlVariant UHorseGameplayRules_C::GetCrowdControlVariant(TBL_ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const class FName& CombatState, class UClass* InventoryItemClass, const class FName& AbilityName, class UAttackType* AttackType, bool IsOnHorse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseGameplayRules.HorseGameplayRules_C.GetCrowdControlVariant");
		
		UHorseGameplayRules_C_GetCrowdControlVariant_Params params {};
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
	 * 		Name   -> Function HorseGameplayRules.HorseGameplayRules_C.OnDamageTaken
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	void UHorseGameplayRules_C::OnDamageTaken(TBL_EOnHitEffect* OutHitEffect, TBL_ECrowdControlVariant* OutCrowdControlVariant, TBL_EOnHitEffect InHitEffect, TBL_ECrowdControlVariant InCrowdControlVariant, class AActor* HitActor, const struct FDamageTakenEvent& DamageEvent, const class FName& AttackName, class AInventoryItem* AttackingItem, class UAttackType* AttackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseGameplayRules.HorseGameplayRules_C.OnDamageTaken");
		
		UHorseGameplayRules_C_OnDamageTaken_Params params {};
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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseGameplayRules_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseGameplayRules_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseGameplayRules.HorseGameplayRules_C");
		return ptr;
	}

}


