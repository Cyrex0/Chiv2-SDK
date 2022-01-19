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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass NavigationFunctionLibrary.NavigationFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNavigationFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ClearCustomizationNotifications(class UObject* __WorldContext);
		void STATIC_UpdateNavigationNotifications(class UNavigationWidget_C* NavigationWidget, class UObject* __WorldContext);
		void STATIC_GetCustNotificationStates(const struct FCustomizationEntry& CustEntry, class UObject* __WorldContext, bool* bOwned, bool* bUnviewed, bool* bPurchasable);
		void STATIC_CreatePlayMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateProfileMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_GetCustLoadout(TBL_EAudioClassType Class, class UObject* __WorldContext, TArray<TBL_EWeaponTag>* Ranged, TArray<TBL_EWeaponTag>* TwoHander, TArray<TBL_EWeaponTag>* OneHander, TArray<TBL_EWeaponTag>* Shield, TArray<TBL_EWeaponTag>* Thrown);
		void STATIC_GetWeaponNotification(TBL_EFaction Faction, class APlayerController* PlayerController, TBL_EWeaponTag WeaponTag, TBL_EAudioClassType ClassType, class UObject* __WorldContext, int* Count);
		void STATIC_GetCategoryNotification(TBL_EAudioClassType CharacaterType, TBL_EFaction Faction, class APlayerController* PlayerController, const class FName& Category, class UObject* __WorldContext, int* Count);
		void STATIC_GetClassNotifications(TBL_EAudioClassType CharacaterType, TBL_EFaction Faction, class APlayerController* PlayerController, class UObject* __WorldContext, int* Count);
		void STATIC_GetFactionNotifications(TBL_EFaction Faction, class APlayerController* PlayerController, class UObject* __WorldContext, int* Count);
		void STATIC_GetAllCustNotifications(class APlayerController* PlayerController, class UObject* __WorldContext, int* Count);
		void STATIC_CreateNewsSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateTutorialMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateLoreMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateStoreMenuSubMenus(class APlayerController* Controller, bool bShouldUseCamera, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateFriendsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateServerBrowserSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateCreateGameSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateCustomizationOptions(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateOptionsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array);
		void STATIC_CreateInGameMenuTree(class APlayerController* OwningPlayer, class UObject* __WorldContext, class UNavigationMenuData_C** HeadMenu);
		void STATIC_CreateFrontendMenuTree(class APlayerController* OwningPlayer, class UObject* __WorldContext, class UNavigationMenuData_C** HeadMenu);
		void STATIC_PrintStackData(struct FNavigationMenuStack* MenuStack, class UObject* __WorldContext);
		void STATIC_GetSubMenuByIndex(struct FNavigationMenuStack* MenuStack, int SubMenuIndex, class UObject* __WorldContext, class UNavigationMenuData_C** Submenu);
		void STATIC_GetScreenIDForSubMenu(struct FNavigationMenuStack* MenuStack, int SubMenuIndex, class UObject* __WorldContext);
		void STATIC_GetScreenIDForCurrentMenu(struct FNavigationMenuStack* MenuStack, class UObject* __WorldContext);
		void STATIC_PopScreen(struct FNavigationMenuStack* MenuStack, class UObject* __WorldContext);
		void STATIC_PushScreen(struct FNavigationMenuStack* MenuStack, class UTBLScreenWidget* Screen, class UObject* __WorldContext, bool* Success);
		void STATIC_CreateMenu(const class FName& ButtonID, const class FText& Name, TArray<class UNavigationMenuData_C*>* SubMenus, const class FString& CameraName, const class FName& FrontendEvent, NavigationMenuStyle_ENavigationMenuStyle Style, class APlayerController* Owner, bool Disable_if_WIP_Features_are_Disallowed, bool bHideRaggedEdge, bool UpdateNavWithSubMenu, bool bBlurScreen, bool bHideBottomBar, bool highlightFirstItem, const class FText& MenuName, bool bDisableOpenFriends, bool bDisableOpenStore, bool bShowNavGamepadCallouts, class UObject* __WorldContext, class UNavigationMenuData_C** Menu);
		void STATIC_PopMenu(struct FNavigationMenuStack* MenuStack, class UObject* __WorldContext);
		void STATIC_PushMenu(struct FNavigationMenuStack* MenuStack, class UNavigationMenuData_C* MenuToPush, int CurrentIndex, class UObject* __WorldContext, bool* Success);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
