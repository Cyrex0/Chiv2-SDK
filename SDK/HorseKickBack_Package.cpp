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
	 * 		Name   -> Function HorseKickBack.HorseKickBack_C.OnAssemble_HorseKickBack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHorseKickBack_C::OnAssemble_HorseKickBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseKickBack.HorseKickBack_C.OnAssemble_HorseKickBack");
		
		UHorseKickBack_C_OnAssemble_HorseKickBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HorseKickBack.HorseKickBack_C.ExecuteUbergraph_HorseKickBack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHorseKickBack_C::ExecuteUbergraph_HorseKickBack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HorseKickBack.HorseKickBack_C.ExecuteUbergraph_HorseKickBack");
		
		UHorseKickBack_C_ExecuteUbergraph_HorseKickBack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHorseKickBack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHorseKickBack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HorseKickBack.HorseKickBack_C");
		return ptr;
	}

}


