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
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.UpdateScroll
	 */
	struct UGameUpdatesTakeoverScreen_C_UpdateScroll_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetFocusIfNeeded
	 */
	struct UGameUpdatesTakeoverScreen_C_SetFocusIfNeeded_Params
	{
	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyUp
	 */
	struct UGameUpdatesTakeoverScreen_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyDown
	 */
	struct UGameUpdatesTakeoverScreen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnLoaded_440A3BAD453533B5A70B58879F504C48
	 */
	struct UGameUpdatesTakeoverScreen_C_OnLoaded_440A3BAD453533B5A70B58879F504C48_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetupUpdateData
	 */
	struct UGameUpdatesTakeoverScreen_C_SetupUpdateData_Params
	{
	public:
		struct FGameUpdateData                                     UpdateData;                                              // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Setup
	 */
	struct UGameUpdatesTakeoverScreen_C_Setup_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UClass*                                              ContentWidgetClass;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Tick
	 */
	struct UGameUpdatesTakeoverScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Construct
	 */
	struct UGameUpdatesTakeoverScreen_C_Construct_Params
	{
	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UGameUpdatesTakeoverScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.CloseScreen
	 */
	struct UGameUpdatesTakeoverScreen_C_CloseScreen_Params
	{
	};

	/**
	 * Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.ExecuteUbergraph_GameUpdatesTakeoverScreen
	 */
	struct UGameUpdatesTakeoverScreen_C_ExecuteUbergraph_GameUpdatesTakeoverScreen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
