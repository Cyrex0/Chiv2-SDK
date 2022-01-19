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
	 * 		Name   -> Function DashJump.DashJump_C.OnAssemble_DashJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDashJump_C::OnAssemble_DashJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DashJump.DashJump_C.OnAssemble_DashJump");
		
		UDashJump_C_OnAssemble_DashJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DashJump.DashJump_C.ExecuteUbergraph_DashJump
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDashJump_C::ExecuteUbergraph_DashJump(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DashJump.DashJump_C.ExecuteUbergraph_DashJump");
		
		UDashJump_C_ExecuteUbergraph_DashJump_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDashJump_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDashJump_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DashJump.DashJump_C");
		return ptr;
	}

}


