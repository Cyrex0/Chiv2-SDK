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
	 * Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.Set Callout
	 */
	struct UGamepadCalloutsEntry_C_Set_Callout_Params
	{
	public:
		struct FButtonCallout                                      In_Callout;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.PreConstruct
	 */
	struct UGamepadCalloutsEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.Set Icon
	 */
	struct UGamepadCalloutsEntry_C_Set_Icon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.SetColor
	 */
	struct UGamepadCalloutsEntry_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.SetTextSize
	 */
	struct UGamepadCalloutsEntry_C_SetTextSize_Params
	{
	public:
		int                                                        FontSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamepadCalloutsEntry.GamepadCalloutsEntry_C.ExecuteUbergraph_GamepadCalloutsEntry
	 */
	struct UGamepadCalloutsEntry_C_ExecuteUbergraph_GamepadCalloutsEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
