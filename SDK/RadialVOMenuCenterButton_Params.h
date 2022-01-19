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
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.SetKey
	 */
	struct URadialVOMenuCenterButton_C_SetKey_Params
	{
	public:
		class URadialVOMenuCenterCategory_C*                       VOButton;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTBLPlayerInput*                                     TBLPlayerInput;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewParam;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseButtonDoubleClick
	 */
	struct URadialVOMenuCenterButton_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseButtonDown
	 */
	struct URadialVOMenuCenterButton_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseEnter
	 */
	struct URadialVOMenuCenterButton_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnMouseLeave
	 */
	struct URadialVOMenuCenterButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.UpdateState
	 */
	struct URadialVOMenuCenterButton_C_UpdateState_Params
	{
	public:
		RadialVOMenuPageEnum_ERadialVOMenuPageEnum                 CurrentPage;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.ExecuteUbergraph_RadialVOMenuCenterButton
	 */
	struct URadialVOMenuCenterButton_C_ExecuteUbergraph_RadialVOMenuCenterButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.RadialButton_MouseLeave__DelegateSignature
	 */
	struct URadialVOMenuCenterButton_C_RadialButton_MouseLeave__DelegateSignature_Params
	{
	};

	/**
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.RadialButton_MouseEnter__DelegateSignature
	 */
	struct URadialVOMenuCenterButton_C_RadialButton_MouseEnter__DelegateSignature_Params
	{
	};

	/**
	 * Function RadialVOMenuCenterButton.RadialVOMenuCenterButton_C.OnClicked__DelegateSignature
	 */
	struct URadialVOMenuCenterButton_C_OnClicked__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
