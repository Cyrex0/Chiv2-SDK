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
	 * 		Name   -> Function Stagger.Stagger_C.OnAssemble_Stagger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStagger_C::OnAssemble_Stagger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stagger.Stagger_C.OnAssemble_Stagger");
		
		UStagger_C_OnAssemble_Stagger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stagger.Stagger_C.EventBeginFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHeldQueue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStagger_C::EventBeginFire(const class FName& AttackName, bool bHeldQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stagger.Stagger_C.EventBeginFire");
		
		UStagger_C_EventBeginFire_Params params {};
		params.AttackName = AttackName;
		params.bHeldQueue = bHeldQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stagger.Stagger_C.EventBeginState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PreviousStateTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimationLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStagger_C::EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stagger.Stagger_C.EventBeginState");
		
		UStagger_C_EventBeginState_Params params {};
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
	 * 		Name   -> Function Stagger.Stagger_C.EarlyOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStagger_C::EarlyOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stagger.Stagger_C.EarlyOut");
		
		UStagger_C_EarlyOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stagger.Stagger_C.DashJabOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStagger_C::DashJabOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stagger.Stagger_C.DashJabOut");
		
		UStagger_C_DashJabOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stagger.Stagger_C.AllowParry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStagger_C::AllowParry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stagger.Stagger_C.AllowParry");
		
		UStagger_C_AllowParry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stagger.Stagger_C.TryStartAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStagger_C::TryStartAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stagger.Stagger_C.TryStartAttack");
		
		UStagger_C_TryStartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stagger.Stagger_C.ExecuteUbergraph_Stagger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStagger_C::ExecuteUbergraph_Stagger(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stagger.Stagger_C.ExecuteUbergraph_Stagger");
		
		UStagger_C_ExecuteUbergraph_Stagger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStagger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStagger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Stagger.Stagger_C");
		return ptr;
	}

}


