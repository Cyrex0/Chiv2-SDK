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
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.IsMatchmaking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UQuickPlayScreen_C::IsMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.IsMatchmaking");
		
		UQuickPlayScreen_C_IsMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.Set MM Button Image
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNavigationSubButton_C*                      Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Image_Name                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::Set_MM_Button_Image(class UNavigationSubButton_C* Button, const class FName& Image_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.Set MM Button Image");
		
		UQuickPlayScreen_C_Set_MM_Button_Image_Params params {};
		params.Button = Button;
		params.Image_Name = Image_Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.SetNavMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::SetNavMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.SetNavMenu");
		
		UQuickPlayScreen_C_SetNavMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnInitialized");
		
		UQuickPlayScreen_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnOpenedScreen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::OnOpenedScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnOpenedScreen");
		
		UQuickPlayScreen_C_OnOpenedScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnInputModeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::OnInputModeChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnInputModeChanged");
		
		UQuickPlayScreen_C_OnInputModeChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnTitleDataUpdated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::OnTitleDataUpdated_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnTitleDataUpdated_Event_1");
		
		UQuickPlayScreen_C_OnTitleDataUpdated_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnIsMatchmakingChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsMatchmaking                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickPlayScreen_C::OnIsMatchmakingChanged_Event_1(bool bIsMatchmaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnIsMatchmakingChanged_Event_1");
		
		UQuickPlayScreen_C_OnIsMatchmakingChanged_Event_1_Params params {};
		params.bIsMatchmaking = bIsMatchmaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.On Has Title Data Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::On_Has_Title_Data_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.On Has Title Data Changed");
		
		UQuickPlayScreen_C_On_Has_Title_Data_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.On Matchmaking Queues Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::On_Matchmaking_Queues_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.On Matchmaking Queues Changed");
		
		UQuickPlayScreen_C_On_Matchmaking_Queues_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__MMButton0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__MMButton0_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__MMButton1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__MMButton1_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__MMButton2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__MMButton2_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__MMButton3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__MMButton3_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__MMButton4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__MMButton4_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton5_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__MMButton5_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__MMButton5_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__MMButton5_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__AllQueuesButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__AllQueuesButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__AllQueuesButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__AllQueuesButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.On MM Button Clicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::On_MM_Button_Clicked(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.On MM Button Clicked");
		
		UQuickPlayScreen_C_On_MM_Button_Clicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__QuickPlayButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__QuickPlayButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__QuickPlayButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__QuickPlayButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__CreateGameButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__ServerButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__TutorialButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__TutorialButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__TutorialButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__TutorialButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__BrowserQuickMatchButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__BrowserQuickMatchButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__BrowserQuickMatchButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__BrowserQuickMatchButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.SetCreateGamePermission
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::SetCreateGamePermission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.SetCreateGamePermission");
		
		UQuickPlayScreen_C_SetCreateGamePermission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.Construct");
		
		UQuickPlayScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnCreatedParty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PartyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::OnCreatedParty(bool Result, const class FString& PartyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnCreatedParty");
		
		UQuickPlayScreen_C_OnCreatedParty_Params params {};
		params.Result = Result;
		params.PartyId = PartyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeaderChange_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::OnPartyLeaderChange_Event_1(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeaderChange_Event_1");
		
		UQuickPlayScreen_C_OnPartyLeaderChange_Event_1_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeave_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickPlayScreen_C::OnPartyLeave_Event_1(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeave_Event_1");
		
		UQuickPlayScreen_C_OnPartyLeave_Event_1_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnPartyDisband_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::OnPartyDisband_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyDisband_Event_1");
		
		UQuickPlayScreen_C_OnPartyDisband_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnMemberJoin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::OnMemberJoin(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnMemberJoin");
		
		UQuickPlayScreen_C_OnMemberJoin_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnPartyInviteAccept_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      PartyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::OnPartyInviteAccept_Event_1(const class FString& PartyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyInviteAccept_Event_1");
		
		UQuickPlayScreen_C_OnPartyInviteAccept_Event_1_Params params {};
		params.PartyId = PartyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__TutorialButton_1_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__TutorialButton_1_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__TutorialButton_1_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__TutorialButton_1_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature");
		
		UQuickPlayScreen_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnPartyJoinedQueue_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::OnPartyJoinedQueue_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyJoinedQueue_Event_1");
		
		UQuickPlayScreen_C_OnPartyJoinedQueue_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeftQueue_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::OnPartyLeftQueue_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.OnPartyLeftQueue_Event_1");
		
		UQuickPlayScreen_C_OnPartyLeftQueue_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.CanCancelMatchMaking
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickPlayScreen_C::CanCancelMatchMaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.CanCancelMatchMaking");
		
		UQuickPlayScreen_C_CanCancelMatchMaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickPlayScreen.QuickPlayScreen_C.ExecuteUbergraph_QuickPlayScreen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickPlayScreen_C::ExecuteUbergraph_QuickPlayScreen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickPlayScreen.QuickPlayScreen_C.ExecuteUbergraph_QuickPlayScreen");
		
		UQuickPlayScreen_C_ExecuteUbergraph_QuickPlayScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UQuickPlayScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickPlayScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickPlayScreen.QuickPlayScreen_C");
		return ptr;
	}

}


