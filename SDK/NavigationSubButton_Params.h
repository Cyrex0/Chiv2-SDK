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
	 * Function NavigationSubButton.NavigationSubButton_C.PlayAltSelected
	 */
	struct UNavigationSubButton_C_PlayAltSelected_Params
	{
	public:
		bool                                                       bInstant;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.SetColor
	 */
	struct UNavigationSubButton_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.OnInitialized
	 */
	struct UNavigationSubButton_C_OnInitialized_Params
	{
	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.Update Button
	 */
	struct UNavigationSubButton_C_Update_Button_Params
	{
	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.OnAddedToFocusPath
	 */
	struct UNavigationSubButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.OnRemovedFromFocusPath
	 */
	struct UNavigationSubButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.OnFocusLost
	 */
	struct UNavigationSubButton_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.OnInputChanged
	 */
	struct UNavigationSubButton_C_OnInputChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.Highlight
	 */
	struct UNavigationSubButton_C_Highlight_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.Unhighlight
	 */
	struct UNavigationSubButton_C_Unhighlight_Params
	{
	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.PreConstruct
	 */
	struct UNavigationSubButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.SetName
	 */
	struct UNavigationSubButton_C_SetName_Params
	{
	public:
		class FText                                                NewName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.Construct
	 */
	struct UNavigationSubButton_C_Construct_Params
	{
	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.SetMatchmaking
	 */
	struct UNavigationSubButton_C_SetMatchmaking_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.SetEnabled
	 */
	struct UNavigationSubButton_C_SetEnabled_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationSubButton.NavigationSubButton_C.ExecuteUbergraph_NavigationSubButton
	 */
	struct UNavigationSubButton_C_ExecuteUbergraph_NavigationSubButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
