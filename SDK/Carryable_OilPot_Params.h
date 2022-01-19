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
	 * Function Carryable_OilPot.Carryable_OilPot_C.SpawnOilPot
	 */
	struct ACarryable_OilPot_C_SpawnOilPot_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_OilPot.Carryable_OilPot_C.HandleHitEvent
	 */
	struct ACarryable_OilPot_C_HandleHitEvent_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_OilPot.Carryable_OilPot_C.OnBlockingHit_Event_OilPot
	 */
	struct ACarryable_OilPot_C_OnBlockingHit_Event_OilPot_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_OilPot.Carryable_OilPot_C.OnMovementStarted_OilPit
	 */
	struct ACarryable_OilPot_C_OnMovementStarted_OilPit_Params
	{
	};

	/**
	 * Function Carryable_OilPot.Carryable_OilPot_C.OnComponentHit_Event_OilPot
	 */
	struct ACarryable_OilPot_C_OnComponentHit_Event_OilPot_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_OilPot.Carryable_OilPot_C.DestroyOilPot
	 */
	struct ACarryable_OilPot_C_DestroyOilPot_Params
	{
	};

	/**
	 * Function Carryable_OilPot.Carryable_OilPot_C.CustomEvent_1
	 */
	struct ACarryable_OilPot_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function Carryable_OilPot.Carryable_OilPot_C.OnInitialize
	 */
	struct ACarryable_OilPot_C_OnInitialize_Params
	{
	};

	/**
	 * Function Carryable_OilPot.Carryable_OilPot_C.ExecuteUbergraph_Carryable_OilPot
	 */
	struct ACarryable_OilPot_C_ExecuteUbergraph_Carryable_OilPot_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
