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
	 * 		Name   -> Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.PlayerSatisfiesCaptureRequirments
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ATBLCharacter*                               Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPlayerCarryableCapturePointComponent_C::PlayerSatisfiesCaptureRequirments(class ATBLCharacter* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.PlayerSatisfiesCaptureRequirments");
		
		UPlayerCarryableCapturePointComponent_C_PlayerSatisfiesCaptureRequirments_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.SetupCarryableEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Carryable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCarryableCapturePointComponent_C::SetupCarryableEvents(class AInventoryItem* Carryable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.SetupCarryableEvents");
		
		UPlayerCarryableCapturePointComponent_C_SetupCarryableEvents_Params params {};
		params.Carryable = Carryable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnDropped_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void UPlayerCarryableCapturePointComponent_C::OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnDropped_Event_1");
		
		UPlayerCarryableCapturePointComponent_C_OnDropped_Event_1_Params params {};
		params.Item = Item;
		params.Character = Character;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnEquipped_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCarryableCapturePointComponent_C::OnEquipped_Event_1(class AInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnEquipped_Event_1");
		
		UPlayerCarryableCapturePointComponent_C_OnEquipped_Event_1_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.ExecuteUbergraph_PlayerCarryableCapturePointComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerCarryableCapturePointComponent_C::ExecuteUbergraph_PlayerCarryableCapturePointComponent(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.ExecuteUbergraph_PlayerCarryableCapturePointComponent");
		
		UPlayerCarryableCapturePointComponent_C_ExecuteUbergraph_PlayerCarryableCapturePointComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerCarryableCapturePointComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerCarryableCapturePointComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C");
		return ptr;
	}

}


