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
	 * 		Name   -> Function CatapultAttack.CatapultAttack_C.OnAssemble_CatapultAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCatapultAttack_C::OnAssemble_CatapultAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CatapultAttack.CatapultAttack_C.OnAssemble_CatapultAttack");
		
		UCatapultAttack_C_OnAssemble_CatapultAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CatapultAttack.CatapultAttack_C.ExecuteUbergraph_CatapultAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCatapultAttack_C::ExecuteUbergraph_CatapultAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CatapultAttack.CatapultAttack_C.ExecuteUbergraph_CatapultAttack");
		
		UCatapultAttack_C_ExecuteUbergraph_CatapultAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCatapultAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCatapultAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CatapultAttack.CatapultAttack_C");
		return ptr;
	}

}


