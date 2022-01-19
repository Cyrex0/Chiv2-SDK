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
	 * 		Name   -> Function WeaponGreatswordProgression.WeaponGreatswordProgression_C.OnAssemble_WeaponGreatswordProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponGreatswordProgression_C::OnAssemble_WeaponGreatswordProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponGreatswordProgression.WeaponGreatswordProgression_C.OnAssemble_WeaponGreatswordProgression");
		
		UWeaponGreatswordProgression_C_OnAssemble_WeaponGreatswordProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponGreatswordProgression.WeaponGreatswordProgression_C.ExecuteUbergraph_WeaponGreatswordProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponGreatswordProgression_C::ExecuteUbergraph_WeaponGreatswordProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponGreatswordProgression.WeaponGreatswordProgression_C.ExecuteUbergraph_WeaponGreatswordProgression");
		
		UWeaponGreatswordProgression_C_ExecuteUbergraph_WeaponGreatswordProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponGreatswordProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponGreatswordProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponGreatswordProgression.WeaponGreatswordProgression_C");
		return ptr;
	}

}


