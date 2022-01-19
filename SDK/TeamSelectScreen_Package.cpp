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
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.K2_GetFocusWidget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UTeamSelectScreen_C::K2_GetFocusWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.K2_GetFocusWidget");
		
		UTeamSelectScreen_C_K2_GetFocusWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UTeamSelectScreen_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.OnPreviewKeyDown");
		
		UTeamSelectScreen_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UTeamSelectScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.OnKeyDown");
		
		UTeamSelectScreen_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.TeamToSwitchTo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       TeamToSwitchTo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeamSelectScreen_C::TeamToSwitchTo(TBL_EFaction TeamToSwitchTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.TeamToSwitchTo");
		
		UTeamSelectScreen_C_TeamToSwitchTo_Params params {};
		params.TeamToSwitchTo = TeamToSwitchTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.SendChatNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       FactionToSwitchTo                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeamSelectScreen_C::SendChatNotification(TBL_EFaction FactionToSwitchTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.SendChatNotification");
		
		UTeamSelectScreen_C_SendChatNotification_Params params {};
		params.FactionToSwitchTo = FactionToSwitchTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.Init Team Select Screen
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::Init_Team_Select_Screen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.Init Team Select Screen");
		
		UTeamSelectScreen_C_Init_Team_Select_Screen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.IsInSpectatorMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UTeamSelectScreen_C::IsInSpectatorMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.IsInSpectatorMode");
		
		UTeamSelectScreen_C_IsInSpectatorMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.Close This Screen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::Close_This_Screen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.Close This Screen");
		
		UTeamSelectScreen_C_Close_This_Screen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.Open Loadout Menu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::Open_Loadout_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.Open Loadout Menu");
		
		UTeamSelectScreen_C_Open_Loadout_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTeamSelectScreen_C::BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UTeamSelectScreen_C_BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTeamSelectScreen_C::BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UTeamSelectScreen_C_BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTeamSelectScreen_C::BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UTeamSelectScreen_C_BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__AgathaSelect_K2Node_ComponentBoundEvent_4_OnHighlightEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTeamSelectScreen_C::BndEvt__AgathaSelect_K2Node_ComponentBoundEvent_4_OnHighlightEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__AgathaSelect_K2Node_ComponentBoundEvent_4_OnHighlightEvent__DelegateSignature");
		
		UTeamSelectScreen_C_BndEvt__AgathaSelect_K2Node_ComponentBoundEvent_4_OnHighlightEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__MasonSelect_K2Node_ComponentBoundEvent_5_OnHighlightEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTeamSelectScreen_C::BndEvt__MasonSelect_K2Node_ComponentBoundEvent_5_OnHighlightEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__MasonSelect_K2Node_ComponentBoundEvent_5_OnHighlightEvent__DelegateSignature");
		
		UTeamSelectScreen_C_BndEvt__MasonSelect_K2Node_ComponentBoundEvent_5_OnHighlightEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamSelectScreen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.PreConstruct");
		
		UTeamSelectScreen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.OnAgathaUnhighlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::OnAgathaUnhighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.OnAgathaUnhighlight");
		
		UTeamSelectScreen_C_OnAgathaUnhighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.OnMasonUnhighlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::OnMasonUnhighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.OnMasonUnhighlight");
		
		UTeamSelectScreen_C_OnMasonUnhighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.StartTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::StartTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.StartTimer");
		
		UTeamSelectScreen_C_StartTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.TimerAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::TimerAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.TimerAction");
		
		UTeamSelectScreen_C_TimerAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.OpenLoadout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::OpenLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.OpenLoadout");
		
		UTeamSelectScreen_C_OpenLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.Spectate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::Spectate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.Spectate");
		
		UTeamSelectScreen_C_Spectate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.OnInitialized");
		
		UTeamSelectScreen_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.OnAcknowledgedTeamRequest_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeamSelectScreen_C::OnAcknowledgedTeamRequest_Event_1(bool bSuccess, TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.OnAcknowledgedTeamRequest_Event_1");
		
		UTeamSelectScreen_C_OnAcknowledgedTeamRequest_Event_1_Params params {};
		params.bSuccess = bSuccess;
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.OnGamepadChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeamSelectScreen_C::OnGamepadChange(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.OnGamepadChange");
		
		UTeamSelectScreen_C_OnGamepadChange_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.Construct");
		
		UTeamSelectScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.InterceptTutorialTeamSelect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeamSelectScreen_C::InterceptTutorialTeamSelect(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.InterceptTutorialTeamSelect");
		
		UTeamSelectScreen_C_InterceptTutorialTeamSelect_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.SetTutorialMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTeamSelectScreen_C::SetTutorialMode(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.SetTutorialMode");
		
		UTeamSelectScreen_C_SetTutorialMode_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.OnLoreVideoComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::OnLoreVideoComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.OnLoreVideoComplete");
		
		UTeamSelectScreen_C_OnLoreVideoComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.GoToInGameMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::GoToInGameMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.GoToInGameMenu");
		
		UTeamSelectScreen_C_GoToInGameMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTeamSelectScreen_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UTeamSelectScreen_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTeamSelectScreen_C::BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UTeamSelectScreen_C_BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTeamSelectScreen_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature");
		
		UTeamSelectScreen_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTeamSelectScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UTeamSelectScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.ExecuteUbergraph_TeamSelectScreen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeamSelectScreen_C::ExecuteUbergraph_TeamSelectScreen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.ExecuteUbergraph_TeamSelectScreen");
		
		UTeamSelectScreen_C_ExecuteUbergraph_TeamSelectScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.LoreVideoComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::LoreVideoComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.LoreVideoComplete__DelegateSignature");
		
		UTeamSelectScreen_C_LoreVideoComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.TutorialTeamSelected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTeamSelectScreen_C::TutorialTeamSelected__DelegateSignature(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.TutorialTeamSelected__DelegateSignature");
		
		UTeamSelectScreen_C_TutorialTeamSelected__DelegateSignature_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.TeamChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::TeamChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.TeamChanged__DelegateSignature");
		
		UTeamSelectScreen_C_TeamChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TeamSelectScreen.TeamSelectScreen_C.SendToServerChatRequest__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UTeamSelectScreen_C::SendToServerChatRequest__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeamSelectScreen.TeamSelectScreen_C.SendToServerChatRequest__DelegateSignature");
		
		UTeamSelectScreen_C_SendToServerChatRequest__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTeamSelectScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTeamSelectScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamSelectScreen.TeamSelectScreen_C");
		return ptr;
	}

}


