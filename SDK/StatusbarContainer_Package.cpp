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
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.ShouldShowStatusBar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UStatusbarContainer_C::ShouldShowStatusBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.ShouldShowStatusBar");
		
		UStatusbarContainer_C_ShouldShowStatusBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.UpdateTeamIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::UpdateTeamIcon(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.UpdateTeamIcon");
		
		UStatusbarContainer_C_UpdateTeamIcon_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_0_OnUpdate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UActorHealthBar_C*                           Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_0_OnUpdate__DelegateSignature(class UActorHealthBar_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_0_OnUpdate__DelegateSignature");
		
		UStatusbarContainer_C_BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_0_OnUpdate__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UStatusbarContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.Construct");
		
		UStatusbarContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.ForceUpdateBandage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStatusbarContainer_C::ForceUpdateBandage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.ForceUpdateBandage");
		
		UStatusbarContainer_C_ForceUpdateBandage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.OnAddedToInventoryChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAddedToInventory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStatusbarContainer_C::OnAddedToInventoryChanged_Event_1(class AInventoryItem* Item, bool IsAddedToInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.OnAddedToInventoryChanged_Event_1");
		
		UStatusbarContainer_C_OnAddedToInventoryChanged_Event_1_Params params {};
		params.Item = Item;
		params.IsAddedToInventory = IsAddedToInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.OnPossessedPawn_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.OnPossessedPawn_Event_1");
		
		UStatusbarContainer_C_OnPossessedPawn_Event_1_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.HideBandage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStatusbarContainer_C::HideBandage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.HideBandage");
		
		UStatusbarContainer_C_HideBandage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.OnTeamChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::OnTeamChanged_Event_1(class ATBLTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.OnTeamChanged_Event_1");
		
		UStatusbarContainer_C_OnTeamChanged_Event_1_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.ToggleHorseMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStatusbarContainer_C::ToggleHorseMode(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.ToggleHorseMode");
		
		UStatusbarContainer_C_ToggleHorseMode_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.BndEvt__ActorHealthBar_C_1_K2Node_ComponentBoundEvent_1_OnUpdate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UActorHealthBar_C*                           Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::BndEvt__ActorHealthBar_C_1_K2Node_ComponentBoundEvent_1_OnUpdate__DelegateSignature(class UActorHealthBar_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.BndEvt__ActorHealthBar_C_1_K2Node_ComponentBoundEvent_1_OnUpdate__DelegateSignature");
		
		UStatusbarContainer_C_BndEvt__ActorHealthBar_C_1_K2Node_ComponentBoundEvent_1_OnUpdate__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.AttemptFadeSTatusBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStatusbarContainer_C::AttemptFadeSTatusBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.AttemptFadeSTatusBar");
		
		UStatusbarContainer_C_AttemptFadeSTatusBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.OnInputChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::OnInputChange(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.OnInputChange");
		
		UStatusbarContainer_C_OnInputChange_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeStart_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EHealingSource                                 HealingSource                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLPlayerState*                             InstigatorPlayerState                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::OnHealOverTimeStart_Event_1(TBL_EHealingSource HealingSource, class ATBLPlayerState* InstigatorPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeStart_Event_1");
		
		UStatusbarContainer_C_OnHealOverTimeStart_Event_1_Params params {};
		params.HealingSource = HealingSource;
		params.InstigatorPlayerState = InstigatorPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeEnd_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStatusbarContainer_C::OnHealOverTimeEnd_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeEnd_Event_1");
		
		UStatusbarContainer_C_OnHealOverTimeEnd_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_2_OnRecievedNewStatsComp__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatsComponent*                             StatsComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_2_OnRecievedNewStatsComp__DelegateSignature(class UStatsComponent* StatsComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_2_OnRecievedNewStatsComp__DelegateSignature");
		
		UStatusbarContainer_C_BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_2_OnRecievedNewStatsComp__DelegateSignature_Params params {};
		params.StatsComp = StatsComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.BndEvt__ConditionsBar_206_K2Node_ComponentBoundEvent_3_IsShowingCondition__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UStatusbarContainer_C::BndEvt__ConditionsBar_206_K2Node_ComponentBoundEvent_3_IsShowingCondition__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.BndEvt__ConditionsBar_206_K2Node_ComponentBoundEvent_3_IsShowingCondition__DelegateSignature");
		
		UStatusbarContainer_C_BndEvt__ConditionsBar_206_K2Node_ComponentBoundEvent_3_IsShowingCondition__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeAdded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EHealingSource                                 HealingSource                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLPlayerState*                             InstigatorPlayerState                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::OnHealOverTimeAdded(TBL_EHealingSource HealingSource, class ATBLPlayerState* InstigatorPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeAdded");
		
		UStatusbarContainer_C_OnHealOverTimeAdded_Params params {};
		params.HealingSource = HealingSource;
		params.InstigatorPlayerState = InstigatorPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function StatusbarContainer.StatusbarContainer_C.ExecuteUbergraph_StatusbarContainer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStatusbarContainer_C::ExecuteUbergraph_StatusbarContainer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StatusbarContainer.StatusbarContainer_C.ExecuteUbergraph_StatusbarContainer");
		
		UStatusbarContainer_C_ExecuteUbergraph_StatusbarContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStatusbarContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusbarContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusbarContainer.StatusbarContainer_C");
		return ptr;
	}

}


