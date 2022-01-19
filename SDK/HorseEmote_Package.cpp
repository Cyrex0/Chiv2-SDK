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
	 * 		Name   -> Function HorseEmote.HorseEmote_C.OnAssemble_HorseEmote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHorseEmote_C::OnAssemble_HorseEmote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseEmote.HorseEmote_C.OnAssemble_HorseEmote");
		
		UHorseEmote_C_OnAssemble_HorseEmote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseEmote.HorseEmote_C.EventEndAnimation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHorseEmote_C::EventEndAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseEmote.HorseEmote_C.EventEndAnimation");
		
		UHorseEmote_C_EventEndAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseEmote.HorseEmote_C.ExecuteUbergraph_HorseEmote
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHorseEmote_C::ExecuteUbergraph_HorseEmote(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseEmote.HorseEmote_C.ExecuteUbergraph_HorseEmote");
		
		UHorseEmote_C_ExecuteUbergraph_HorseEmote_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseEmote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseEmote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseEmote.HorseEmote_C");
		return ptr;
	}

}


