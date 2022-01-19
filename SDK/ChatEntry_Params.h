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
	 * Function ChatEntry.ChatEntry_C.HideDevTag
	 */
	struct UChatEntry_C_HideDevTag_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.Construct
	 */
	struct UChatEntry_C_Construct_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.Start Fadeout Timer
	 */
	struct UChatEntry_C_Start_Fadeout_Timer_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.Clear Fadeout Timer
	 */
	struct UChatEntry_C_Clear_Fadeout_Timer_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.On Entered Input Mode_Event_1
	 */
	struct UChatEntry_C_On_Entered_Input_Mode_Event_1_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.On Left Input Mode_Event_1
	 */
	struct UChatEntry_C_On_Left_Input_Mode_Event_1_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.Fade Me In
	 */
	struct UChatEntry_C_Fade_Me_In_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.Fade Me Out
	 */
	struct UChatEntry_C_Fade_Me_Out_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.Left Input Mode Delay Expired
	 */
	struct UChatEntry_C_Left_Input_Mode_Delay_Expired_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.Clear all fadeout timers
	 */
	struct UChatEntry_C_Clear_all_fadeout_timers_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.OnAnimationStarted
	 */
	struct UChatEntry_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatEntry.ChatEntry_C.OnAnimationFinished
	 */
	struct UChatEntry_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatEntry.ChatEntry_C.InitFade
	 */
	struct UChatEntry_C_InitFade_Params
	{
	};

	/**
	 * Function ChatEntry.ChatEntry_C.ExecuteUbergraph_ChatEntry
	 */
	struct UChatEntry_C_ExecuteUbergraph_ChatEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
