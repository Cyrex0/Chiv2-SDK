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
	 * 		Name   -> Function StageCinematicsComponent.StageCinematicsComponent_C.Init From Properties
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStandardStageCinematicProperties           Properties                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UStageCinematicsComponent_C::Init_From_Properties(const struct FStandardStageCinematicProperties& Properties)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StageCinematicsComponent.StageCinematicsComponent_C.Init From Properties");
		
		UStageCinematicsComponent_C_Init_From_Properties_Params params {};
		params.Properties = Properties;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStageCinematicsComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStageCinematicsComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StageCinematicsComponent.StageCinematicsComponent_C");
		return ptr;
	}

}


