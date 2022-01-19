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
	 * 		Name   -> Function A_UseInteractable.A_UseInteractable_C.Get Location or Actor I Want To Move To
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUtilityAI_Context                          C                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_UseInteractable_C::Get_Location_or_Actor_I_Want_To_Move_To(const struct FUtilityAI_Context& C, class AActor** TargetActor, struct FVector* TargetLocation, class AAIController** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_UseInteractable.A_UseInteractable_C.Get Location or Actor I Want To Move To");
		
		UA_UseInteractable_C_Get_Location_or_Actor_I_Want_To_Move_To_Params params {};
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
		if (TargetLocation != nullptr)
			*TargetLocation = params.TargetLocation;
		if (Controller != nullptr)
			*Controller = params.Controller;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_UseInteractable.A_UseInteractable_C.IsInRangeOfTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              AcceptanceMultiplier                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInRange                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UA_UseInteractable_C::IsInRangeOfTarget(float AcceptanceMultiplier, bool* bInRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_UseInteractable.A_UseInteractable_C.IsInRangeOfTarget");
		
		UA_UseInteractable_C_IsInRangeOfTarget_Params params {};
		params.AcceptanceMultiplier = AcceptanceMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bInRange != nullptr)
			*bInRange = params.bInRange;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_UseInteractable.A_UseInteractable_C.OnMoveFinished_C60871134FF654389219A2AFBCB9B884
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		AIModule_EPathFollowingResult                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_UseInteractable_C::OnMoveFinished_C60871134FF654389219A2AFBCB9B884(AIModule_EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_UseInteractable.A_UseInteractable_C.OnMoveFinished_C60871134FF654389219A2AFBCB9B884");
		
		UA_UseInteractable_C_OnMoveFinished_C60871134FF654389219A2AFBCB9B884_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_UseInteractable.A_UseInteractable_C.OnRequestFailed_C60871134FF654389219A2AFBCB9B884
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_UseInteractable_C::OnRequestFailed_C60871134FF654389219A2AFBCB9B884()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_UseInteractable.A_UseInteractable_C.OnRequestFailed_C60871134FF654389219A2AFBCB9B884");
		
		UA_UseInteractable_C_OnRequestFailed_C60871134FF654389219A2AFBCB9B884_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_UseInteractable.A_UseInteractable_C.On Move is finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_UseInteractable_C::On_Move_is_finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_UseInteractable.A_UseInteractable_C.On Move is finished");
		
		UA_UseInteractable_C_On_Move_is_finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_UseInteractable.A_UseInteractable_C.PerformAction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FUtilityAI_Context                          C                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UA_UseInteractable_C::PerformAction(const struct FUtilityAI_Context& C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_UseInteractable.A_UseInteractable_C.PerformAction");
		
		UA_UseInteractable_C_PerformAction_Params params {};
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_UseInteractable.A_UseInteractable_C.CompleteAction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FUtilityAI_Context                          C                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UA_UseInteractable_C::CompleteAction(const struct FUtilityAI_Context& C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_UseInteractable.A_UseInteractable_C.CompleteAction");
		
		UA_UseInteractable_C_CompleteAction_Params params {};
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_UseInteractable.A_UseInteractable_C.OnInteractableStoppedBeingHeld_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractableComponent*                      InteractableUsed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_UseInteractable_C::OnInteractableStoppedBeingHeld_Event_1(class UInteractableComponent* InteractableUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_UseInteractable.A_UseInteractable_C.OnInteractableStoppedBeingHeld_Event_1");
		
		UA_UseInteractable_C_OnInteractableStoppedBeingHeld_Event_1_Params params {};
		params.InteractableUsed = InteractableUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_UseInteractable.A_UseInteractable_C.ExecuteUbergraph_A_UseInteractable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_UseInteractable_C::ExecuteUbergraph_A_UseInteractable(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_UseInteractable.A_UseInteractable_C.ExecuteUbergraph_A_UseInteractable");
		
		UA_UseInteractable_C_ExecuteUbergraph_A_UseInteractable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UA_UseInteractable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_UseInteractable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_UseInteractable.A_UseInteractable_C");
		return ptr;
	}

}


