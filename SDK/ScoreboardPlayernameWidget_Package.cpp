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
	 * 		Name   -> Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.PlayFadeInAnimation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		UMG_EUMGSequencePlayMode                           Play_Mode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScoreboardPlayernameWidget_C::PlayFadeInAnimation(float Time, UMG_EUMGSequencePlayMode Play_Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.PlayFadeInAnimation");
		
		UScoreboardPlayernameWidget_C_PlayFadeInAnimation_Params params {};
		params.Time = Time;
		params.Play_Mode = Play_Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UScoreboardPlayernameWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.Construct");
		
		UScoreboardPlayernameWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.Initialize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScoreboardPlayernameWidget_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.Initialize");
		
		UScoreboardPlayernameWidget_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.InvalidateCache
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UScoreboardPlayernameWidget_C::InvalidateCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.InvalidateCache");
		
		UScoreboardPlayernameWidget_C_InvalidateCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UScoreboardPlayernameWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.PreConstruct");
		
		UScoreboardPlayernameWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.ExecuteUbergraph_ScoreboardPlayernameWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UScoreboardPlayernameWidget_C::ExecuteUbergraph_ScoreboardPlayernameWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C.ExecuteUbergraph_ScoreboardPlayernameWidget");
		
		UScoreboardPlayernameWidget_C_ExecuteUbergraph_ScoreboardPlayernameWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UScoreboardPlayernameWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScoreboardPlayernameWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScoreboardPlayernameWidget.ScoreboardPlayernameWidget_C");
		return ptr;
	}

}


