﻿/**
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
	 * 		Name   -> Function AC_RiposteWithFeint.AC_RiposteWithFeint_C.PerformAction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FUtilityAI_Context                          C                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAC_RiposteWithFeint_C::PerformAction(const struct FUtilityAI_Context& C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_RiposteWithFeint.AC_RiposteWithFeint_C.PerformAction");
		
		UAC_RiposteWithFeint_C_PerformAction_Params params {};
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AC_RiposteWithFeint.AC_RiposteWithFeint_C.CompleteAction
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FUtilityAI_Context                          C                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UAC_RiposteWithFeint_C::CompleteAction(const struct FUtilityAI_Context& C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_RiposteWithFeint.AC_RiposteWithFeint_C.CompleteAction");
		
		UAC_RiposteWithFeint_C_CompleteAction_Params params {};
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function AC_RiposteWithFeint.AC_RiposteWithFeint_C.ExecuteUbergraph_AC_RiposteWithFeint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAC_RiposteWithFeint_C::ExecuteUbergraph_AC_RiposteWithFeint(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AC_RiposteWithFeint.AC_RiposteWithFeint_C.ExecuteUbergraph_AC_RiposteWithFeint");
		
		UAC_RiposteWithFeint_C_ExecuteUbergraph_AC_RiposteWithFeint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAC_RiposteWithFeint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAC_RiposteWithFeint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AC_RiposteWithFeint.AC_RiposteWithFeint_C");
		return ptr;
	}

}


