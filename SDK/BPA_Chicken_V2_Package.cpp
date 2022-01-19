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
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_Chicken_V2_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimGraph");
		
		UBPA_Chicken_V2_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_8EE7A0484F17BF85B9433CBCF9E763FD
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPA_Chicken_V2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_8EE7A0484F17BF85B9433CBCF9E763FD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_8EE7A0484F17BF85B9433CBCF9E763FD");
		
		UBPA_Chicken_V2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_8EE7A0484F17BF85B9433CBCF9E763FD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_23E7CF5D461428EB24ABC1A58C6EB60E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPA_Chicken_V2_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_23E7CF5D461428EB24ABC1A58C6EB60E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_23E7CF5D461428EB24ABC1A58C6EB60E");
		
		UBPA_Chicken_V2_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Chicken_V2_AnimGraphNode_BlendListByBool_23E7CF5D461428EB24ABC1A58C6EB60E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Chicken_V2_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.BlueprintUpdateAnimation");
		
		UBPA_Chicken_V2_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.Montage blending out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPA_Chicken_V2_C::Montage_blending_out(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.Montage blending out");
		
		UBPA_Chicken_V2_C_Montage_blending_out_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.Ragdoll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Chicken_V2_C::Ragdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.Ragdoll");
		
		UBPA_Chicken_V2_C_Ragdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.CustomEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Chicken_V2_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.CustomEvent");
		
		UBPA_Chicken_V2_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Chicken_V2_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.CustomEvent_2");
		
		UBPA_Chicken_V2_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPA_Chicken_V2_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.BlueprintInitializeAnimation");
		
		UBPA_Chicken_V2_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.Do Ragdoll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Chicken_V2_C::Do_Ragdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.Do Ragdoll");
		
		UBPA_Chicken_V2_C_Do_Ragdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimNotify_idle_end
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Chicken_V2_C::AnimNotify_idle_end()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimNotify_idle_end");
		
		UBPA_Chicken_V2_C_AnimNotify_idle_end_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimNotify_death_ragdoll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPA_Chicken_V2_C::AnimNotify_death_ragdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.AnimNotify_death_ragdoll");
		
		UBPA_Chicken_V2_C_AnimNotify_death_ragdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Chicken_V2.BPA_Chicken_V2_C.ExecuteUbergraph_BPA_Chicken_V2
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Chicken_V2_C::ExecuteUbergraph_BPA_Chicken_V2(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Chicken_V2.BPA_Chicken_V2_C.ExecuteUbergraph_BPA_Chicken_V2");
		
		UBPA_Chicken_V2_C_ExecuteUbergraph_BPA_Chicken_V2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPA_Chicken_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_Chicken_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Chicken_V2.BPA_Chicken_V2_C");
		return ptr;
	}

}


