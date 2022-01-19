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
	 * Function debug_CombatZone.debug_CombatZone_C.GetFactionName
	 */
	struct Udebug_CombatZone_C_GetFactionName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function debug_CombatZone.debug_CombatZone_C.GetZoneName
	 */
	struct Udebug_CombatZone_C_GetZoneName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function debug_CombatZone.debug_CombatZone_C.Construct
	 */
	struct Udebug_CombatZone_C_Construct_Params
	{
	};

	/**
	 * Function debug_CombatZone.debug_CombatZone_C.ExecuteUbergraph_debug_CombatZone
	 */
	struct Udebug_CombatZone_C_ExecuteUbergraph_debug_CombatZone_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
