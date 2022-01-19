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
	 * 		Name   -> Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_CrossbowBolt_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.UserConstructionScript");
		
		AAmmo_CrossbowBolt_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.CrossbowBolt_AssignProjectileEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_CrossbowBolt_C::CrossbowBolt_AssignProjectileEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.CrossbowBolt_AssignProjectileEvents");
		
		AAmmo_CrossbowBolt_C_CrossbowBolt_AssignProjectileEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.OnMovementStarted_Event_Bolt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_CrossbowBolt_C::OnMovementStarted_Event_Bolt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.OnMovementStarted_Event_Bolt");
		
		AAmmo_CrossbowBolt_C_OnMovementStarted_Event_Bolt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.OnMovementFinished_Event_Bolt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmmo_CrossbowBolt_C::OnMovementFinished_Event_Bolt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.OnMovementFinished_Event_Bolt");
		
		AAmmo_CrossbowBolt_C_OnMovementFinished_Event_Bolt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.ExecuteUbergraph_Ammo_CrossbowBolt
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAmmo_CrossbowBolt_C::ExecuteUbergraph_Ammo_CrossbowBolt(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_CrossbowBolt.Ammo_CrossbowBolt_C.ExecuteUbergraph_Ammo_CrossbowBolt");
		
		AAmmo_CrossbowBolt_C_ExecuteUbergraph_Ammo_CrossbowBolt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAmmo_CrossbowBolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmmo_CrossbowBolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ammo_CrossbowBolt.Ammo_CrossbowBolt_C");
		return ptr;
	}

}


