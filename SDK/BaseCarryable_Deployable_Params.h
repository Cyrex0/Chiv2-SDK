#pragma once

/**
 * Name: chiv2
 * Version: 123456
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnVisualizationActorSpawned
	 */
	struct ABaseCarryable_Deployable_C_OnVisualizationActorSpawned_Params
	{
	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SetCanBePlaced
	 */
	struct ABaseCarryable_Deployable_C_SetCanBePlaced_Params
	{
	public:
		bool                                                       InCanBePlaced;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.CanUseItem
	 */
	struct ABaseCarryable_Deployable_C_CanUseItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.GetSpawnTranform
	 */
	struct ABaseCarryable_Deployable_C_GetSpawnTranform_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.IsInInventory
	 */
	struct ABaseCarryable_Deployable_C_IsInInventory_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnLoaded_3965E93E44194A1A35924595DEAB0846
	 */
	struct ABaseCarryable_Deployable_C_OnLoaded_3965E93E44194A1A35924595DEAB0846_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnUse
	 */
	struct ABaseCarryable_Deployable_C_OnUse_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInventorySlotsUpdated_Event_1
	 */
	struct ABaseCarryable_Deployable_C_OnInventorySlotsUpdated_Event_1_Params
	{
	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.AsyncLoadDeployActor
	 */
	struct ABaseCarryable_Deployable_C_AsyncLoadDeployActor_Params
	{
	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateVisualization
	 */
	struct ABaseCarryable_Deployable_C_UpdateVisualization_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnDestroyed_Event_1
	 */
	struct ABaseCarryable_Deployable_C_OnDestroyed_Event_1_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.SpawnVisualizationActor
	 */
	struct ABaseCarryable_Deployable_C_SpawnVisualizationActor_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnCombatStateChanged_Event_1
	 */
	struct ABaseCarryable_Deployable_C_OnCombatStateChanged_Event_1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                PreviousState;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAttackInfo                                         EventAttackInfo;                                         // 0x0018(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UCombatState*                                        CombatState;                                             // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.DestroyVisualizationActor
	 */
	struct ABaseCarryable_Deployable_C_DestroyVisualizationActor_Params
	{
	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnInitialize
	 */
	struct ABaseCarryable_Deployable_C_OnInitialize_Params
	{
	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnAddedToInventoryChanged_Event_1
	 */
	struct ABaseCarryable_Deployable_C_OnAddedToInventoryChanged_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAddedToInventory;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.OnStartUse
	 */
	struct ABaseCarryable_Deployable_C_OnStartUse_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.UpdateSpawnTransform
	 */
	struct ABaseCarryable_Deployable_C_UpdateSpawnTransform_Params
	{
	};

	/**
	 * Function BaseCarryable_Deployable.BaseCarryable_Deployable_C.ExecuteUbergraph_BaseCarryable_Deployable
	 */
	struct ABaseCarryable_Deployable_C_ExecuteUbergraph_BaseCarryable_Deployable_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
