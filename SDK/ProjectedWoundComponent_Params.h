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
	 * Function ProjectedWoundComponent.ProjectedWoundComponent_C.TransformDirectionByRefBoneTransform
	 */
	struct UProjectedWoundComponent_C_TransformDirectionByRefBoneTransform_Params
	{
	public:
		class FName                                                InSocketName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MeshLocalSpaceDirection;                                 // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ProjectedWoundComponent.ProjectedWoundComponent_C.TransformLocationByRefBoneTransform
	 */
	struct UProjectedWoundComponent_C_TransformLocationByRefBoneTransform_Params
	{
	public:
		class FName                                                InSocketName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             MeshLocalSpaceLocation;                                  // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ProjectedWoundComponent.ProjectedWoundComponent_C.GetRefBoneTransform
	 */
	struct UProjectedWoundComponent_C_GetRefBoneTransform_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshReference;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          MeshLocalSpaceTransform;                                 // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ProjectedWoundComponent.ProjectedWoundComponent_C.GetMesh
	 */
	struct UProjectedWoundComponent_C_GetMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              MeshReference;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ProjectedWoundComponent.ProjectedWoundComponent_C.CalculateRefTransforms
	 */
	struct UProjectedWoundComponent_C_CalculateRefTransforms_Params
	{
	};

	/**
	 * Function ProjectedWoundComponent.ProjectedWoundComponent_C.ReceiveBeginPlay
	 */
	struct UProjectedWoundComponent_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function ProjectedWoundComponent.ProjectedWoundComponent_C.TakeHit
	 */
	struct UProjectedWoundComponent_C_TakeHit_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      WoundRadius;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rotation;                                                // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BoneName;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ProjectedWoundComponent.ProjectedWoundComponent_C.ExecuteUbergraph_ProjectedWoundComponent
	 */
	struct UProjectedWoundComponent_C_ExecuteUbergraph_ProjectedWoundComponent_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
