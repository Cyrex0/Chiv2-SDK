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
	 * 		Name   -> Function WeaponMesserProgression.WeaponMesserProgression_C.OnAssemble_WeaponMesserProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponMesserProgression_C::OnAssemble_WeaponMesserProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponMesserProgression.WeaponMesserProgression_C.OnAssemble_WeaponMesserProgression");
		
		UWeaponMesserProgression_C_OnAssemble_WeaponMesserProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponMesserProgression.WeaponMesserProgression_C.ExecuteUbergraph_WeaponMesserProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponMesserProgression_C::ExecuteUbergraph_WeaponMesserProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponMesserProgression.WeaponMesserProgression_C.ExecuteUbergraph_WeaponMesserProgression");
		
		UWeaponMesserProgression_C_ExecuteUbergraph_WeaponMesserProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponMesserProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponMesserProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponMesserProgression.WeaponMesserProgression_C");
		return ptr;
	}

}


