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
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.ClearCustomizationNotifications
	 */
	struct UNavigationFunctionLibrary_C_ClearCustomizationNotifications_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.UpdateNavigationNotifications
	 */
	struct UNavigationFunctionLibrary_C_UpdateNavigationNotifications_Params
	{
	public:
		class UNavigationWidget_C*                                 NavigationWidget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustNotificationStates
	 */
	struct UNavigationFunctionLibrary_C_GetCustNotificationStates_Params
	{
	public:
		struct FCustomizationEntry                                 CustEntry;                                               // 0x0000(0x0080)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOwned;                                                  // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUnviewed;                                               // 0x0089(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPurchasable;                                            // 0x008A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreatePlayMenuSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreatePlayMenuSubMenus_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateProfileMenuSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreateProfileMenuSubMenus_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustLoadout
	 */
	struct UNavigationFunctionLibrary_C_GetCustLoadout_Params
	{
	public:
		TBL_EAudioClassType                                        Class;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<TBL_EWeaponTag>                                     Ranged;                                                  // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<TBL_EWeaponTag>                                     TwoHander;                                               // 0x0020(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<TBL_EWeaponTag>                                     OneHander;                                               // 0x0030(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<TBL_EWeaponTag>                                     Shield;                                                  // 0x0040(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<TBL_EWeaponTag>                                     Thrown;                                                  // 0x0050(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetWeaponNotification
	 */
	struct UNavigationFunctionLibrary_C_GetWeaponNotification_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EWeaponTag                                             WeaponTag;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EAudioClassType                                        ClassType;                                               // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Count;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCategoryNotification
	 */
	struct UNavigationFunctionLibrary_C_GetCategoryNotification_Params
	{
	public:
		TBL_EAudioClassType                                        CharacaterType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Category;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Count;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetClassNotifications
	 */
	struct UNavigationFunctionLibrary_C_GetClassNotifications_Params
	{
	public:
		TBL_EAudioClassType                                        CharacaterType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Count;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetFactionNotifications
	 */
	struct UNavigationFunctionLibrary_C_GetFactionNotifications_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Count;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetAllCustNotifications
	 */
	struct UNavigationFunctionLibrary_C_GetAllCustNotifications_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Count;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateNewsSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreateNewsSubMenus_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateTutorialMenuSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreateTutorialMenuSubMenus_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateLoreMenuSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreateLoreMenuSubMenus_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateStoreMenuSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreateStoreMenuSubMenus_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldUseCamera;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0018(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFriendsMenuSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreateFriendsMenuSubMenus_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateServerBrowserSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreateServerBrowserSubMenus_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCreateGameSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreateCreateGameSubMenus_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCustomizationOptions
	 */
	struct UNavigationFunctionLibrary_C_CreateCustomizationOptions_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateOptionsMenuSubMenus
	 */
	struct UNavigationFunctionLibrary_C_CreateOptionsMenuSubMenus_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNavigationMenuData_C*>                       Array;                                                   // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateInGameMenuTree
	 */
	struct UNavigationFunctionLibrary_C_CreateInGameMenuTree_Params
	{
	public:
		class APlayerController*                                   OwningPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UNavigationMenuData_C*                               HeadMenu;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFrontendMenuTree
	 */
	struct UNavigationFunctionLibrary_C_CreateFrontendMenuTree_Params
	{
	public:
		class APlayerController*                                   OwningPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UNavigationMenuData_C*                               HeadMenu;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PrintStackData
	 */
	struct UNavigationFunctionLibrary_C_PrintStackData_Params
	{
	public:
		struct FNavigationMenuStack                                MenuStack;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetSubMenuByIndex
	 */
	struct UNavigationFunctionLibrary_C_GetSubMenuByIndex_Params
	{
	public:
		struct FNavigationMenuStack                                MenuStack;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		int                                                        SubMenuIndex;                                            // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UNavigationMenuData_C*                               Submenu;                                                 // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForSubMenu
	 */
	struct UNavigationFunctionLibrary_C_GetScreenIDForSubMenu_Params
	{
	public:
		struct FNavigationMenuStack                                MenuStack;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		int                                                        SubMenuIndex;                                            // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForCurrentMenu
	 */
	struct UNavigationFunctionLibrary_C_GetScreenIDForCurrentMenu_Params
	{
	public:
		struct FNavigationMenuStack                                MenuStack;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopScreen
	 */
	struct UNavigationFunctionLibrary_C_PopScreen_Params
	{
	public:
		struct FNavigationMenuStack                                MenuStack;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushScreen
	 */
	struct UNavigationFunctionLibrary_C_PushScreen_Params
	{
	public:
		struct FNavigationMenuStack                                MenuStack;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UTBLScreenWidget*                                    Screen;                                                  // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateMenu
	 */
	struct UNavigationFunctionLibrary_C_CreateMenu_Params
	{
	public:
		class FName                                                ButtonID;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<class UNavigationMenuData_C*>                       SubMenus;                                                // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class FString                                              CameraName;                                              // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                FrontendEvent;                                           // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		NavigationMenuStyle_ENavigationMenuStyle                   Style;                                                   // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController*                                   Owner;                                                   // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Disable_if_WIP_Features_are_Disallowed;                  // 0x0080(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHideRaggedEdge;                                         // 0x0081(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdateNavWithSubMenu;                                    // 0x0082(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBlurScreen;                                             // 0x0083(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHideBottomBar;                                          // 0x0084(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       highlightFirstItem;                                      // 0x0085(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                MenuName;                                                // 0x0088(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bDisableOpenFriends;                                     // 0x00A0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDisableOpenStore;                                       // 0x00A1(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bShowNavGamepadCallouts;                                 // 0x00A2(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UNavigationMenuData_C*                               Menu;                                                    // 0x00B0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopMenu
	 */
	struct UNavigationFunctionLibrary_C_PopMenu_Params
	{
	public:
		struct FNavigationMenuStack                                MenuStack;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushMenu
	 */
	struct UNavigationFunctionLibrary_C_PushMenu_Params
	{
	public:
		struct FNavigationMenuStack                                MenuStack;                                               // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UNavigationMenuData_C*                               MenuToPush;                                              // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        CurrentIndex;                                            // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
