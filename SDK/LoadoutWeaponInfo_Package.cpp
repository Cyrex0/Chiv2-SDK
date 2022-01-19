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
	 * 		Name   -> Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.UpdateWeaponInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      CharacterClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutWeaponInfo_C::UpdateWeaponInfo(class UClass* Inventory, class UClass* CharacterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.UpdateWeaponInfo");
		
		ULoadoutWeaponInfo_C_UpdateWeaponInfo_Params params {};
		params.Inventory = Inventory;
		params.CharacterClass = CharacterClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.HideAllPerks
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutWeaponInfo_C::HideAllPerks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.HideAllPerks");
		
		ULoadoutWeaponInfo_C_HideAllPerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.ExecuteUbergraph_LoadoutWeaponInfo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutWeaponInfo_C::ExecuteUbergraph_LoadoutWeaponInfo(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutWeaponInfo.LoadoutWeaponInfo_C.ExecuteUbergraph_LoadoutWeaponInfo");
		
		ULoadoutWeaponInfo_C_ExecuteUbergraph_LoadoutWeaponInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadoutWeaponInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutWeaponInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadoutWeaponInfo.LoadoutWeaponInfo_C");
		return ptr;
	}

}


