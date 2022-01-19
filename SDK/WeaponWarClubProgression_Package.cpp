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
	 * 		Name   -> Function WeaponWarClubProgression.WeaponWarClubProgression_C.OnAssemble_WeaponWarClubProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWeaponWarClubProgression_C::OnAssemble_WeaponWarClubProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWarClubProgression.WeaponWarClubProgression_C.OnAssemble_WeaponWarClubProgression");
		
		UWeaponWarClubProgression_C_OnAssemble_WeaponWarClubProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponWarClubProgression.WeaponWarClubProgression_C.ExecuteUbergraph_WeaponWarClubProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponWarClubProgression_C::ExecuteUbergraph_WeaponWarClubProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponWarClubProgression.WeaponWarClubProgression_C.ExecuteUbergraph_WeaponWarClubProgression");
		
		UWeaponWarClubProgression_C_ExecuteUbergraph_WeaponWarClubProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponWarClubProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponWarClubProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeaponWarClubProgression.WeaponWarClubProgression_C");
		return ptr;
	}

}


