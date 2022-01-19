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
	 * 		Name   -> Function PillageDamage.PillageDamage_C.OnAssemble_PillageDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPillageDamage_C::OnAssemble_PillageDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PillageDamage.PillageDamage_C.OnAssemble_PillageDamage");
		
		UPillageDamage_C_OnAssemble_PillageDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PillageDamage.PillageDamage_C.ExecuteUbergraph_PillageDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPillageDamage_C::ExecuteUbergraph_PillageDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PillageDamage.PillageDamage_C.ExecuteUbergraph_PillageDamage");
		
		UPillageDamage_C_ExecuteUbergraph_PillageDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPillageDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPillageDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PillageDamage.PillageDamage_C");
		return ptr;
	}

}


