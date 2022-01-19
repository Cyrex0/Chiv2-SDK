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
	 * 		Name   -> Function KnockdownAir.KnockdownAir_C.OnAssemble_KnockdownAir
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKnockdownAir_C::OnAssemble_KnockdownAir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnockdownAir.KnockdownAir_C.OnAssemble_KnockdownAir");
		
		UKnockdownAir_C_OnAssemble_KnockdownAir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KnockdownAir.KnockdownAir_C.EventBeginState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PreviousStateTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimationLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKnockdownAir_C::EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnockdownAir.KnockdownAir_C.EventBeginState");
		
		UKnockdownAir_C_EventBeginState_Params params {};
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
	 * 		Name   -> Function KnockdownAir.KnockdownAir_C.EventLanded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACharacter*                                  InTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKnockdownAir_C::EventLanded(class ACharacter* InTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnockdownAir.KnockdownAir_C.EventLanded");
		
		UKnockdownAir_C_EventLanded_Params params {};
		params.InTarget = InTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KnockdownAir.KnockdownAir_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UKnockdownAir_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnockdownAir.KnockdownAir_C.EventEndAnimation");
		
		UKnockdownAir_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KnockdownAir.KnockdownAir_C.EventEndState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NextState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bStartAttack                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKnockdownAir_C::EventEndState(const class FName& NextState, bool bStartAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnockdownAir.KnockdownAir_C.EventEndState");
		
		UKnockdownAir_C_EventEndState_Params params {};
		params.NextState = NextState;
		params.bStartAttack = bStartAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KnockdownAir.KnockdownAir_C.ExecuteUbergraph_KnockdownAir
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKnockdownAir_C::ExecuteUbergraph_KnockdownAir(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KnockdownAir.KnockdownAir_C.ExecuteUbergraph_KnockdownAir");
		
		UKnockdownAir_C_ExecuteUbergraph_KnockdownAir_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKnockdownAir_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKnockdownAir_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KnockdownAir.KnockdownAir_C");
		return ptr;
	}

}


