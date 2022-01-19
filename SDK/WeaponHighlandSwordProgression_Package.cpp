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
	 * 		Name   -> Function WeaponHighlandSwordProgression.WeaponHighlandSwordProgression_C.OnAssemble_WeaponHighlandSwordProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponHighlandSwordProgression_C::OnAssemble_WeaponHighlandSwordProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponHighlandSwordProgression.WeaponHighlandSwordProgression_C.OnAssemble_WeaponHighlandSwordProgression");
		
		UWeaponHighlandSwordProgression_C_OnAssemble_WeaponHighlandSwordProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponHighlandSwordProgression.WeaponHighlandSwordProgression_C.ExecuteUbergraph_WeaponHighlandSwordProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponHighlandSwordProgression_C::ExecuteUbergraph_WeaponHighlandSwordProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponHighlandSwordProgression.WeaponHighlandSwordProgression_C.ExecuteUbergraph_WeaponHighlandSwordProgression");
		
		UWeaponHighlandSwordProgression_C_ExecuteUbergraph_WeaponHighlandSwordProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponHighlandSwordProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponHighlandSwordProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponHighlandSwordProgression.WeaponHighlandSwordProgression_C");
		return ptr;
	}

}


