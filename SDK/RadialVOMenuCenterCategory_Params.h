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
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnMouseButtonDoubleClick
	 */
	struct URadialVOMenuCenterCategory_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnMouseButtonDown
	 */
	struct URadialVOMenuCenterCategory_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.Construct
	 */
	struct URadialVOMenuCenterCategory_C_Construct_Params
	{
	};

	/**
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.UpdateState
	 */
	struct URadialVOMenuCenterCategory_C_UpdateState_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.PreConstruct
	 */
	struct URadialVOMenuCenterCategory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnGamepadInputModeChangedEvent
	 */
	struct URadialVOMenuCenterCategory_C_OnGamepadInputModeChangedEvent_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.ExecuteUbergraph_RadialVOMenuCenterCategory
	 */
	struct URadialVOMenuCenterCategory_C_ExecuteUbergraph_RadialVOMenuCenterCategory_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.RadialButton_MouseLeave__DelegateSignature
	 */
	struct URadialVOMenuCenterCategory_C_RadialButton_MouseLeave__DelegateSignature_Params
	{
	};

	/**
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.RadialButton_MouseEnter__DelegateSignature
	 */
	struct URadialVOMenuCenterCategory_C_RadialButton_MouseEnter__DelegateSignature_Params
	{
	};

	/**
	 * Function RadialVOMenuCenterCategory.RadialVOMenuCenterCategory_C.OnClicked__DelegateSignature
	 */
	struct URadialVOMenuCenterCategory_C_OnClicked__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
