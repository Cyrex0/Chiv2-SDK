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
	 * 		Name   -> Function GrantVictoryToPlayer_MostKills.GrantVictoryToPlayer_MostKills_C.StartStage
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGrantVictoryToPlayer_MostKills_C::StartStage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer_MostKills.GrantVictoryToPlayer_MostKills_C.StartStage");
		
		UGrantVictoryToPlayer_MostKills_C_StartStage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GrantVictoryToPlayer_MostKills.GrantVictoryToPlayer_MostKills_C.ExecuteUbergraph_GrantVictoryToPlayer_MostKills
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGrantVictoryToPlayer_MostKills_C::ExecuteUbergraph_GrantVictoryToPlayer_MostKills(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GrantVictoryToPlayer_MostKills.GrantVictoryToPlayer_MostKills_C.ExecuteUbergraph_GrantVictoryToPlayer_MostKills");
		
		UGrantVictoryToPlayer_MostKills_C_ExecuteUbergraph_GrantVictoryToPlayer_MostKills_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGrantVictoryToPlayer_MostKills_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGrantVictoryToPlayer_MostKills_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GrantVictoryToPlayer_MostKills.GrantVictoryToPlayer_MostKills_C");
		return ptr;
	}

}


