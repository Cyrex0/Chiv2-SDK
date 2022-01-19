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
	 * 		Name   -> Function PeasantFreakoutBack.PeasantFreakoutBack_C.OnAssemble_PeasantFreakoutBack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPeasantFreakoutBack_C::OnAssemble_PeasantFreakoutBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakoutBack.PeasantFreakoutBack_C.OnAssemble_PeasantFreakoutBack");
		
		UPeasantFreakoutBack_C_OnAssemble_PeasantFreakoutBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PeasantFreakoutBack.PeasantFreakoutBack_C.ExecuteUbergraph_PeasantFreakoutBack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPeasantFreakoutBack_C::ExecuteUbergraph_PeasantFreakoutBack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakoutBack.PeasantFreakoutBack_C.ExecuteUbergraph_PeasantFreakoutBack");
		
		UPeasantFreakoutBack_C_ExecuteUbergraph_PeasantFreakoutBack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPeasantFreakoutBack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPeasantFreakoutBack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PeasantFreakoutBack.PeasantFreakoutBack_C");
		return ptr;
	}

}


