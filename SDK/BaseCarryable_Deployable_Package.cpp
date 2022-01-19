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
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnVisualizationActorSpawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseCarryable_Deployable_C::OnVisualizationActorSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnVisualizationActorSpawned");
		
		ABaseCarryable_Deployable_C_OnVisualizationActorSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SetCanBePlaced
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InCanBePlaced                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseCarryable_Deployable_C::SetCanBePlaced(bool InCanBePlaced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SetCanBePlaced");
		
		ABaseCarryable_Deployable_C_SetCanBePlaced_Params params {};
		params.InCanBePlaced = InCanBePlaced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.CanUseItem
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABaseCarryable_Deployable_C::CanUseItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.CanUseItem");
		
		ABaseCarryable_Deployable_C_CanUseItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.GetSpawnTranform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseCarryable_Deployable_C::GetSpawnTranform(struct FTransform* SpawnTransform, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.GetSpawnTranform");
		
		ABaseCarryable_Deployable_C_GetSpawnTranform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnTransform != nullptr)
			*SpawnTransform = params.SpawnTransform;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.IsInInventory
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseCarryable_Deployable_C::IsInInventory(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.IsInInventory");
		
		ABaseCarryable_Deployable_C_IsInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnLoaded_3965E93E44194A1A35924595DEAB0846
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_Deployable_C::OnLoaded_3965E93E44194A1A35924595DEAB0846(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnLoaded_3965E93E44194A1A35924595DEAB0846");
		
		ABaseCarryable_Deployable_C_OnLoaded_3965E93E44194A1A35924595DEAB0846_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnUse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_Deployable_C::OnUse(class AInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnUse");
		
		ABaseCarryable_Deployable_C_OnUse_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInventorySlotsUpdated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseCarryable_Deployable_C::OnInventorySlotsUpdated_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInventorySlotsUpdated_Event_1");
		
		ABaseCarryable_Deployable_C_OnInventorySlotsUpdated_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.AsyncLoadDeployActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseCarryable_Deployable_C::AsyncLoadDeployActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.AsyncLoadDeployActor");
		
		ABaseCarryable_Deployable_C_AsyncLoadDeployActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateVisualization
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_Deployable_C::UpdateVisualization(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateVisualization");
		
		ABaseCarryable_Deployable_C_UpdateVisualization_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnDestroyed_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_Deployable_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnDestroyed_Event_1");
		
		ABaseCarryable_Deployable_C_OnDestroyed_Event_1_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SpawnVisualizationActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABaseCarryable_Deployable_C::SpawnVisualizationActor(const struct FTransform& SpawnTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SpawnVisualizationActor");
		
		ABaseCarryable_Deployable_C_SpawnVisualizationActor_Params params {};
		params.SpawnTransform = SpawnTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnCombatStateChanged_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAttackInfo                                 EventAttackInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UCombatState*                                CombatState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_Deployable_C::OnCombatStateChanged_Event_1(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnCombatStateChanged_Event_1");
		
		ABaseCarryable_Deployable_C_OnCombatStateChanged_Event_1_Params params {};
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
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.DestroyVisualizationActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseCarryable_Deployable_C::DestroyVisualizationActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.DestroyVisualizationActor");
		
		ABaseCarryable_Deployable_C_DestroyVisualizationActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABaseCarryable_Deployable_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInitialize");
		
		ABaseCarryable_Deployable_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnAddedToInventoryChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAddedToInventory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseCarryable_Deployable_C::OnAddedToInventoryChanged_Event_1(class AInventoryItem* Item, bool IsAddedToInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnAddedToInventoryChanged_Event_1");
		
		ABaseCarryable_Deployable_C_OnAddedToInventoryChanged_Event_1_Params params {};
		params.Item = Item;
		params.IsAddedToInventory = IsAddedToInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnStartUse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_Deployable_C::OnStartUse(class AInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnStartUse");
		
		ABaseCarryable_Deployable_C_OnStartUse_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateSpawnTransform
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseCarryable_Deployable_C::UpdateSpawnTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateSpawnTransform");
		
		ABaseCarryable_Deployable_C_UpdateSpawnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.ExecuteUbergraph_BaseCarryable_Deployable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_Deployable_C::ExecuteUbergraph_BaseCarryable_Deployable(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.ExecuteUbergraph_BaseCarryable_Deployable");
		
		ABaseCarryable_Deployable_C_ExecuteUbergraph_BaseCarryable_Deployable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABaseCarryable_Deployable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseCarryable_Deployable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseCarryable_Deployable.BaseCarryable_Deployable_C");
		return ptr;
	}

}


