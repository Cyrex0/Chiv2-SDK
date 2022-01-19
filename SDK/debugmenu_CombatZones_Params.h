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
	 * Function debugmenu_CombatZones.debugmenu_CombatZones_C.RegenerateRows
	 */
	struct Udebugmenu_CombatZones_C_RegenerateRows_Params
	{
	};

	/**
	 * Function debugmenu_CombatZones.debugmenu_CombatZones_C.Construct
	 */
	struct Udebugmenu_CombatZones_C_Construct_Params
	{
	};

	/**
	 * Function debugmenu_CombatZones.debugmenu_CombatZones_C.Tick
	 */
	struct Udebugmenu_CombatZones_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function debugmenu_CombatZones.debugmenu_CombatZones_C.OnActiveVolumensChanged
	 */
	struct Udebugmenu_CombatZones_C_OnActiveVolumensChanged_Params
	{
	};

	/**
	 * Function debugmenu_CombatZones.debugmenu_CombatZones_C.ExecuteUbergraph_debugmenu_CombatZones
	 */
	struct Udebugmenu_CombatZones_C_ExecuteUbergraph_debugmenu_CombatZones_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
