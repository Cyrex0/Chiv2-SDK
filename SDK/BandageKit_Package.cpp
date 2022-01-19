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
	 * 		Name   -> Function BandageKit.BandageKit_C.OnAssemble_BandageKit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBandageKit_C::OnAssemble_BandageKit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BandageKit.BandageKit_C.OnAssemble_BandageKit");
		
		UBandageKit_C_OnAssemble_BandageKit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BandageKit.BandageKit_C.ExecuteUbergraph_BandageKit
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBandageKit_C::ExecuteUbergraph_BandageKit(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BandageKit.BandageKit_C.ExecuteUbergraph_BandageKit");
		
		UBandageKit_C_ExecuteUbergraph_BandageKit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBandageKit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBandageKit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BandageKit.BandageKit_C");
		return ptr;
	}

}


