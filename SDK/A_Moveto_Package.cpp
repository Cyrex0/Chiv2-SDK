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
	 * 		Name   -> Function A_Moveto.A_MoveTo_C.Get Location or Actor I Want To Move To
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUtilityAI_Context                          C                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TargetLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               Controller                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_MoveTo_C::Get_Location_or_Actor_I_Want_To_Move_To(const struct FUtilityAI_Context& C, class AActor** TargetActor, struct FVector* TargetLocation, class AAIController** Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Moveto.A_MoveTo_C.Get Location or Actor I Want To Move To");
		
		UA_MoveTo_C_Get_Location_or_Actor_I_Want_To_Move_To_Params params {};
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
	 * 		Name   -> Function A_Moveto.A_MoveTo_C.OnMoveFinished_465269984326E120B547178314624ED9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		AIModule_EPathFollowingResult                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_MoveTo_C::OnMoveFinished_465269984326E120B547178314624ED9(AIModule_EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Moveto.A_MoveTo_C.OnMoveFinished_465269984326E120B547178314624ED9");
		
		UA_MoveTo_C_OnMoveFinished_465269984326E120B547178314624ED9_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_Moveto.A_MoveTo_C.OnRequestFailed_465269984326E120B547178314624ED9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_MoveTo_C::OnRequestFailed_465269984326E120B547178314624ED9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Moveto.A_MoveTo_C.OnRequestFailed_465269984326E120B547178314624ED9");
		
		UA_MoveTo_C_OnRequestFailed_465269984326E120B547178314624ED9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_Moveto.A_MoveTo_C.PerformAction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FUtilityAI_Context                          C                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UA_MoveTo_C::PerformAction(const struct FUtilityAI_Context& C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Moveto.A_MoveTo_C.PerformAction");
		
		UA_MoveTo_C_PerformAction_Params params {};
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_Moveto.A_MoveTo_C.CompleteAction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FUtilityAI_Context                          C                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UA_MoveTo_C::CompleteAction(const struct FUtilityAI_Context& C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Moveto.A_MoveTo_C.CompleteAction");
		
		UA_MoveTo_C_CompleteAction_Params params {};
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_Moveto.A_MoveTo_C.Finish the move
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_MoveTo_C::Finish_the_move()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Moveto.A_MoveTo_C.Finish the move");
		
		UA_MoveTo_C_Finish_the_move_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_Moveto.A_MoveTo_C.On Move is finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UA_MoveTo_C::On_Move_is_finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Moveto.A_MoveTo_C.On Move is finished");
		
		UA_MoveTo_C_On_Move_is_finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function A_Moveto.A_MoveTo_C.ExecuteUbergraph_A_MoveTo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UA_MoveTo_C::ExecuteUbergraph_A_MoveTo(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function A_Moveto.A_MoveTo_C.ExecuteUbergraph_A_MoveTo");
		
		UA_MoveTo_C_ExecuteUbergraph_A_MoveTo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UA_MoveTo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UA_MoveTo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass A_Moveto.A_MoveTo_C");
		return ptr;
	}

}


