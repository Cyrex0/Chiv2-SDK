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
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.K2_GetFocusWidget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* UNavigationWidget_C::K2_GetFocusWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.K2_GetFocusWidget");
		
		UNavigationWidget_C_K2_GetFocusWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.SelectSiblingMenuItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                IndexDelta                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CallCameraEvent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasChangedTab                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::SelectSiblingMenuItem(int IndexDelta, bool CallCameraEvent, bool* HasChangedTab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.SelectSiblingMenuItem");
		
		UNavigationWidget_C_SelectSiblingMenuItem_Params params {};
		params.IndexDelta = IndexDelta;
		params.CallCameraEvent = CallCameraEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasChangedTab != nullptr)
			*HasChangedTab = params.HasChangedTab;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.IsFrontend
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFrontend                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::IsFrontend(bool* IsFrontend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.IsFrontend");
		
		UNavigationWidget_C_IsFrontend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFrontend != nullptr)
			*IsFrontend = params.IsFrontend;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.UpdateNavigationForConsole
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ScreenName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNavigationWidget_C::UpdateNavigationForConsole(const class FText& ScreenName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.UpdateNavigationForConsole");
		
		UNavigationWidget_C_UpdateNavigationForConsole_Params params {};
		params.ScreenName = ScreenName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.UpdateNotifications
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int>                                        NotificationCounts                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::UpdateNotifications(TArray<int>* NotificationCounts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.UpdateNotifications");
		
		UNavigationWidget_C_UpdateNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotificationCounts != nullptr)
			*NotificationCounts = params.NotificationCounts;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.UpdateMenuDataUI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNavigationMenuData_C*                       NavigationMenuData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::UpdateMenuDataUI(class UNavigationMenuData_C* NavigationMenuData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.UpdateMenuDataUI");
		
		UNavigationWidget_C_UpdateMenuDataUI_Params params {};
		params.NavigationMenuData = NavigationMenuData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.ShouldCallOnMenuClickedWithShoulderButtons
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool UNavigationWidget_C::ShouldCallOnMenuClickedWithShoulderButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.ShouldCallOnMenuClickedWithShoulderButtons");
		
		UNavigationWidget_C_ShouldCallOnMenuClickedWithShoulderButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.GamepadInGame
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FGeometry                                   Geomtry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::GamepadInGame(const struct FKeyEvent& KeyEvent, const struct FGeometry& Geomtry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.GamepadInGame");
		
		UNavigationWidget_C_GamepadInGame_Params params {};
		params.KeyEvent = KeyEvent;
		params.Geomtry = Geomtry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.IsSameMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNavigationMenuData_C*                       NavigationMenuData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSame                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::IsSameMenu(class UNavigationMenuData_C* NavigationMenuData, bool* bIsSame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.IsSameMenu");
		
		UNavigationWidget_C_IsSameMenu_Params params {};
		params.NavigationMenuData = NavigationMenuData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSame != nullptr)
			*bIsSame = params.bIsSame;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.GamepadInputFrontend
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FGeometry                                   Geomtry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::GamepadInputFrontend(const struct FKeyEvent& KeyEvent, const struct FGeometry& Geomtry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.GamepadInputFrontend");
		
		UNavigationWidget_C_GamepadInputFrontend_Params params {};
		params.KeyEvent = KeyEvent;
		params.Geomtry = Geomtry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.UpdateButtonIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                IncrementValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNavigationMenuData_C*                       NewSubMenu                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::UpdateButtonIndex(int IncrementValue, class UNavigationMenuData_C** NewSubMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.UpdateButtonIndex");
		
		UNavigationWidget_C_UpdateButtonIndex_Params params {};
		params.IncrementValue = IncrementValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSubMenu != nullptr)
			*NewSubMenu = params.NewSubMenu;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UNavigationWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.OnKeyDown");
		
		UNavigationWidget_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.ChangeMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNavigationMenuData_C*                       MenuData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCallCameraEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               MenuChanged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::ChangeMenu(class UNavigationMenuData_C* MenuData, bool bCallCameraEvent, bool* MenuChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.ChangeMenu");
		
		UNavigationWidget_C_ChangeMenu_Params params {};
		params.MenuData = MenuData;
		params.bCallCameraEvent = bCallCameraEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuChanged != nullptr)
			*MenuChanged = params.MenuChanged;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.Focus on first menu button
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::Focus_on_first_menu_button()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.Focus on first menu button");
		
		UNavigationWidget_C_Focus_on_first_menu_button_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.ChangeButtonStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNavigationButton_C*                         Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNavigationWidget_C::ChangeButtonStyle(class UNavigationButton_C* Button, const class FText& Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.ChangeButtonStyle");
		
		UNavigationWidget_C_ChangeButtonStyle_Params params {};
		params.Button = Button;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.HoverChivalryButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UChivalryButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::HoverChivalryButton(class UChivalryButton_C* Button, class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.HoverChivalryButton");
		
		UNavigationWidget_C_HoverChivalryButton_Params params {};
		params.Button = Button;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.InitChivalryButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UChivalryButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Highlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::InitChivalryButton(class UChivalryButton_C* Button, class UTexture2D* Normal, class UTexture2D* Highlight, float Width, float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.InitChivalryButton");
		
		UNavigationWidget_C_InitChivalryButton_Params params {};
		params.Button = Button;
		params.Normal = Normal;
		params.Highlight = Highlight;
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.GetWidgetFromClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UTBLScreenWidget* UNavigationWidget_C::GetWidgetFromClass(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.GetWidgetFromClass");
		
		UNavigationWidget_C_GetWidgetFromClass_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.ChangeCameraSubMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                SubMenuIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::ChangeCameraSubMenu(int SubMenuIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.ChangeCameraSubMenu");
		
		UNavigationWidget_C_ChangeCameraSubMenu_Params params {};
		params.SubMenuIndex = SubMenuIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.ChangeCamera
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      CameraName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::ChangeCamera(const class FString& CameraName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.ChangeCamera");
		
		UNavigationWidget_C_ChangeCamera_Params params {};
		params.CameraName = CameraName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.OnMenuClicked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                ButtonIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCallCamera                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::OnMenuClicked(int* ButtonIndex, bool bCallCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.OnMenuClicked");
		
		UNavigationWidget_C_OnMenuClicked_Params params {};
		params.bCallCamera = bCallCamera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ButtonIndex != nullptr)
			*ButtonIndex = params.ButtonIndex;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.UpdateNavigationButtonsFromMenuStack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::UpdateNavigationButtonsFromMenuStack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.UpdateNavigationButtonsFromMenuStack");
		
		UNavigationWidget_C_UpdateNavigationButtonsFromMenuStack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNavigationWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.Construct");
		
		UNavigationWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.LoadScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::LoadScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.LoadScreen");
		
		UNavigationWidget_C_LoadScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UNavigationWidget_C_BndEvt__NavigationResumeButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.OnUpdate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::OnUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.OnUpdate");
		
		UNavigationWidget_C_OnUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.Yes Exit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::Yes_Exit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.Yes Exit");
		
		UNavigationWidget_C_Yes_Exit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.No Do Not
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::No_Do_Not()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.No Do Not");
		
		UNavigationWidget_C_No_Do_Not_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.OnPlayerStateReplicated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.OnPlayerStateReplicated_Event_1");
		
		UNavigationWidget_C_OnPlayerStateReplicated_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.Pop Current Menu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::Pop_Current_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.Pop Current Menu");
		
		UNavigationWidget_C_Pop_Current_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");
		
		UNavigationWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.ReselectFirstMenuItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCallCameraEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::ReselectFirstMenuItem(bool bCallCameraEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.ReselectFirstMenuItem");
		
		UNavigationWidget_C_ReselectFirstMenuItem_Params params {};
		params.bCallCameraEvent = bCallCameraEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.OpenFriends
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::OpenFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.OpenFriends");
		
		UNavigationWidget_C_OpenFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.TryQuitting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::TryQuitting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.TryQuitting");
		
		UNavigationWidget_C_TryQuitting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.HighlightItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::HighlightItem(int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.HighlightItem");
		
		UNavigationWidget_C_HighlightItem_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.FocusOnCurrentScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::FocusOnCurrentScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.FocusOnCurrentScreen");
		
		UNavigationWidget_C_FocusOnCurrentScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNavigationWidget_C::BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature");
		
		UNavigationWidget_C_BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNavigationWidget_C::BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature");
		
		UNavigationWidget_C_BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_6_OnUnhovered__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.On Is Matchmaking Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsMatchmaking                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::On_Is_Matchmaking_Changed(bool bIsMatchmaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.On Is Matchmaking Changed");
		
		UNavigationWidget_C_On_Is_Matchmaking_Changed_Params params {};
		params.bIsMatchmaking = bIsMatchmaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.TurnOnNotfication
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ButtonID                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bTurnOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::TurnOnNotfication(const class FText& ButtonID, bool bTurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.TurnOnNotfication");
		
		UNavigationWidget_C_TurnOnNotfication_Params params {};
		params.ButtonID = ButtonID;
		params.bTurnOn = bTurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.OnNativeSessionStatusChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::OnNativeSessionStatusChanged_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.OnNativeSessionStatusChanged_Event_1");
		
		UNavigationWidget_C_OnNativeSessionStatusChanged_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.OnChiv2MainButtonClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::OnChiv2MainButtonClicked(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.OnChiv2MainButtonClicked");
		
		UNavigationWidget_C_OnChiv2MainButtonClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNavigationWidget_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.Destruct");
		
		UNavigationWidget_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.PreConstruct");
		
		UNavigationWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNavigationWidget_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");
		
		UNavigationWidget_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNavigationWidget_C::BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UNavigationWidget_C_BndEvt__CancelMatchMaking_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNavigationWidget_C::BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");
		
		UNavigationWidget_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNavigationWidget_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature");
		
		UNavigationWidget_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.DirectOpenServerBrowser
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::DirectOpenServerBrowser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.DirectOpenServerBrowser");
		
		UNavigationWidget_C_DirectOpenServerBrowser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.SelectMenuItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CallCameraEvent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::SelectMenuItem(int Index, bool CallCameraEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.SelectMenuItem");
		
		UNavigationWidget_C_SelectMenuItem_Params params {};
		params.Index = Index;
		params.CallCameraEvent = CallCameraEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.ExecuteUbergraph_NavigationWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::ExecuteUbergraph_NavigationWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.ExecuteUbergraph_NavigationWidget");
		
		UNavigationWidget_C_ExecuteUbergraph_NavigationWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.OnMenuChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Changed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationWidget_C::OnMenuChanged__DelegateSignature(bool Changed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.OnMenuChanged__DelegateSignature");
		
		UNavigationWidget_C_OnMenuChanged__DelegateSignature_Params params {};
		params.Changed = Changed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.Fired Button Action__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Button_ID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::Fired_Button_Action__DelegateSignature(const class FName& Button_ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.Fired Button Action__DelegateSignature");
		
		UNavigationWidget_C_Fired_Button_Action__DelegateSignature_Params params {};
		params.Button_ID = Button_ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.Resume Clicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::Resume_Clicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.Resume Clicked__DelegateSignature");
		
		UNavigationWidget_C_Resume_Clicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.DeselectMenus__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationWidget_C::DeselectMenus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.DeselectMenus__DelegateSignature");
		
		UNavigationWidget_C_DeselectMenus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationWidget.NavigationWidget_C.ChangeCameraEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      CameraName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        FrontendEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationWidget_C::ChangeCameraEvent__DelegateSignature(const class FString& CameraName, const class FName& FrontendEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationWidget.NavigationWidget_C.ChangeCameraEvent__DelegateSignature");
		
		UNavigationWidget_C_ChangeCameraEvent__DelegateSignature_Params params {};
		params.CameraName = CameraName;
		params.FrontendEvent = FrontendEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNavigationWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NavigationWidget.NavigationWidget_C");
		return ptr;
	}

}


