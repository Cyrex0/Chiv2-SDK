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
	 * Function Carryable_Bandage.Carryable_Bandage_C.SendHealAnalyticsEvent
	 */
	struct ACarryable_Bandage_C_SendHealAnalyticsEvent_Params
	{
	};

	/**
	 * Function Carryable_Bandage.Carryable_Bandage_C.CanUseItem
	 */
	struct ACarryable_Bandage_C_CanUseItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_Bandage.Carryable_Bandage_C.OnUse
	 */
	struct ACarryable_Bandage_C_OnUse_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_Bandage.Carryable_Bandage_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature
	 */
	struct ACarryable_Bandage_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_Bandage.Carryable_Bandage_C.OnInitialize
	 */
	struct ACarryable_Bandage_C_OnInitialize_Params
	{
	};

	/**
	 * Function Carryable_Bandage.Carryable_Bandage_C.ExecuteUbergraph_Carryable_Bandage
	 */
	struct ACarryable_Bandage_C_ExecuteUbergraph_Carryable_Bandage_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
