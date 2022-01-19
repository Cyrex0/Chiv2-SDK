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
	 * 		Name   -> Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.UpdateItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ChargingTitle                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ChargingDesc                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULoadoutSpecialItemWidget_C::UpdateItem(class UTexture2D* Icon, const class FText& Name, const class FText& Desc, const class FText& ChargingTitle, const class FText& ChargingDesc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.UpdateItem");
		
		ULoadoutSpecialItemWidget_C_UpdateItem_Params params {};
		params.Icon = Icon;
		params.Name = Name;
		params.Desc = Desc;
		params.ChargingTitle = ChargingTitle;
		params.ChargingDesc = ChargingDesc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.ExecuteUbergraph_LoadoutSpecialItemWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSpecialItemWidget_C::ExecuteUbergraph_LoadoutSpecialItemWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C.ExecuteUbergraph_LoadoutSpecialItemWidget");
		
		ULoadoutSpecialItemWidget_C_ExecuteUbergraph_LoadoutSpecialItemWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadoutSpecialItemWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutSpecialItemWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadoutSpecialItemWidget.LoadoutSpecialItemWidget_C");
		return ptr;
	}

}


