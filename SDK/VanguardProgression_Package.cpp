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
	 * 		Name   -> Function VanguardProgression.VanguardProgression_C.OnAssemble_VanguardProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVanguardProgression_C::OnAssemble_VanguardProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VanguardProgression.VanguardProgression_C.OnAssemble_VanguardProgression");
		
		UVanguardProgression_C_OnAssemble_VanguardProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VanguardProgression.VanguardProgression_C.ExecuteUbergraph_VanguardProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVanguardProgression_C::ExecuteUbergraph_VanguardProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VanguardProgression.VanguardProgression_C.ExecuteUbergraph_VanguardProgression");
		
		UVanguardProgression_C_ExecuteUbergraph_VanguardProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVanguardProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVanguardProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VanguardProgression.VanguardProgression_C");
		return ptr;
	}

}


