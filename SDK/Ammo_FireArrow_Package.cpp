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
	 * 		Name   -> Function Ammo_FireArrow.Ammo_FireArrow_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_FireArrow_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_FireArrow.Ammo_FireArrow_C.UserConstructionScript");
		
		AAmmo_FireArrow_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_FireArrow.Ammo_FireArrow_C.OnMovementFinished_Event_FireArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_FireArrow_C::OnMovementFinished_Event_FireArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_FireArrow.Ammo_FireArrow_C.OnMovementFinished_Event_FireArrow");
		
		AAmmo_FireArrow_C_OnMovementFinished_Event_FireArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_FireArrow.Ammo_FireArrow_C.FireArrow_AssignProjectileEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_FireArrow_C::FireArrow_AssignProjectileEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_FireArrow.Ammo_FireArrow_C.FireArrow_AssignProjectileEvents");
		
		AAmmo_FireArrow_C_FireArrow_AssignProjectileEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_FireArrow.Ammo_FireArrow_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAmmo_FireArrow_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_FireArrow.Ammo_FireArrow_C.ReceiveBeginPlay");
		
		AAmmo_FireArrow_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_FireArrow.Ammo_FireArrow_C.ExecuteUbergraph_Ammo_FireArrow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAmmo_FireArrow_C::ExecuteUbergraph_Ammo_FireArrow(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_FireArrow.Ammo_FireArrow_C.ExecuteUbergraph_Ammo_FireArrow");
		
		AAmmo_FireArrow_C_ExecuteUbergraph_Ammo_FireArrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAmmo_FireArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmmo_FireArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ammo_FireArrow.Ammo_FireArrow_C");
		return ptr;
	}

}


