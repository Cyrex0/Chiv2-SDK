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
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.GetFadeOutAnimTime
	 */
	struct UPinnedInteractableWidget_C_GetFadeOutAnimTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.HighlightActor
	 */
	struct UPinnedInteractableWidget_C_HighlightActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.CanFadeOut
	 */
	struct UPinnedInteractableWidget_C_CanFadeOut_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetInteractionDescription
	 */
	struct UPinnedInteractableWidget_C_SetInteractionDescription_Params
	{
	public:
		class UInteractableComponent*                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetProgress
	 */
	struct UPinnedInteractableWidget_C_SetProgress_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.Tick
	 */
	struct UPinnedInteractableWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUse
	 */
	struct UPinnedInteractableWidget_C_OnUse_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.Use Released
	 */
	struct UPinnedInteractableWidget_C_Use_Released_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      UseTime;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus_Event_1
	 */
	struct UPinnedInteractableWidget_C_OnInteractableLostFocus_Event_1_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseHeldInitiated_Event_1
	 */
	struct UPinnedInteractableWidget_C_OnUseHeldInitiated_Event_1_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableEnabled_Event_1
	 */
	struct UPinnedInteractableWidget_C_OnInteractableEnabled_Event_1_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationStarted
	 */
	struct UPinnedInteractableWidget_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationFinished
	 */
	struct UPinnedInteractableWidget_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractbleFocus
	 */
	struct UPinnedInteractableWidget_C_OnInteractbleFocus_Params
	{
	public:
		class UInteractableComponent*                              Interactable;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus
	 */
	struct UPinnedInteractableWidget_C_OnInteractableLostFocus_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.On Assigned
	 */
	struct UPinnedInteractableWidget_C_On_Assigned_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.InitializeHealthBar
	 */
	struct UPinnedInteractableWidget_C_InitializeHealthBar_Params
	{
	public:
		class UInteractableComponent*                              Comp;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeIn
	 */
	struct UPinnedInteractableWidget_C_FadeIn_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOut
	 */
	struct UPinnedInteractableWidget_C_FadeOut_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_1
	 */
	struct UPinnedInteractableWidget_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOutUsableOverlay
	 */
	struct UPinnedInteractableWidget_C_FadeOutUsableOverlay_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_2
	 */
	struct UPinnedInteractableWidget_C_CustomEvent_2_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeInUsableOverlay
	 */
	struct UPinnedInteractableWidget_C_FadeInUsableOverlay_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_3
	 */
	struct UPinnedInteractableWidget_C_CustomEvent_3_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UPinnedInteractableWidget_C_WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2
	 */
	struct UPinnedInteractableWidget_C_WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInitialized
	 */
	struct UPinnedInteractableWidget_C_OnInitialized_Params
	{
	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnPossessedPawn_Event_1
	 */
	struct UPinnedInteractableWidget_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnKilled_Event_1
	 */
	struct UPinnedInteractableWidget_C_OnKilled_Event_1_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseableActorFocused
	 */
	struct UPinnedInteractableWidget_C_OnUseableActorFocused_Params
	{
	public:
		class UInteractableComponent*                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedInteractableWidget.PinnedInteractableWidget_C.ExecuteUbergraph_PinnedInteractableWidget
	 */
	struct UPinnedInteractableWidget_C_ExecuteUbergraph_PinnedInteractableWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
