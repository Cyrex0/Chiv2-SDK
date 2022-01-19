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
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.HideWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::HideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.HideWidget");
		
		USiegeEngineHUD_C_HideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateHUD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::UpdateHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateHUD");
		
		USiegeEngineHUD_C_UpdateHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateSiegeState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::UpdateSiegeState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateSiegeState");
		
		USiegeEngineHUD_C_UpdateSiegeState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.ShowWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASiegeEngine*                                Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiegeEngineHUD_C::ShowWidget(class ASiegeEngine* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.ShowWidget");
		
		USiegeEngineHUD_C_ShowWidget_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.AddDelegates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::AddDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.AddDelegates");
		
		USiegeEngineHUD_C_AddDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.RemoveDelegates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::RemoveDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.RemoveDelegates");
		
		USiegeEngineHUD_C_RemoveDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeOutOfProgressBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::StartFadeOutOfProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeOutOfProgressBar");
		
		USiegeEngineHUD_C_StartFadeOutOfProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeInOfProgressBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::StartFadeInOfProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeInOfProgressBar");
		
		USiegeEngineHUD_C_StartFadeInOfProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USiegeEngineHUD_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.PreConstruct");
		
		USiegeEngineHUD_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.OnInitialized");
		
		USiegeEngineHUD_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.OnInputModeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiegeEngineHUD_C::OnInputModeChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.OnInputModeChanged");
		
		USiegeEngineHUD_C_OnInputModeChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateKeybind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::UpdateKeybind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateKeybind");
		
		USiegeEngineHUD_C_UpdateKeybind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiegeEngineHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.Tick");
		
		USiegeEngineHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_LoadedAmmo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              LoadedAmmo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiegeEngineHUD_C::Catapult_LoadedAmmo(class AInventoryItem* LoadedAmmo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_LoadedAmmo");
		
		USiegeEngineHUD_C_Catapult_LoadedAmmo_Params params {};
		params.LoadedAmmo = LoadedAmmo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_ReadyToFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USiegeEngineHUD_C::Catapult_ReadyToFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_ReadyToFire");
		
		USiegeEngineHUD_C_Catapult_ReadyToFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_CombatStateChanged
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttackInfo                                 EventAttackInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UCombatState*                                CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiegeEngineHUD_C::Catapult_CombatStateChanged(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_CombatStateChanged");
		
		USiegeEngineHUD_C_Catapult_CombatStateChanged_Params params {};
		params.Actor = Actor;
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		params.EventAttackInfo = EventAttackInfo;
		params.CombatState = CombatState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.Ballista_CombatStateChanged
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttackInfo                                 EventAttackInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UCombatState*                                CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiegeEngineHUD_C::Ballista_CombatStateChanged(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.Ballista_CombatStateChanged");
		
		USiegeEngineHUD_C_Ballista_CombatStateChanged_Params params {};
		params.Actor = Actor;
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		params.EventAttackInfo = EventAttackInfo;
		params.CombatState = CombatState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.BatteringRam_CombatStateChanged
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttackInfo                                 EventAttackInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UCombatState*                                CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiegeEngineHUD_C::BatteringRam_CombatStateChanged(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.BatteringRam_CombatStateChanged");
		
		USiegeEngineHUD_C_BatteringRam_CombatStateChanged_Params params {};
		params.Actor = Actor;
		params.PreviousState = PreviousState;
		params.NewState = NewState;
		params.EventAttackInfo = EventAttackInfo;
		params.CombatState = CombatState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SiegeEngineHUD.SiegeEngineHUD_C.ExecuteUbergraph_SiegeEngineHUD
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USiegeEngineHUD_C::ExecuteUbergraph_SiegeEngineHUD(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SiegeEngineHUD.SiegeEngineHUD_C.ExecuteUbergraph_SiegeEngineHUD");
		
		USiegeEngineHUD_C_ExecuteUbergraph_SiegeEngineHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USiegeEngineHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USiegeEngineHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SiegeEngineHUD.SiegeEngineHUD_C");
		return ptr;
	}

}


