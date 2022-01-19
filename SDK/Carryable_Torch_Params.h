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
	 * Function Carryable_Torch.Carryable_Torch_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature
	 */
	struct ACarryable_Torch_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_Torch.Carryable_Torch_C.PlayBurnableHitEvent
	 */
	struct ACarryable_Torch_C_PlayBurnableHitEvent_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_Torch.Carryable_Torch_C.TorchAppliedBurning
	 */
	struct ACarryable_Torch_C_TorchAppliedBurning_Params
	{
	public:
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_Torch.Carryable_Torch_C.Play World Hit Event
	 */
	struct ACarryable_Torch_C_Play_World_Hit_Event_Params
	{
	public:
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Hit_Location;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Hit_Normal;                                              // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_Torch.Carryable_Torch_C.OnAddedToInventoryChanged_Event
	 */
	struct ACarryable_Torch_C_OnAddedToInventoryChanged_Event_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAddedToInventory;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_Torch.Carryable_Torch_C.OnInitialize
	 */
	struct ACarryable_Torch_C_OnInitialize_Params
	{
	};

	/**
	 * Function Carryable_Torch.Carryable_Torch_C.ExecuteUbergraph_Carryable_Torch
	 */
	struct ACarryable_Torch_C_ExecuteUbergraph_Carryable_Torch_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
