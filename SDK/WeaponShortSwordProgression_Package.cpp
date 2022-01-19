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
	 * 		Name   -> Function WeaponShortSwordProgression.WeaponShortSwordProgression_C.OnAssemble_WeaponShortSwordProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponShortSwordProgression_C::OnAssemble_WeaponShortSwordProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponShortSwordProgression.WeaponShortSwordProgression_C.OnAssemble_WeaponShortSwordProgression");
		
		UWeaponShortSwordProgression_C_OnAssemble_WeaponShortSwordProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponShortSwordProgression.WeaponShortSwordProgression_C.ExecuteUbergraph_WeaponShortSwordProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponShortSwordProgression_C::ExecuteUbergraph_WeaponShortSwordProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponShortSwordProgression.WeaponShortSwordProgression_C.ExecuteUbergraph_WeaponShortSwordProgression");
		
		UWeaponShortSwordProgression_C_ExecuteUbergraph_WeaponShortSwordProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponShortSwordProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponShortSwordProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponShortSwordProgression.WeaponShortSwordProgression_C");
		return ptr;
	}

}


