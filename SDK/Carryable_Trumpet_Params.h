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
	 * Function Carryable_Trumpet.Carryable_Trumpet_C.OnInitialize
	 */
	struct ACarryable_Trumpet_C_OnInitialize_Params
	{
	};

	/**
	 * Function Carryable_Trumpet.Carryable_Trumpet_C.OnUse
	 */
	struct ACarryable_Trumpet_C_OnUse_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_Trumpet.Carryable_Trumpet_C.ExecuteUbergraph_Carryable_Trumpet
	 */
	struct ACarryable_Trumpet_C_ExecuteUbergraph_Carryable_Trumpet_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
