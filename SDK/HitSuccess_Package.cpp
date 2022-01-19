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
	 * 		Name   -> Function HitSuccess.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::OnAssemble_CombatStateBlueprint_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1");
		
		UCombatStateBlueprint_0_C_OnAssemble_CombatStateBlueprint_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.CombatStateBlueprint_0_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.CombatStateBlueprint_0_C.EventEndAnimation");
		
		UCombatStateBlueprint_0_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.CombatStateBlueprint_0_C.EventBeginFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHeldQueue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCombatStateBlueprint_0_C::EventBeginFire(const class FName& AttackName, bool bHeldQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.CombatStateBlueprint_0_C.EventBeginFire");
		
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
	 * 		Name   -> Function HitSuccess.CombatStateBlueprint_0_C.SetCanCombo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::SetCanCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.CombatStateBlueprint_0_C.SetCanCombo");
		
		UCombatStateBlueprint_0_C_SetCanCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.CombatStateBlueprint_0_C.EventBeginState
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
			fn = UObject::FindObject<UFunction>("Function HitSuccess.CombatStateBlueprint_0_C.EventBeginState");
		
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
	 * 		Name   -> Function HitSuccess.CombatStateBlueprint_0_C.SetCanSpecial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::SetCanSpecial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.CombatStateBlueprint_0_C.SetCanSpecial");
		
		UCombatStateBlueprint_0_C_SetCanSpecial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.CombatStateBlueprint_0_C.TryStartAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::TryStartAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.CombatStateBlueprint_0_C.TryStartAttack");
		
		UCombatStateBlueprint_0_C_TryStartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.CombatStateBlueprint_0_C.AllowParry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCombatStateBlueprint_0_C::AllowParry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.CombatStateBlueprint_0_C.AllowParry");
		
		UCombatStateBlueprint_0_C_AllowParry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCombatStateBlueprint_0_C::ExecuteUbergraph_CombatStateBlueprint_1(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1");
		
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
			ptr = UObject::FindClass("BlueprintGeneratedClass HitSuccess.CombatStateBlueprint_0_C");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.HitSuccess_C.OnAssemble_CombatStateBlueprint_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHitSuccess_C::OnAssemble_CombatStateBlueprint_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.HitSuccess_C.OnAssemble_CombatStateBlueprint_1");
		
		UHitSuccess_C_OnAssemble_CombatStateBlueprint_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.HitSuccess_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHitSuccess_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.HitSuccess_C.EventEndAnimation");
		
		UHitSuccess_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.HitSuccess_C.EventBeginFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHeldQueue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHitSuccess_C::EventBeginFire(const class FName& AttackName, bool bHeldQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.HitSuccess_C.EventBeginFire");
		
		UHitSuccess_C_EventBeginFire_Params params {};
		params.AttackName = AttackName;
		params.bHeldQueue = bHeldQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.HitSuccess_C.SetCanCombo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHitSuccess_C::SetCanCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.HitSuccess_C.SetCanCombo");
		
		UHitSuccess_C_SetCanCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.HitSuccess_C.EventBeginState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PreviousStateTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimationLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHitSuccess_C::EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.HitSuccess_C.EventBeginState");
		
		UHitSuccess_C_EventBeginState_Params params {};
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
	 * 		Name   -> Function HitSuccess.HitSuccess_C.SetCanSpecial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHitSuccess_C::SetCanSpecial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.HitSuccess_C.SetCanSpecial");
		
		UHitSuccess_C_SetCanSpecial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.HitSuccess_C.TryStartAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHitSuccess_C::TryStartAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.HitSuccess_C.TryStartAttack");
		
		UHitSuccess_C_TryStartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.HitSuccess_C.AllowParry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHitSuccess_C::AllowParry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.HitSuccess_C.AllowParry");
		
		UHitSuccess_C_AllowParry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HitSuccess.HitSuccess_C.ExecuteUbergraph_HitSuccess
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHitSuccess_C::ExecuteUbergraph_HitSuccess(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HitSuccess.HitSuccess_C.ExecuteUbergraph_HitSuccess");
		
		UHitSuccess_C_ExecuteUbergraph_HitSuccess_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHitSuccess_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitSuccess_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HitSuccess.HitSuccess_C");
		return ptr;
	}

}


