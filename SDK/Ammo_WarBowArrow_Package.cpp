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
	 * 		Name   -> Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_WarBowArrow_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.UserConstructionScript");
		
		AAmmo_WarBowArrow_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.OnMovementStarted_Event_Arrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_WarBowArrow_C::OnMovementStarted_Event_Arrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.OnMovementStarted_Event_Arrow");
		
		AAmmo_WarBowArrow_C_OnMovementStarted_Event_Arrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.OnMovementFinished_Event_Arrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_WarBowArrow_C::OnMovementFinished_Event_Arrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.OnMovementFinished_Event_Arrow");
		
		AAmmo_WarBowArrow_C_OnMovementFinished_Event_Arrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.StandardArrow_AssignProjectileEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_WarBowArrow_C::StandardArrow_AssignProjectileEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.StandardArrow_AssignProjectileEvents");
		
		AAmmo_WarBowArrow_C_StandardArrow_AssignProjectileEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.ExecuteUbergraph_Ammo_WarBowArrow
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAmmo_WarBowArrow_C::ExecuteUbergraph_Ammo_WarBowArrow(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_WarBowArrow.Ammo_WarBowArrow_C.ExecuteUbergraph_Ammo_WarBowArrow");
		
		AAmmo_WarBowArrow_C_ExecuteUbergraph_Ammo_WarBowArrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAmmo_WarBowArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmmo_WarBowArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ammo_WarBowArrow.Ammo_WarBowArrow_C");
		return ptr;
	}

}


