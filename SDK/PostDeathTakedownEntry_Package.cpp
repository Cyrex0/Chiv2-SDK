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
	 * 		Name   -> Function PostDeathTakedownEntry.PostDeathTakedownEntry_C.SetName
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPostDeathTakedownEntry_C::SetName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathTakedownEntry.PostDeathTakedownEntry_C.SetName");
		
		UPostDeathTakedownEntry_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathTakedownEntry.PostDeathTakedownEntry_C.ExecuteUbergraph_PostDeathTakedownEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathTakedownEntry_C::ExecuteUbergraph_PostDeathTakedownEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathTakedownEntry.PostDeathTakedownEntry_C.ExecuteUbergraph_PostDeathTakedownEntry");
		
		UPostDeathTakedownEntry_C_ExecuteUbergraph_PostDeathTakedownEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPostDeathTakedownEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostDeathTakedownEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PostDeathTakedownEntry.PostDeathTakedownEntry_C");
		return ptr;
	}

}


