/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.ClearCustomizationNotifications
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_ClearCustomizationNotifications(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.ClearCustomizationNotifications");
		
		UNavigationFunctionLibrary_C_ClearCustomizationNotifications_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.UpdateNavigationNotifications
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNavigationWidget_C*                         NavigationWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_UpdateNavigationNotifications(class UNavigationWidget_C* NavigationWidget, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.UpdateNavigationNotifications");
		
		UNavigationFunctionLibrary_C_UpdateNavigationNotifications_Params params {};
		params.NavigationWidget = NavigationWidget;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustNotificationStates
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCustomizationEntry                         CustEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOwned                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUnviewed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPurchasable                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetCustNotificationStates(const struct FCustomizationEntry& CustEntry, class UObject* __WorldContext, bool* bOwned, bool* bUnviewed, bool* bPurchasable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustNotificationStates");
		
		UNavigationFunctionLibrary_C_GetCustNotificationStates_Params params {};
		params.CustEntry = CustEntry;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOwned != nullptr)
			*bOwned = params.bOwned;
		if (bUnviewed != nullptr)
			*bUnviewed = params.bUnviewed;
		if (bPurchasable != nullptr)
			*bPurchasable = params.bPurchasable;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreatePlayMenuSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreatePlayMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreatePlayMenuSubMenus");
		
		UNavigationFunctionLibrary_C_CreatePlayMenuSubMenus_Params params {};
		params.Controller = Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateProfileMenuSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateProfileMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateProfileMenuSubMenus");
		
		UNavigationFunctionLibrary_C_CreateProfileMenuSubMenus_Params params {};
		params.Controller = Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustLoadout
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EAudioClassType                                Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<TBL_EWeaponTag>                             Ranged                                                     (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<TBL_EWeaponTag>                             TwoHander                                                  (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<TBL_EWeaponTag>                             OneHander                                                  (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<TBL_EWeaponTag>                             Shield                                                     (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<TBL_EWeaponTag>                             Thrown                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetCustLoadout(TBL_EAudioClassType Class, class UObject* __WorldContext, TArray<TBL_EWeaponTag>* Ranged, TArray<TBL_EWeaponTag>* TwoHander, TArray<TBL_EWeaponTag>* OneHander, TArray<TBL_EWeaponTag>* Shield, TArray<TBL_EWeaponTag>* Thrown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCustLoadout");
		
		UNavigationFunctionLibrary_C_GetCustLoadout_Params params {};
		params.Class = Class;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ranged != nullptr)
			*Ranged = params.Ranged;
		if (TwoHander != nullptr)
			*TwoHander = params.TwoHander;
		if (OneHander != nullptr)
			*OneHander = params.OneHander;
		if (Shield != nullptr)
			*Shield = params.Shield;
		if (Thrown != nullptr)
			*Thrown = params.Thrown;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetWeaponNotification
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EWeaponTag                                     WeaponTag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EAudioClassType                                ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetWeaponNotification(TBL_EFaction Faction, class APlayerController* PlayerController, TBL_EWeaponTag WeaponTag, TBL_EAudioClassType ClassType, class UObject* __WorldContext, int* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetWeaponNotification");
		
		UNavigationFunctionLibrary_C_GetWeaponNotification_Params params {};
		params.Faction = Faction;
		params.PlayerController = PlayerController;
		params.WeaponTag = WeaponTag;
		params.ClassType = ClassType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCategoryNotification
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EAudioClassType                                CharacaterType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetCategoryNotification(TBL_EAudioClassType CharacaterType, TBL_EFaction Faction, class APlayerController* PlayerController, const class FName& Category, class UObject* __WorldContext, int* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetCategoryNotification");
		
		UNavigationFunctionLibrary_C_GetCategoryNotification_Params params {};
		params.CharacaterType = CharacaterType;
		params.Faction = Faction;
		params.PlayerController = PlayerController;
		params.Category = Category;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetClassNotifications
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EAudioClassType                                CharacaterType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetClassNotifications(TBL_EAudioClassType CharacaterType, TBL_EFaction Faction, class APlayerController* PlayerController, class UObject* __WorldContext, int* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetClassNotifications");
		
		UNavigationFunctionLibrary_C_GetClassNotifications_Params params {};
		params.CharacaterType = CharacaterType;
		params.Faction = Faction;
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetFactionNotifications
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetFactionNotifications(TBL_EFaction Faction, class APlayerController* PlayerController, class UObject* __WorldContext, int* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetFactionNotifications");
		
		UNavigationFunctionLibrary_C_GetFactionNotifications_Params params {};
		params.Faction = Faction;
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetAllCustNotifications
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetAllCustNotifications(class APlayerController* PlayerController, class UObject* __WorldContext, int* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetAllCustNotifications");
		
		UNavigationFunctionLibrary_C_GetAllCustNotifications_Params params {};
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateNewsSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateNewsSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateNewsSubMenus");
		
		UNavigationFunctionLibrary_C_CreateNewsSubMenus_Params params {};
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateTutorialMenuSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateTutorialMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateTutorialMenuSubMenus");
		
		UNavigationFunctionLibrary_C_CreateTutorialMenuSubMenus_Params params {};
		params.Controller = Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateLoreMenuSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateLoreMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateLoreMenuSubMenus");
		
		UNavigationFunctionLibrary_C_CreateLoreMenuSubMenus_Params params {};
		params.Controller = Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateStoreMenuSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldUseCamera                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateStoreMenuSubMenus(class APlayerController* Controller, bool bShouldUseCamera, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateStoreMenuSubMenus");
		
		UNavigationFunctionLibrary_C_CreateStoreMenuSubMenus_Params params {};
		params.Controller = Controller;
		params.bShouldUseCamera = bShouldUseCamera;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFriendsMenuSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateFriendsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFriendsMenuSubMenus");
		
		UNavigationFunctionLibrary_C_CreateFriendsMenuSubMenus_Params params {};
		params.Controller = Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateServerBrowserSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateServerBrowserSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateServerBrowserSubMenus");
		
		UNavigationFunctionLibrary_C_CreateServerBrowserSubMenus_Params params {};
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCreateGameSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateCreateGameSubMenus(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCreateGameSubMenus");
		
		UNavigationFunctionLibrary_C_CreateCreateGameSubMenus_Params params {};
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCustomizationOptions
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateCustomizationOptions(class APlayerController* PlayerController, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateCustomizationOptions");
		
		UNavigationFunctionLibrary_C_CreateCustomizationOptions_Params params {};
		params.PlayerController = PlayerController;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateOptionsMenuSubMenus
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UNavigationMenuData_C*>               Array                                                      (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateOptionsMenuSubMenus(class APlayerController* Controller, class UObject* __WorldContext, TArray<class UNavigationMenuData_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateOptionsMenuSubMenus");
		
		UNavigationFunctionLibrary_C_CreateOptionsMenuSubMenus_Params params {};
		params.Controller = Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateInGameMenuTree
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNavigationMenuData_C*                       HeadMenu                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateInGameMenuTree(class APlayerController* OwningPlayer, class UObject* __WorldContext, class UNavigationMenuData_C** HeadMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateInGameMenuTree");
		
		UNavigationFunctionLibrary_C_CreateInGameMenuTree_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeadMenu != nullptr)
			*HeadMenu = params.HeadMenu;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFrontendMenuTree
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNavigationMenuData_C*                       HeadMenu                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateFrontendMenuTree(class APlayerController* OwningPlayer, class UObject* __WorldContext, class UNavigationMenuData_C** HeadMenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateFrontendMenuTree");
		
		UNavigationFunctionLibrary_C_CreateFrontendMenuTree_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeadMenu != nullptr)
			*HeadMenu = params.HeadMenu;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PrintStackData
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNavigationMenuStack                        MenuStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_PrintStackData(struct FNavigationMenuStack* MenuStack, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PrintStackData");
		
		UNavigationFunctionLibrary_C_PrintStackData_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuStack != nullptr)
			*MenuStack = params.MenuStack;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetSubMenuByIndex
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNavigationMenuStack                        MenuStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int                                                SubMenuIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNavigationMenuData_C*                       Submenu                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetSubMenuByIndex(struct FNavigationMenuStack* MenuStack, int SubMenuIndex, class UObject* __WorldContext, class UNavigationMenuData_C** Submenu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetSubMenuByIndex");
		
		UNavigationFunctionLibrary_C_GetSubMenuByIndex_Params params {};
		params.SubMenuIndex = SubMenuIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuStack != nullptr)
			*MenuStack = params.MenuStack;
		if (Submenu != nullptr)
			*Submenu = params.Submenu;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForSubMenu
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNavigationMenuStack                        MenuStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		int                                                SubMenuIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetScreenIDForSubMenu(struct FNavigationMenuStack* MenuStack, int SubMenuIndex, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForSubMenu");
		
		UNavigationFunctionLibrary_C_GetScreenIDForSubMenu_Params params {};
		params.SubMenuIndex = SubMenuIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuStack != nullptr)
			*MenuStack = params.MenuStack;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForCurrentMenu
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNavigationMenuStack                        MenuStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_GetScreenIDForCurrentMenu(struct FNavigationMenuStack* MenuStack, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.GetScreenIDForCurrentMenu");
		
		UNavigationFunctionLibrary_C_GetScreenIDForCurrentMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuStack != nullptr)
			*MenuStack = params.MenuStack;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopScreen
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNavigationMenuStack                        MenuStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_PopScreen(struct FNavigationMenuStack* MenuStack, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopScreen");
		
		UNavigationFunctionLibrary_C_PopScreen_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuStack != nullptr)
			*MenuStack = params.MenuStack;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushScreen
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNavigationMenuStack                        MenuStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class UTBLScreenWidget*                            Screen                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationFunctionLibrary_C::STATIC_PushScreen(struct FNavigationMenuStack* MenuStack, class UTBLScreenWidget* Screen, class UObject* __WorldContext, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushScreen");
		
		UNavigationFunctionLibrary_C_PushScreen_Params params {};
		params.Screen = Screen;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuStack != nullptr)
			*MenuStack = params.MenuStack;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateMenu
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        ButtonID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<class UNavigationMenuData_C*>               SubMenus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class FString                                      CameraName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        FrontendEvent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		NavigationMenuStyle_ENavigationMenuStyle           Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Disable_if_WIP_Features_are_Disallowed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHideRaggedEdge                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdateNavWithSubMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBlurScreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHideBottomBar                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               highlightFirstItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        MenuName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bDisableOpenFriends                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDisableOpenStore                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShowNavGamepadCallouts                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UNavigationMenuData_C*                       Menu                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_CreateMenu(const class FName& ButtonID, const class FText& Name, TArray<class UNavigationMenuData_C*>* SubMenus, const class FString& CameraName, const class FName& FrontendEvent, NavigationMenuStyle_ENavigationMenuStyle Style, class APlayerController* Owner, bool Disable_if_WIP_Features_are_Disallowed, bool bHideRaggedEdge, bool UpdateNavWithSubMenu, bool bBlurScreen, bool bHideBottomBar, bool highlightFirstItem, const class FText& MenuName, bool bDisableOpenFriends, bool bDisableOpenStore, bool bShowNavGamepadCallouts, class UObject* __WorldContext, class UNavigationMenuData_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.CreateMenu");
		
		UNavigationFunctionLibrary_C_CreateMenu_Params params {};
		params.ButtonID = ButtonID;
		params.Name = Name;
		params.CameraName = CameraName;
		params.FrontendEvent = FrontendEvent;
		params.Style = Style;
		params.Owner = Owner;
		params.Disable_if_WIP_Features_are_Disallowed = Disable_if_WIP_Features_are_Disallowed;
		params.bHideRaggedEdge = bHideRaggedEdge;
		params.UpdateNavWithSubMenu = UpdateNavWithSubMenu;
		params.bBlurScreen = bBlurScreen;
		params.bHideBottomBar = bHideBottomBar;
		params.highlightFirstItem = highlightFirstItem;
		params.MenuName = MenuName;
		params.bDisableOpenFriends = bDisableOpenFriends;
		params.bDisableOpenStore = bDisableOpenStore;
		params.bShowNavGamepadCallouts = bShowNavGamepadCallouts;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubMenus != nullptr)
			*SubMenus = params.SubMenus;
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopMenu
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNavigationMenuStack                        MenuStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNavigationFunctionLibrary_C::STATIC_PopMenu(struct FNavigationMenuStack* MenuStack, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PopMenu");
		
		UNavigationFunctionLibrary_C_PopMenu_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuStack != nullptr)
			*MenuStack = params.MenuStack;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushMenu
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FNavigationMenuStack                        MenuStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class UNavigationMenuData_C*                       MenuToPush                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                CurrentIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationFunctionLibrary_C::STATIC_PushMenu(struct FNavigationMenuStack* MenuStack, class UNavigationMenuData_C* MenuToPush, int CurrentIndex, class UObject* __WorldContext, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationFunctionLibrary.NavigationFunctionLibrary_C.PushMenu");
		
		UNavigationFunctionLibrary_C_PushMenu_Params params {};
		params.MenuToPush = MenuToPush;
		params.CurrentIndex = CurrentIndex;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuStack != nullptr)
			*MenuStack = params.MenuStack;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNavigationFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NavigationFunctionLibrary.NavigationFunctionLibrary_C");
		return ptr;
	}

}


