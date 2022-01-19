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
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.FactionTicketMessages
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Tickets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TDM_C::FactionTicketMessages(TBL_EFaction Faction, int Tickets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.FactionTicketMessages");
		
		UStage_TDM_C_FactionTicketMessages_Params params {};
		params.Faction = Faction;
		params.Tickets = Tickets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.ResizeFFAObjectiveWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFFAObjectiveWidget_Leader_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TDM_C::ResizeFFAObjectiveWidget(class UFFAObjectiveWidget_Leader_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.ResizeFFAObjectiveWidget");
		
		UStage_TDM_C_ResizeFFAObjectiveWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.UpdateListOrder
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TDM_C::UpdateListOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.UpdateListOrder");
		
		UStage_TDM_C_UpdateListOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.Get_MaxScoreText_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UStage_TDM_C::Get_MaxScoreText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.Get_MaxScoreText_Text_1");
		
		UStage_TDM_C_Get_MaxScoreText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.SetTimeObjectiveActorComponent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      StageActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TDM_C::SetTimeObjectiveActorComponent(class AActor* StageActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.SetTimeObjectiveActorComponent");
		
		UStage_TDM_C_SetTimeObjectiveActorComponent_Params params {};
		params.StageActor = StageActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.Get_StageTimeRemaining_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UStage_TDM_C::Get_StageTimeRemaining_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.Get_StageTimeRemaining_Text_1");
		
		UStage_TDM_C_Get_StageTimeRemaining_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.SetScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Agatha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Mason                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TopScoreText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        BottomScoreText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStage_TDM_C::SetScore(float Agatha, float Mason, const class FText& TopScoreText, const class FText& BottomScoreText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.SetScore");
		
		UStage_TDM_C_SetScore_Params params {};
		params.Agatha = Agatha;
		params.Mason = Mason;
		params.TopScoreText = TopScoreText;
		params.BottomScoreText = BottomScoreText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.FactionTicketsChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Tickets                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TDM_C::FactionTicketsChanged(TBL_EFaction Faction, int Tickets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.FactionTicketsChanged");
		
		UStage_TDM_C_FactionTicketsChanged_Params params {};
		params.Faction = Faction;
		params.Tickets = Tickets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.K2_OnAssignedToActor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TDM_C::K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.K2_OnAssignedToActor");
		
		UStage_TDM_C_K2_OnAssignedToActor_Params params {};
		params.Actor = Actor;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.K2_OnReturnedToPool
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UStage_TDM_C::K2_OnReturnedToPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.K2_OnReturnedToPool");
		
		UStage_TDM_C_K2_OnReturnedToPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.Client Tickets Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TDM_C::Client_Tickets_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.Client Tickets Changed");
		
		UStage_TDM_C_Client_Tickets_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UStage_TDM_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.Construct");
		
		UStage_TDM_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.ReRun Constructed Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TDM_C::ReRun_Constructed_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.ReRun Constructed Event");
		
		UStage_TDM_C_ReRun_Constructed_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.RedTargetKilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Targets_Left                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TDM_C::RedTargetKilled(int Targets_Left)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.RedTargetKilled");
		
		UStage_TDM_C_RedTargetKilled_Params params {};
		params.Targets_Left = Targets_Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.BlueTargetKilled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Targets_Left                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TDM_C::BlueTargetKilled(int Targets_Left)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.BlueTargetKilled");
		
		UStage_TDM_C_BlueTargetKilled_Params params {};
		params.Targets_Left = Targets_Left;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.TDMSuddenDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TDM_C::TDMSuddenDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.TDMSuddenDeath");
		
		UStage_TDM_C_TDMSuddenDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.OnMatchEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TDM_C::OnMatchEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.OnMatchEnded");
		
		UStage_TDM_C_OnMatchEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.On Tickets Changed_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                New_Tickets                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TDM_C::On_Tickets_Changed_Event_1(TBL_EFaction Faction, int Delta, int New_Tickets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.On Tickets Changed_Event_1");
		
		UStage_TDM_C_On_Tickets_Changed_Event_1_Params params {};
		params.Faction = Faction;
		params.Delta = Delta;
		params.New_Tickets = New_Tickets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.FadeTicketMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TDM_C::FadeTicketMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.FadeTicketMessage");
		
		UStage_TDM_C_FadeTicketMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.SetVolatile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TDM_C::SetVolatile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.SetVolatile");
		
		UStage_TDM_C_SetVolatile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TDM_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.CustomEvent_1");
		
		UStage_TDM_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TDM.Stage_TDM_C.ExecuteUbergraph_Stage_TDM
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TDM_C::ExecuteUbergraph_Stage_TDM(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TDM.Stage_TDM_C.ExecuteUbergraph_Stage_TDM");
		
		UStage_TDM_C_ExecuteUbergraph_Stage_TDM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStage_TDM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStage_TDM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Stage_TDM.Stage_TDM_C");
		return ptr;
	}

}


