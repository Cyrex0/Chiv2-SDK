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
	 * Function GameUnavailableWidget.GameUnavailableWidget_C.OnKeyDown
	 */
	struct UGameUnavailableWidget_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function GameUnavailableWidget.GameUnavailableWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UGameUnavailableWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameUnavailableWidget.GameUnavailableWidget_C.Construct
	 */
	struct UGameUnavailableWidget_C_Construct_Params
	{
	};

	/**
	 * Function GameUnavailableWidget.GameUnavailableWidget_C.OnFocusLost
	 */
	struct UGameUnavailableWidget_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function GameUnavailableWidget.GameUnavailableWidget_C.Tick
	 */
	struct UGameUnavailableWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameUnavailableWidget.GameUnavailableWidget_C.K2_OnFocusChanging
	 */
	struct UGameUnavailableWidget_C_K2_OnFocusChanging_Params
	{
	};

	/**
	 * Function GameUnavailableWidget.GameUnavailableWidget_C.ExecuteUbergraph_GameUnavailableWidget
	 */
	struct UGameUnavailableWidget_C_ExecuteUbergraph_GameUnavailableWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
