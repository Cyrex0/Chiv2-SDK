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
	 * 		Name   -> Function KillFeed_Interface.KillFeed_Interface_C.BeginRemove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeed_Interface_C::BeginRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed_Interface.KillFeed_Interface_C.BeginRemove");
		
		UKillFeed_Interface_C_BeginRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKillFeed_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillFeed_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass KillFeed_Interface.KillFeed_Interface_C");
		return ptr;
	}

}


