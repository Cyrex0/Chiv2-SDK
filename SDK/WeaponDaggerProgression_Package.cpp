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
	 * 		Name   -> Function WeaponDaggerProgression.WeaponDaggerProgression_C.OnAssemble_WeaponDaggerProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponDaggerProgression_C::OnAssemble_WeaponDaggerProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDaggerProgression.WeaponDaggerProgression_C.OnAssemble_WeaponDaggerProgression");
		
		UWeaponDaggerProgression_C_OnAssemble_WeaponDaggerProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponDaggerProgression.WeaponDaggerProgression_C.ExecuteUbergraph_WeaponDaggerProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponDaggerProgression_C::ExecuteUbergraph_WeaponDaggerProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponDaggerProgression.WeaponDaggerProgression_C.ExecuteUbergraph_WeaponDaggerProgression");
		
		UWeaponDaggerProgression_C_ExecuteUbergraph_WeaponDaggerProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponDaggerProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponDaggerProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponDaggerProgression.WeaponDaggerProgression_C");
		return ptr;
	}

}


