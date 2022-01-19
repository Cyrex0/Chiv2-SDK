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
	 * 		Name   -> Function CarryableFoodComp.CarryableFoodComp_C.SendHealAnalyticsEvents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UCarryableFoodComp_C::SendHealAnalyticsEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CarryableFoodComp.CarryableFoodComp_C.SendHealAnalyticsEvents");
		
		UCarryableFoodComp_C_SendHealAnalyticsEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CarryableFoodComp.CarryableFoodComp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UCarryableFoodComp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CarryableFoodComp.CarryableFoodComp_C.ReceiveBeginPlay");
		
		UCarryableFoodComp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CarryableFoodComp.CarryableFoodComp_C.OnBattleCryTriggered_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCarryableFoodComp_C::OnBattleCryTriggered_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CarryableFoodComp.CarryableFoodComp_C.OnBattleCryTriggered_Event_1");
		
		UCarryableFoodComp_C_OnBattleCryTriggered_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CarryableFoodComp.CarryableFoodComp_C.OnAnimNotifyWeaponDetach_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTBLCharacterAnimInstance*                   AnimBP                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCarryableFoodComp_C::OnAnimNotifyWeaponDetach_Event_1(class UTBLCharacterAnimInstance* AnimBP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CarryableFoodComp.CarryableFoodComp_C.OnAnimNotifyWeaponDetach_Event_1");
		
		UCarryableFoodComp_C_OnAnimNotifyWeaponDetach_Event_1_Params params {};
		params.AnimBP = AnimBP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CarryableFoodComp.CarryableFoodComp_C.ExecuteUbergraph_CarryableFoodComp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCarryableFoodComp_C::ExecuteUbergraph_CarryableFoodComp(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CarryableFoodComp.CarryableFoodComp_C.ExecuteUbergraph_CarryableFoodComp");
		
		UCarryableFoodComp_C_ExecuteUbergraph_CarryableFoodComp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCarryableFoodComp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCarryableFoodComp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CarryableFoodComp.CarryableFoodComp_C");
		return ptr;
	}

}


