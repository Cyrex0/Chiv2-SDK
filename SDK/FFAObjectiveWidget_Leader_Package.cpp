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
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayername
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFFAObjectiveWidget_Leader_C::UpdatePlayername(const class FString& InString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayername");
		
		UFFAObjectiveWidget_Leader_C_UpdatePlayername_Params params {};
		params.InString = InString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.SetupWidth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ExtraWith                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFAObjectiveWidget_Leader_C::SetupWidth(float ExtraWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.SetupWidth");
		
		UFFAObjectiveWidget_Leader_C_SetupWidth_Params params {};
		params.ExtraWith = ExtraWith;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.CompareAgaintsPlayerState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             TestPlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFAObjectiveWidget_Leader_C::CompareAgaintsPlayerState(class ATBLPlayerState* TestPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.CompareAgaintsPlayerState");
		
		UFFAObjectiveWidget_Leader_C_CompareAgaintsPlayerState_Params params {};
		params.TestPlayerState = TestPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdateKillsCounter
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Kills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFAObjectiveWidget_Leader_C::UpdateKillsCounter(int Kills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdateKillsCounter");
		
		UFFAObjectiveWidget_Leader_C_UpdateKillsCounter_Params params {};
		params.Kills = Kills;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.GetLocalPlayerState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             AsTBLPlayer_State                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFAObjectiveWidget_Leader_C::GetLocalPlayerState(class ATBLPlayerState** AsTBLPlayer_State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.GetLocalPlayerState");
		
		UFFAObjectiveWidget_Leader_C_GetLocalPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsTBLPlayer_State != nullptr)
			*AsTBLPlayer_State = params.AsTBLPlayer_State;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayerState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFAObjectiveWidget_Leader_C::UpdatePlayerState(class ATBLPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayerState");
		
		UFFAObjectiveWidget_Leader_C_UpdatePlayerState_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFFAObjectiveWidget_Leader_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.PreConstruct");
		
		UFFAObjectiveWidget_Leader_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UFFAObjectiveWidget_Leader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.Construct");
		
		UFFAObjectiveWidget_Leader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.OnPlayerStateKillsUpdated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Kills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFAObjectiveWidget_Leader_C::OnPlayerStateKillsUpdated_Event_1(class ATBLPlayerState* PlayerState, int Kills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.OnPlayerStateKillsUpdated_Event_1");
		
		UFFAObjectiveWidget_Leader_C_OnPlayerStateKillsUpdated_Event_1_Params params {};
		params.PlayerState = PlayerState;
		params.Kills = Kills;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.ExecuteUbergraph_FFAObjectiveWidget_Leader
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFFAObjectiveWidget_Leader_C::ExecuteUbergraph_FFAObjectiveWidget_Leader(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.ExecuteUbergraph_FFAObjectiveWidget_Leader");
		
		UFFAObjectiveWidget_Leader_C_ExecuteUbergraph_FFAObjectiveWidget_Leader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFFAObjectiveWidget_Leader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFFAObjectiveWidget_Leader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C");
		return ptr;
	}

}


