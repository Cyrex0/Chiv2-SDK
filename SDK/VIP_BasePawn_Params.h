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
	 * Function VIP_BasePawn.VIP_BasePawn_C.SetupVariantMorphTarget
	 */
	struct AVIP_BasePawn_C_SetupVariantMorphTarget_Params
	{
	public:
		class FName                                                MeshName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        MorphTargetVariants;                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       bInvertValues;                                           // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function VIP_BasePawn.VIP_BasePawn_C.GetHatMorphTargetVariants
	 */
	struct AVIP_BasePawn_C_GetHatMorphTargetVariants_Params
	{
	public:
		TArray<class FName>                                        MorphTargetsArray;                                       // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function VIP_BasePawn.VIP_BasePawn_C.ReceiveBeginPlay
	 */
	struct AVIP_BasePawn_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function VIP_BasePawn.VIP_BasePawn_C.ReceiveEndPlay
	 */
	struct AVIP_BasePawn_C_ReceiveEndPlay_Params
	{
	public:
		Engine_EEndPlayReason                                      EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function VIP_BasePawn.VIP_BasePawn_C.ExecuteUbergraph_VIP_BasePawn
	 */
	struct AVIP_BasePawn_C_ExecuteUbergraph_VIP_BasePawn_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
