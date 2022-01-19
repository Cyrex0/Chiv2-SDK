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
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.HandleHitEvent
	 */
	struct ACarryable_SmokePot_C_HandleHitEvent_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.SpawnSmokeActor
	 */
	struct ACarryable_SmokePot_C_SpawnSmokeActor_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.HitCharacter
	 */
	struct ACarryable_SmokePot_C_HitCharacter_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.OnBlockingHit_Event_SmokePot
	 */
	struct ACarryable_SmokePot_C_OnBlockingHit_Event_SmokePot_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.OnMovementStarted_Event_SmokePot
	 */
	struct ACarryable_SmokePot_C_OnMovementStarted_Event_SmokePot_Params
	{
	};

	/**
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.OnComponentHit_Event_SmokePot
	 */
	struct ACarryable_SmokePot_C_OnComponentHit_Event_SmokePot_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.DestroySmokePot
	 */
	struct ACarryable_SmokePot_C_DestroySmokePot_Params
	{
	};

	/**
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.CustomEvent
	 */
	struct ACarryable_SmokePot_C_CustomEvent_Params
	{
	};

	/**
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.OnInitialize
	 */
	struct ACarryable_SmokePot_C_OnInitialize_Params
	{
	};

	/**
	 * Function Carryable_SmokePot.Carryable_SmokePot_C.ExecuteUbergraph_Carryable_SmokePot
	 */
	struct ACarryable_SmokePot_C_ExecuteUbergraph_Carryable_SmokePot_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
