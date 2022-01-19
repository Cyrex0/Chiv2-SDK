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
	 * 		Name   -> Function BP_Base_Deployable.BP_Base_Deployable_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Base_Deployable_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Deployable.BP_Base_Deployable_C.ReceiveBeginPlay");
		
		ABP_Base_Deployable_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_Base_Deployable.BP_Base_Deployable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_Base_Deployable_C::BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Deployable.BP_Base_Deployable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature");
		
		ABP_Base_Deployable_C_BndEvt__Stats_K2Node_ComponentBoundEvent_3_KilledSignature__DelegateSignature_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_Base_Deployable.BP_Base_Deployable_C.ResetLifespanTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Deployable_C::ResetLifespanTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Deployable.BP_Base_Deployable_C.ResetLifespanTimer");
		
		ABP_Base_Deployable_C_ResetLifespanTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_Base_Deployable.BP_Base_Deployable_C.DestroyConstructable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Base_Deployable_C::DestroyConstructable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Deployable.BP_Base_Deployable_C.DestroyConstructable");
		
		ABP_Base_Deployable_C_DestroyConstructable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_Base_Deployable.BP_Base_Deployable_C.ExecuteUbergraph_BP_Base_Deployable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Base_Deployable_C::ExecuteUbergraph_BP_Base_Deployable(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Base_Deployable.BP_Base_Deployable_C.ExecuteUbergraph_BP_Base_Deployable");
		
		ABP_Base_Deployable_C_ExecuteUbergraph_BP_Base_Deployable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Base_Deployable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Base_Deployable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Base_Deployable.BP_Base_Deployable_C");
		return ptr;
	}

}


