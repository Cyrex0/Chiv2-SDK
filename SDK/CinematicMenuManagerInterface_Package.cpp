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
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestSpecificHint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        HintKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::RequestSpecificHint(const class FName& HintKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestSpecificHint");
		
		UCinematicMenuManagerInterface_C_RequestSpecificHint_Params params {};
		params.HintKey = HintKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestRandomHint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Chance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHintType                                      HintKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHintInputType                                 HintInputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::RequestRandomHint(float Chance, TBL_EHintType HintKey, TBL_EHintInputType HintInputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestRandomHint");
		
		UCinematicMenuManagerInterface_C_RequestRandomHint_Params params {};
		params.Chance = Chance;
		params.HintKey = HintKey;
		params.HintInputType = HintInputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.GetFadeDuration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::GetFadeDuration(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.GetFadeDuration");
		
		UCinematicMenuManagerInterface_C_GetFadeDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Snap Fade In
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicMenuManagerInterface_C::Snap_Fade_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Snap Fade In");
		
		UCinematicMenuManagerInterface_C_Snap_Fade_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Add Cinematic Mode Change Listener
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicMenuManagerInterface_C::Add_Cinematic_Mode_Change_Listener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Add Cinematic Mode Change Listener");
		
		UCinematicMenuManagerInterface_C_Add_Cinematic_Mode_Change_Listener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release fade out (fade in)
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::Release_fade_out__fade_in_(class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release fade out (fade in)");
		
		UCinematicMenuManagerInterface_C_Release_fade_out__fade_in__Params params {};
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request fade out
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::Request_fade_out(class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request fade out");
		
		UCinematicMenuManagerInterface_C_Request_fade_out_Params params {};
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic HUD mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		CinematicMenuMode_ECinematicMenuMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::Release_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic HUD mode");
		
		UCinematicMenuManagerInterface_C_Release_cinematic_HUD_mode_Params params {};
		params.Requester = Requester;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic HUD mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		CinematicMenuMode_ECinematicMenuMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::Request_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic HUD mode");
		
		UCinematicMenuManagerInterface_C_Request_cinematic_HUD_mode_Params params {};
		params.Requester = Requester;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic bars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::Release_cinematic_bars(class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic bars");
		
		UCinematicMenuManagerInterface_C_Release_cinematic_bars_Params params {};
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic bars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		CinematicBarsMode_ECinematicBarsMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::Request_cinematic_bars(class UObject* Requester, CinematicBarsMode_ECinematicBarsMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic bars");
		
		UCinematicMenuManagerInterface_C_Request_cinematic_bars_Params params {};
		params.Requester = Requester;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Remove Cinematic Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::Remove_Cinematic_Widget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Remove Cinematic Widget");
		
		UCinematicMenuManagerInterface_C_Remove_Cinematic_Widget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Push Cinematic Widget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Widget_class                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicMenuManagerInterface_C::Push_Cinematic_Widget(class UClass* Widget_class, class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Push Cinematic Widget");
		
		UCinematicMenuManagerInterface_C_Push_Cinematic_Widget_Params params {};
		params.Widget_class = Widget_class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCinematicMenuManagerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicMenuManagerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CinematicMenuManagerInterface.CinematicMenuManagerInterface_C");
		return ptr;
	}

}


