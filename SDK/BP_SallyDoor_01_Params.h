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
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.OnRep_IsOpened
	 */
	struct ABP_SallyDoor_01_C_OnRep_IsOpened_Params
	{
	};

	/**
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.UserConstructionScript
	 */
	struct ABP_SallyDoor_01_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.ReceiveBeginPlay
	 */
	struct ABP_SallyDoor_01_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_SallyDoor_01_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_SallyDoor_01_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.CustomEvent_1
	 */
	struct ABP_SallyDoor_01_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.PlayOpenAnim
	 */
	struct ABP_SallyDoor_01_C_PlayOpenAnim_Params
	{
	};

	/**
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.PlayClosedAnim
	 */
	struct ABP_SallyDoor_01_C_PlayClosedAnim_Params
	{
	};

	/**
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.DeactivateComp
	 */
	struct ABP_SallyDoor_01_C_DeactivateComp_Params
	{
	};

	/**
	 * Function BP_SallyDoor_01.BP_SallyDoor_01_C.ExecuteUbergraph_BP_SallyDoor_01
	 */
	struct ABP_SallyDoor_01_C_ExecuteUbergraph_BP_SallyDoor_01_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
