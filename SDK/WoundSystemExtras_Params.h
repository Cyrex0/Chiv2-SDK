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
	 * Function WoundSystemExtras.WoundSystemExtras_C.OnMoveFinished_A3D3E2CF422428332F8BC5B7875830A9
	 */
	struct UWoundSystemExtras_C_OnMoveFinished_A3D3E2CF422428332F8BC5B7875830A9_Params
	{
	public:
		AIModule_EPathFollowingResult                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WoundSystemExtras.WoundSystemExtras_C.OnRequestFailed_A3D3E2CF422428332F8BC5B7875830A9
	 */
	struct UWoundSystemExtras_C_OnRequestFailed_A3D3E2CF422428332F8BC5B7875830A9_Params
	{
	};

	/**
	 * Function WoundSystemExtras.WoundSystemExtras_C.ReceiveBeginPlay
	 */
	struct UWoundSystemExtras_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function WoundSystemExtras.WoundSystemExtras_C.HitEffects
	 */
	struct UWoundSystemExtras_C_HitEffects_Params
	{
	public:
		struct FHitResult                                          HitInfo;                                                 // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             Location;                                                // 0x0088(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WoundSystemExtras.WoundSystemExtras_C.HitRagdoll
	 */
	struct UWoundSystemExtras_C_HitRagdoll_Params
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WoundSystemExtras.WoundSystemExtras_C.HealthDecrease
	 */
	struct UWoundSystemExtras_C_HealthDecrease_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WoundSystemExtras.WoundSystemExtras_C.Ragdoll
	 */
	struct UWoundSystemExtras_C_Ragdoll_Params
	{
	};

	/**
	 * Function WoundSystemExtras.WoundSystemExtras_C.Navigate
	 */
	struct UWoundSystemExtras_C_Navigate_Params
	{
	};

	/**
	 * Function WoundSystemExtras.WoundSystemExtras_C.Hit
	 */
	struct UWoundSystemExtras_C_Hit_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitLocation;                                             // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitNormal;                                               // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ShotFromDirection;                                       // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x003C(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function WoundSystemExtras.WoundSystemExtras_C.ExecuteUbergraph_WoundSystemExtras
	 */
	struct UWoundSystemExtras_C_ExecuteUbergraph_WoundSystemExtras_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
