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
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.GetMatchmakingTime
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                TimeInt                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TimeText                                                   (Parm, OutParm)
	 */
	void UMatchmakingStatus_C::GetMatchmakingTime(int* TimeInt, class FText* TimeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.GetMatchmakingTime");
		
		UMatchmakingStatus_C_GetMatchmakingTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeInt != nullptr)
			*TimeInt = params.TimeInt;
		if (TimeText != nullptr)
			*TimeText = params.TimeText;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UMatchmakingStatus_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.OnKeyDown");
		
		UMatchmakingStatus_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.Handle Started or Stopped Matchmaking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is_Matchmaking                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMatchmakingStatus_C::Handle_Started_or_Stopped_Matchmaking(bool Is_Matchmaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.Handle Started or Stopped Matchmaking");
		
		UMatchmakingStatus_C_Handle_Started_or_Stopped_Matchmaking_Params params {};
		params.Is_Matchmaking = Is_Matchmaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.On Is Matchmaking Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsMatchmaking                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMatchmakingStatus_C::On_Is_Matchmaking_Changed(bool bIsMatchmaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.On Is Matchmaking Changed");
		
		UMatchmakingStatus_C_On_Is_Matchmaking_Changed_Params params {};
		params.bIsMatchmaking = bIsMatchmaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMatchmakingStatus_C::MatchmakingStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStarted");
		
		UMatchmakingStatus_C_MatchmakingStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStopped
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMatchmakingStatus_C::MatchmakingStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.MatchmakingStopped");
		
		UMatchmakingStatus_C_MatchmakingStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.CancelMatchmaking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMatchmakingStatus_C::CancelMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.CancelMatchmaking");
		
		UMatchmakingStatus_C_CancelMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.HighlightMatchMaking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMatchmakingStatus_C::HighlightMatchMaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.HighlightMatchMaking");
		
		UMatchmakingStatus_C_HighlightMatchMaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.UnhighlightMatchMaking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMatchmakingStatus_C::UnhighlightMatchMaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.UnhighlightMatchMaking");
		
		UMatchmakingStatus_C_UnhighlightMatchMaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMatchmakingStatus_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.Tick");
		
		UMatchmakingStatus_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMatchmakingStatus_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.OnInitialized");
		
		UMatchmakingStatus_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.OnPartyLeftQueue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMatchmakingStatus_C::OnPartyLeftQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.OnPartyLeftQueue");
		
		UMatchmakingStatus_C_OnPartyLeftQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.OnPartyJoinedQueue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMatchmakingStatus_C::OnPartyJoinedQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.OnPartyJoinedQueue");
		
		UMatchmakingStatus_C_OnPartyJoinedQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMatchmakingStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.Construct");
		
		UMatchmakingStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.EnableMatchmakingWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMatchmakingStatus_C::EnableMatchmakingWidget(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.EnableMatchmakingWidget");
		
		UMatchmakingStatus_C_EnableMatchmakingWidget_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MatchmakingStatus.MatchmakingStatus_C.ExecuteUbergraph_MatchmakingStatus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMatchmakingStatus_C::ExecuteUbergraph_MatchmakingStatus(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MatchmakingStatus.MatchmakingStatus_C.ExecuteUbergraph_MatchmakingStatus");
		
		UMatchmakingStatus_C_ExecuteUbergraph_MatchmakingStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMatchmakingStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchmakingStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MatchmakingStatus.MatchmakingStatus_C");
		return ptr;
	}

}


