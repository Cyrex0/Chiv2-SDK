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
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.InitiatePurchasing
	 */
	struct UFreeWeekendWidget_C_InitiatePurchasing_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              CurrencyId;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.OnKeyDown
	 */
	struct UFreeWeekendWidget_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.Construct
	 */
	struct UFreeWeekendWidget_C_Construct_Params
	{
	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.OnFocusLost
	 */
	struct UFreeWeekendWidget_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.Tick
	 */
	struct UFreeWeekendWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.K2_OnFocusChanging
	 */
	struct UFreeWeekendWidget_C_K2_OnFocusChanging_Params
	{
	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.OnInitialized
	 */
	struct UFreeWeekendWidget_C_OnInitialized_Params
	{
	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.OnPurchaseCompleted_Event_1
	 */
	struct UFreeWeekendWidget_C_OnPurchaseCompleted_Event_1_Params
	{
	public:
		bool                                                       WasPurchaseSuccessful;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FPrimaryAssetId>                             AssetIds;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.BndEvt__StandardEditionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UFreeWeekendWidget_C_BndEvt__StandardEditionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.BndEvt__SpecialEditionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UFreeWeekendWidget_C_BndEvt__SpecialEditionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UFreeWeekendWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.ExecuteUbergraph_FreeWeekendWidget
	 */
	struct UFreeWeekendWidget_C_ExecuteUbergraph_FreeWeekendWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreeWeekendWidget.FreeWeekendWidget_C.OnPurchasePerformed__DelegateSignature
	 */
	struct UFreeWeekendWidget_C_OnPurchasePerformed__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
