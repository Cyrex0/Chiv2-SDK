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
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.UpdateGamepadButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationTopBar_C::UpdateGamepadButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.UpdateGamepadButtons");
		
		UNavigationTopBar_C_UpdateGamepadButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.UpdateNotifications
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int>                                        NotificationCounts                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UNavigationTopBar_C::UpdateNotifications(TArray<int>* NotificationCounts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.UpdateNotifications");
		
		UNavigationTopBar_C_UpdateNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotificationCounts != nullptr)
			*NotificationCounts = params.NotificationCounts;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.GetNavigationButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InButtonName                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UNavigationButton_C*                         NavigationButton                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationTopBar_C::GetNavigationButton(const class FText& InButtonName, class UNavigationButton_C** NavigationButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.GetNavigationButton");
		
		UNavigationTopBar_C_GetNavigationButton_Params params {};
		params.InButtonName = InButtonName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigationButton != nullptr)
			*NavigationButton = params.NavigationButton;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.AddSubMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationTopBar_C::AddSubMenu(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.AddSubMenu");
		
		UNavigationTopBar_C_AddSubMenu_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.ClearButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationTopBar_C::ClearButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.ClearButtons");
		
		UNavigationTopBar_C_ClearButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.AddNavigationButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ButtonName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNavigationWidget_C*                         FrontEndNavigation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DisabledWIP                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UNavigationButton_C*                         NavigationButton                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationTopBar_C::AddNavigationButton(const class FText& ButtonName, class APlayerController* PlayerController, int Index, class UNavigationWidget_C* FrontEndNavigation, bool DisabledWIP, class UNavigationButton_C** NavigationButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.AddNavigationButton");
		
		UNavigationTopBar_C_AddNavigationButton_Params params {};
		params.ButtonName = ButtonName;
		params.PlayerController = PlayerController;
		params.Index = Index;
		params.FrontEndNavigation = FrontEndNavigation;
		params.DisabledWIP = DisabledWIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NavigationButton != nullptr)
			*NavigationButton = params.NavigationButton;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNavigationTopBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.Construct");
		
		UNavigationTopBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.OnMainButtonUnhovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationTopBar_C::OnMainButtonUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.OnMainButtonUnhovered");
		
		UNavigationTopBar_C_OnMainButtonUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.OnMainButtonHovered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNavigationTopBar_C::OnMainButtonHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.OnMainButtonHovered");
		
		UNavigationTopBar_C_OnMainButtonHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.ShowGamepadCallouts
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationTopBar_C::ShowGamepadCallouts(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.ShowGamepadCallouts");
		
		UNavigationTopBar_C_ShowGamepadCallouts_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationTopBar.NavigationTopBar_C.ExecuteUbergraph_NavigationTopBar
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationTopBar_C::ExecuteUbergraph_NavigationTopBar(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationTopBar.NavigationTopBar_C.ExecuteUbergraph_NavigationTopBar");
		
		UNavigationTopBar_C_ExecuteUbergraph_NavigationTopBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNavigationTopBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationTopBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NavigationTopBar.NavigationTopBar_C");
		return ptr;
	}

}


