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
	 * Function GamepadSelectButton.GamepadSelectButton_C.Construct
	 */
	struct UGamepadSelectButton_C_Construct_Params
	{
	};

	/**
	 * Function GamepadSelectButton.GamepadSelectButton_C.OnGamepadInputModeChanged_Event_1
	 */
	struct UGamepadSelectButton_C_OnGamepadInputModeChanged_Event_1_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamepadSelectButton.GamepadSelectButton_C.ExecuteUbergraph_GamepadSelectButton
	 */
	struct UGamepadSelectButton_C_ExecuteUbergraph_GamepadSelectButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
