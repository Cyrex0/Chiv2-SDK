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
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.K2_GetFocusWidget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UWidget* ULoadout_Screen_C::K2_GetFocusWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.K2_GetFocusWidget");
		
		ULoadout_Screen_C_K2_GetFocusWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.UpdateContentVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		UMG_ESlateVisibility                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::UpdateContentVisibility(UMG_ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.UpdateContentVisibility");
		
		ULoadout_Screen_C_UpdateContentVisibility_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.GetLoadoutSubclassButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Subclass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutSubclassButton_C*                    SubclassButton                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::GetLoadoutSubclassButton(class UClass* Subclass, class ULoadoutSubclassButton_C** SubclassButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.GetLoadoutSubclassButton");
		
		ULoadout_Screen_C_GetLoadoutSubclassButton_Params params {};
		params.Subclass = Subclass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubclassButton != nullptr)
			*SubclassButton = params.SubclassButton;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.SelectNextSubclass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsNext                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadout_Screen_C::SelectNextSubclass(bool bIsNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.SelectNextSubclass");
		
		ULoadout_Screen_C_SelectNextSubclass_Params params {};
		params.bIsNext = bIsNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply ULoadout_Screen_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.OnPreviewKeyDown");
		
		ULoadout_Screen_C_OnPreviewKeyDown_Params params {};
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
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.ConstructLoadoutClassButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::ConstructLoadoutClassButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.ConstructLoadoutClassButtons");
		
		ULoadout_Screen_C_ConstructLoadoutClassButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.GetSpawnableClasses
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class UClass*> ULoadout_Screen_C::GetSpawnableClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.GetSpawnableClasses");
		
		ULoadout_Screen_C_GetSpawnableClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.GetCurrentWeapon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CurrentLoadoutItemClass                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              WeaponGroup                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class ATBLPlayerController*                        Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Loadout                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      CurrentWeaponClass                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::GetCurrentWeapon(class UClass* CurrentLoadoutItemClass, TArray<class UClass*>* WeaponGroup, class ATBLPlayerController* Controller, class UClass* Loadout, class UClass** CurrentWeaponClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.GetCurrentWeapon");
		
		ULoadout_Screen_C_GetCurrentWeapon_Params params {};
		params.CurrentLoadoutItemClass = CurrentLoadoutItemClass;
		params.Controller = Controller;
		params.Loadout = Loadout;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponGroup != nullptr)
			*WeaponGroup = params.WeaponGroup;
		if (CurrentWeaponClass != nullptr)
			*CurrentWeaponClass = params.CurrentWeaponClass;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply ULoadout_Screen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.OnKeyDown");
		
		ULoadout_Screen_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.FindCurrentSubclass
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Subclass                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SaveLoadout                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadout_Screen_C::FindCurrentSubclass(class UClass** Subclass, bool* SaveLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.FindCurrentSubclass");
		
		ULoadout_Screen_C_FindCurrentSubclass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Subclass != nullptr)
			*Subclass = params.Subclass;
		if (SaveLoadout != nullptr)
			*SaveLoadout = params.SaveLoadout;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.GetWeaponSelection
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                WeaponSlot                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              WeaponList                                                 (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::GetWeaponSelection(class UClass* CharacterClass, int WeaponSlot, TArray<class UClass*>* WeaponList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.GetWeaponSelection");
		
		ULoadout_Screen_C_GetWeaponSelection_Params params {};
		params.CharacterClass = CharacterClass;
		params.WeaponSlot = WeaponSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponList != nullptr)
			*WeaponList = params.WeaponList;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.GetDefaultWeapon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UClass*>                              WeaponGroupArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UClass*                                      Weapon                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::GetDefaultWeapon(TArray<class UClass*>* WeaponGroupArray, class UClass** Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.GetDefaultWeapon");
		
		ULoadout_Screen_C_GetDefaultWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponGroupArray != nullptr)
			*WeaponGroupArray = params.WeaponGroupArray;
		if (Weapon != nullptr)
			*Weapon = params.Weapon;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.GetCurrentLoadoutForClass
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      CurrentClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLoadout                                    Loadout                                                    (Parm, OutParm, NoDestructor)
	 */
	void ULoadout_Screen_C::GetCurrentLoadoutForClass(class UClass* CurrentClass, struct FLoadout* Loadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.GetCurrentLoadoutForClass");
		
		ULoadout_Screen_C_GetCurrentLoadoutForClass_Params params {};
		params.CurrentClass = CurrentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loadout != nullptr)
			*Loadout = params.Loadout;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.SaveLoadout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::SaveLoadout(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.SaveLoadout");
		
		ULoadout_Screen_C_SaveLoadout_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.PlayNewLoadoutAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::PlayNewLoadoutAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.PlayNewLoadoutAnimation");
		
		ULoadout_Screen_C_PlayNewLoadoutAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.NextSpawnWaveReplicated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::NextSpawnWaveReplicated_Event_1(class ASpawnWave* SpawnWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.NextSpawnWaveReplicated_Event_1");
		
		ULoadout_Screen_C_NextSpawnWaveReplicated_Event_1_Params params {};
		params.SpawnWave = SpawnWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.OnOpenedScreen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::OnOpenedScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.OnOpenedScreen");
		
		ULoadout_Screen_C_OnOpenedScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULoadout_Screen_C::BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");
		
		ULoadout_Screen_C_BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.SetAllowedClasses
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::SetAllowedClasses(class ASpawnWave* SpawnWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.SetAllowedClasses");
		
		ULoadout_Screen_C_SetAllowedClasses_Params params {};
		params.SpawnWave = SpawnWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULoadout_Screen_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.OnInitialized");
		
		ULoadout_Screen_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.NewBaseClassSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::NewBaseClassSelected(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.NewBaseClassSelected");
		
		ULoadout_Screen_C_NewBaseClassSelected_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.InitSpawnableClasses
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::InitSpawnableClasses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.InitSpawnableClasses");
		
		ULoadout_Screen_C_InitSpawnableClasses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.InitLoadout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::InitLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.InitLoadout");
		
		ULoadout_Screen_C_InitLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.InitClassSelectBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::InitClassSelectBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.InitClassSelectBar");
		
		ULoadout_Screen_C_InitClassSelectBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.InitUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::InitUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.InitUI");
		
		ULoadout_Screen_C_InitUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.InitLoadoutScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::InitLoadoutScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.InitLoadoutScreen");
		
		ULoadout_Screen_C_InitLoadoutScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.CloseAndConfirmLoadout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::CloseAndConfirmLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.CloseAndConfirmLoadout");
		
		ULoadout_Screen_C_CloseAndConfirmLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.Spectate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::Spectate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.Spectate");
		
		ULoadout_Screen_C_Spectate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.OpenTeamSelect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::OpenTeamSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.OpenTeamSelect");
		
		ULoadout_Screen_C_OpenTeamSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.PostYouWillRespawnAsNotification
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::PostYouWillRespawnAsNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.PostYouWillRespawnAsNotification");
		
		ULoadout_Screen_C_PostYouWillRespawnAsNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.OnInputChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::OnInputChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.OnInputChanged");
		
		ULoadout_Screen_C_OnInputChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.NewSubclassSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Subclass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::NewSubclassSelected(class UClass* Subclass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.NewSubclassSelected");
		
		ULoadout_Screen_C_NewSubclassSelected_Params params {};
		params.Subclass = Subclass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.OnStateChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		OverviewScreenState_EOverviewScreenState           NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		OverviewScreenState_EOverviewScreenState           PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::OnStateChanged(OverviewScreenState_EOverviewScreenState NewState, OverviewScreenState_EOverviewScreenState PreviousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.OnStateChanged");
		
		ULoadout_Screen_C_OnStateChanged_Params params {};
		params.NewState = NewState;
		params.PreviousState = PreviousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.Reset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.Reset");
		
		ULoadout_Screen_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.BindWidgets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::BindWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.BindWidgets");
		
		ULoadout_Screen_C_BindWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.SubclassSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Subclass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutClassSelectionWidget_C*              LoadoutClassSelectionWidget                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutSubclassButton_C*                    LoadoutClassButton                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadout_Screen_C::SubclassSelected(class UClass* Subclass, class ULoadoutClassSelectionWidget_C* LoadoutClassSelectionWidget, class ULoadoutSubclassButton_C* LoadoutClassButton, bool bIsLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.SubclassSelected");
		
		ULoadout_Screen_C_SubclassSelected_Params params {};
		params.Subclass = Subclass;
		params.LoadoutClassSelectionWidget = LoadoutClassSelectionWidget;
		params.LoadoutClassButton = LoadoutClassButton;
		params.bIsLocked = bIsLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.ItemClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EInventoryItemSlot                             Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULoadoutButton_C*                            LoadoutButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::ItemClicked(TBL_EInventoryItemSlot Slot, class UClass* Item, class ULoadoutButton_C* LoadoutButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.ItemClicked");
		
		ULoadout_Screen_C_ItemClicked_Params params {};
		params.Slot = Slot;
		params.Item = Item;
		params.LoadoutButton = LoadoutButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.OnItemClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EInventoryItemSlot                             Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::OnItemClicked(TBL_EInventoryItemSlot Slot, class UClass* InventoryItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.OnItemClicked");
		
		ULoadout_Screen_C_OnItemClicked_Params params {};
		params.Slot = Slot;
		params.InventoryItem = InventoryItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.PostShuffleModeMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::PostShuffleModeMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.PostShuffleModeMessage");
		
		ULoadout_Screen_C_PostShuffleModeMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.RandomClass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::RandomClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.RandomClass");
		
		ULoadout_Screen_C_RandomClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.ToggleShuffle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::ToggleShuffle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.ToggleShuffle");
		
		ULoadout_Screen_C_ToggleShuffle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.BackToInGameMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::BackToInGameMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.BackToInGameMenu");
		
		ULoadout_Screen_C_BackToInGameMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULoadout_Screen_C::BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");
		
		ULoadout_Screen_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULoadout_Screen_C::BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		ULoadout_Screen_C_BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadout_Screen_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.PreConstruct");
		
		ULoadout_Screen_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULoadout_Screen_C::BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");
		
		ULoadout_Screen_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULoadout_Screen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");
		
		ULoadout_Screen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.LockedSubclassSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Subclass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLevelLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadout_Screen_C::LockedSubclassSelected(class UClass* Subclass, bool bLevelLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.LockedSubclassSelected");
		
		ULoadout_Screen_C_LockedSubclassSelected_Params params {};
		params.Subclass = Subclass;
		params.bLevelLocked = bLevelLocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULoadout_Screen_C::BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		ULoadout_Screen_C_BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ULoadout_Screen_C::BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		ULoadout_Screen_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.UpdateShuffleButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShuffle                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadout_Screen_C::UpdateShuffleButtons(bool bShuffle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.UpdateShuffleButtons");
		
		ULoadout_Screen_C_UpdateShuffleButtons_Params params {};
		params.bShuffle = bShuffle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.ExecuteUbergraph_Loadout_Screen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadout_Screen_C::ExecuteUbergraph_Loadout_Screen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.ExecuteUbergraph_Loadout_Screen");
		
		ULoadout_Screen_C_ExecuteUbergraph_Loadout_Screen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.Loadout confirmed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::Loadout_confirmed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.Loadout confirmed__DelegateSignature");
		
		ULoadout_Screen_C_Loadout_confirmed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Loadout_Screen.Loadout_Screen_C.Class Selected__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ULoadout_Screen_C::Class_Selected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Loadout_Screen.Loadout_Screen_C.Class Selected__DelegateSignature");
		
		ULoadout_Screen_C_Class_Selected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadout_Screen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadout_Screen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Loadout_Screen.Loadout_Screen_C");
		return ptr;
	}

}


