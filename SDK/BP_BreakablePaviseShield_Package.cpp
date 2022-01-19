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
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.GetGroundOffset
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreakablePaviseShield_C::GetGroundOffset(bool Forward, float* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.GetGroundOffset");
		
		ABP_BreakablePaviseShield_C_GetGroundOffset_Params params {};
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.UpdateTeam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::UpdateTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.UpdateTeam");
		
		ABP_BreakablePaviseShield_C_UpdateTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.UserConstructionScript");
		
		ABP_BreakablePaviseShield_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__FinishedFunc");
		
		ABP_BreakablePaviseShield_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__UpdateFunc");
		
		ABP_BreakablePaviseShield_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__NewTrack_1__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::Timeline_0__NewTrack_1__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.Timeline_0__NewTrack_1__EventFunc");
		
		ABP_BreakablePaviseShield_C_Timeline_0__NewTrack_1__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.OnLoaded_DEBF5ABE4C7A2C6A44D871B4C01A8397
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreakablePaviseShield_C::OnLoaded_DEBF5ABE4C7A2C6A44D871B4C01A8397(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.OnLoaded_DEBF5ABE4C7A2C6A44D871B4C01A8397");
		
		ABP_BreakablePaviseShield_C_OnLoaded_DEBF5ABE4C7A2C6A44D871B4C01A8397_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ReceiveBeginPlay");
		
		ABP_BreakablePaviseShield_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.BndEvt__Stats_K2Node_ComponentBoundEvent_2_KilledSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_BreakablePaviseShield_C::BndEvt__Stats_K2Node_ComponentBoundEvent_2_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.BndEvt__Stats_K2Node_ComponentBoundEvent_2_KilledSignature__DelegateSignature");
		
		ABP_BreakablePaviseShield_C_BndEvt__Stats_K2Node_ComponentBoundEvent_2_KilledSignature__DelegateSignature_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.KilledFx
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           DamageTakenEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BreakablePaviseShield_C::KilledFx(const struct FDamageTakenEvent& DamageTakenEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.KilledFx");
		
		ABP_BreakablePaviseShield_C_KilledFx_Params params {};
		params.DamageTakenEvent = DamageTakenEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_3_InteractableComponentOnUseSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreakablePaviseShield_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_3_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_3_InteractableComponentOnUseSignature__DelegateSignature");
		
		ABP_BreakablePaviseShield_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_3_InteractableComponentOnUseSignature__DelegateSignature_Params params {};
		params.Pawn = Pawn;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ApplyFFAMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::ApplyFFAMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ApplyFFAMaterial");
		
		ABP_BreakablePaviseShield_C_ApplyFFAMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ForceBrokenState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::ForceBrokenState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ForceBrokenState");
		
		ABP_BreakablePaviseShield_C_ForceBrokenState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ResetLifespanTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::ResetLifespanTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ResetLifespanTimer");
		
		ABP_BreakablePaviseShield_C_ResetLifespanTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.DestroyConstructable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BreakablePaviseShield_C::DestroyConstructable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.DestroyConstructable");
		
		ABP_BreakablePaviseShield_C_DestroyConstructable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ExecuteUbergraph_BP_BreakablePaviseShield
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreakablePaviseShield_C::ExecuteUbergraph_BP_BreakablePaviseShield(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreakablePaviseShield.BP_BreakablePaviseShield_C.ExecuteUbergraph_BP_BreakablePaviseShield");
		
		ABP_BreakablePaviseShield_C_ExecuteUbergraph_BP_BreakablePaviseShield_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_BreakablePaviseShield_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BreakablePaviseShield_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakablePaviseShield.BP_BreakablePaviseShield_C");
		return ptr;
	}

}


