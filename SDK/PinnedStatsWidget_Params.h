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
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.DisableCaching
	 */
	struct UPinnedStatsWidget_C_DisableCaching_Params
	{
	public:
		class UInvalidationBox*                                    InvalidationBox;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.EnableCaching
	 */
	struct UPinnedStatsWidget_C_EnableCaching_Params
	{
	public:
		class UInvalidationBox*                                    InvalidationBox;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.CanFadeOut
	 */
	struct UPinnedStatsWidget_C_CanFadeOut_Params
	{
	public:
		bool                                                       Return;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.AssignedToStatsComponent
	 */
	struct UPinnedStatsWidget_C_AssignedToStatsComponent_Params
	{
	public:
		class UStatsComponent*                                     Stats;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.UnAssignedToStatsComponent
	 */
	struct UPinnedStatsWidget_C_UnAssignedToStatsComponent_Params
	{
	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.FadeIn
	 */
	struct UPinnedStatsWidget_C_FadeIn_Params
	{
	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.FadeOut
	 */
	struct UPinnedStatsWidget_C_FadeOut_Params
	{
	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.CustomEvent_2
	 */
	struct UPinnedStatsWidget_C_CustomEvent_2_Params
	{
	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.OnAnimationFinished
	 */
	struct UPinnedStatsWidget_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.OnAnimationStarted
	 */
	struct UPinnedStatsWidget_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.CustomEvent_3
	 */
	struct UPinnedStatsWidget_C_CustomEvent_3_Params
	{
	};

	/**
	 * Function PinnedStatsWidget.PinnedStatsWidget_C.ExecuteUbergraph_PinnedStatsWidget
	 */
	struct UPinnedStatsWidget_C_ExecuteUbergraph_PinnedStatsWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
