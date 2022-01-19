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
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.FadeLight__FinishedFunc
	 */
	struct AOilPot_WorldEffect_C_FadeLight__FinishedFunc_Params
	{
	};

	/**
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.FadeLight__UpdateFunc
	 */
	struct AOilPot_WorldEffect_C_FadeLight__UpdateFunc_Params
	{
	};

	/**
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.ReceiveBeginPlay
	 */
	struct AOilPot_WorldEffect_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.ApplyTickDamage
	 */
	struct AOilPot_WorldEffect_C_ApplyTickDamage_Params
	{
	};

	/**
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.RemoveCharacter
	 */
	struct AOilPot_WorldEffect_C_RemoveCharacter_Params
	{
	public:
		class ATBLCharacterBase*                                   Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AOilPot_WorldEffect_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AOilPot_WorldEffect_C_BndEvt__Cylinder_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.OnTimeout
	 */
	struct AOilPot_WorldEffect_C_OnTimeout_Params
	{
	};

	/**
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.ApplyInitialDamage
	 */
	struct AOilPot_WorldEffect_C_ApplyInitialDamage_Params
	{
	};

	/**
	 * Function OilPot_WorldEffect.OilPot_WorldEffect_C.ExecuteUbergraph_OilPot_WorldEffect
	 */
	struct AOilPot_WorldEffect_C_ExecuteUbergraph_OilPot_WorldEffect_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
