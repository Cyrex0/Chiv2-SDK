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
	 * 		Name   -> Function BP_VC_Light_Basket_04.BP_VC_Light_Basket_04_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_VC_Light_Basket_04_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VC_Light_Basket_04.BP_VC_Light_Basket_04_C.UserConstructionScript");
		
		ABP_VC_Light_Basket_04_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_VC_Light_Basket_04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_VC_Light_Basket_04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VC_Light_Basket_04.BP_VC_Light_Basket_04_C");
		return ptr;
	}

}


