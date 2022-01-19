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
	 * 		Name   -> Function BaseInventoryItem_Interface.BaseInventoryItem_Interface_C.Get Gore Params
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBaseInventoryItem_GoreParams               bpp__Params__pf                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseInventoryItem_Interface_C::Get_Gore_Params(struct FBaseInventoryItem_GoreParams* bpp__Params__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem_Interface.BaseInventoryItem_Interface_C.Get Gore Params");
		
		UBaseInventoryItem_Interface_C_Get_Gore_Params_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Params__pf != nullptr)
			*bpp__Params__pf = params.bpp__Params__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseInventoryItem_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseInventoryItem_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BaseInventoryItem_Interface.BaseInventoryItem_Interface_C");
		return ptr;
	}

}


