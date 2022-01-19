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
	 * 		Name   -> Function WeaponWarAxeProgression.WeaponWarAxeProgression_C.OnAssemble_WeaponWarAxeProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponWarAxeProgression_C::OnAssemble_WeaponWarAxeProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWarAxeProgression.WeaponWarAxeProgression_C.OnAssemble_WeaponWarAxeProgression");
		
		UWeaponWarAxeProgression_C_OnAssemble_WeaponWarAxeProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponWarAxeProgression.WeaponWarAxeProgression_C.ExecuteUbergraph_WeaponWarAxeProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponWarAxeProgression_C::ExecuteUbergraph_WeaponWarAxeProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWarAxeProgression.WeaponWarAxeProgression_C.ExecuteUbergraph_WeaponWarAxeProgression");
		
		UWeaponWarAxeProgression_C_ExecuteUbergraph_WeaponWarAxeProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponWarAxeProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponWarAxeProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponWarAxeProgression.WeaponWarAxeProgression_C");
		return ptr;
	}

}


