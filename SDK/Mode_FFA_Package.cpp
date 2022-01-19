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
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.GetScorePercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AMode_FFA_C::GetScorePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.GetScorePercent");
		
		AMode_FFA_C_GetScorePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.ConfigureFFATimeoutStage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFFATimeoutStage_C*                          Stage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMode_FFA_C::ConfigureFFATimeoutStage(class AFFATimeoutStage_C* Stage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.ConfigureFFATimeoutStage");
		
		AMode_FFA_C_ConfigureFFATimeoutStage_Params params {};
		params.Stage = Stage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.Get First Stage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMode_FFA_C::Get_First_Stage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.Get First Stage");
		
		AMode_FFA_C_Get_First_Stage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMode_FFA_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.ReceiveBeginPlay");
		
		AMode_FFA_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.OnPlayerKilled_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 Killed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageSource*                               DamageSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FDeathDamageTakenEvent                      DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void AMode_FFA_C::OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.OnPlayerKilled_Event_1");
		
		AMode_FFA_C_OnPlayerKilled_Event_1_Params params {};
		params.Killer = Killer;
		params.Killed = Killed;
		params.DamageSource = DamageSource;
		params.DeathEvent = DeathEvent;
		params.DamageEvent = DamageEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.K2_HandleMatchHasStarted
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AMode_FFA_C::K2_HandleMatchHasStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.K2_HandleMatchHasStarted");
		
		AMode_FFA_C_K2_HandleMatchHasStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.UpdateDynamicMusic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMode_FFA_C::UpdateDynamicMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.UpdateDynamicMusic");
		
		AMode_FFA_C_UpdateDynamicMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.ExecuteUbergraph_Mode_FFA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMode_FFA_C::ExecuteUbergraph_Mode_FFA(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.ExecuteUbergraph_Mode_FFA");
		
		AMode_FFA_C_ExecuteUbergraph_Mode_FFA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.VictoryAwarded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMode_FFA_C::VictoryAwarded__DelegateSignature(class ATBLPlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.VictoryAwarded__DelegateSignature");
		
		AMode_FFA_C_VictoryAwarded__DelegateSignature_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Mode_FFA.Mode_FFA_C.KillLeaderUpdated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Kills                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                MaxScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMode_FFA_C::KillLeaderUpdated__DelegateSignature(class ATBLPlayerState* PlayerState, int Kills, int MaxScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mode_FFA.Mode_FFA_C.KillLeaderUpdated__DelegateSignature");
		
		AMode_FFA_C_KillLeaderUpdated__DelegateSignature_Params params {};
		params.PlayerState = PlayerState;
		params.Kills = Kills;
		params.MaxScore = MaxScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMode_FFA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMode_FFA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mode_FFA.Mode_FFA_C");
		return ptr;
	}

}


