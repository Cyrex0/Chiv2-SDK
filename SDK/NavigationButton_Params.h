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
	 * Function NavigationButton.NavigationButton_C.SetSelected
	 */
	struct UNavigationButton_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationButton.NavigationButton_C.OnDeselect
	 */
	struct UNavigationButton_C_OnDeselect_Params
	{
	};

	/**
	 * Function NavigationButton.NavigationButton_C.OnButtonClicked
	 */
	struct UNavigationButton_C_OnButtonClicked_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationButton.NavigationButton_C.UpdateDisabled
	 */
	struct UNavigationButton_C_UpdateDisabled_Params
	{
	public:
		bool                                                       DisableWIP;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationButton.NavigationButton_C.INTERNAL_OnClicked_Button
	 */
	struct UNavigationButton_C_INTERNAL_OnClicked_Button_Params
	{
	};

	/**
	 * Function NavigationButton.NavigationButton_C.On Highlight Event
	 */
	struct UNavigationButton_C_On_Highlight_Event_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationButton.NavigationButton_C.Construct
	 */
	struct UNavigationButton_C_Construct_Params
	{
	};

	/**
	 * Function NavigationButton.NavigationButton_C.Update
	 */
	struct UNavigationButton_C_Update_Params
	{
	};

	/**
	 * Function NavigationButton.NavigationButton_C.ResetAnimiations
	 */
	struct UNavigationButton_C_ResetAnimiations_Params
	{
	};

	/**
	 * Function NavigationButton.NavigationButton_C.ExecuteUbergraph_NavigationButton
	 */
	struct UNavigationButton_C_ExecuteUbergraph_NavigationButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
