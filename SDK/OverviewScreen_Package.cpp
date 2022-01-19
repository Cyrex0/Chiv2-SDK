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
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.K2_GetFocusWidget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UOverviewScreen_C::K2_GetFocusWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.K2_GetFocusWidget");
		
		UOverviewScreen_C_K2_GetFocusWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.GetMenuTakeOverActionName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        Action                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::GetMenuTakeOverActionName(class FName* Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.GetMenuTakeOverActionName");
		
		UOverviewScreen_C_GetMenuTakeOverActionName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Action != nullptr)
			*Action = params.Action;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.StopListeningForMenuTakeOver
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::StopListeningForMenuTakeOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.StopListeningForMenuTakeOver");
		
		UOverviewScreen_C_StopListeningForMenuTakeOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.StartListeningForMenuTakeOver
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::StartListeningForMenuTakeOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.StartListeningForMenuTakeOver");
		
		UOverviewScreen_C_StartListeningForMenuTakeOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UOverviewScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.OnKeyDown");
		
		UOverviewScreen_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.DisplayNavigationMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		OverviewScreenState_EOverviewScreenState           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		OverviewScreenState_EOverviewScreenState           PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOverviewScreen_C::DisplayNavigationMenu(OverviewScreenState_EOverviewScreenState State, OverviewScreenState_EOverviewScreenState PreviousState, bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.DisplayNavigationMenu");
		
		UOverviewScreen_C_DisplayNavigationMenu_Params params {};
		params.State = State;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Set Keyboard Focus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::Set_Keyboard_Focus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Set Keyboard Focus");
		
		UOverviewScreen_C_Set_Keyboard_Focus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Get Widget For Current State
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     Out                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::Get_Widget_For_Current_State(class UWidget** Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Get Widget For Current State");
		
		UOverviewScreen_C_Get_Widget_For_Current_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Set cinematics UI state
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::Set_cinematics_UI_state(const struct FGameplayTag& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Set cinematics UI state");
		
		UOverviewScreen_C_Set_cinematics_UI_state_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Get Loadout Toggle Button Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UOverviewScreen_C::Get_Loadout_Toggle_Button_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Get Loadout Toggle Button Text");
		
		UOverviewScreen_C_Get_Loadout_Toggle_Button_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.IsInEditor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOverviewScreen_C::IsInEditor(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.IsInEditor");
		
		UOverviewScreen_C_IsInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Toggle Cinematic Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable_Cinematic_Mode                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOverviewScreen_C::Toggle_Cinematic_Mode(bool Enable_Cinematic_Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Toggle Cinematic Mode");
		
		UOverviewScreen_C_Toggle_Cinematic_Mode_Params params {};
		params.Enable_Cinematic_Mode = Enable_Cinematic_Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.IsPlayerInSpawnWave
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InSpawnWave                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOverviewScreen_C::IsPlayerInSpawnWave(class AController* Player, bool* InSpawnWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.IsPlayerInSpawnWave");
		
		UOverviewScreen_C_IsPlayerInSpawnWave_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSpawnWave != nullptr)
			*InSpawnWave = params.InSpawnWave;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.InitNavigationMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::InitNavigationMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.InitNavigationMenu");
		
		UOverviewScreen_C_InitNavigationMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Hide Overview Screen If In Scoreboard Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::Hide_Overview_Screen_If_In_Scoreboard_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Hide Overview Screen If In Scoreboard Mode");
		
		UOverviewScreen_C_Hide_Overview_Screen_If_In_Scoreboard_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Set Overview Screen Mode
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		OverviewScreenState_EOverviewScreenState           New_mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::Set_Overview_Screen_Mode(OverviewScreenState_EOverviewScreenState New_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Set Overview Screen Mode");
		
		UOverviewScreen_C_Set_Overview_Screen_Mode_Params params {};
		params.New_mode = New_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Init Subwidgets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::Init_Subwidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Init Subwidgets");
		
		UOverviewScreen_C_Init_Subwidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UOverviewScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Construct");
		
		UOverviewScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameAndUIInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerController*                        TBLPlayerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::BindVIewportFocus_GameAndUIInput(class ATBLPlayerController* TBLPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameAndUIInput");
		
		UOverviewScreen_C_BindVIewportFocus_GameAndUIInput_Params params {};
		params.TBLPlayerController = TBLPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::OnGameViewportReceivedFocus_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_1");
		
		UOverviewScreen_C_OnGameViewportReceivedFocus_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameInput
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerController*                        TBLPlayerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::BindVIewportFocus_GameInput(class ATBLPlayerController* TBLPlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.BindVIewportFocus_GameInput");
		
		UOverviewScreen_C_BindVIewportFocus_GameInput_Params params {};
		params.TBLPlayerController = TBLPlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::OnGameViewportReceivedFocus_Event_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.OnGameViewportReceivedFocus_Event_2");
		
		UOverviewScreen_C_OnGameViewportReceivedFocus_Event_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature");
		
		UOverviewScreen_C_BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature");
		
		UOverviewScreen_C_BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOverviewScreen_C::BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature");
		
		UOverviewScreen_C_BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.RequestedToJoinSpawnWave_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::RequestedToJoinSpawnWave_Event_1(class ASpawnWave* SpawnWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.RequestedToJoinSpawnWave_Event_1");
		
		UOverviewScreen_C_RequestedToJoinSpawnWave_Event_1_Params params {};
		params.SpawnWave = SpawnWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bJoinWaveSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOverviewScreen_C::OnReceivedSpawnWaveJoinResponse_Event_1(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1");
		
		UOverviewScreen_C_OnReceivedSpawnWaveJoinResponse_Event_1_Params params {};
		params.SpawnWave = SpawnWave;
		params.bJoinWaveSuccess = bJoinWaveSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Bind navigation widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::Bind_navigation_widget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Bind navigation widget");
		
		UOverviewScreen_C_Bind_navigation_widget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Resume Clicked_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::Resume_Clicked_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Resume Clicked_Event_1");
		
		UOverviewScreen_C_Resume_Clicked_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Toggle ingame menu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::Toggle_ingame_menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Toggle ingame menu");
		
		UOverviewScreen_C_Toggle_ingame_menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.Fired Button Action_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Button_ID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::Fired_Button_Action_Event_1(const class FName& Button_ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.Fired Button Action_Event_1");
		
		UOverviewScreen_C_Fired_Button_Action_Event_1_Params params {};
		params.Button_ID = Button_ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.CustomEvent_2");
		
		UOverviewScreen_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.BP_ShowLoadout
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bReset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOverviewScreen_C::BP_ShowLoadout(bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.BP_ShowLoadout");
		
		UOverviewScreen_C_BP_ShowLoadout_Params params {};
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.PlayerListFocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOverviewScreen_C::PlayerListFocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.PlayerListFocused");
		
		UOverviewScreen_C_PlayerListFocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.GamepadInputChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::GamepadInputChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.GamepadInputChanged");
		
		UOverviewScreen_C_GamepadInputChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.ExecuteUbergraph_OverviewScreen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::ExecuteUbergraph_OverviewScreen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.ExecuteUbergraph_OverviewScreen");
		
		UOverviewScreen_C_ExecuteUbergraph_OverviewScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OverviewScreen.OverviewScreen_C.OverviewScreenStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		OverviewScreenState_EOverviewScreenState           NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		OverviewScreenState_EOverviewScreenState           PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOverviewScreen_C::OverviewScreenStateChanged__DelegateSignature(OverviewScreenState_EOverviewScreenState NewState, OverviewScreenState_EOverviewScreenState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OverviewScreen.OverviewScreen_C.OverviewScreenStateChanged__DelegateSignature");
		
		UOverviewScreen_C_OverviewScreenStateChanged__DelegateSignature_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOverviewScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOverviewScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OverviewScreen.OverviewScreen_C");
		return ptr;
	}

}


