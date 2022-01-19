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
	 * 		Name   -> Function MenuScreenInterface.MenuScreenInterface_C.SetButtonId
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ButtonID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMenuScreenInterface_C::SetButtonId(const class FName& ButtonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MenuScreenInterface.MenuScreenInterface_C.SetButtonId");
		
		UMenuScreenInterface_C_SetButtonId_Params params {};
		params.ButtonID = ButtonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMenuScreenInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuScreenInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MenuScreenInterface.MenuScreenInterface_C");
		return ptr;
	}

}


