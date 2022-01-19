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
	 * Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnFocusLost
	 */
	struct UFreeWeekendWidgetConsole_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.Tick
	 */
	struct UFreeWeekendWidgetConsole_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.K2_OnFocusChanging
	 */
	struct UFreeWeekendWidgetConsole_C_K2_OnFocusChanging_Params
	{
	};

	/**
	 * Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.ExecuteUbergraph_FreeWeekendWidgetConsole
	 */
	struct UFreeWeekendWidgetConsole_C_ExecuteUbergraph_FreeWeekendWidgetConsole_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreeWeekendWidgetConsole.FreeWeekendWidgetConsole_C.OnPurchasePerformed__DelegateSignature
	 */
	struct UFreeWeekendWidgetConsole_C_OnPurchasePerformed__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
