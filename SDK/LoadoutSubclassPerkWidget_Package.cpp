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
	 * 		Name   -> Function LoadoutSubclassPerkWidget.LoadoutSubclassPerkWidget_C.UpdatePerk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Desc                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void ULoadoutSubclassPerkWidget_C::UpdatePerk(class UTexture2D* Icon, const class FText& Name, const class FText& Desc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSubclassPerkWidget.LoadoutSubclassPerkWidget_C.UpdatePerk");
		
		ULoadoutSubclassPerkWidget_C_UpdatePerk_Params params {};
		params.Icon = Icon;
		params.Name = Name;
		params.Desc = Desc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSubclassPerkWidget.LoadoutSubclassPerkWidget_C.ExecuteUbergraph_LoadoutSubclassPerkWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSubclassPerkWidget_C::ExecuteUbergraph_LoadoutSubclassPerkWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSubclassPerkWidget.LoadoutSubclassPerkWidget_C.ExecuteUbergraph_LoadoutSubclassPerkWidget");
		
		ULoadoutSubclassPerkWidget_C_ExecuteUbergraph_LoadoutSubclassPerkWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadoutSubclassPerkWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutSubclassPerkWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadoutSubclassPerkWidget.LoadoutSubclassPerkWidget_C");
		return ptr;
	}

}


