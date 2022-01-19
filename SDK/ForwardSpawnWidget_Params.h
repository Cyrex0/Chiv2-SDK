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
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetRejectInput
	 */
	struct UForwardSpawnWidget_C_SetRejectInput_Params
	{
	public:
		class FName                                                RejectInput;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetAcceptInput
	 */
	struct UForwardSpawnWidget_C_SetAcceptInput_Params
	{
	public:
		class FName                                                AcceptInput;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetInputVisibility
	 */
	struct UForwardSpawnWidget_C_SetInputVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Playing State
	 */
	struct UForwardSpawnWidget_C_Set_Playing_State_Params
	{
	public:
		WaveWidgetPlayingState_EWaveWidgetPlayingState             New_Playing_State;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Changed_;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get seconds to deploy
	 */
	struct UForwardSpawnWidget_C_Get_seconds_to_deploy_Params
	{
	public:
		int                                                        Seconds;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                SecondsText;                                             // 0x0008(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.ApplyStateStyle
	 */
	struct UForwardSpawnWidget_C_ApplyStateStyle_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinOverlay_Visibility_1
	 */
	struct UForwardSpawnWidget_C_Get_JoinOverlay_Visibility_1_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinedOverlay_Visibility_1
	 */
	struct UForwardSpawnWidget_C_Get_JoinedOverlay_Visibility_1_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.GetVisibility_1
	 */
	struct UForwardSpawnWidget_C_GetVisibility_1_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Construct
	 */
	struct UForwardSpawnWidget_C_Construct_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Spawn Wave
	 */
	struct UForwardSpawnWidget_C_Set_Spawn_Wave_Params
	{
	public:
		class ASpawnWave*                                          In_Spawn_Wave;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UForwardSpawnWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.PreConstruct
	 */
	struct UForwardSpawnWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Tick
	 */
	struct UForwardSpawnWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnAssignedToActor
	 */
	struct UForwardSpawnWidget_C_K2_OnAssignedToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActorComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnReturnedToPool
	 */
	struct UForwardSpawnWidget_C_K2_OnReturnedToPool_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Handle Accept
	 */
	struct UForwardSpawnWidget_C_Handle_Accept_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start hide timer
	 */
	struct UForwardSpawnWidget_C_Start_hide_timer_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade In
	 */
	struct UForwardSpawnWidget_C_Fade_In_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade Out
	 */
	struct UForwardSpawnWidget_C_Fade_Out_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start fade
	 */
	struct UForwardSpawnWidget_C_Start_fade_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Cinematic Mode Changed
	 */
	struct UForwardSpawnWidget_C_Cinematic_Mode_Changed_Params
	{
	public:
		CinematicBarsMode_ECinematicBarsMode                       New_mode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationStarted
	 */
	struct UForwardSpawnWidget_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationFinished
	 */
	struct UForwardSpawnWidget_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.WidgetAnimationEvt_JoinedAnimation_K2Node_WidgetAnimationEvent_1
	 */
	struct UForwardSpawnWidget_C_WidgetAnimationEvt_JoinedAnimation_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetPromptMessage
	 */
	struct UForwardSpawnWidget_C_SetPromptMessage_Params
	{
	public:
		struct FPlayerPromptFormattedMessage                       Message;                                                 // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        MessageId;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.PromptFadeOut
	 */
	struct UForwardSpawnWidget_C_PromptFadeOut_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleReject
	 */
	struct UForwardSpawnWidget_C_HandleReject_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleNoLongerOutOfCombat
	 */
	struct UForwardSpawnWidget_C_HandleNoLongerOutOfCombat_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnClientPossessedPawn
	 */
	struct UForwardSpawnWidget_C_OnClientPossessedPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnRemoveCondition
	 */
	struct UForwardSpawnWidget_C_OnRemoveCondition_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.EnableInputs
	 */
	struct UForwardSpawnWidget_C_EnableInputs_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.DisableInputs
	 */
	struct UForwardSpawnWidget_C_DisableInputs_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Accept Key pressed
	 */
	struct UForwardSpawnWidget_C_Accept_Key_pressed_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Reject Input Pressed
	 */
	struct UForwardSpawnWidget_C_Reject_Input_Pressed_Params
	{
	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.InputModeChanged
	 */
	struct UForwardSpawnWidget_C_InputModeChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.ExecuteUbergraph_ForwardSpawnWidget
	 */
	struct UForwardSpawnWidget_C_ExecuteUbergraph_ForwardSpawnWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Clicked__DelegateSignature
	 */
	struct UForwardSpawnWidget_C_Clicked__DelegateSignature_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnWidget.ForwardSpawnWidget_C.Hovered__DelegateSignature
	 */
	struct UForwardSpawnWidget_C_Hovered__DelegateSignature_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
