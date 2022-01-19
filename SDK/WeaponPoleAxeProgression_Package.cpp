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
	 * 		Name   -> Function WeaponPoleAxeProgression.WeaponPoleAxeProgression_C.OnAssemble_WeaponPoleAxeProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponPoleAxeProgression_C::OnAssemble_WeaponPoleAxeProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponPoleAxeProgression.WeaponPoleAxeProgression_C.OnAssemble_WeaponPoleAxeProgression");
		
		UWeaponPoleAxeProgression_C_OnAssemble_WeaponPoleAxeProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponPoleAxeProgression.WeaponPoleAxeProgression_C.ExecuteUbergraph_WeaponPoleAxeProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponPoleAxeProgression_C::ExecuteUbergraph_WeaponPoleAxeProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponPoleAxeProgression.WeaponPoleAxeProgression_C.ExecuteUbergraph_WeaponPoleAxeProgression");
		
		UWeaponPoleAxeProgression_C_ExecuteUbergraph_WeaponPoleAxeProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponPoleAxeProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponPoleAxeProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponPoleAxeProgression.WeaponPoleAxeProgression_C");
		return ptr;
	}

}


