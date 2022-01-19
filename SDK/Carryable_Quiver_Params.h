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
	 * Function Carryable_Quiver.Carryable_Quiver_C.CanUseItem
	 */
	struct ACarryable_Quiver_C_CanUseItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_Quiver.Carryable_Quiver_C.OnUse
	 */
	struct ACarryable_Quiver_C_OnUse_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_Quiver.Carryable_Quiver_C.OnInitialize
	 */
	struct ACarryable_Quiver_C_OnInitialize_Params
	{
	};

	/**
	 * Function Carryable_Quiver.Carryable_Quiver_C.ExecuteUbergraph_Carryable_Quiver
	 */
	struct ACarryable_Quiver_C_ExecuteUbergraph_Carryable_Quiver_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
