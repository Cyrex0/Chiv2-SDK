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
	 * Function CrosshairConditonText.CrosshairConditonText_C.SetupUniversalKeyBindWidget
	 */
	struct UCrosshairConditonText_C_SetupUniversalKeyBindWidget_Params
	{
	public:
		class FString                                              InActionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UUniversalKeyBindingWidget_C*                        InUniversalKeyBindWidget;                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CrosshairConditonText.CrosshairConditonText_C.IsUsingGamepad
	 */
	struct UCrosshairConditonText_C_IsUsingGamepad_Params
	{
	public:
		bool                                                       bIsUsingGamepad;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function CrosshairConditonText.CrosshairConditonText_C.Construct
	 */
	struct UCrosshairConditonText_C_Construct_Params
	{
	};

	/**
	 * Function CrosshairConditonText.CrosshairConditonText_C.Update
	 */
	struct UCrosshairConditonText_C_Update_Params
	{
	};

	/**
	 * Function CrosshairConditonText.CrosshairConditonText_C.On Gamepad Input Mode Changed
	 */
	struct UCrosshairConditonText_C_On_Gamepad_Input_Mode_Changed_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CrosshairConditonText.CrosshairConditonText_C.Destruct
	 */
	struct UCrosshairConditonText_C_Destruct_Params
	{
	};

	/**
	 * Function CrosshairConditonText.CrosshairConditonText_C.ExecuteUbergraph_CrosshairConditonText
	 */
	struct UCrosshairConditonText_C_ExecuteUbergraph_CrosshairConditonText_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
