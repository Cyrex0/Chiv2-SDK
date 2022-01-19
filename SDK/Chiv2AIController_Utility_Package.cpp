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
	 * 		Name   -> Function Chiv2AIController_Utility.Chiv2AIController_Utility_C.ReceivePossess
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChiv2AIController_Utility_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chiv2AIController_Utility.Chiv2AIController_Utility_C.ReceivePossess");
		
		AChiv2AIController_Utility_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Chiv2AIController_Utility.Chiv2AIController_Utility_C.ExecuteUbergraph_Chiv2AIController_Utility
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChiv2AIController_Utility_C::ExecuteUbergraph_Chiv2AIController_Utility(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chiv2AIController_Utility.Chiv2AIController_Utility_C.ExecuteUbergraph_Chiv2AIController_Utility");
		
		AChiv2AIController_Utility_C_ExecuteUbergraph_Chiv2AIController_Utility_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChiv2AIController_Utility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChiv2AIController_Utility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Chiv2AIController_Utility.Chiv2AIController_Utility_C");
		return ptr;
	}

}


