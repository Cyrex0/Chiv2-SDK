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
	 * 		Name   -> Function DownedSprint.DownedSprint_C.OnAssemble_DownedSprint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDownedSprint_C::OnAssemble_DownedSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DownedSprint.DownedSprint_C.OnAssemble_DownedSprint");
		
		UDownedSprint_C_OnAssemble_DownedSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DownedSprint.DownedSprint_C.EventBeginFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHeldQueue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDownedSprint_C::EventBeginFire(const class FName& AttackName, bool bHeldQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DownedSprint.DownedSprint_C.EventBeginFire");
		
		UDownedSprint_C_EventBeginFire_Params params {};
		params.AttackName = AttackName;
		params.bHeldQueue = bHeldQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function DownedSprint.DownedSprint_C.ExecuteUbergraph_DownedSprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDownedSprint_C::ExecuteUbergraph_DownedSprint(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DownedSprint.DownedSprint_C.ExecuteUbergraph_DownedSprint");
		
		UDownedSprint_C_ExecuteUbergraph_DownedSprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDownedSprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownedSprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DownedSprint.DownedSprint_C");
		return ptr;
	}

}


