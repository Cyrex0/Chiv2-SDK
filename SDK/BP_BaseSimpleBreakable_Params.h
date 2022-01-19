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
	 * Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UpdateMesh
	 */
	struct ABP_BaseSimpleBreakable_C_UpdateMesh_Params
	{
	public:
		class UStaticMesh*                                         NewMesh;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnRep_BreakableState
	 */
	struct ABP_BaseSimpleBreakable_C_OnRep_BreakableState_Params
	{
	};

	/**
	 * Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.UserConstructionScript
	 */
	struct ABP_BaseSimpleBreakable_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
	 */
	struct ABP_BaseSimpleBreakable_C_BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature
	 */
	struct ABP_BaseSimpleBreakable_C_BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature_Params
	{
	public:
		struct FDamageTakenEvent                                   Event;                                                   // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ReceiveBeginPlay
	 */
	struct ABP_BaseSimpleBreakable_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.ExecuteUbergraph_BP_BaseSimpleBreakable
	 */
	struct ABP_BaseSimpleBreakable_C_ExecuteUbergraph_BP_BaseSimpleBreakable_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnBreakableStateChanged__DelegateSignature
	 */
	struct ABP_BaseSimpleBreakable_C_OnBreakableStateChanged__DelegateSignature_Params
	{
	public:
		BreakableState_EBreakableState                             BreakableState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseSimpleBreakable.BP_BaseSimpleBreakable_C.OnKilled__DelegateSignature
	 */
	struct ABP_BaseSimpleBreakable_C_OnKilled__DelegateSignature_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
