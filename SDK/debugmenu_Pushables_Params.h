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
	 * Function debugmenu_Pushables.debugmenu_Pushables_C.SortPushables
	 */
	struct Udebugmenu_Pushables_C_SortPushables_Params
	{
	public:
		TArray<class AActor*>                                      PushableActors;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class AActor*>                                      SortedPushableActors;                                    // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function debugmenu_Pushables.debugmenu_Pushables_C.Construct
	 */
	struct Udebugmenu_Pushables_C_Construct_Params
	{
	};

	/**
	 * Function debugmenu_Pushables.debugmenu_Pushables_C.ExecuteUbergraph_debugmenu_Pushables
	 */
	struct Udebugmenu_Pushables_C_ExecuteUbergraph_debugmenu_Pushables_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
