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
	 * 		Name   -> Function AbilitiesConfig.AbilitiesConfig_C.OnAssemble_AbilitiesConfig
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAbilitiesConfig_C::OnAssemble_AbilitiesConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilitiesConfig.AbilitiesConfig_C.OnAssemble_AbilitiesConfig");
		
		UAbilitiesConfig_C_OnAssemble_AbilitiesConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AbilitiesConfig.AbilitiesConfig_C.ExecuteUbergraph_AbilitiesConfig
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAbilitiesConfig_C::ExecuteUbergraph_AbilitiesConfig(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AbilitiesConfig.AbilitiesConfig_C.ExecuteUbergraph_AbilitiesConfig");
		
		UAbilitiesConfig_C_ExecuteUbergraph_AbilitiesConfig_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAbilitiesConfig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAbilitiesConfig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AbilitiesConfig.AbilitiesConfig_C");
		return ptr;
	}

}


