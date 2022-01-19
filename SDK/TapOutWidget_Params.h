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
	 * Function TapOutWidget.TapOutWidget_C.SetProgress
	 */
	struct UTapOutWidget_C_SetProgress_Params
	{
	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.SetEnabled
	 */
	struct UTapOutWidget_C_SetEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.ShowWidget
	 */
	struct UTapOutWidget_C_ShowWidget_Params
	{
	public:
		TBL_EConditionType                                         Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.ShowGetUpState
	 */
	struct UTapOutWidget_C_ShowGetUpState_Params
	{
	public:
		bool                                                       CanGetUp;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.Construct
	 */
	struct UTapOutWidget_C_Construct_Params
	{
	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.Tick
	 */
	struct UTapOutWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.HighlightDeathIcon
	 */
	struct UTapOutWidget_C_HighlightDeathIcon_Params
	{
	public:
		bool                                                       CanGetUp;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.HighlightGetUpIcon
	 */
	struct UTapOutWidget_C_HighlightGetUpIcon_Params
	{
	public:
		bool                                                       CanGetUp;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.Handle Gamepad Input Mode Changed
	 */
	struct UTapOutWidget_C_Handle_Gamepad_Input_Mode_Changed_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.HideWidget
	 */
	struct UTapOutWidget_C_HideWidget_Params
	{
	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.On Being Revived By Changed
	 */
	struct UTapOutWidget_C_On_Being_Revived_By_Changed_Params
	{
	public:
		class ATBLCharacter*                                       ThisCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLPlayerState*                                     BeingRevivedBy;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.UpdateInputMode
	 */
	struct UTapOutWidget_C_UpdateInputMode_Params
	{
	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.ExecuteUbergraph_TapOutWidget
	 */
	struct UTapOutWidget_C_ExecuteUbergraph_TapOutWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TapOutWidget.TapOutWidget_C.IsBeingRevived__DelegateSignature
	 */
	struct UTapOutWidget_C_IsBeingRevived__DelegateSignature_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
