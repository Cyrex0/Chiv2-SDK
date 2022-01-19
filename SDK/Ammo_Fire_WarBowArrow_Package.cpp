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
	 * 		Name   -> Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAmmo_Fire_WarBowArrow_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.ReceiveBeginPlay");
		
		AAmmo_Fire_WarBowArrow_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.OnMovementFinished_Event_FireArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_Fire_WarBowArrow_C::OnMovementFinished_Event_FireArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.OnMovementFinished_Event_FireArrow");
		
		AAmmo_Fire_WarBowArrow_C_OnMovementFinished_Event_FireArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.FireArrow_AssignProjectileEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_Fire_WarBowArrow_C::FireArrow_AssignProjectileEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.FireArrow_AssignProjectileEvents");
		
		AAmmo_Fire_WarBowArrow_C_FireArrow_AssignProjectileEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.ExecuteUbergraph_Ammo_Fire_WarBowArrow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAmmo_Fire_WarBowArrow_C::ExecuteUbergraph_Ammo_Fire_WarBowArrow(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C.ExecuteUbergraph_Ammo_Fire_WarBowArrow");
		
		AAmmo_Fire_WarBowArrow_C_ExecuteUbergraph_Ammo_Fire_WarBowArrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAmmo_Fire_WarBowArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmmo_Fire_WarBowArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ammo_Fire_WarBowArrow.Ammo_Fire_WarBowArrow_C");
		return ptr;
	}

}


