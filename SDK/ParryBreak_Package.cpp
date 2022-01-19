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
	 * 		Name   -> Function ParryBreak.ParryBreak_C.CanSwitchInventoryItems
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool UParryBreak_C::CanSwitchInventoryItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.CanSwitchInventoryItems");
		
		UParryBreak_C_CanSwitchInventoryItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.OnAssemble_ParryBreak
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UParryBreak_C::OnAssemble_ParryBreak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.OnAssemble_ParryBreak");
		
		UParryBreak_C_OnAssemble_ParryBreak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.EventBeginState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PreviousStateTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AnimationLength                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UParryBreak_C::EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.EventBeginState");
		
		UParryBreak_C_EventBeginState_Params params {};
		params.PreviousState = PreviousState;
		params.PreviousStateTime = PreviousStateTime;
		params.AnimationLength = AnimationLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.EventBeginFire
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AttackName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHeldQueue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UParryBreak_C::EventBeginFire(const class FName& AttackName, bool bHeldQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.EventBeginFire");
		
		UParryBreak_C_EventBeginFire_Params params {};
		params.AttackName = AttackName;
		params.bHeldQueue = bHeldQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.ParryBreakStamina
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UParryBreak_C::ParryBreakStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.ParryBreakStamina");
		
		UParryBreak_C_ParryBreakStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.SoftRecovery
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UParryBreak_C::SoftRecovery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.SoftRecovery");
		
		UParryBreak_C_SoftRecovery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.DashOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UParryBreak_C::DashOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.DashOut");
		
		UParryBreak_C_DashOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.TryStartAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UParryBreak_C::TryStartAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.TryStartAttack");
		
		UParryBreak_C_TryStartAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.OnStartEquip
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UParryBreak_C::OnStartEquip(class AInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.OnStartEquip");
		
		UParryBreak_C_OnStartEquip_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.PlayEquipTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UParryBreak_C::PlayEquipTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.PlayEquipTimer");
		
		UParryBreak_C_PlayEquipTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.EventEndState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NextState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bStartAttack                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UParryBreak_C::EventEndState(const class FName& NextState, bool bStartAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.EventEndState");
		
		UParryBreak_C_EventEndState_Params params {};
		params.NextState = NextState;
		params.bStartAttack = bStartAttack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.JabOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UParryBreak_C::JabOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.JabOut");
		
		UParryBreak_C_JabOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ParryBreak.ParryBreak_C.ExecuteUbergraph_ParryBreak
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UParryBreak_C::ExecuteUbergraph_ParryBreak(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ParryBreak.ParryBreak_C.ExecuteUbergraph_ParryBreak");
		
		UParryBreak_C_ExecuteUbergraph_ParryBreak_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UParryBreak_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UParryBreak_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ParryBreak.ParryBreak_C");
		return ptr;
	}

}


