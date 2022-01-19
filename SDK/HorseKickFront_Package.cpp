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
	 * 		Name   -> Function HorseKickFront.HorseKickFront_C.OnAssemble_HorseKickFront
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHorseKickFront_C::OnAssemble_HorseKickFront()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseKickFront.HorseKickFront_C.OnAssemble_HorseKickFront");
		
		UHorseKickFront_C_OnAssemble_HorseKickFront_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseKickFront.HorseKickFront_C.ExecuteUbergraph_HorseKickFront
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHorseKickFront_C::ExecuteUbergraph_HorseKickFront(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseKickFront.HorseKickFront_C.ExecuteUbergraph_HorseKickFront");
		
		UHorseKickFront_C_ExecuteUbergraph_HorseKickFront_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseKickFront_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseKickFront_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseKickFront.HorseKickFront_C");
		return ptr;
	}

}


