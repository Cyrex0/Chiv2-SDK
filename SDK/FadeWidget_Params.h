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
	 * Function FadeWidget.FadeWidget_C.Handle requests changed
	 */
	struct UFadeWidget_C_Handle_requests_changed_Params
	{
	};

	/**
	 * Function FadeWidget.FadeWidget_C.Construct
	 */
	struct UFadeWidget_C_Construct_Params
	{
	};

	/**
	 * Function FadeWidget.FadeWidget_C.FadeIn
	 */
	struct UFadeWidget_C_FadeIn_Params
	{
	public:
		float                                                      Playback_Speed;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FadeWidget.FadeWidget_C.FadeOut
	 */
	struct UFadeWidget_C_FadeOut_Params
	{
	public:
		float                                                      Playback_Speed;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FadeWidget.FadeWidget_C.Add requester
	 */
	struct UFadeWidget_C_Add_requester_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FadeWidget.FadeWidget_C.Remove requester
	 */
	struct UFadeWidget_C_Remove_requester_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FadeWidget.FadeWidget_C.Update requests soon
	 */
	struct UFadeWidget_C_Update_requests_soon_Params
	{
	};

	/**
	 * Function FadeWidget.FadeWidget_C.Snap Fade In
	 */
	struct UFadeWidget_C_Snap_Fade_In_Params
	{
	};

	/**
	 * Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_1
	 */
	struct UFadeWidget_C_WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function FadeWidget.FadeWidget_C.WidgetAnimationEvt_Fade Out_K2Node_WidgetAnimationEvent_2
	 */
	struct UFadeWidget_C_WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_2_Params
	{
	};

	/**
	 * Function FadeWidget.FadeWidget_C.ExecuteUbergraph_FadeWidget
	 */
	struct UFadeWidget_C_ExecuteUbergraph_FadeWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FadeWidget.FadeWidget_C.Fade out finished__DelegateSignature
	 */
	struct UFadeWidget_C_Fade_out_finished__DelegateSignature_Params
	{
	};

	/**
	 * Function FadeWidget.FadeWidget_C.Fade out started__DelegateSignature
	 */
	struct UFadeWidget_C_Fade_out_started__DelegateSignature_Params
	{
	};

	/**
	 * Function FadeWidget.FadeWidget_C.On Is Faded? Changed__DelegateSignature
	 */
	struct UFadeWidget_C_On_Is_Faded__Changed__DelegateSignature_Params
	{
	public:
		bool                                                       Is_Faded_;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
