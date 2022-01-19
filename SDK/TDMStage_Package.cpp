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
	 * 		Name   -> Function TDMStage.TDMStage_C.Create debug menu widget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Debug_menu_widget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATDMStage_C::Create_debug_menu_widget(class UUserWidget** Debug_menu_widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.Create debug menu widget");
		
		ATDMStage_C_Create_debug_menu_widget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Debug_menu_widget != nullptr)
			*Debug_menu_widget = params.Debug_menu_widget;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.GetTimeRemaining
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	float ATDMStage_C::GetTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.GetTimeRemaining");
		
		ATDMStage_C_GetTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.GetTimeRemainingPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	float ATDMStage_C::GetTimeRemainingPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.GetTimeRemainingPercent");
		
		ATDMStage_C_GetTimeRemainingPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.GetStageIdNum
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	int ATDMStage_C::GetStageIdNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.GetStageIdNum");
		
		ATDMStage_C_GetStageIdNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.GetStageCommander
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AActor* ATDMStage_C::GetStageCommander(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.GetStageCommander");
		
		ATDMStage_C_GetStageCommander_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.CompleteStage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::CompleteStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.CompleteStage");
		
		ATDMStage_C_CompleteStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.IsStageReadyToComplete
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATDMStage_C::IsStageReadyToComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.IsStageReadyToComplete");
		
		ATDMStage_C_IsStageReadyToComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.GetTicketsRemainingPercentage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATDMStage_C::GetTicketsRemainingPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.GetTicketsRemainingPercentage");
		
		ATDMStage_C_GetTicketsRemainingPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.Get Faction Tickets Remaining Percent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ATDMStage_C::Get_Faction_Tickets_Remaining_Percent(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.Get Faction Tickets Remaining Percent");
		
		ATDMStage_C_Get_Faction_Tickets_Remaining_Percent_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.UpdateTDMStageSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::UpdateTDMStageSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.UpdateTDMStageSettings");
		
		ATDMStage_C_UpdateTDMStageSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.Get Time Left
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FTimespan                                   Time_Left                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATDMStage_C::Get_Time_Left(struct FTimespan* Time_Left)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.Get Time Left");
		
		ATDMStage_C_Get_Time_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time_Left != nullptr)
			*Time_Left = params.Time_Left;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C. Remove Tickets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATDMStage_C::_Remove_Tickets(TBL_EFaction Faction, int Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C. Remove Tickets");
		
		ATDMStage_C__Remove_Tickets_Params params {};
		params.Faction = Faction;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.Initialize TDM Stage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTDM_Stage_Properties                       Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ATDMStage_C::Initialize_TDM_Stage(const struct FTDM_Stage_Properties& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.Initialize TDM Stage");
		
		ATDMStage_C_Initialize_TDM_Stage_Params params {};
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.StartStage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::StartStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.StartStage");
		
		ATDMStage_C_StartStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATDMStage_C::BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature");
		
		ATDMStage_C_BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On Duration Exceeded__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATDMStage_C::BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On_Duration_Exceeded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On Duration Exceeded__DelegateSignature");
		
		ATDMStage_C_BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On_Duration_Exceeded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On Tickets Changed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                New_Tickets                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATDMStage_C::BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On_Tickets_Changed__DelegateSignature(TBL_EFaction Faction, int Delta, int New_Tickets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On Tickets Changed__DelegateSignature");
		
		ATDMStage_C_BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On_Tickets_Changed__DelegateSignature_Params params {};
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
	 * 		Name   -> Function TDMStage.TDMStage_C.Force Draw
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::Force_Draw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.Force Draw");
		
		ATDMStage_C_Force_Draw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.Last Rout Fired
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::Last_Rout_Fired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.Last Rout Fired");
		
		ATDMStage_C_Last_Rout_Fired_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.CustomEvent_1");
		
		ATDMStage_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.ForceMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::ForceMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.ForceMusic");
		
		ATDMStage_C_ForceMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.ExecuteUbergraph_TDMStage
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATDMStage_C::ExecuteUbergraph_TDMStage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.ExecuteUbergraph_TDMStage");
		
		ATDMStage_C_ExecuteUbergraph_TDMStage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.On Tickets Changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                NewTickets                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATDMStage_C::On_Tickets_Changed__DelegateSignature(TBL_EFaction Faction, int Delta, int NewTickets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.On Tickets Changed__DelegateSignature");
		
		ATDMStage_C_On_Tickets_Changed__DelegateSignature_Params params {};
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
	 * 		Name   -> Function TDMStage.TDMStage_C.On Tickets Exhausted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATDMStage_C::On_Tickets_Exhausted__DelegateSignature(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.On Tickets Exhausted__DelegateSignature");
		
		ATDMStage_C_On_Tickets_Exhausted__DelegateSignature_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.On Draw__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::On_Draw__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.On Draw__DelegateSignature");
		
		ATDMStage_C_On_Draw__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.On Red Died__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::On_Red_Died__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.On Red Died__DelegateSignature");
		
		ATDMStage_C_On_Red_Died__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.On Blue Died__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::On_Blue_Died__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.On Blue Died__DelegateSignature");
		
		ATDMStage_C_On_Blue_Died__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.On Ended__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::On_Ended__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.On Ended__DelegateSignature");
		
		ATDMStage_C_On_Ended__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMStage.TDMStage_C.On Started__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATDMStage_C::On_Started__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMStage.TDMStage_C.On Started__DelegateSignature");
		
		ATDMStage_C_On_Started__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATDMStage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATDMStage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TDMStage.TDMStage_C");
		return ptr;
	}

}


