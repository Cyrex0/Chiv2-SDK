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
	 * 		Name   -> Function CinematicBars.CinematicBars_C.Handle requests changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicBars_C::Handle_requests_changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicBars.CinematicBars_C.Handle requests changed");
		
		UCinematicBars_C_Handle_requests_changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicBars.CinematicBars_C.FadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicBars_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicBars.CinematicBars_C.FadeIn");
		
		UCinematicBars_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicBars.CinematicBars_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicBars_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicBars.CinematicBars_C.FadeOut");
		
		UCinematicBars_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicBars.CinematicBars_C.Add bar requester
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicBarsMode_ECinematicBarsMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicBars_C::Add_bar_requester(CinematicBarsMode_ECinematicBarsMode Mode, class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicBars.CinematicBars_C.Add bar requester");
		
		UCinematicBars_C_Add_bar_requester_Params params {};
		params.Mode = Mode;
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicBars.CinematicBars_C.Remove bar requester
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicBars_C::Remove_bar_requester(class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicBars.CinematicBars_C.Remove bar requester");
		
		UCinematicBars_C_Remove_bar_requester_Params params {};
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicBars.CinematicBars_C.Update requests soon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCinematicBars_C::Update_requests_soon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicBars.CinematicBars_C.Update requests soon");
		
		UCinematicBars_C_Update_requests_soon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicBars.CinematicBars_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCinematicBars_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicBars.CinematicBars_C.Construct");
		
		UCinematicBars_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicBars.CinematicBars_C.ExecuteUbergraph_CinematicBars
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicBars_C::ExecuteUbergraph_CinematicBars(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicBars.CinematicBars_C.ExecuteUbergraph_CinematicBars");
		
		UCinematicBars_C_ExecuteUbergraph_CinematicBars_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicBars.CinematicBars_C.On Mode Changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicBarsMode_ECinematicBarsMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCinematicBars_C::On_Mode_Changed__DelegateSignature(CinematicBarsMode_ECinematicBarsMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicBars.CinematicBars_C.On Mode Changed__DelegateSignature");
		
		UCinematicBars_C_On_Mode_Changed__DelegateSignature_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCinematicBars_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCinematicBars_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CinematicBars.CinematicBars_C");
		return ptr;
	}

}


