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
	 * Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.DamageCarryable
	 */
	struct ABaseCarryable_Breakable_C_DamageCarryable_Params
	{
	public:
		TBL_EInventoryItemDamagedState                             DamageState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.PlayDamageParticles
	 */
	struct ABaseCarryable_Breakable_C_PlayDamageParticles_Params
	{
	};

	/**
	 * Function BaseCarryable_Breakable.BaseCarryable_Breakable_C.ExecuteUbergraph_BaseCarryable_Breakable
	 */
	struct ABaseCarryable_Breakable_C_ExecuteUbergraph_BaseCarryable_Breakable_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
