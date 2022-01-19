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
	 * 		Name   -> Function FrontendTBLPlayerController.FrontendTBLPlayerController_C.GetSpectatorPawnSpawnTransform
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FTransform AFrontendTBLPlayerController_C::GetSpectatorPawnSpawnTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTBLPlayerController.FrontendTBLPlayerController_C.GetSpectatorPawnSpawnTransform");
		
		AFrontendTBLPlayerController_C_GetSpectatorPawnSpawnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendTBLPlayerController.FrontendTBLPlayerController_C.ExecuteUbergraph_FrontendTBLPlayerController
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontendTBLPlayerController_C::ExecuteUbergraph_FrontendTBLPlayerController(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendTBLPlayerController.FrontendTBLPlayerController_C.ExecuteUbergraph_FrontendTBLPlayerController");
		
		AFrontendTBLPlayerController_C_ExecuteUbergraph_FrontendTBLPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFrontendTBLPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrontendTBLPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontendTBLPlayerController.FrontendTBLPlayerController_C");
		return ptr;
	}

}


