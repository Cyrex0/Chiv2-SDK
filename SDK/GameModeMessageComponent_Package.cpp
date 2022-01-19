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
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.SendFFA MatchEndedMessages
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             Player_Victor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::SendFFA_MatchEndedMessages(class ATBLPlayerState* Player_Victor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.SendFFA MatchEndedMessages");
		
		UGameModeMessageComponent_C_SendFFA_MatchEndedMessages_Params params {};
		params.Player_Victor = Player_Victor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.RemovePreviousStageContextVos
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGameModeMessageComponent_C::RemovePreviousStageContextVos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.RemovePreviousStageContextVos");
		
		UGameModeMessageComponent_C_RemovePreviousStageContextVos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.AppendAndGetTDMMessages
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              TDMPercentMessages                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<class FString>                              TDMTicketsMessage                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<struct FGameModeMessageTable>               Messages                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::AppendAndGetTDMMessages(TArray<class FString>* TDMPercentMessages, TArray<class FString>* TDMTicketsMessage, TArray<struct FGameModeMessageTable>* Messages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.AppendAndGetTDMMessages");
		
		UGameModeMessageComponent_C_AppendAndGetTDMMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TDMPercentMessages != nullptr)
			*TDMPercentMessages = params.TDMPercentMessages;
		if (TDMTicketsMessage != nullptr)
			*TDMTicketsMessage = params.TDMTicketsMessage;
		if (Messages != nullptr)
			*Messages = params.Messages;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsPercentText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                TicketsRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                InitialTickets                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              EventTags                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetTDMStageTicketsPercentText(int TicketsRemaining, int InitialTickets, TBL_EFaction Faction, TArray<class FString>* EventTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsPercentText");
		
		UGameModeMessageComponent_C_GetTDMStageTicketsPercentText_Params params {};
		params.TicketsRemaining = TicketsRemaining;
		params.InitialTickets = InitialTickets;
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventTags != nullptr)
			*EventTags = params.EventTags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.NewStageStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGameModeMessageComponent_C::NewStageStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.NewStageStarted");
		
		UGameModeMessageComponent_C_NewStageStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.BroadcastMessages
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FGameModeMessageTable>               GameModeMessages                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::BroadcastMessages(TArray<struct FGameModeMessageTable>* GameModeMessages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.BroadcastMessages");
		
		UGameModeMessageComponent_C_BroadcastMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameModeMessages != nullptr)
			*GameModeMessages = params.GameModeMessages;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.TriggerStageEndingMusic
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UGameModeMessageComponent_C::TriggerStageEndingMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.TriggerStageEndingMusic");
		
		UGameModeMessageComponent_C_TriggerStageEndingMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingScoreComplete
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NewScorePercentage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::HandleStageNearingScoreComplete(int NewScorePercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingScoreComplete");
		
		UGameModeMessageComponent_C_HandleStageNearingScoreComplete_Params params {};
		params.NewScorePercentage = NewScorePercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingTimeOut
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                MinutesRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::HandleStageNearingTimeOut(int MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.HandleStageNearingTimeOut");
		
		UGameModeMessageComponent_C_HandleStageNearingTimeOut_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.FormatFFAText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FGameModeMessageTable>               GameModeMessages                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Kills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                KillsForVictory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGameModeMessageTable>               FormattedGameModeMessages                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::FormatFFAText(TArray<struct FGameModeMessageTable>* GameModeMessages, class ATBLPlayerState* PlayerState, int Kills, int KillsForVictory, TArray<struct FGameModeMessageTable>* FormattedGameModeMessages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.FormatFFAText");
		
		UGameModeMessageComponent_C_FormatFFAText_Params params {};
		params.PlayerState = PlayerState;
		params.Kills = Kills;
		params.KillsForVictory = KillsForVictory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GameModeMessages != nullptr)
			*GameModeMessages = params.GameModeMessages;
		if (FormattedGameModeMessages != nullptr)
			*FormattedGameModeMessages = params.FormattedGameModeMessages;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.SetStageLastScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::SetStageLastScore(int Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.SetStageLastScore");
		
		UGameModeMessageComponent_C_SetStageLastScore_Params params {};
		params.Score = Score;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetGameModeMessages
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              EventTags                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<struct FGameModeMessageTable>               Messages                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetGameModeMessages(TArray<class FString>* EventTags, TArray<struct FGameModeMessageTable>* Messages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetGameModeMessages");
		
		UGameModeMessageComponent_C_GetGameModeMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventTags != nullptr)
			*EventTags = params.EventTags;
		if (Messages != nullptr)
			*Messages = params.Messages;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageLastScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                LastScore                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetStageLastScore(int* LastScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageLastScore");
		
		UGameModeMessageComponent_C_GetStageLastScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LastScore != nullptr)
			*LastScore = params.LastScore;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageMinutesRemaingText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                MinutesRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              EventTags                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetStageMinutesRemaingText(int MinutesRemaining, TArray<class FString>* EventTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageMinutesRemaingText");
		
		UGameModeMessageComponent_C_GetStageMinutesRemaingText_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventTags != nullptr)
			*EventTags = params.EventTags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                TicketsRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                InitialTickets                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              EventTags                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetTDMStageTicketsText(int TicketsRemaining, int InitialTickets, TBL_EFaction Faction, TArray<class FString>* EventTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetTDMStageTicketsText");
		
		UGameModeMessageComponent_C_GetTDMStageTicketsText_Params params {};
		params.TicketsRemaining = TicketsRemaining;
		params.InitialTickets = InitialTickets;
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventTags != nullptr)
			*EventTags = params.EventTags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetFactionVictoryText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EFaction                                       VictoryFaction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              EventTags                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetFactionVictoryText(TBL_EFaction VictoryFaction, TArray<class FString>* EventTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetFactionVictoryText");
		
		UGameModeMessageComponent_C_GetFactionVictoryText_Params params {};
		params.VictoryFaction = VictoryFaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventTags != nullptr)
			*EventTags = params.EventTags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetDefenderVictoryText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              EventTags                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetDefenderVictoryText(TArray<class FString>* EventTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetDefenderVictoryText");
		
		UGameModeMessageComponent_C_GetDefenderVictoryText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventTags != nullptr)
			*EventTags = params.EventTags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetAttackerVictoryText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              EventTags                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetAttackerVictoryText(TArray<class FString>* EventTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetAttackerVictoryText");
		
		UGameModeMessageComponent_C_GetAttackerVictoryText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventTags != nullptr)
			*EventTags = params.EventTags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetScoreStageScoreRows
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FGameModeMessageTable>               Messages                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetScoreStageScoreRows(int Percentage, TArray<struct FGameModeMessageTable>* Messages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetScoreStageScoreRows");
		
		UGameModeMessageComponent_C_GetScoreStageScoreRows_Params params {};
		params.Percentage = Percentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Messages != nullptr)
			*Messages = params.Messages;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.QueueGameModeMessages
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FGameModeMessageTable>               Messages                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::QueueGameModeMessages(TArray<struct FGameModeMessageTable>* Messages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.QueueGameModeMessages");
		
		UGameModeMessageComponent_C_QueueGameModeMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Messages != nullptr)
			*Messages = params.Messages;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageBeginText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FString>                              EventTags                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::GetStageBeginText(TArray<class FString>* EventTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.GetStageBeginText");
		
		UGameModeMessageComponent_C_GetStageBeginText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EventTags != nullptr)
			*EventTags = params.EventTags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGameModeMessageComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveBeginPlay");
		
		UGameModeMessageComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.ReceiveTick");
		
		UGameModeMessageComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.Started New Stage_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGameModeMessageComponent_C::Started_New_Stage_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.Started New Stage_Event_1");
		
		UGameModeMessageComponent_C_Started_New_Stage_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.On Score Changed_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                MaxScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::On_Score_Changed_Event_1(int CurrentScore, int MaxScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.On Score Changed_Event_1");
		
		UGameModeMessageComponent_C_On_Score_Changed_Event_1_Params params {};
		params.CurrentScore = CurrentScore;
		params.MaxScore = MaxScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.On Tickets Changed_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                NewTickets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::On_Tickets_Changed_Event_1(TBL_EFaction Faction, int Delta, int NewTickets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.On Tickets Changed_Event_1");
		
		UGameModeMessageComponent_C_On_Tickets_Changed_Event_1_Params params {};
		params.Faction = Faction;
		params.Delta = Delta;
		params.NewTickets = NewTickets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.MinutesRemaining_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                MinutesRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::MinutesRemaining_Event_1(int MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.MinutesRemaining_Event_1");
		
		UGameModeMessageComponent_C_MinutesRemaining_Event_1_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.KillLeaderUpdated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Kills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                MaxScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::KillLeaderUpdated_Event_1(class ATBLPlayerState* PlayerState, int Kills, int MaxScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.KillLeaderUpdated_Event_1");
		
		UGameModeMessageComponent_C_KillLeaderUpdated_Event_1_Params params {};
		params.PlayerState = PlayerState;
		params.Kills = Kills;
		params.MaxScore = MaxScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.MatchWaitingToStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGameModeMessageComponent_C::MatchWaitingToStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.MatchWaitingToStart");
		
		UGameModeMessageComponent_C_MatchWaitingToStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.Interface_QueueGameModeMessages
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FGameModeMessageTable>               Messages                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::Interface_QueueGameModeMessages(TArray<struct FGameModeMessageTable> Messages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.Interface_QueueGameModeMessages");
		
		UGameModeMessageComponent_C_Interface_QueueGameModeMessages_Params params {};
		params.Messages = Messages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.FFAPlayerVictory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::FFAPlayerVictory(class ATBLPlayerState* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.FFAPlayerVictory");
		
		UGameModeMessageComponent_C_FFAPlayerVictory_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.OnMatchWonBy_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Victor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::OnMatchWonBy_Event_1(TBL_EFaction Victor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.OnMatchWonBy_Event_1");
		
		UGameModeMessageComponent_C_OnMatchWonBy_Event_1_Params params {};
		params.Victor = Victor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageComponent.GameModeMessageComponent_C.ExecuteUbergraph_GameModeMessageComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponent_C::ExecuteUbergraph_GameModeMessageComponent(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponent.GameModeMessageComponent_C.ExecuteUbergraph_GameModeMessageComponent");
		
		UGameModeMessageComponent_C_ExecuteUbergraph_GameModeMessageComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameModeMessageComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameModeMessageComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameModeMessageComponent.GameModeMessageComponent_C");
		return ptr;
	}

}


