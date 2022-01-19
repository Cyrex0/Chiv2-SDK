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
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GetActionAtIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UTutorialCalloutAction_C*                    Action                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialButtonCalloutWidget_C::GetActionAtIndex(int Index, bool IsController, class UTutorialCalloutAction_C** Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GetActionAtIndex");
		
		UTutorialButtonCalloutWidget_C_GetActionAtIndex_Params params {};
		params.Index = Index;
		params.IsController = IsController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Action != nullptr)
			*Action = params.Action;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InputModeChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialButtonCalloutWidget_C::InputModeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InputModeChanged");
		
		UTutorialButtonCalloutWidget_C_InputModeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.CreateModifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TutorialCalloutModifier_ETutorialCalloutModifier   Modifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialButtonCalloutWidget_C::CreateModifier(TutorialCalloutModifier_ETutorialCalloutModifier Modifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.CreateModifier");
		
		UTutorialButtonCalloutWidget_C_CreateModifier_Params params {};
		params.Modifier = Modifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTutorialButtonCalloutWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.Construct");
		
		UTutorialButtonCalloutWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ClearCallouts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialButtonCalloutWidget_C::ClearCallouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ClearCallouts");
		
		UTutorialButtonCalloutWidget_C_ClearCallouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.AddCallout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTutorialCalloutActionStruct                CalloutParams                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsController                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialButtonCalloutWidget_C::AddCallout(const struct FTutorialCalloutActionStruct& CalloutParams, bool IsController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.AddCallout");
		
		UTutorialButtonCalloutWidget_C_AddCallout_Params params {};
		params.CalloutParams = CalloutParams;
		params.IsController = IsController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithCallouts
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTutorialCalloutActionStruct>        KeyboardCallouts                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<struct FTutorialCalloutActionStruct>        ControllerCallouts                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UTutorialButtonCalloutWidget_C::InitWithCallouts(TArray<struct FTutorialCalloutActionStruct> KeyboardCallouts, TArray<struct FTutorialCalloutActionStruct> ControllerCallouts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithCallouts");
		
		UTutorialButtonCalloutWidget_C_InitWithCallouts_Params params {};
		params.KeyboardCallouts = KeyboardCallouts;
		params.ControllerCallouts = ControllerCallouts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GamePadInputModeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialButtonCalloutWidget_C::GamePadInputModeChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.GamePadInputModeChanged");
		
		UTutorialButtonCalloutWidget_C_GamePadInputModeChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightNextAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialButtonCalloutWidget_C::HighlightNextAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightNextAction");
		
		UTutorialButtonCalloutWidget_C_HighlightNextAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightActionAtIndex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialButtonCalloutWidget_C::HighlightActionAtIndex(int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.HighlightActionAtIndex");
		
		UTutorialButtonCalloutWidget_C_HighlightActionAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTutorialButtonCalloutWidget_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1");
		
		UTutorialButtonCalloutWidget_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithSavedCallouts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTutorialButtonCalloutWidget_C::InitWithSavedCallouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.InitWithSavedCallouts");
		
		UTutorialButtonCalloutWidget_C_InitWithSavedCallouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.FadeUsableAtIndex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Fade                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTutorialButtonCalloutWidget_C::FadeUsableAtIndex(int Index, bool Fade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.FadeUsableAtIndex");
		
		UTutorialButtonCalloutWidget_C_FadeUsableAtIndex_Params params {};
		params.Index = Index;
		params.Fade = Fade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ExecuteUbergraph_TutorialButtonCalloutWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialButtonCalloutWidget_C::ExecuteUbergraph_TutorialButtonCalloutWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C.ExecuteUbergraph_TutorialButtonCalloutWidget");
		
		UTutorialButtonCalloutWidget_C_ExecuteUbergraph_TutorialButtonCalloutWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTutorialButtonCalloutWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialButtonCalloutWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialButtonCalloutWidget.TutorialButtonCalloutWidget_C");
		return ptr;
	}

}


