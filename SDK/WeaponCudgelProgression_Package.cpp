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
	 * 		Name   -> Function WeaponCudgelProgression.WeaponCudgelProgression_C.OnAssemble_WeaponCudgelProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponCudgelProgression_C::OnAssemble_WeaponCudgelProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCudgelProgression.WeaponCudgelProgression_C.OnAssemble_WeaponCudgelProgression");
		
		UWeaponCudgelProgression_C_OnAssemble_WeaponCudgelProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponCudgelProgression.WeaponCudgelProgression_C.ExecuteUbergraph_WeaponCudgelProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCudgelProgression_C::ExecuteUbergraph_WeaponCudgelProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCudgelProgression.WeaponCudgelProgression_C.ExecuteUbergraph_WeaponCudgelProgression");
		
		UWeaponCudgelProgression_C_ExecuteUbergraph_WeaponCudgelProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponCudgelProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponCudgelProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponCudgelProgression.WeaponCudgelProgression_C");
		return ptr;
	}

}


