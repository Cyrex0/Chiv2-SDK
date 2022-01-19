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
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFactionVideoOverlay_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.Construct");
		
		UFactionVideoOverlay_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.OnEndReached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFactionVideoOverlay_C::OnEndReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.OnEndReached");
		
		UFactionVideoOverlay_C_OnEndReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.InitialFadeInComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFactionVideoOverlay_C::InitialFadeInComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.InitialFadeInComplete");
		
		UFactionVideoOverlay_C_InitialFadeInComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.FailedPlayMovie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFactionVideoOverlay_C::FailedPlayMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.FailedPlayMovie");
		
		UFactionVideoOverlay_C_FailedPlayMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.MovieLoaded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFactionVideoOverlay_C::MovieLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.MovieLoaded");
		
		UFactionVideoOverlay_C_MovieLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.StartMovie
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFactionVideoOverlay_C::StartMovie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.StartMovie");
		
		UFactionVideoOverlay_C_StartMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.FindSoundComponent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UFactionVideoOverlay_C::FindSoundComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.FindSoundComponent");
		
		UFactionVideoOverlay_C_FindSoundComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFactionVideoOverlay_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.Destruct");
		
		UFactionVideoOverlay_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFactionVideoOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.Tick");
		
		UFactionVideoOverlay_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.ExecuteUbergraph_FactionVideoOverlay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFactionVideoOverlay_C::ExecuteUbergraph_FactionVideoOverlay(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.ExecuteUbergraph_FactionVideoOverlay");
		
		UFactionVideoOverlay_C_ExecuteUbergraph_FactionVideoOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FactionVideoOverlay.FactionVideoOverlay_C.VideoCompleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UFactionVideoOverlay_C::VideoCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FactionVideoOverlay.FactionVideoOverlay_C.VideoCompleted__DelegateSignature");
		
		UFactionVideoOverlay_C_VideoCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFactionVideoOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFactionVideoOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FactionVideoOverlay.FactionVideoOverlay_C");
		return ptr;
	}

}


