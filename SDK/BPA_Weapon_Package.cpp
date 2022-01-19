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
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBPA_Weapon_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.AnimGraph");
		
		UBPA_Weapon_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnNotifyEnd_5F65EF304857BAD353FC03AA3A48AE87
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnNotifyEnd_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnNotifyEnd_5F65EF304857BAD353FC03AA3A48AE87");
		
		UBPA_Weapon_C_OnNotifyEnd_5F65EF304857BAD353FC03AA3A48AE87_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnNotifyBegin_5F65EF304857BAD353FC03AA3A48AE87
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnNotifyBegin_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnNotifyBegin_5F65EF304857BAD353FC03AA3A48AE87");
		
		UBPA_Weapon_C_OnNotifyBegin_5F65EF304857BAD353FC03AA3A48AE87_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnInterrupted_5F65EF304857BAD353FC03AA3A48AE87
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnInterrupted_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnInterrupted_5F65EF304857BAD353FC03AA3A48AE87");
		
		UBPA_Weapon_C_OnInterrupted_5F65EF304857BAD353FC03AA3A48AE87_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnBlendOut_5F65EF304857BAD353FC03AA3A48AE87
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnBlendOut_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnBlendOut_5F65EF304857BAD353FC03AA3A48AE87");
		
		UBPA_Weapon_C_OnBlendOut_5F65EF304857BAD353FC03AA3A48AE87_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnCompleted_5F65EF304857BAD353FC03AA3A48AE87
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnCompleted_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnCompleted_5F65EF304857BAD353FC03AA3A48AE87");
		
		UBPA_Weapon_C_OnCompleted_5F65EF304857BAD353FC03AA3A48AE87_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnNotifyEnd_0D37C2FD43EE4809B08F48A3EF3BE365
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnNotifyEnd_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnNotifyEnd_0D37C2FD43EE4809B08F48A3EF3BE365");
		
		UBPA_Weapon_C_OnNotifyEnd_0D37C2FD43EE4809B08F48A3EF3BE365_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnNotifyBegin_0D37C2FD43EE4809B08F48A3EF3BE365
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnNotifyBegin_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnNotifyBegin_0D37C2FD43EE4809B08F48A3EF3BE365");
		
		UBPA_Weapon_C_OnNotifyBegin_0D37C2FD43EE4809B08F48A3EF3BE365_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnInterrupted_0D37C2FD43EE4809B08F48A3EF3BE365
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnInterrupted_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnInterrupted_0D37C2FD43EE4809B08F48A3EF3BE365");
		
		UBPA_Weapon_C_OnInterrupted_0D37C2FD43EE4809B08F48A3EF3BE365_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnBlendOut_0D37C2FD43EE4809B08F48A3EF3BE365
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnBlendOut_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnBlendOut_0D37C2FD43EE4809B08F48A3EF3BE365");
		
		UBPA_Weapon_C_OnBlendOut_0D37C2FD43EE4809B08F48A3EF3BE365_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.OnCompleted_0D37C2FD43EE4809B08F48A3EF3BE365
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::OnCompleted_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.OnCompleted_0D37C2FD43EE4809B08F48A3EF3BE365");
		
		UBPA_Weapon_C_OnCompleted_0D37C2FD43EE4809B08F48A3EF3BE365_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_322C0E4248B876757229F28A45D42E2E
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPA_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_322C0E4248B876757229F28A45D42E2E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_322C0E4248B876757229F28A45D42E2E");
		
		UBPA_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_322C0E4248B876757229F28A45D42E2E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_E330FA0C4EC5291710335DB6D41528ED
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPA_Weapon_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_E330FA0C4EC5291710335DB6D41528ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_E330FA0C4EC5291710335DB6D41528ED");
		
		UBPA_Weapon_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_E330FA0C4EC5291710335DB6D41528ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.BlueprintUpdateAnimation");
		
		UBPA_Weapon_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPA_Weapon_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.BlueprintInitializeAnimation");
		
		UBPA_Weapon_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.EventOnCombatStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::EventOnCombatStateChanged(const class FName& PreviousState, const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.EventOnCombatStateChanged");
		
		UBPA_Weapon_C_EventOnCombatStateChanged_Params params {};
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPA_Weapon.BPA_Weapon_C.ExecuteUbergraph_BPA_Weapon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPA_Weapon_C::ExecuteUbergraph_BPA_Weapon(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_Weapon.BPA_Weapon_C.ExecuteUbergraph_BPA_Weapon");
		
		UBPA_Weapon_C_ExecuteUbergraph_BPA_Weapon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPA_Weapon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_Weapon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPA_Weapon.BPA_Weapon_C");
		return ptr;
	}

}


