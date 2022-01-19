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
	 * Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.SetMaterial
	 */
	struct ABP_Visualization_BaseDeployable_C_SetMaterial_Params
	{
	public:
		class UMaterialInstance*                                   Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.Set Can be Placed
	 */
	struct ABP_Visualization_BaseDeployable_C_Set_Can_be_Placed_Params
	{
	public:
		bool                                                       InCanBePlaced;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.UserConstructionScript
	 */
	struct ABP_Visualization_BaseDeployable_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ReceiveBeginPlay
	 */
	struct ABP_Visualization_BaseDeployable_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ExecuteUbergraph_BP_Visualization_BaseDeployable
	 */
	struct ABP_Visualization_BaseDeployable_C_ExecuteUbergraph_BP_Visualization_BaseDeployable_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
