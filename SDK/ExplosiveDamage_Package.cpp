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
	 * 		Name   -> Function ExplosiveDamage.ExplosiveDamage_C.OnAssemble_ExplosiveDamage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UExplosiveDamage_C::OnAssemble_ExplosiveDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosiveDamage.ExplosiveDamage_C.OnAssemble_ExplosiveDamage");
		
		UExplosiveDamage_C_OnAssemble_ExplosiveDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ExplosiveDamage.ExplosiveDamage_C.ExecuteUbergraph_ExplosiveDamage
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UExplosiveDamage_C::ExecuteUbergraph_ExplosiveDamage(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExplosiveDamage.ExplosiveDamage_C.ExecuteUbergraph_ExplosiveDamage");
		
		UExplosiveDamage_C_ExecuteUbergraph_ExplosiveDamage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UExplosiveDamage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExplosiveDamage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ExplosiveDamage.ExplosiveDamage_C");
		return ptr;
	}

}


