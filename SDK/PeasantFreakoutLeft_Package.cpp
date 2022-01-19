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
	 * 		Name   -> Function PeasantFreakoutLeft.PeasantFreakoutLeft_C.OnAssemble_PeasantFreakoutLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPeasantFreakoutLeft_C::OnAssemble_PeasantFreakoutLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakoutLeft.PeasantFreakoutLeft_C.OnAssemble_PeasantFreakoutLeft");
		
		UPeasantFreakoutLeft_C_OnAssemble_PeasantFreakoutLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PeasantFreakoutLeft.PeasantFreakoutLeft_C.ExecuteUbergraph_PeasantFreakoutLeft
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPeasantFreakoutLeft_C::ExecuteUbergraph_PeasantFreakoutLeft(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PeasantFreakoutLeft.PeasantFreakoutLeft_C.ExecuteUbergraph_PeasantFreakoutLeft");
		
		UPeasantFreakoutLeft_C_ExecuteUbergraph_PeasantFreakoutLeft_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPeasantFreakoutLeft_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPeasantFreakoutLeft_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PeasantFreakoutLeft.PeasantFreakoutLeft_C");
		return ptr;
	}

}


