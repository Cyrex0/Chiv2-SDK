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
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.GetPreparingMatchTimeThreshold
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MinTimeThreshold                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::GetPreparingMatchTimeThreshold(float* MinTimeThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.GetPreparingMatchTimeThreshold");
		
		UBaseCinematicState_C_GetPreparingMatchTimeThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinTimeThreshold != nullptr)
			*MinTimeThreshold = params.MinTimeThreshold;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from GameState
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTag                                Tag                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::Get_Cinematic_State_from_GameState(struct FGameplayTag* Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from GameState");
		
		UBaseCinematicState_C_Get_Cinematic_State_from_GameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tag != nullptr)
			*Tag = params.Tag;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from Match State
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTag                                State                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::Get_Cinematic_State_from_Match_State(struct FGameplayTag* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.Get Cinematic State from Match State");
		
		UBaseCinematicState_C_Get_Cinematic_State_from_Match_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.HandleGoingToSpawnAtSpawner
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::HandleGoingToSpawnAtSpawner(class ASpawner* Spawner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.HandleGoingToSpawnAtSpawner");
		
		UBaseCinematicState_C_HandleGoingToSpawnAtSpawner_Params params {};
		params.Spawner = Spawner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.HandleMatchStateChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MatchState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::HandleMatchStateChanged(const class FName& MatchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.HandleMatchStateChanged");
		
		UBaseCinematicState_C_HandleMatchStateChanged_Params params {};
		params.MatchState = MatchState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.HandleGameCinematicStateChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_ECinematicGameState                            GameStateCinematicState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::HandleGameCinematicStateChanged(TBL_ECinematicGameState GameStateCinematicState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.HandleGameCinematicStateChanged");
		
		UBaseCinematicState_C_HandleGameCinematicStateChanged_Params params {};
		params.GameStateCinematicState = GameStateCinematicState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.HandlePossessedPawn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::HandlePossessedPawn(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.HandlePossessedPawn");
		
		UBaseCinematicState_C_HandlePossessedPawn_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.HandleTeamChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::HandleTeamChanged(class ATBLTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.HandleTeamChanged");
		
		UBaseCinematicState_C_HandleTeamChanged_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.HandleSuicideNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EKillReason                                    KillReason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::HandleSuicideNotify(TBL_EKillReason KillReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.HandleSuicideNotify");
		
		UBaseCinematicState_C_HandleSuicideNotify_Params params {};
		params.KillReason = KillReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.HandleNextSpawnWaveChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::HandleNextSpawnWaveChanged(class ASpawnWave* SpawnWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.HandleNextSpawnWaveChanged");
		
		UBaseCinematicState_C_HandleNextSpawnWaveChanged_Params params {};
		params.SpawnWave = SpawnWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCinematicState.BaseCinematicState_C.ExecuteUbergraph_BaseCinematicState
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseCinematicState_C::ExecuteUbergraph_BaseCinematicState(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCinematicState.BaseCinematicState_C.ExecuteUbergraph_BaseCinematicState");
		
		UBaseCinematicState_C_ExecuteUbergraph_BaseCinematicState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseCinematicState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCinematicState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseCinematicState.BaseCinematicState_C");
		return ptr;
	}

}


