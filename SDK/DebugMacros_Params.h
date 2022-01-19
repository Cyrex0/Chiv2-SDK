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
	 * Function DebugMacros.DebugMacros_C.OnKeyDown
	 */
	struct UDebugMacros_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function DebugMacros.DebugMacros_C.Tick
	 */
	struct UDebugMacros_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMacros.DebugMacros_C.FKeyDown
	 */
	struct UDebugMacros_C_FKeyDown_Params
	{
	public:
		struct FKey                                                FKey;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function DebugMacros.DebugMacros_C.Construct
	 */
	struct UDebugMacros_C_Construct_Params
	{
	};

	/**
	 * Function DebugMacros.DebugMacros_C.SpectateAndHideHUD
	 */
	struct UDebugMacros_C_SpectateAndHideHUD_Params
	{
	};

	/**
	 * Function DebugMacros.DebugMacros_C.ExecuteUbergraph_DebugMacros
	 */
	struct UDebugMacros_C_ExecuteUbergraph_DebugMacros_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
