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
	 * 		Name   -> Function HorseAttack.HorseAttack_C.OnAssemble_HorseAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHorseAttack_C::OnAssemble_HorseAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseAttack.HorseAttack_C.OnAssemble_HorseAttack");
		
		UHorseAttack_C_OnAssemble_HorseAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseAttack.HorseAttack_C.ExecuteUbergraph_HorseAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHorseAttack_C::ExecuteUbergraph_HorseAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseAttack.HorseAttack_C.ExecuteUbergraph_HorseAttack");
		
		UHorseAttack_C_ExecuteUbergraph_HorseAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseAttack.HorseAttack_C");
		return ptr;
	}

}


