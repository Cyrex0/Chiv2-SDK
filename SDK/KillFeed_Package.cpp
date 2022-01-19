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
	 * 		Name   -> Function KillFeed.KillFeed_C.IsFallDeath
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsFallDeath                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeed_C::IsFallDeath(const struct FDeathEvent& DeathEvent, bool* IsFallDeath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.IsFallDeath");
		
		UKillFeed_C_IsFallDeath_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFallDeath != nullptr)
			*IsFallDeath = params.IsFallDeath;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.ShouldDisplayObjectiveMessage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Display                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeed_C::ShouldDisplayObjectiveMessage(bool* Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.ShouldDisplayObjectiveMessage");
		
		UKillFeed_C_ShouldDisplayObjectiveMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Display != nullptr)
			*Display = params.Display;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.ShouldDisplayDeathEvent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Display                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeed_C::ShouldDisplayDeathEvent(const struct FDeathEvent& DeathEvent, bool* Display)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.ShouldDisplayDeathEvent");
		
		UKillFeed_C_ShouldDisplayDeathEvent_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Display != nullptr)
			*Display = params.Display;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.IsSiegeWeapon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsWeapon                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeed_C::IsSiegeWeapon(class AInventoryItem* Weapon, bool* IsWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.IsSiegeWeapon");
		
		UKillFeed_C_IsSiegeWeapon_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsWeapon != nullptr)
			*IsWeapon = params.IsWeapon;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.GetKillFeedModifiers
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TArray<KillfeedModifiers_EKillfeedModifiers>       Modifiers                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UKillFeed_C::GetKillFeedModifiers(const struct FDeathEvent& DeathEvent, TArray<KillfeedModifiers_EKillfeedModifiers>* Modifiers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.GetKillFeedModifiers");
		
		UKillFeed_C_GetKillFeedModifiers_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Modifiers != nullptr)
			*Modifiers = params.Modifiers;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.IsMyDeath
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsMyDeath                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeed_C::IsMyDeath(const struct FDeathEvent& DeathEvent, bool* IsMyDeath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.IsMyDeath");
		
		UKillFeed_C_IsMyDeath_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMyDeath != nullptr)
			*IsMyDeath = params.IsMyDeath;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.IsMyKill
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsMyKill                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeed_C::IsMyKill(const struct FDeathEvent& DeathEvent, bool* IsMyKill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.IsMyKill");
		
		UKillFeed_C_IsMyKill_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMyKill != nullptr)
			*IsMyKill = params.IsMyKill;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.IsTeamKill
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               TeamKill                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeed_C::IsTeamKill(const struct FDeathEvent& DeathEvent, bool* TeamKill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.IsTeamKill");
		
		UKillFeed_C_IsTeamKill_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamKill != nullptr)
			*TeamKill = params.TeamKill;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.GetKilledFaction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TBL_EFaction                                       Faction                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeed_C::GetKilledFaction(const struct FDeathEvent& DeathEvent, TBL_EFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.GetKilledFaction");
		
		UKillFeed_C_GetKilledFaction_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Faction != nullptr)
			*Faction = params.Faction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.GetKillFeedType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		KillfeedEntryType_EKillfeedEntryType               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeed_C::GetKillFeedType(const struct FDeathEvent& DeathEvent, KillfeedEntryType_EKillfeedEntryType* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.GetKillFeedType");
		
		UKillFeed_C_GetKillFeedType_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.IsSuicide
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsSuicide                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeed_C::IsSuicide(const struct FDeathEvent& DeathEvent, bool* IsSuicide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.IsSuicide");
		
		UKillFeed_C_IsSuicide_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSuicide != nullptr)
			*IsSuicide = params.IsSuicide;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UKillFeed_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.Construct");
		
		UKillFeed_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.GameModeMessageReceived_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameModeMessage                            Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKillFeed_C::GameModeMessageReceived_Event_1(const struct FGameModeMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.GameModeMessageReceived_Event_1");
		
		UKillFeed_C_GameModeMessageReceived_Event_1_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.CheckForCleanup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeed_C::CheckForCleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.CheckForCleanup");
		
		UKillFeed_C_CheckForCleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.OnPlayerKilled_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UKillFeed_C::OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.OnPlayerKilled_Event_1");
		
		UKillFeed_C_OnPlayerKilled_Event_1_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeed.KillFeed_C.ExecuteUbergraph_KillFeed
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeed_C::ExecuteUbergraph_KillFeed(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeed.KillFeed_C.ExecuteUbergraph_KillFeed");
		
		UKillFeed_C_ExecuteUbergraph_KillFeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKillFeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillFeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KillFeed.KillFeed_C");
		return ptr;
	}

}


