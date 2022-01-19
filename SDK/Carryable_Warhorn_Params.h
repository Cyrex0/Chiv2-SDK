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
	 * Function Carryable_Warhorn.Carryable_Warhorn_C.OnInitialize
	 */
	struct ACarryable_Warhorn_C_OnInitialize_Params
	{
	};

	/**
	 * Function Carryable_Warhorn.Carryable_Warhorn_C.OnUse
	 */
	struct ACarryable_Warhorn_C_OnUse_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_Warhorn.Carryable_Warhorn_C.ExecuteUbergraph_Carryable_Warhorn
	 */
	struct ACarryable_Warhorn_C_ExecuteUbergraph_Carryable_Warhorn_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
