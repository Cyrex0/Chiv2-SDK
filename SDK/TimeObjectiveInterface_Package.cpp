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
	 * 		Name   -> Function TimeObjectiveInterface.TimeObjectiveInterface_C.GetTimeRemaining
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeSeconds                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveInterface_C::GetTimeRemaining(float* TimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveInterface.TimeObjectiveInterface_C.GetTimeRemaining");
		
		UTimeObjectiveInterface_C_GetTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeSeconds != nullptr)
			*TimeSeconds = params.TimeSeconds;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTimeObjectiveInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeObjectiveInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TimeObjectiveInterface.TimeObjectiveInterface_C");
		return ptr;
	}

}


