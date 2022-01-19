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
	 * 		Name   -> Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UpdateMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMesh*                                 NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseSimpleBreakable_C::UpdateMesh(class UStaticMesh* NewMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UpdateMesh");
		
		ABP_BaseSimpleBreakable_C_UpdateMesh_Params params {};
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnRep_BreakableState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BaseSimpleBreakable_C::OnRep_BreakableState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnRep_BreakableState");
		
		ABP_BaseSimpleBreakable_C_OnRep_BreakableState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BaseSimpleBreakable_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UserConstructionScript");
		
		ABP_BaseSimpleBreakable_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_BaseSimpleBreakable_C::BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature");
		
		ABP_BaseSimpleBreakable_C_BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BaseSimpleBreakable_C::BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature(const struct FDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature");
		
		ABP_BaseSimpleBreakable_C_BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_BaseSimpleBreakable_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ReceiveBeginPlay");
		
		ABP_BaseSimpleBreakable_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ExecuteUbergraph_BP_BaseSimpleBreakable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseSimpleBreakable_C::ExecuteUbergraph_BP_BaseSimpleBreakable(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ExecuteUbergraph_BP_BaseSimpleBreakable");
		
		ABP_BaseSimpleBreakable_C_ExecuteUbergraph_BP_BaseSimpleBreakable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnBreakableStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		BreakableState_EBreakableState                     BreakableState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseSimpleBreakable_C::OnBreakableStateChanged__DelegateSignature(BreakableState_EBreakableState BreakableState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnBreakableStateChanged__DelegateSignature");
		
		ABP_BaseSimpleBreakable_C_OnBreakableStateChanged__DelegateSignature_Params params {};
		params.BreakableState = BreakableState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnKilled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseSimpleBreakable_C::OnKilled__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnKilled__DelegateSignature");
		
		ABP_BaseSimpleBreakable_C_OnKilled__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_BaseSimpleBreakable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BaseSimpleBreakable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C");
		return ptr;
	}

}


