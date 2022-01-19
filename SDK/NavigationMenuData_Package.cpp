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
	 * 		Name   -> Function NavigationMenuData.NavigationMenuData_C.HasSubMenus
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               HasSubMenus                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNavigationMenuData_C::HasSubMenus(bool* HasSubMenus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NavigationMenuData.NavigationMenuData_C.HasSubMenus");
		
		UNavigationMenuData_C_HasSubMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasSubMenus != nullptr)
			*HasSubMenus = params.HasSubMenus;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNavigationMenuData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNavigationMenuData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NavigationMenuData.NavigationMenuData_C");
		return ptr;
	}

}


