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
	 * 		Name   -> Function ArcherProgression.ArcherProgression_C.OnAssemble_ArcherProgression
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UArcherProgression_C::OnAssemble_ArcherProgression()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcherProgression.ArcherProgression_C.OnAssemble_ArcherProgression");
		
		UArcherProgression_C_OnAssemble_ArcherProgression_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ArcherProgression.ArcherProgression_C.ExecuteUbergraph_ArcherProgression
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UArcherProgression_C::ExecuteUbergraph_ArcherProgression(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcherProgression.ArcherProgression_C.ExecuteUbergraph_ArcherProgression");
		
		UArcherProgression_C_ExecuteUbergraph_ArcherProgression_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UArcherProgression_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcherProgression_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArcherProgression.ArcherProgression_C");
		return ptr;
	}

}


