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
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestSpecificHint
	 */
	struct UCinematicMenuManagerInterface_C_RequestSpecificHint_Params
	{
	public:
		class FName                                                HintKey;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.RequestRandomHint
	 */
	struct UCinematicMenuManagerInterface_C_RequestRandomHint_Params
	{
	public:
		float                                                      Chance;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintType                                              HintKey;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintInputType                                         HintInputType;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.GetFadeDuration
	 */
	struct UCinematicMenuManagerInterface_C_GetFadeDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Snap Fade In
	 */
	struct UCinematicMenuManagerInterface_C_Snap_Fade_In_Params
	{
	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Add Cinematic Mode Change Listener
	 */
	struct UCinematicMenuManagerInterface_C_Add_Cinematic_Mode_Change_Listener_Params
	{
	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release fade out (fade in)
	 */
	struct UCinematicMenuManagerInterface_C_Release_fade_out__fade_in__Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request fade out
	 */
	struct UCinematicMenuManagerInterface_C_Request_fade_out_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic HUD mode
	 */
	struct UCinematicMenuManagerInterface_C_Release_cinematic_HUD_mode_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic HUD mode
	 */
	struct UCinematicMenuManagerInterface_C_Request_cinematic_HUD_mode_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Release cinematic bars
	 */
	struct UCinematicMenuManagerInterface_C_Release_cinematic_bars_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Request cinematic bars
	 */
	struct UCinematicMenuManagerInterface_C_Request_cinematic_bars_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicBarsMode_ECinematicBarsMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Remove Cinematic Widget
	 */
	struct UCinematicMenuManagerInterface_C_Remove_Cinematic_Widget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicMenuManagerInterface.CinematicMenuManagerInterface_C.Push Cinematic Widget
	 */
	struct UCinematicMenuManagerInterface_C_Push_Cinematic_Widget_Params
	{
	public:
		class UClass*                                              Widget_class;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
