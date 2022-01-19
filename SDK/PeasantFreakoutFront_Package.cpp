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
	 * 		Name   -> Function PeasantFreakoutFront.PeasantFreakoutFront_C.OnAssemble_PeasantFreakoutFront
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPeasantFreakoutFront_C::OnAssemble_PeasantFreakoutFront()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakoutFront.PeasantFreakoutFront_C.OnAssemble_PeasantFreakoutFront");
		
		UPeasantFreakoutFront_C_OnAssemble_PeasantFreakoutFront_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PeasantFreakoutFront.PeasantFreakoutFront_C.ExecuteUbergraph_PeasantFreakoutFront
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPeasantFreakoutFront_C::ExecuteUbergraph_PeasantFreakoutFront(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakoutFront.PeasantFreakoutFront_C.ExecuteUbergraph_PeasantFreakoutFront");
		
		UPeasantFreakoutFront_C_ExecuteUbergraph_PeasantFreakoutFront_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPeasantFreakoutFront_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPeasantFreakoutFront_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PeasantFreakoutFront.PeasantFreakoutFront_C");
		return ptr;
	}

}


