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
	 * 		Name   -> Function WeaponCrossbowProgression.WeaponCrossbowProgression_C.OnAssemble_WeaponCrossbowProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponCrossbowProgression_C::OnAssemble_WeaponCrossbowProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCrossbowProgression.WeaponCrossbowProgression_C.OnAssemble_WeaponCrossbowProgression");
		
		UWeaponCrossbowProgression_C_OnAssemble_WeaponCrossbowProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponCrossbowProgression.WeaponCrossbowProgression_C.ExecuteUbergraph_WeaponCrossbowProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCrossbowProgression_C::ExecuteUbergraph_WeaponCrossbowProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCrossbowProgression.WeaponCrossbowProgression_C.ExecuteUbergraph_WeaponCrossbowProgression");
		
		UWeaponCrossbowProgression_C_ExecuteUbergraph_WeaponCrossbowProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponCrossbowProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponCrossbowProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponCrossbowProgression.WeaponCrossbowProgression_C");
		return ptr;
	}

}


