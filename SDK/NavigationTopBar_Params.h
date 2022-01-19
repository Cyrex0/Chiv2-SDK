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
	 * Function NavigationTopBar.NavigationTopBar_C.UpdateGamepadButtons
	 */
	struct UNavigationTopBar_C_UpdateGamepadButtons_Params
	{
	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.UpdateNotifications
	 */
	struct UNavigationTopBar_C_UpdateNotifications_Params
	{
	public:
		TArray<int>                                                NotificationCounts;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.GetNavigationButton
	 */
	struct UNavigationTopBar_C_GetNavigationButton_Params
	{
	public:
		class FText                                                InButtonName;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UNavigationButton_C*                                 NavigationButton;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.AddSubMenu
	 */
	struct UNavigationTopBar_C_AddSubMenu_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.ClearButtons
	 */
	struct UNavigationTopBar_C_ClearButtons_Params
	{
	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.AddNavigationButton
	 */
	struct UNavigationTopBar_C_AddNavigationButton_Params
	{
	public:
		class FText                                                ButtonName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class APlayerController*                                   PlayerController;                                        // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Index;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UNavigationWidget_C*                                 FrontEndNavigation;                                      // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DisabledWIP;                                             // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UNavigationButton_C*                                 NavigationButton;                                        // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.Construct
	 */
	struct UNavigationTopBar_C_Construct_Params
	{
	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.OnMainButtonUnhovered
	 */
	struct UNavigationTopBar_C_OnMainButtonUnhovered_Params
	{
	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.OnMainButtonHovered
	 */
	struct UNavigationTopBar_C_OnMainButtonHovered_Params
	{
	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.ShowGamepadCallouts
	 */
	struct UNavigationTopBar_C_ShowGamepadCallouts_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationTopBar.NavigationTopBar_C.ExecuteUbergraph_NavigationTopBar
	 */
	struct UNavigationTopBar_C_ExecuteUbergraph_NavigationTopBar_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
