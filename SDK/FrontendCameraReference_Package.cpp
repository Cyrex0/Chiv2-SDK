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
	 * 		Name   -> Function FrontendCameraReference.FrontendCameraReference_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFrontendCameraReference_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendCameraReference.FrontendCameraReference_C.UserConstructionScript");
		
		AFrontendCameraReference_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendCameraReference.FrontendCameraReference_C.Focused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontendCameraReference_C::Focused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendCameraReference.FrontendCameraReference_C.Focused");
		
		AFrontendCameraReference_C_Focused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendCameraReference.FrontendCameraReference_C.Unfocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFrontendCameraReference_C::Unfocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendCameraReference.FrontendCameraReference_C.Unfocused");
		
		AFrontendCameraReference_C_Unfocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendCameraReference.FrontendCameraReference_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontendCameraReference_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendCameraReference.FrontendCameraReference_C.ReceiveTick");
		
		AFrontendCameraReference_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FrontendCameraReference.FrontendCameraReference_C.ExecuteUbergraph_FrontendCameraReference
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFrontendCameraReference_C::ExecuteUbergraph_FrontendCameraReference(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FrontendCameraReference.FrontendCameraReference_C.ExecuteUbergraph_FrontendCameraReference");
		
		AFrontendCameraReference_C_ExecuteUbergraph_FrontendCameraReference_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFrontendCameraReference_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFrontendCameraReference_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FrontendCameraReference.FrontendCameraReference_C");
		return ptr;
	}

}


