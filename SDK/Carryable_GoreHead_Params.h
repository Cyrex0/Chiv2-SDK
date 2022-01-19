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
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_Impulse
	 */
	struct ACarryable_GoreHead_C_OnRep_Impulse_Params
	{
	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.SetNoGoreHeadMesh
	 */
	struct ACarryable_GoreHead_C_SetNoGoreHeadMesh_Params
	{
	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.ShouldUseNoGore
	 */
	struct ACarryable_GoreHead_C_ShouldUseNoGore_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.PostReplication
	 */
	struct ACarryable_GoreHead_C_PostReplication_Params
	{
	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedGoreHeadParams
	 */
	struct ACarryable_GoreHead_C_OnRep_ReplicatedGoreHeadParams_Params
	{
	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedDeadCharacter
	 */
	struct ACarryable_GoreHead_C_OnRep_ReplicatedDeadCharacter_Params
	{
	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.GetSkeletalMesh
	 */
	struct ACarryable_GoreHead_C_GetSkeletalMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyCustomization
	 */
	struct ACarryable_GoreHead_C_ApplyCustomization_Params
	{
	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.InitializeGoreHead
	 */
	struct ACarryable_GoreHead_C_InitializeGoreHead_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FGoreHeadParams                                     Params;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FVector                                             Impulse;                                                 // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyImpulseToGoreHead
	 */
	struct ACarryable_GoreHead_C_ApplyImpulseToGoreHead_Params
	{
	public:
		struct FVector                                             Impulse;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.OnInitialize
	 */
	struct ACarryable_GoreHead_C_OnInitialize_Params
	{
	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.ReceiveBeginPlay
	 */
	struct ACarryable_GoreHead_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Carryable_GoreHead.Carryable_GoreHead_C.ExecuteUbergraph_Carryable_GoreHead
	 */
	struct ACarryable_GoreHead_C_ExecuteUbergraph_Carryable_GoreHead_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
