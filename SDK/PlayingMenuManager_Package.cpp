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
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.GetFadeDuration
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::GetFadeDuration(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.GetFadeDuration");
		
		UPlayingMenuManager_C_GetFadeDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Push Cinematic Widget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Widget_class                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Push_Cinematic_Widget(class UClass* Widget_class, class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Push Cinematic Widget");
		
		UPlayingMenuManager_C_Push_Cinematic_Widget_Params params {};
		params.Widget_class = Widget_class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.GetKeymapWidget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UTBLKeymapWidget* UPlayingMenuManager_C::GetKeymapWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.GetKeymapWidget");
		
		UPlayingMenuManager_C_GetKeymapWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.DetermineScoreEventType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEventStruct                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::DetermineScoreEventType(const struct FScoreEventStruct& ScoreEventStruct, bool* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.DetermineScoreEventType");
		
		UPlayingMenuManager_C_DetermineScoreEventType_Params params {};
		params.ScoreEventStruct = ScoreEventStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.IsVisibleCinematicWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      WidgetClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsVisible                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::IsVisibleCinematicWidget(class UClass* WidgetClass, bool* bIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.IsVisibleCinematicWidget");
		
		UPlayingMenuManager_C_IsVisibleCinematicWidget_Params params {};
		params.WidgetClass = WidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsVisible != nullptr)
			*bIsVisible = params.bIsVisible;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UPlayingMenuManager_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnKeyDown");
		
		UPlayingMenuManager_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.EnableFocusMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::EnableFocusMode(bool Enable_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.EnableFocusMode");
		
		UPlayingMenuManager_C_EnableFocusMode_Params params {};
		params.Enable_ = Enable_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecap
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Timer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTimerHandle UPlayingMenuManager_C::OnDeathRecap(float Timer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecap");
		
		UPlayingMenuManager_C_OnDeathRecap_Params params {};
		params.Timer = Timer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.UpdateSpectatorHudVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::UpdateSpectatorHudVisibility(class UObject* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.UpdateSpectatorHudVisibility");
		
		UPlayingMenuManager_C_UpdateSpectatorHudVisibility_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Handle Cinematic HUD Requests Changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Handle_Cinematic_HUD_Requests_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Handle Cinematic HUD Requests Changed");
		
		UPlayingMenuManager_C_Handle_Cinematic_HUD_Requests_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ResetGuiBackgroundCount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ResetGuiBackgroundCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ResetGuiBackgroundCount");
		
		UPlayingMenuManager_C_ResetGuiBackgroundCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.AddWidgetToScreen
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SlateCore_EHorizontalAlignment                     HAlign                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SlateCore_EVerticalAlignment                       VAlign                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UOverlay*                                    Overlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::AddWidgetToScreen(class UWidget* Widget, SlateCore_EHorizontalAlignment HAlign, SlateCore_EVerticalAlignment VAlign, class UOverlay* Overlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.AddWidgetToScreen");
		
		UPlayingMenuManager_C_AddWidgetToScreen_Params params {};
		params.Widget = Widget;
		params.HAlign = HAlign;
		params.VAlign = VAlign;
		params.Overlay = Overlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Get Faction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Get_Faction(TBL_EFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Get Faction");
		
		UPlayingMenuManager_C_Get_Faction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Faction != nullptr)
			*Faction = params.Faction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Construct");
		
		UPlayingMenuManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Toggle Loadout Screen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bScoreboardMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::Toggle_Loadout_Screen(bool bScoreboardMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Toggle Loadout Screen");
		
		UPlayingMenuManager_C_Toggle_Loadout_Screen_Params params {};
		params.bScoreboardMode = bScoreboardMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Show InGame Menu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Show_InGame_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Show InGame Menu");
		
		UPlayingMenuManager_C_Show_InGame_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Start of game actions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Start_of_game_actions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Start of game actions");
		
		UPlayingMenuManager_C_Start_of_game_actions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ShowVOPersonalMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::ShowVOPersonalMenu(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ShowVOPersonalMenu");
		
		UPlayingMenuManager_C_ShowVOPersonalMenu_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ShowVOTacticalMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::ShowVOTacticalMenu(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ShowVOTacticalMenu");
		
		UPlayingMenuManager_C_ShowVOTacticalMenu_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ShowHudLayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ShowHudLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ShowHudLayer");
		
		UPlayingMenuManager_C_ShowHudLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.HideHudLayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::HideHudLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.HideHudLayer");
		
		UPlayingMenuManager_C_HideHudLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.HideVOMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::HideVOMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.HideVOMenu");
		
		UPlayingMenuManager_C_HideVOMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Hide Overview Screen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Hide_Overview_Screen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Hide Overview Screen");
		
		UPlayingMenuManager_C_Hide_Overview_Screen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OpenDebugMenu
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UBlueprintDebugMenuComponent*                DebugMenuComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OpenDebugMenu(class UBlueprintDebugMenuComponent* DebugMenuComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OpenDebugMenu");
		
		UPlayingMenuManager_C_OpenDebugMenu_Params params {};
		params.DebugMenuComponent = DebugMenuComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Remove Debug Menu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Remove_Debug_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Remove Debug Menu");
		
		UPlayingMenuManager_C_Remove_Debug_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Remove Cinematic Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Remove_Cinematic_Widget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Remove Cinematic Widget");
		
		UPlayingMenuManager_C_Remove_Cinematic_Widget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Show Overview Screen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Show_Overview_Screen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Show Overview Screen");
		
		UPlayingMenuManager_C_Show_Overview_Screen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic bars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		CinematicBarsMode_ECinematicBarsMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Request_cinematic_bars(class UObject* Requester, CinematicBarsMode_ECinematicBarsMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic bars");
		
		UPlayingMenuManager_C_Request_cinematic_bars_Params params {};
		params.Requester = Requester;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic bars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Release_cinematic_bars(class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic bars");
		
		UPlayingMenuManager_C_Release_cinematic_bars_Params params {};
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Open Loadout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Open_Loadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Open Loadout");
		
		UPlayingMenuManager_C_Open_Loadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On Mode Changed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		CinematicBarsMode_ECinematicBarsMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On_Mode_Changed__DelegateSignature(CinematicBarsMode_ECinematicBarsMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On Mode Changed__DelegateSignature");
		
		UPlayingMenuManager_C_BndEvt__CinematicBars_K2Node_ComponentBoundEvent_0_On_Mode_Changed__DelegateSignature_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic HUD mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		CinematicMenuMode_ECinematicMenuMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Request_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Request cinematic HUD mode");
		
		UPlayingMenuManager_C_Request_cinematic_HUD_mode_Params params {};
		params.Requester = Requester;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic HUD mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		CinematicMenuMode_ECinematicMenuMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Release_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Release cinematic HUD mode");
		
		UPlayingMenuManager_C_Release_cinematic_HUD_mode_Params params {};
		params.Requester = Requester;
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Update cinematic requests soon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Update_cinematic_requests_soon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Update cinematic requests soon");
		
		UPlayingMenuManager_C_Update_cinematic_requests_soon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Request fade out
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Request_fade_out(class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Request fade out");
		
		UPlayingMenuManager_C_Request_fade_out_Params params {};
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Release fade out (fade in)
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Requester                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Release_fade_out__fade_in_(class UObject* Requester)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Release fade out (fade in)");
		
		UPlayingMenuManager_C_Release_fade_out__fade_in__Params params {};
		params.Requester = Requester;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics Mode Changed__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		CinematicMenuMode_ECinematicMenuMode               New_mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		CinematicMenuMode_ECinematicMenuMode               Previous_mode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics_Mode_Changed__DelegateSignature(CinematicMenuMode_ECinematicMenuMode New_mode, CinematicMenuMode_ECinematicMenuMode Previous_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics Mode Changed__DelegateSignature");
		
		UPlayingMenuManager_C_BndEvt__HUDWidgetACtual_K2Node_ComponentBoundEvent_16_Cinematics_Mode_Changed__DelegateSignature_Params params {};
		params.New_mode = New_mode;
		params.Previous_mode = Previous_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ShowVOEmoteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::ShowVOEmoteMenu(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ShowVOEmoteMenu");
		
		UPlayingMenuManager_C_ShowVOEmoteMenu_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnClientPossessedPawn_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OnClientPossessedPawn_Event_1(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnClientPossessedPawn_Event_1");
		
		UPlayingMenuManager_C_OnClientPossessedPawn_Event_1_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OnPossessedPawn(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn");
		
		UPlayingMenuManager_C_OnPossessedPawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnPossessedPawn_Event_1");
		
		UPlayingMenuManager_C_OnPossessedPawn_Event_1_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OnTeamChanged_Event_1(class ATBLTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged_Event_1");
		
		UPlayingMenuManager_C_OnTeamChanged_Event_1_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OnTeamChanged(class ATBLTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnTeamChanged");
		
		UPlayingMenuManager_C_OnTeamChanged_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Add Cinematic Mode Change Listener
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Add_Cinematic_Mode_Change_Listener()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Add Cinematic Mode Change Listener");
		
		UPlayingMenuManager_C_Add_Cinematic_Mode_Change_Listener_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecapReplicated_Local
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::OnDeathRecapReplicated_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnDeathRecapReplicated_Local");
		
		UPlayingMenuManager_C_OnDeathRecapReplicated_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.HidePostDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::HidePostDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.HidePostDeath");
		
		UPlayingMenuManager_C_HidePostDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Post Death Possessed New Pawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Post_Death_Possessed_New_Pawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Post Death Possessed New Pawn");
		
		UPlayingMenuManager_C_Post_Death_Possessed_New_Pawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Snap Fade In
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Snap_Fade_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Snap Fade In");
		
		UPlayingMenuManager_C_Snap_Fade_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Toggle Team Select Screen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bScoreboardMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::Toggle_Team_Select_Screen(bool bScoreboardMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Toggle Team Select Screen");
		
		UPlayingMenuManager_C_Toggle_Team_Select_Screen_Params params {};
		params.bScoreboardMode = bScoreboardMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Event Open Team Select Screen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Event_Open_Team_Select_Screen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Event Open Team Select Screen");
		
		UPlayingMenuManager_C_Event_Open_Team_Select_Screen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnMatchEnded_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::OnMatchEnded_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnMatchEnded_Event_1");
		
		UPlayingMenuManager_C_OnMatchEnded_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.FadeOutCinematicLayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::FadeOutCinematicLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutCinematicLayer");
		
		UPlayingMenuManager_C_FadeOutCinematicLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.FadeInCinematicLayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::FadeInCinematicLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.FadeInCinematicLayer");
		
		UPlayingMenuManager_C_FadeInCinematicLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		OverviewScreenState_EOverviewScreenState           NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		OverviewScreenState_EOverviewScreenState           PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature(OverviewScreenState_EOverviewScreenState NewState, OverviewScreenState_EOverviewScreenState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature");
		
		UPlayingMenuManager_C_BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnZoomDisabled_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::OnZoomDisabled_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnZoomDisabled_Event_1");
		
		UPlayingMenuManager_C_OnZoomDisabled_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnZoomEnabled_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::OnZoomEnabled_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnZoomEnabled_Event_1");
		
		UPlayingMenuManager_C_OnZoomEnabled_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Toggle Player List Screen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShowHide                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::Toggle_Player_List_Screen(bool bShowHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Toggle Player List Screen");
		
		UPlayingMenuManager_C_Toggle_Player_List_Screen_Params params {};
		params.bShowHide = bShowHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.FadeOutFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::FadeOutFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutFinished");
		
		UPlayingMenuManager_C_FadeOutFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::FadeOutStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStart");
		
		UPlayingMenuManager_C_FadeOutStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.SetHudVisibility
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::SetHudVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.SetHudVisibility");
		
		UPlayingMenuManager_C_SetHudVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Force HUD Visible
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Force_HUD_Visible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Force HUD Visible");
		
		UPlayingMenuManager_C_Force_HUD_Visible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Show Radial Inventory Screen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Show_Radial_Inventory_Screen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Show Radial Inventory Screen");
		
		UPlayingMenuManager_C_Show_Radial_Inventory_Screen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Hide Radial Inventory Screen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Hide_Radial_Inventory_Screen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Hide Radial Inventory Screen");
		
		UPlayingMenuManager_C_Hide_Radial_Inventory_Screen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ShowLoadoutOnFirstDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ShowLoadoutOnFirstDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ShowLoadoutOnFirstDeath");
		
		UPlayingMenuManager_C_ShowLoadoutOnFirstDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidgetEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OnPushCinematicWidgetEvent(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidgetEvent");
		
		UPlayingMenuManager_C_OnPushCinematicWidgetEvent_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PlaybackSpeed                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::BP_FadeOut(float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeOut");
		
		UPlayingMenuManager_C_BP_FadeOut_Params params {};
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeIn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PlaybackSpeed                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::BP_FadeIn(float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.BP_FadeIn");
		
		UPlayingMenuManager_C_BP_FadeIn_Params params {};
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Destruct");
		
		UPlayingMenuManager_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnSavedClassUnavailable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      RequestedSubclass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OnSavedClassUnavailable(class UClass* RequestedSubclass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnSavedClassUnavailable");
		
		UPlayingMenuManager_C_OnSavedClassUnavailable_Params params {};
		params.RequestedSubclass = RequestedSubclass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.InitializeScoreEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::InitializeScoreEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.InitializeScoreEvents");
		
		UPlayingMenuManager_C_InitializeScoreEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnScoreEvent_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayingMenuManager_C::OnScoreEvent_Event_1(const struct FScoreEventStruct& ScoreEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnScoreEvent_Event_1");
		
		UPlayingMenuManager_C_OnScoreEvent_Event_1_Params params {};
		params.ScoreEvent = ScoreEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Team Select Input Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Team_Select_Input_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Team Select Input Pressed");
		
		UPlayingMenuManager_C_Team_Select_Input_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.SpawnWaveJoined
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bJoinWaveSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::SpawnWaveJoined(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.SpawnWaveJoined");
		
		UPlayingMenuManager_C_SpawnWaveJoined_Params params {};
		params.SpawnWave = SpawnWave;
		params.bJoinWaveSuccess = bJoinWaveSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialAreaWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ShowTutorialAreaWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialAreaWidget");
		
		UPlayingMenuManager_C_ShowTutorialAreaWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.HideTutorialAreaWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::HideTutorialAreaWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.HideTutorialAreaWidget");
		
		UPlayingMenuManager_C_HideTutorialAreaWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        NarratorText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayingMenuManager_C::UpdateTutorialArea(const class FText& Title, const class FText& NarratorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialArea");
		
		UPlayingMenuManager_C_UpdateTutorialArea_Params params {};
		params.Title = Title;
		params.NarratorText = NarratorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.AddTutorialAction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ActionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ControllerActionText                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ActionKeyboardCallout                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ActionControllerCallout                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ActionDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                ActionMaxCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SkipAfterTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::AddTutorialAction(const class FText& ActionText, const class FText& ControllerActionText, const class FText& ActionKeyboardCallout, const class FText& ActionControllerCallout, const class FText& ActionDesc, int ActionMaxCount, float SkipAfterTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.AddTutorialAction");
		
		UPlayingMenuManager_C_AddTutorialAction_Params params {};
		params.ActionText = ActionText;
		params.ControllerActionText = ControllerActionText;
		params.ActionKeyboardCallout = ActionKeyboardCallout;
		params.ActionControllerCallout = ActionControllerCallout;
		params.ActionDesc = ActionDesc;
		params.ActionMaxCount = ActionMaxCount;
		params.SkipAfterTime = SkipAfterTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ClearTutorialActionList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Fade                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::ClearTutorialActionList(bool Fade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ClearTutorialActionList");
		
		UPlayingMenuManager_C_ClearTutorialActionList_Params params {};
		params.Fade = Fade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialActionCount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ActionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                NewCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::UpdateTutorialActionCount(const class FText& ActionText, int NewCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialActionCount");
		
		UPlayingMenuManager_C_UpdateTutorialActionCount_Params params {};
		params.ActionText = ActionText;
		params.NewCount = NewCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.UpdateNarratorText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NarratorText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayingMenuManager_C::UpdateNarratorText(const class FText& NarratorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.UpdateNarratorText");
		
		UPlayingMenuManager_C_UpdateNarratorText_Params params {};
		params.NarratorText = NarratorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::UpdateTutorialProgress(float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.UpdateTutorialProgress");
		
		UPlayingMenuManager_C_UpdateTutorialProgress_Params params {};
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ForwardSpawnFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFade");
		
		UPlayingMenuManager_C_ForwardSpawnFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ForwardSpawnFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ForwardSpawnFadeIn");
		
		UPlayingMenuManager_C_ForwardSpawnFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.RequestRandomHint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Chance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHintType                                      HintKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHintInputType                                 HintInputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::RequestRandomHint(float Chance, TBL_EHintType HintKey, TBL_EHintInputType HintInputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.RequestRandomHint");
		
		UPlayingMenuManager_C_RequestRandomHint_Params params {};
		params.Chance = Chance;
		params.HintKey = HintKey;
		params.HintInputType = HintInputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.EnableTutorialTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimerLength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::EnableTutorialTimer(float TimerLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.EnableTutorialTimer");
		
		UPlayingMenuManager_C_EnableTutorialTimer_Params params {};
		params.TimerLength = TimerLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.DisableTutorialTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::DisableTutorialTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.DisableTutorialTimer");
		
		UPlayingMenuManager_C_DisableTutorialTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ResetTutorialTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialTimer");
		
		UPlayingMenuManager_C_ResetTutorialTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.TimerSuccess
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::TimerSuccess(bool ShouldDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.TimerSuccess");
		
		UPlayingMenuManager_C_TimerSuccess_Params params {};
		params.ShouldDisable = ShouldDisable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnPlayerSelectedSpectatorMode_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPlayerSpectator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::OnPlayerSelectedSpectatorMode_Event_1(bool IsPlayerSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnPlayerSelectedSpectatorMode_Event_1");
		
		UPlayingMenuManager_C_OnPlayerSelectedSpectatorMode_Event_1_Params params {};
		params.IsPlayerSpectator = IsPlayerSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On Entered Input Mode__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayingMenuManager_C::BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On_Entered_Input_Mode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On Entered Input Mode__DelegateSignature");
		
		UPlayingMenuManager_C_BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_1_On_Entered_Input_Mode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On Left Input Mode__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPlayingMenuManager_C::BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On_Left_Input_Mode__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On Left Input Mode__DelegateSignature");
		
		UPlayingMenuManager_C_BndEvt__ChatWithInput_K2Node_ComponentBoundEvent_3_On_Left_Input_Mode__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.InitWithCallouts
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTutorialCalloutActionStruct>        KeyboardCallouts                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<struct FTutorialCalloutActionStruct>        ControllerCallouts                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::InitWithCallouts(TArray<struct FTutorialCalloutActionStruct> KeyboardCallouts, TArray<struct FTutorialCalloutActionStruct> ControllerCallouts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.InitWithCallouts");
		
		UPlayingMenuManager_C_InitWithCallouts_Params params {};
		params.KeyboardCallouts = KeyboardCallouts;
		params.ControllerCallouts = ControllerCallouts;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ClearCallouts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ClearCallouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ClearCallouts");
		
		UPlayingMenuManager_C_ClearCallouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.NextCallout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::NextCallout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.NextCallout");
		
		UPlayingMenuManager_C_NextCallout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.RestartCallouts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::RestartCallouts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.RestartCallouts");
		
		UPlayingMenuManager_C_RestartCallouts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialChallenges
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ResetTutorialChallenges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ResetTutorialChallenges");
		
		UPlayingMenuManager_C_ResetTutorialChallenges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.TutorialStationComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::TutorialStationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.TutorialStationComplete");
		
		UPlayingMenuManager_C_TutorialStationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.TutorialActionFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayingMenuManager_C::TutorialActionFailed(const class FText& Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.TutorialActionFailed");
		
		UPlayingMenuManager_C_TutorialActionFailed_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialSkipMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ShowTutorialSkipMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ShowTutorialSkipMessage");
		
		UPlayingMenuManager_C_ShowTutorialSkipMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnPromptPlayerMessageReply_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                MessageId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ATBLPlayerController*                        Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OnPromptPlayerMessageReply_Event_1(int MessageId, bool Response, class ATBLPlayerController* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnPromptPlayerMessageReply_Event_1");
		
		UPlayingMenuManager_C_OnPromptPlayerMessageReply_Event_1_Params params {};
		params.MessageId = MessageId;
		params.Response = Response;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.AutoHideVOTimerStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::AutoHideVOTimerStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.AutoHideVOTimerStarted");
		
		UPlayingMenuManager_C_AutoHideVOTimerStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OpenTutorialPauseScreen
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StationTitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ChallengeIntro                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ChallengeTitle                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<struct FTutorialPauseScreenStep>            Steps                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class FText                                        HintDesc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UMediaSource*                                Video                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ContinueTIme                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OpenTutorialPauseScreen(const class FText& StationTitle, const class FText& ChallengeIntro, const class FText& ChallengeTitle, TArray<struct FTutorialPauseScreenStep> Steps, const class FText& HintDesc, class UMediaSource* Video, float ContinueTIme)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OpenTutorialPauseScreen");
		
		UPlayingMenuManager_C_OpenTutorialPauseScreen_Params params {};
		params.StationTitle = StationTitle;
		params.ChallengeIntro = ChallengeIntro;
		params.ChallengeTitle = ChallengeTitle;
		params.Steps = Steps;
		params.HintDesc = HintDesc;
		params.Video = Video;
		params.ContinueTIme = ContinueTIme;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.HideChat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldHide                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::HideChat(bool ShouldHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.HideChat");
		
		UPlayingMenuManager_C_HideChat_Params params {};
		params.ShouldHide = ShouldHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ToggleKeymap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::ToggleKeymap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ToggleKeymap");
		
		UPlayingMenuManager_C_ToggleKeymap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.CancelSkipChallenge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::CancelSkipChallenge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.CancelSkipChallenge");
		
		UPlayingMenuManager_C_CancelSkipChallenge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.FadeCalloutUsableAtIndex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Fade                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::FadeCalloutUsableAtIndex(int Index, bool Fade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.FadeCalloutUsableAtIndex");
		
		UPlayingMenuManager_C_FadeCalloutUsableAtIndex_Params params {};
		params.Index = Index;
		params.Fade = Fade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.CompleteTutorial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::CompleteTutorial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.CompleteTutorial");
		
		UPlayingMenuManager_C_CompleteTutorial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Show Loadout First Time Only
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::Show_Loadout_First_Time_Only()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Show Loadout First Time Only");
		
		UPlayingMenuManager_C_Show_Loadout_First_Time_Only_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.RequestSpecificHint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        HintKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::RequestSpecificHint(const class FName& HintKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.RequestSpecificHint");
		
		UPlayingMenuManager_C_RequestSpecificHint_Params params {};
		params.HintKey = HintKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.ExecuteUbergraph_PlayingMenuManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::ExecuteUbergraph_PlayingMenuManager(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.ExecuteUbergraph_PlayingMenuManager");
		
		UPlayingMenuManager_C_ExecuteUbergraph_PlayingMenuManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnTutorialSkipStation__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::OnTutorialSkipStation__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnTutorialSkipStation__DelegateSignature");
		
		UPlayingMenuManager_C_OnTutorialSkipStation__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidget__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::OnPushCinematicWidget__DelegateSignature(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.OnPushCinematicWidget__DelegateSignature");
		
		UPlayingMenuManager_C_OnPushCinematicWidget__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.FadeOutComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::FadeOutComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutComplete__DelegateSignature");
		
		UPlayingMenuManager_C_FadeOutComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStarted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayingMenuManager_C::FadeOutStarted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.FadeOutStarted__DelegateSignature");
		
		UPlayingMenuManager_C_FadeOutStarted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Cinematic HUD mode changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicMenuMode_ECinematicMenuMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Cinematic_HUD_mode_changed__DelegateSignature(CinematicMenuMode_ECinematicMenuMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Cinematic HUD mode changed__DelegateSignature");
		
		UPlayingMenuManager_C_Cinematic_HUD_mode_changed__DelegateSignature_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Cinematic mode enabled changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayingMenuManager_C::Cinematic_mode_enabled_changed__DelegateSignature(bool Enabled_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Cinematic mode enabled changed__DelegateSignature");
		
		UPlayingMenuManager_C_Cinematic_mode_enabled_changed__DelegateSignature_Params params {};
		params.Enabled_ = Enabled_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayingMenuManager.PlayingMenuManager_C.Cinematic bars mode changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicBarsMode_ECinematicBarsMode               Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayingMenuManager_C::Cinematic_bars_mode_changed__DelegateSignature(CinematicBarsMode_ECinematicBarsMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayingMenuManager.PlayingMenuManager_C.Cinematic bars mode changed__DelegateSignature");
		
		UPlayingMenuManager_C_Cinematic_bars_mode_changed__DelegateSignature_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayingMenuManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayingMenuManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayingMenuManager.PlayingMenuManager_C");
		return ptr;
	}

}


