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
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.IsValidDamagingFaction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamageCauser                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_BaseBreakableGate_C::IsValidDamagingFaction(class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.IsValidDamagingFaction");
		
		ABP_BaseBreakableGate_C_IsValidDamagingFaction_Params params {};
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.Get Owner Faction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::Get_Owner_Faction(TBL_EFaction* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.Get Owner Faction");
		
		ABP_BaseBreakableGate_C_Get_Owner_Faction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetGateState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           DamageTakenEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BaseBreakableGate_C::SetGateState(const struct FDamageTakenEvent& DamageTakenEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetGateState");
		
		ABP_BaseBreakableGate_C_SetGateState_Params params {};
		params.DamageTakenEvent = DamageTakenEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ToggleDoorCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseBreakableGate_C::ToggleDoorCollision(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ToggleDoorCollision");
		
		ABP_BaseBreakableGate_C_ToggleDoorCollision_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateBreakableState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		BreakableState_EBreakableState                     Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::UpdateBreakableState(BreakableState_EBreakableState Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateBreakableState");
		
		ABP_BaseBreakableGate_C_UpdateBreakableState_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.EnableChildComponents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             ParentComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseBreakableGate_C::EnableChildComponents(class USceneComponent* ParentComponent, bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.EnableChildComponents");
		
		ABP_BaseBreakableGate_C_EnableChildComponents_Params params {};
		params.ParentComponent = ParentComponent;
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseBreakableGate_C::OnGateStateChanged(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateStateChanged");
		
		ABP_BaseBreakableGate_C_OnGateStateChanged_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_GateState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BaseBreakableGate_C::OnRep_GateState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_GateState");
		
		ABP_BaseBreakableGate_C_OnRep_GateState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_BreakableState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BaseBreakableGate_C::OnRep_BreakableState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_BreakableState");
		
		ABP_BaseBreakableGate_C_OnRep_BreakableState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStaticMesh*                                 NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::UpdateMesh(class UStaticMesh* NewMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateMesh");
		
		ABP_BaseBreakableGate_C_UpdateMesh_Params params {};
		params.NewMesh = NewMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BaseBreakableGate_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UserConstructionScript");
		
		ABP_BaseBreakableGate_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BaseBreakableGate_C::BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature(const struct FDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature");
		
		ABP_BaseBreakableGate_C_BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.DamageFx
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           DamageTakenEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BaseBreakableGate_C::DamageFx(const struct FDamageTakenEvent& DamageTakenEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.DamageFx");
		
		ABP_BaseBreakableGate_C_DamageFx_Params params {};
		params.DamageTakenEvent = DamageTakenEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.KilledFx
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           DamageTakenEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BaseBreakableGate_C::KilledFx(const struct FDamageTakenEvent& DamageTakenEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.KilledFx");
		
		ABP_BaseBreakableGate_C_KilledFx_Params params {};
		params.DamageTakenEvent = DamageTakenEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::UpdateState(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateState");
		
		ABP_BaseBreakableGate_C_UpdateState_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Initiator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature(float Amount, class AActor* Initiator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature");
		
		ABP_BaseBreakableGate_C_BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature_Params params {};
		params.Amount = Amount;
		params.Initiator = Initiator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.InitializeState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::InitializeState(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.InitializeState");
		
		ABP_BaseBreakableGate_C_InitializeState_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		GateDirection_EGateDirection                       OpenGateDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::ForceOpened(GateDirection_EGateDirection OpenGateDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceOpened");
		
		ABP_BaseBreakableGate_C_ForceOpened_Params params {};
		params.OpenGateDirection = OpenGateDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ManuallyOpenGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		GateDirection_EGateDirection                       Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::ManuallyOpenGate(GateDirection_EGateDirection Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ManuallyOpenGate");
		
		ABP_BaseBreakableGate_C_ManuallyOpenGate_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OpenGate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		GateDirection_EGateDirection                       OpenGateDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::OpenGate(GateDirection_EGateDirection OpenGateDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OpenGate");
		
		ABP_BaseBreakableGate_C_OpenGate_Params params {};
		params.OpenGateDirection = OpenGateDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.RemoveCollisionOnMeshes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BaseBreakableGate_C::RemoveCollisionOnMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.RemoveCollisionOnMeshes");
		
		ABP_BaseBreakableGate_C_RemoveCollisionOnMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_BaseBreakableGate_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ReceiveBeginPlay");
		
		ABP_BaseBreakableGate_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceBrokenState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BaseBreakableGate_C::ForceBrokenState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceBrokenState");
		
		ABP_BaseBreakableGate_C_ForceBrokenState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABP_BaseBreakableGate_C::BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature");
		
		ABP_BaseBreakableGate_C_BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BreakableStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		BreakableState_EBreakableState                     BreakableState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::BreakableStateChanged(BreakableState_EBreakableState BreakableState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BreakableStateChanged");
		
		ABP_BaseBreakableGate_C_BreakableStateChanged_Params params {};
		params.BreakableState = BreakableState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetActorInvulnerable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseBreakableGate_C::SetActorInvulnerable(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetActorInvulnerable");
		
		ABP_BaseBreakableGate_C_SetActorInvulnerable_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ChangeCanBeDamaged
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanBeDamaged                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseBreakableGate_C::ChangeCanBeDamaged(bool CanBeDamaged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ChangeCanBeDamaged");
		
		ABP_BaseBreakableGate_C_ChangeCanBeDamaged_Params params {};
		params.CanBeDamaged = CanBeDamaged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnPushableBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UPushableComponent*                          Pushable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::OnPushableBeginOverlap(class UPushableComponent* Pushable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnPushableBeginOverlap");
		
		ABP_BaseBreakableGate_C_OnPushableBeginOverlap_Params params {};
		params.Pushable = Pushable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ExecuteUbergraph_BP_BaseBreakableGate
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::ExecuteUbergraph_BP_BaseBreakableGate(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ExecuteUbergraph_BP_BaseBreakableGate");
		
		ABP_BaseBreakableGate_C_ExecuteUbergraph_BP_BaseBreakableGate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDestroyed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               Destroyer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::OnGateDestroyed__DelegateSignature(class ATBLCharacter* Destroyer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDestroyed__DelegateSignature");
		
		ABP_BaseBreakableGate_C_OnGateDestroyed__DelegateSignature_Params params {};
		params.Destroyer = Destroyer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateOpened__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BaseBreakableGate_C::OnGateOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateOpened__DelegateSignature");
		
		ABP_BaseBreakableGate_C_OnGateOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDamaged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseBreakableGate_C::OnGateDamaged__DelegateSignature(float Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDamaged__DelegateSignature");
		
		ABP_BaseBreakableGate_C_OnGateDamaged__DelegateSignature_Params params {};
		params.Damage = Damage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_BaseBreakableGate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BaseBreakableGate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseBreakableGate.BP_BaseBreakableGate_C");
		return ptr;
	}

}


