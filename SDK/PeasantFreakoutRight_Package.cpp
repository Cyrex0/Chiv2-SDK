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
	 * 		Name   -> Function PeasantFreakoutRight.PeasantFreakoutRight_C.OnAssemble_PeasantFreakoutRight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPeasantFreakoutRight_C::OnAssemble_PeasantFreakoutRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakoutRight.PeasantFreakoutRight_C.OnAssemble_PeasantFreakoutRight");
		
		UPeasantFreakoutRight_C_OnAssemble_PeasantFreakoutRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PeasantFreakoutRight.PeasantFreakoutRight_C.ExecuteUbergraph_PeasantFreakoutRight
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPeasantFreakoutRight_C::ExecuteUbergraph_PeasantFreakoutRight(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakoutRight.PeasantFreakoutRight_C.ExecuteUbergraph_PeasantFreakoutRight");
		
		UPeasantFreakoutRight_C_ExecuteUbergraph_PeasantFreakoutRight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPeasantFreakoutRight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPeasantFreakoutRight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PeasantFreakoutRight.PeasantFreakoutRight_C");
		return ptr;
	}

}


