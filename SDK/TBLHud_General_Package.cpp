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
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.IsScoreboardOpen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATBLHud_General_C::IsScoreboardOpen(bool* bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.IsScoreboardOpen");
		
		ATBLHud_General_C_IsScoreboardOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsOpen != nullptr)
			*bIsOpen = params.bIsOpen;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.CanHideRadialVoImmediately
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsGamePad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATBLHud_General_C::CanHideRadialVoImmediately(bool IsGamePad, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.CanHideRadialVoImmediately");
		
		ATBLHud_General_C_CanHideRadialVoImmediately_Params params {};
		params.IsGamePad = IsGamePad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.ShouldShowRadialMenus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATBLHud_General_C::ShouldShowRadialMenus(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.ShouldShowRadialMenus");
		
		ATBLHud_General_C_ShouldShowRadialMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.DismissRadials
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::DismissRadials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.DismissRadials");
		
		ATBLHud_General_C_DismissRadials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.ConvertDoubleKeyToVOOption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                NewKey                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::ConvertDoubleKeyToVOOption(int Key, int* NewKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.ConvertDoubleKeyToVOOption");
		
		ATBLHud_General_C_ConvertDoubleKeyToVOOption_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewKey != nullptr)
			*NewKey = params.NewKey;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.VOOptionExpired
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::VOOptionExpired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.VOOptionExpired");
		
		ATBLHud_General_C_VOOptionExpired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.HandleVOOption
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                VOOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::HandleVOOption(int VOOption)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.HandleVOOption");
		
		ATBLHud_General_C_HandleVOOption_Params params {};
		params.VOOption = VOOption;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16");
		
		ATBLHud_General_C_InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15");
		
		ATBLHud_General_C_InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_SelectClass_K2Node_InputActionEvent_14
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_SelectClass_K2Node_InputActionEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_SelectClass_K2Node_InputActionEvent_14");
		
		ATBLHud_General_C_InpActEvt_SelectClass_K2Node_InputActionEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_Five_K2Node_InputKeyEvent_12
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_Five_K2Node_InputKeyEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_Five_K2Node_InputKeyEvent_12");
		
		ATBLHud_General_C_InpActEvt_Five_K2Node_InputKeyEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_Six_K2Node_InputKeyEvent_11
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_Six_K2Node_InputKeyEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_Six_K2Node_InputKeyEvent_11");
		
		ATBLHud_General_C_InpActEvt_Six_K2Node_InputKeyEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_Seven_K2Node_InputKeyEvent_10
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_Seven_K2Node_InputKeyEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_Seven_K2Node_InputKeyEvent_10");
		
		ATBLHud_General_C_InpActEvt_Seven_K2Node_InputKeyEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_Eight_K2Node_InputKeyEvent_9
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_Eight_K2Node_InputKeyEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_Eight_K2Node_InputKeyEvent_9");
		
		ATBLHud_General_C_InpActEvt_Eight_K2Node_InputKeyEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_Nine_K2Node_InputKeyEvent_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_Nine_K2Node_InputKeyEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_Nine_K2Node_InputKeyEvent_8");
		
		ATBLHud_General_C_InpActEvt_Nine_K2Node_InputKeyEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_Zero_K2Node_InputKeyEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_Zero_K2Node_InputKeyEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_Zero_K2Node_InputKeyEvent_7");
		
		ATBLHud_General_C_InpActEvt_Zero_K2Node_InputKeyEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_Three_K2Node_InputKeyEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_Three_K2Node_InputKeyEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_Three_K2Node_InputKeyEvent_6");
		
		ATBLHud_General_C_InpActEvt_Three_K2Node_InputKeyEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_Four_K2Node_InputKeyEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_Four_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_Four_K2Node_InputKeyEvent_5");
		
		ATBLHud_General_C_InpActEvt_Four_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13");
		
		ATBLHud_General_C_InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12");
		
		ATBLHud_General_C_InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11");
		
		ATBLHud_General_C_InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10");
		
		ATBLHud_General_C_InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_One_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_One_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_One_K2Node_InputKeyEvent_4");
		
		ATBLHud_General_C_InpActEvt_One_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_Two_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_Two_K2Node_InputKeyEvent_3");
		
		ATBLHud_General_C_InpActEvt_Two_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9");
		
		ATBLHud_General_C_InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8");
		
		ATBLHud_General_C_InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7");
		
		ATBLHud_General_C_InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6");
		
		ATBLHud_General_C_InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_DebugMacros_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_5");
		
		ATBLHud_General_C_InpActEvt_DebugMacros_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_DebugMacros_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_DebugMacros_K2Node_InputActionEvent_4");
		
		ATBLHud_General_C_InpActEvt_DebugMacros_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_2");
		
		ATBLHud_General_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1");
		
		ATBLHud_General_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowControlMap_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_ShowControlMap_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_ShowControlMap_K2Node_InputActionEvent_3");
		
		ATBLHud_General_C_InpActEvt_ShowControlMap_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_RadialInventory_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_2");
		
		ATBLHud_General_C_InpActEvt_RadialInventory_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::InpActEvt_RadialInventory_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InpActEvt_RadialInventory_K2Node_InputActionEvent_1");
		
		ATBLHud_General_C_InpActEvt_RadialInventory_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATBLHud_General_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.ReceiveBeginPlay");
		
		ATBLHud_General_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.ShowTeamSelectScreen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bGameStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATBLHud_General_C::ShowTeamSelectScreen(bool bGameStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.ShowTeamSelectScreen");
		
		ATBLHud_General_C_ShowTeamSelectScreen_Params params {};
		params.bGameStart = bGameStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.ShowIngameMenu
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::ShowIngameMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.ShowIngameMenu");
		
		ATBLHud_General_C_ShowIngameMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.ShowLoadoutScreen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::ShowLoadoutScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.ShowLoadoutScreen");
		
		ATBLHud_General_C_ShowLoadoutScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.OnTeamChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::OnTeamChanged_Event_1(class ATBLTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.OnTeamChanged_Event_1");
		
		ATBLHud_General_C_OnTeamChanged_Event_1_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.OnPossessedPawn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::OnPossessedPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.OnPossessedPawn");
		
		ATBLHud_General_C_OnPossessedPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.OnDeathRecapReplicated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::OnDeathRecapReplicated_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.OnDeathRecapReplicated_Event_1");
		
		ATBLHud_General_C_OnDeathRecapReplicated_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.OnMatchWonBy_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Victor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::OnMatchWonBy_Event_1(TBL_EFaction Victor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.OnMatchWonBy_Event_1");
		
		ATBLHud_General_C_OnMatchWonBy_Event_1_Params params {};
		params.Victor = Victor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Released
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::Emote_Gamepad_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Released");
		
		ATBLHud_General_C_Emote_Gamepad_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.CloseEmoteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::CloseEmoteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.CloseEmoteMenu");
		
		ATBLHud_General_C_CloseEmoteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Personal                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATBLHud_General_C::Emote_Gamepad_Pressed(const struct FKey& Key, bool Personal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.Emote_Gamepad_Pressed");
		
		ATBLHud_General_C_Emote_Gamepad_Pressed_Params params {};
		params.Key = Key;
		params.Personal = Personal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.SpectateAndHideHUD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::SpectateAndHideHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.SpectateAndHideHUD");
		
		ATBLHud_General_C_SpectateAndHideHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.CloseRadialInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::CloseRadialInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.CloseRadialInventory");
		
		ATBLHud_General_C_CloseRadialInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InGameMenuReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::InGameMenuReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InGameMenuReleased");
		
		ATBLHud_General_C_InGameMenuReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.AfterTimerShowMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::AfterTimerShowMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.AfterTimerShowMenu");
		
		ATBLHud_General_C_AfterTimerShowMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.PS4TouchpadPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::PS4TouchpadPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.PS4TouchpadPressed");
		
		ATBLHud_General_C_PS4TouchpadPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.StartRadialVOTimer_PC
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::StartRadialVOTimer_PC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.StartRadialVOTimer_PC");
		
		ATBLHud_General_C_StartRadialVOTimer_PC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.CustomEvent_1");
		
		ATBLHud_General_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.GamepadShowEmoteWheel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATBLHud_General_C::GamepadShowEmoteWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.GamepadShowEmoteWheel");
		
		ATBLHud_General_C_GamepadShowEmoteWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.GamepadHideEmoteWheel
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATBLHud_General_C::GamepadHideEmoteWheel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.GamepadHideEmoteWheel");
		
		ATBLHud_General_C_GamepadHideEmoteWheel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InventoryPressedTimerFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::InventoryPressedTimerFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InventoryPressedTimerFinished");
		
		ATBLHud_General_C_InventoryPressedTimerFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.HideEmoteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsGamePad                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATBLHud_General_C::HideEmoteMenu(bool IsGamePad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.HideEmoteMenu");
		
		ATBLHud_General_C_HideEmoteMenu_Params params {};
		params.IsGamePad = IsGamePad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.OnGamepadShowKeymapInputComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::OnGamepadShowKeymapInputComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.OnGamepadShowKeymapInputComplete");
		
		ATBLHud_General_C_OnGamepadShowKeymapInputComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.Scoreboard Input Timer Finished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::Scoreboard_Input_Timer_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.Scoreboard Input Timer Finished");
		
		ATBLHud_General_C_Scoreboard_Input_Timer_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.InGameMenuPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATBLHud_General_C::InGameMenuPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.InGameMenuPressed");
		
		ATBLHud_General_C_InGameMenuPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.ExecuteUbergraph_TBLHud_General
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::ExecuteUbergraph_TBLHud_General(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.ExecuteUbergraph_TBLHud_General");
		
		ATBLHud_General_C_ExecuteUbergraph_TBLHud_General_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TBLHud_General.TBLHud_General_C.NumRowKeyUp__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATBLHud_General_C::NumRowKeyUp__DelegateSignature(int Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TBLHud_General.TBLHud_General_C.NumRowKeyUp__DelegateSignature");
		
		ATBLHud_General_C_NumRowKeyUp__DelegateSignature_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATBLHud_General_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATBLHud_General_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TBLHud_General.TBLHud_General_C");
		return ptr;
	}

}


