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
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.GetTimeToClearQueue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCombatStateBlueprint_0_C::GetTimeToClearQueue(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.GetTimeToClearQueue");
		
		UCombatStateBlueprint_0_C_GetTimeToClearQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.GetAttackTransition
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	TBL_EAttackTransition UCombatStateBlueprint_0_C::GetAttackTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.GetAttackTransition");
		
		UCombatStateBlueprint_0_C_GetAttackTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::OnAssemble_CombatStateBlueprint_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1");
		
		UCombatStateBlueprint_0_C_OnAssemble_CombatStateBlueprint_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.EventEndAnimation");
		
		UCombatStateBlueprint_0_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.EventBeginFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHeldQueue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCombatStateBlueprint_0_C::EventBeginFire(const class FName& AttackName, bool bHeldQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.EventBeginFire");
		
		UCombatStateBlueprint_0_C_EventBeginFire_Params params {};
		params.AttackName = AttackName;
		params.bHeldQueue = bHeldQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.EventBeginState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PreviousStateTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimationLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCombatStateBlueprint_0_C::EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.EventBeginState");
		
		UCombatStateBlueprint_0_C_EventBeginState_Params params {};
		params.PreviousState = PreviousState;
		params.PreviousStateTime = PreviousStateTime;
		params.AnimationLength = AnimationLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.EnableCombo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::EnableCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.EnableCombo");
		
		UCombatStateBlueprint_0_C_EnableCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.TryStartAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::TryStartAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.TryStartAttack");
		
		UCombatStateBlueprint_0_C_TryStartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.EnableParryFromShove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::EnableParryFromShove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.EnableParryFromShove");
		
		UCombatStateBlueprint_0_C_EnableParryFromShove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.EnableJabShoveSpecial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::EnableJabShoveSpecial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.EnableJabShoveSpecial");
		
		UCombatStateBlueprint_0_C_EnableJabShoveSpecial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.EnableAttackFromShove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::EnableAttackFromShove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.EnableAttackFromShove");
		
		UCombatStateBlueprint_0_C_EnableAttackFromShove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.AllowParry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::AllowParry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.AllowParry");
		
		UCombatStateBlueprint_0_C_AllowParry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCombatStateBlueprint_0_C::ExecuteUbergraph_CombatStateBlueprint_1(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1");
		
		UCombatStateBlueprint_0_C_ExecuteUbergraph_CombatStateBlueprint_1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCombatStateBlueprint_0_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCombatStateBlueprint_0_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thwack.CombatStateBlueprint_0_C");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.GetTimeToClearQueue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UThwack_C::GetTimeToClearQueue(float* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.GetTimeToClearQueue");
		
		UThwack_C_GetTimeToClearQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.GetAttackTransition
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	TBL_EAttackTransition UThwack_C::GetAttackTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.GetAttackTransition");
		
		UThwack_C_GetAttackTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.OnAssemble_CombatStateBlueprint_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UThwack_C::OnAssemble_CombatStateBlueprint_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.OnAssemble_CombatStateBlueprint_1");
		
		UThwack_C_OnAssemble_CombatStateBlueprint_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UThwack_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.EventEndAnimation");
		
		UThwack_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.EventBeginFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHeldQueue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UThwack_C::EventBeginFire(const class FName& AttackName, bool bHeldQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.EventBeginFire");
		
		UThwack_C_EventBeginFire_Params params {};
		params.AttackName = AttackName;
		params.bHeldQueue = bHeldQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.EventBeginState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PreviousStateTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimationLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UThwack_C::EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.EventBeginState");
		
		UThwack_C_EventBeginState_Params params {};
		params.PreviousState = PreviousState;
		params.PreviousStateTime = PreviousStateTime;
		params.AnimationLength = AnimationLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.EnableCombo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UThwack_C::EnableCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.EnableCombo");
		
		UThwack_C_EnableCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.TryStartAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UThwack_C::TryStartAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.TryStartAttack");
		
		UThwack_C_TryStartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.EnableParryFromShove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UThwack_C::EnableParryFromShove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.EnableParryFromShove");
		
		UThwack_C_EnableParryFromShove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.EnableJabShoveSpecial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UThwack_C::EnableJabShoveSpecial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.EnableJabShoveSpecial");
		
		UThwack_C_EnableJabShoveSpecial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.EnableAttackFromShove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UThwack_C::EnableAttackFromShove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.EnableAttackFromShove");
		
		UThwack_C_EnableAttackFromShove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.AllowParry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UThwack_C::AllowParry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.AllowParry");
		
		UThwack_C_AllowParry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.EventWasParried
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               ParryingCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UThwack_C::EventWasParried(class ATBLCharacter* ParryingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.EventWasParried");
		
		UThwack_C_EventWasParried_Params params {};
		params.ParryingCharacter = ParryingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.EnableComboAfterJabWasBlocked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UThwack_C::EnableComboAfterJabWasBlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.EnableComboAfterJabWasBlocked");
		
		UThwack_C_EnableComboAfterJabWasBlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Thwack.Thwack_C.ExecuteUbergraph_Thwack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UThwack_C::ExecuteUbergraph_Thwack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Thwack.Thwack_C.ExecuteUbergraph_Thwack");
		
		UThwack_C_ExecuteUbergraph_Thwack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UThwack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThwack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Thwack.Thwack_C");
		return ptr;
	}

}


