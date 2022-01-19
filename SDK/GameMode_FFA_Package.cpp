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
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.UpdateGamemodeType
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UGameMode_FFA_C::UpdateGamemodeType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.UpdateGamemodeType");
		
		UGameMode_FFA_C_UpdateGamemodeType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.SetMaxScore
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                MaxScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameMode_FFA_C::SetMaxScore(int MaxScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.SetMaxScore");
		
		UGameMode_FFA_C_SetMaxScore_Params params {};
		params.MaxScore = MaxScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.KillsRemainingMessages
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Tickets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameMode_FFA_C::KillsRemainingMessages(int Tickets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.KillsRemainingMessages");
		
		UGameMode_FFA_C_KillsRemainingMessages_Params params {};
		params.Tickets = Tickets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.ResizeFFAObjectiveWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFFAObjectiveWidget_Leader_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameMode_FFA_C::ResizeFFAObjectiveWidget(class UFFAObjectiveWidget_Leader_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.ResizeFFAObjectiveWidget");
		
		UGameMode_FFA_C_ResizeFFAObjectiveWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.UpdateListOrder
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UGameMode_FFA_C::UpdateListOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.UpdateListOrder");
		
		UGameMode_FFA_C_UpdateListOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.OnPlayerKilled_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameMode_FFA_C::OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.OnPlayerKilled_Event_1");
		
		UGameMode_FFA_C_OnPlayerKilled_Event_1_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameMode_FFA_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.PreConstruct");
		
		UGameMode_FFA_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.SuddenDeath_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGameMode_FFA_C::SuddenDeath_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.SuddenDeath_Event_1");
		
		UGameMode_FFA_C_SuddenDeath_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGameMode_FFA_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.OnInitialized");
		
		UGameMode_FFA_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.FadeTicketMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGameMode_FFA_C::FadeTicketMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.FadeTicketMessage");
		
		UGameMode_FFA_C_FadeTicketMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.MaxScoreUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGameMode_FFA_C::MaxScoreUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.MaxScoreUpdated");
		
		UGameMode_FFA_C_MaxScoreUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameMode_FFA.GameMode_FFA_C.ExecuteUbergraph_GameMode_FFA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameMode_FFA_C::ExecuteUbergraph_GameMode_FFA(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameMode_FFA.GameMode_FFA_C.ExecuteUbergraph_GameMode_FFA");
		
		UGameMode_FFA_C_ExecuteUbergraph_GameMode_FFA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameMode_FFA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameMode_FFA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameMode_FFA.GameMode_FFA_C");
		return ptr;
	}

}


