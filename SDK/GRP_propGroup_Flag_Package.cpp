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
	 * 		Name   -> Function GRP_propGroup_Flag.GRP_propGroup_Flag_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGRP_propGroup_Flag_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GRP_propGroup_Flag.GRP_propGroup_Flag_C.UserConstructionScript");
		
		AGRP_propGroup_Flag_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GRP_propGroup_Flag.GRP_propGroup_Flag_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AGRP_propGroup_Flag_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GRP_propGroup_Flag.GRP_propGroup_Flag_C.ReceiveBeginPlay");
		
		AGRP_propGroup_Flag_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GRP_propGroup_Flag.GRP_propGroup_Flag_C.ExecuteUbergraph_GRP_propGroup_Flag
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGRP_propGroup_Flag_C::ExecuteUbergraph_GRP_propGroup_Flag(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GRP_propGroup_Flag.GRP_propGroup_Flag_C.ExecuteUbergraph_GRP_propGroup_Flag");
		
		AGRP_propGroup_Flag_C_ExecuteUbergraph_GRP_propGroup_Flag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGRP_propGroup_Flag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGRP_propGroup_Flag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GRP_propGroup_Flag.GRP_propGroup_Flag_C");
		return ptr;
	}

}


