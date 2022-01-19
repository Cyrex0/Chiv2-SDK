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
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnGenerateLevelUpRow_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLevelUpResult                              LevelUpEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	class UWidget* UHUDWidget_C::OnGenerateLevelUpRow_1(const struct FLevelUpResult& LevelUpEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnGenerateLevelUpRow_1");
		
		UHUDWidget_C_OnGenerateLevelUpRow_1_Params params {};
		params.LevelUpEvent = LevelUpEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnGenerateRow_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScoreEventStruct                           ScoreEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	class UWidget* UHUDWidget_C::OnGenerateRow_1(const struct FScoreEventStruct& ScoreEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnGenerateRow_1");
		
		UHUDWidget_C_OnGenerateRow_1_Params params {};
		params.ScoreEvent = ScoreEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.BP_OnBlockKeyPress
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TBL_EWeaponAbilitySlotKey                          WeaponAbilitySlotKey                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UHUDWidget_C::BP_OnBlockKeyPress(TBL_EWeaponAbilitySlotKey WeaponAbilitySlotKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.BP_OnBlockKeyPress");
		
		UHUDWidget_C_BP_OnBlockKeyPress_Params params {};
		params.WeaponAbilitySlotKey = WeaponAbilitySlotKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.IsRadialInventoryOpen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidget_C::IsRadialInventoryOpen(bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.IsRadialInventoryOpen");
		
		UHUDWidget_C_IsRadialInventoryOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.IsVOPickerOpen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidget_C::IsVOPickerOpen(bool* IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.IsVOPickerOpen");
		
		UHUDWidget_C_IsVOPickerOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.EnableFocusMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidget_C::EnableFocusMode(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.EnableFocusMode");
		
		UHUDWidget_C_EnableFocusMode_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.GetCurrentTeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    Team                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::GetCurrentTeam(class ATBLTeam** Team)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.GetCurrentTeam");
		
		UHUDWidget_C_GetCurrentTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Team != nullptr)
			*Team = params.Team;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.UpdateLayersVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPawnValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSpectatorPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsPlayerSelectedSpectatorMode                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsTeamValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidget_C::UpdateLayersVisibility(bool IsPawnValid, bool IsSpectatorPawn, bool IsPlayerSelectedSpectatorMode, bool IsTeamValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.UpdateLayersVisibility");
		
		UHUDWidget_C_UpdateLayersVisibility_Params params {};
		params.IsPawnValid = IsPawnValid;
		params.IsSpectatorPawn = IsSpectatorPawn;
		params.IsPlayerSelectedSpectatorMode = IsPlayerSelectedSpectatorMode;
		params.IsTeamValid = IsTeamValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.CanPlayEmoteMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidget_C::CanPlayEmoteMenu(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.CanPlayEmoteMenu");
		
		UHUDWidget_C_CanPlayEmoteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnLoaded_B028355C46F5520A2991C6947E015364
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnLoaded_B028355C46F5520A2991C6947E015364(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnLoaded_B028355C46F5520A2991C6947E015364");
		
		UHUDWidget_C_OnLoaded_B028355C46F5520A2991C6947E015364_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnPlayerKilled_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUDWidget_C::OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnPlayerKilled_Event_1");
		
		UHUDWidget_C_OnPlayerKilled_Event_1_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.On My Pawn Died
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::On_My_Pawn_Died()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.On My Pawn Died");
		
		UHUDWidget_C_On_My_Pawn_Died_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.On Possessed New Pawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::On_Possessed_New_Pawn(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.On Possessed New Pawn");
		
		UHUDWidget_C_On_Possessed_New_Pawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnPossessedPawn_Event_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnPossessedPawn_Event_2(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnPossessedPawn_Event_2");
		
		UHUDWidget_C_OnPossessedPawn_Event_2_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.ShowVOTacticalMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::ShowVOTacticalMenu(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.ShowVOTacticalMenu");
		
		UHUDWidget_C_ShowVOTacticalMenu_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.ShowVOPersonalMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::ShowVOPersonalMenu(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.ShowVOPersonalMenu");
		
		UHUDWidget_C_ShowVOPersonalMenu_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.HideVOMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::HideVOMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.HideVOMenu");
		
		UHUDWidget_C_HideVOMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnMount_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AttachParent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USiegeMountPoint*                            MountPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnMount_Event_1(class AActor* AttachParent, class USiegeMountPoint* MountPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnMount_Event_1");
		
		UHUDWidget_C_OnMount_Event_1_Params params {};
		params.AttachParent = AttachParent;
		params.MountPoint = MountPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnDismount_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      AttachParent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EDismountType                                  DismountType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnDismount_Event_1(class AActor* AttachParent, TBL_EDismountType DismountType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnDismount_Event_1");
		
		UHUDWidget_C_OnDismount_Event_1_Params params {};
		params.AttachParent = AttachParent;
		params.DismountType = DismountType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.InitializeTapOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::InitializeTapOut(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.InitializeTapOut");
		
		UHUDWidget_C_InitializeTapOut_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.InitializePinnedInteractable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::InitializePinnedInteractable(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.InitializePinnedInteractable");
		
		UHUDWidget_C_InitializePinnedInteractable_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnInteractableFocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractableComponent*                      InteractableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnInteractableFocused(class UInteractableComponent* InteractableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnInteractableFocused");
		
		UHUDWidget_C_OnInteractableFocused_Params params {};
		params.InteractableComponent = InteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnInteractableLostFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::OnInteractableLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnInteractableLostFocus");
		
		UHUDWidget_C_OnInteractableLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.Set cinematics mode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicMenuMode_ECinematicMenuMode               New_mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::Set_cinematics_mode(CinematicMenuMode_ECinematicMenuMode New_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.Set cinematics mode");
		
		UHUDWidget_C_Set_cinematics_mode_Params params {};
		params.New_mode = New_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.Update full layer opacity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::Update_full_layer_opacity(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.Update full layer opacity");
		
		UHUDWidget_C_Update_full_layer_opacity_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.Update parial layer opacity
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::Update_parial_layer_opacity(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.Update parial layer opacity");
		
		UHUDWidget_C_Update_parial_layer_opacity_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.ShowVOEmoteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::ShowVOEmoteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.ShowVOEmoteMenu");
		
		UHUDWidget_C_ShowVOEmoteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnClientPossessedPawn_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnClientPossessedPawn_Event_1(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnClientPossessedPawn_Event_1");
		
		UHUDWidget_C_OnClientPossessedPawn_Event_1_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnTeamChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnTeamChanged(class ATBLTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnTeamChanged");
		
		UHUDWidget_C_OnTeamChanged_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnTeamChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnTeamChanged_Event_1(class ATBLTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnTeamChanged_Event_1");
		
		UHUDWidget_C_OnTeamChanged_Event_1_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        HintText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUDWidget_C::BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature(const class FName& Text, const class FString& ActionName, bool Enable, const class FText& HintText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature");
		
		UHUDWidget_C_BndEvt__Crosshair_0_K2Node_ComponentBoundEvent_0_SendInputMessage__DelegateSignature_Params params {};
		params.Text = Text;
		params.ActionName = ActionName;
		params.Enable = Enable;
		params.HintText = HintText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUDWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.Construct");
		
		UHUDWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.InitializeMountedWidgets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::InitializeMountedWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.InitializeMountedWidgets");
		
		UHUDWidget_C_InitializeMountedWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnStatsComponentFocused_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStatsComponent*                             StatsComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnStatsComponentFocused_Event_1(class UStatsComponent* StatsComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnStatsComponentFocused_Event_1");
		
		UHUDWidget_C_OnStatsComponentFocused_Event_1_Params params {};
		params.StatsComponent = StatsComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnStatsComponentLostFocused_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::OnStatsComponentLostFocused_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnStatsComponentLostFocused_Event_1");
		
		UHUDWidget_C_OnStatsComponentLostFocused_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidget_C::BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature");
		
		UHUDWidget_C_BndEvt__TapOutWidget_K2Node_ComponentBoundEvent_1_IsBeingRevived__DelegateSignature_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.HideNameplate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               _                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidget_C::HideNameplate(bool _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.HideNameplate");
		
		UHUDWidget_C_HideNameplate_Params params {};
		params._ = _;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.InitializeGameModeWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::InitializeGameModeWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.InitializeGameModeWidget");
		
		UHUDWidget_C_InitializeGameModeWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.ShowRadialInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::ShowRadialInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.ShowRadialInventory");
		
		UHUDWidget_C_ShowRadialInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.HideRadialInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::HideRadialInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.HideRadialInventory");
		
		UHUDWidget_C_HideRadialInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.InitializeProgressUI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::InitializeProgressUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.InitializeProgressUI");
		
		UHUDWidget_C_InitializeProgressUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.StatsComponentHitFade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::StatsComponentHitFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.StatsComponentHitFade");
		
		UHUDWidget_C_StatsComponentHitFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnDamageCaused_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	 */
	void UHUDWidget_C::OnDamageCaused_Event_1(const struct FDamageTakenEvent& DamageEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnDamageCaused_Event_1");
		
		UHUDWidget_C_OnDamageCaused_Event_1_Params params {};
		params.DamageEvent = DamageEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.ReshowNamePlate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::ReshowNamePlate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.ReshowNamePlate");
		
		UHUDWidget_C_ReshowNamePlate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnJoinWave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bJoinWaveSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDWidget_C::OnJoinWave(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnJoinWave");
		
		UHUDWidget_C_OnJoinWave_Params params {};
		params.SpawnWave = SpawnWave;
		params.bJoinWaveSuccess = bJoinWaveSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnUseableActorInteractableFocused_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractableComponent*                      InteractableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnUseableActorInteractableFocused_Event_1(class UInteractableComponent* InteractableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnUseableActorInteractableFocused_Event_1");
		
		UHUDWidget_C_OnUseableActorInteractableFocused_Event_1_Params params {};
		params.InteractableComponent = InteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnUseableActorInteractableLostFocused_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractableComponent*                      InteractableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnUseableActorInteractableLostFocused_Event_1(class UInteractableComponent* InteractableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnUseableActorInteractableLostFocused_Event_1");
		
		UHUDWidget_C_OnUseableActorInteractableLostFocused_Event_1_Params params {};
		params.InteractableComponent = InteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUDWidget_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnInitialized");
		
		UHUDWidget_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.PostDeathHidden
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::PostDeathHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.PostDeathHidden");
		
		UHUDWidget_C_PostDeathHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.AutoHideVOMenuTimerStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::AutoHideVOMenuTimerStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.AutoHideVOMenuTimerStarted");
		
		UHUDWidget_C_AutoHideVOMenuTimerStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.PostCombatStateHideDowned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::PostCombatStateHideDowned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.PostCombatStateHideDowned");
		
		UHUDWidget_C_PostCombatStateHideDowned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.DisableFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHUDWidget_C::DisableFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.DisableFocus");
		
		UHUDWidget_C_DisableFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.EnableFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractableComponent*                      InteractableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::EnableFocus(class UInteractableComponent* InteractableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.EnableFocus");
		
		UHUDWidget_C_EnableFocus_Params params {};
		params.InteractableComponent = InteractableComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnApplyCondition_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EConditionType                                 Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnApplyCondition_Event_1(class AActor* Actor, TBL_EConditionType Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnApplyCondition_Event_1");
		
		UHUDWidget_C_OnApplyCondition_Event_1_Params params {};
		params.Actor = Actor;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.OnRemoveCondition_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EConditionType                                 Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::OnRemoveCondition_Event_1(class AActor* Actor, TBL_EConditionType Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.OnRemoveCondition_Event_1");
		
		UHUDWidget_C_OnRemoveCondition_Event_1_Params params {};
		params.Actor = Actor;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.ExecuteUbergraph_HUDWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::ExecuteUbergraph_HUDWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.ExecuteUbergraph_HUDWidget");
		
		UHUDWidget_C_ExecuteUbergraph_HUDWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDWidget.HUDWidget_C.Cinematics Mode Changed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicMenuMode_ECinematicMenuMode               New_mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		CinematicMenuMode_ECinematicMenuMode               Previous_mode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidget_C::Cinematics_Mode_Changed__DelegateSignature(CinematicMenuMode_ECinematicMenuMode New_mode, CinematicMenuMode_ECinematicMenuMode Previous_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidget.HUDWidget_C.Cinematics Mode Changed__DelegateSignature");
		
		UHUDWidget_C_Cinematics_Mode_Changed__DelegateSignature_Params params {};
		params.New_mode = New_mode;
		params.Previous_mode = Previous_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHUDWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDWidget.HUDWidget_C");
		return ptr;
	}

}


