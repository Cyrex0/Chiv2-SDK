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
	 * 		Name   -> Function LoadingScreensConfig.LoadingScreensConfig_C.GetDefaultLoadingScreenPanelWidgetClass
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UClass* ULoadingScreensConfig_C::GetDefaultLoadingScreenPanelWidgetClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingScreensConfig.LoadingScreensConfig_C.GetDefaultLoadingScreenPanelWidgetClass");
		
		ULoadingScreensConfig_C_GetDefaultLoadingScreenPanelWidgetClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadingScreensConfig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingScreensConfig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LoadingScreensConfig.LoadingScreensConfig_C");
		return ptr;
	}

}


