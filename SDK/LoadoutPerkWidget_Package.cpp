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
	 * 		Name   -> Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdatePerk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PerkName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PerkDesc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               isAbility                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoadoutPerkWidget_C::UpdatePerk(const class FText& PerkName, const class FText& PerkDesc, bool isAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdatePerk");
		
		ULoadoutPerkWidget_C_UpdatePerk_Params params {};
		params.PerkName = PerkName;
		params.PerkDesc = PerkDesc;
		params.isAbility = isAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PerkName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PerkDesc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULoadoutPerkWidget_C::UpdateWidget(const class FText& PerkName, const class FText& PerkDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWidget");
		
		ULoadoutPerkWidget_C_UpdateWidget_Params params {};
		params.PerkName = PerkName;
		params.PerkDesc = PerkDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWeapon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        PerkName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PerkDesc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutPerkWidget_C::UpdateWeapon(const class FText& PerkName, const class FText& PerkDesc, class UTexture2D* Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutPerkWidget.LoadoutPerkWidget_C.UpdateWeapon");
		
		ULoadoutPerkWidget_C_UpdateWeapon_Params params {};
		params.PerkName = PerkName;
		params.PerkDesc = PerkDesc;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutPerkWidget.LoadoutPerkWidget_C.ExecuteUbergraph_LoadoutPerkWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutPerkWidget_C::ExecuteUbergraph_LoadoutPerkWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutPerkWidget.LoadoutPerkWidget_C.ExecuteUbergraph_LoadoutPerkWidget");
		
		ULoadoutPerkWidget_C_ExecuteUbergraph_LoadoutPerkWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadoutPerkWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutPerkWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadoutPerkWidget.LoadoutPerkWidget_C");
		return ptr;
	}

}


