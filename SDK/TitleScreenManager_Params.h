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
	 * Function TitleScreenManager.TitleScreenManager_C.GetFadeDuration
	 */
	struct UTitleScreenManager_C_GetFadeDuration_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Push Cinematic Widget
	 */
	struct UTitleScreenManager_C_Push_Cinematic_Widget_Params
	{
	public:
		class UClass*                                              Widget_class;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Remove Cinematic Widget
	 */
	struct UTitleScreenManager_C_Remove_Cinematic_Widget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Request cinematic bars
	 */
	struct UTitleScreenManager_C_Request_cinematic_bars_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicBarsMode_ECinematicBarsMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Release cinematic bars
	 */
	struct UTitleScreenManager_C_Release_cinematic_bars_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Request cinematic HUD mode
	 */
	struct UTitleScreenManager_C_Request_cinematic_HUD_mode_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Release cinematic HUD mode
	 */
	struct UTitleScreenManager_C_Release_cinematic_HUD_mode_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		CinematicMenuMode_ECinematicMenuMode                       Mode;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Request fade out
	 */
	struct UTitleScreenManager_C_Request_fade_out_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Release fade out (fade in)
	 */
	struct UTitleScreenManager_C_Release_fade_out__fade_in__Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Add Cinematic Mode Change Listener
	 */
	struct UTitleScreenManager_C_Add_Cinematic_Mode_Change_Listener_Params
	{
	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Snap Fade In
	 */
	struct UTitleScreenManager_C_Snap_Fade_In_Params
	{
	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.RequestRandomHint
	 */
	struct UTitleScreenManager_C_RequestRandomHint_Params
	{
	public:
		float                                                      Chance;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintType                                              HintKey;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHintInputType                                         HintInputType;                                           // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.RequestSpecificHint
	 */
	struct UTitleScreenManager_C_RequestSpecificHint_Params
	{
	public:
		class FName                                                HintKey;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Construct
	 */
	struct UTitleScreenManager_C_Construct_Params
	{
	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.Destruct
	 */
	struct UTitleScreenManager_C_Destruct_Params
	{
	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.OnInitialized
	 */
	struct UTitleScreenManager_C_OnInitialized_Params
	{
	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.InputChanged
	 */
	struct UTitleScreenManager_C_InputChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TitleScreenManager.TitleScreenManager_C.ExecuteUbergraph_TitleScreenManager
	 */
	struct UTitleScreenManager_C_ExecuteUbergraph_TitleScreenManager_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
