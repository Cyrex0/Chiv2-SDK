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
	 * 		Name   -> Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Get Relevant Overview Sequence
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ALevelSequenceActor*                         Sequence                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACinematicTBLSpectatorPawn_C::Get_Relevant_Overview_Sequence(class ALevelSequenceActor** Sequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Get Relevant Overview Sequence");
		
		ACinematicTBLSpectatorPawn_C_Get_Relevant_Overview_Sequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sequence != nullptr)
			*Sequence = params.Sequence;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACinematicTBLSpectatorPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveBeginPlay");
		
		ACinematicTBLSpectatorPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACinematicTBLSpectatorPawn_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveDestroyed");
		
		ACinematicTBLSpectatorPawn_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Start the overview sequence
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACinematicTBLSpectatorPawn_C::Start_the_overview_sequence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Start the overview sequence");
		
		ACinematicTBLSpectatorPawn_C_Start_the_overview_sequence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACinematicTBLSpectatorPawn_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveUnpossessed");
		
		ACinematicTBLSpectatorPawn_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Current Stage Changed_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Previous_Stage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     New_Stage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACinematicTBLSpectatorPawn_C::Current_Stage_Changed_Event_1(class UObject* Previous_Stage, class UObject* New_Stage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Current Stage Changed_Event_1");
		
		ACinematicTBLSpectatorPawn_C_Current_Stage_Changed_Event_1_Params params {};
		params.Previous_Stage = Previous_Stage;
		params.New_Stage = New_Stage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACinematicTBLSpectatorPawn_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceivePossessed");
		
		ACinematicTBLSpectatorPawn_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.SpawnWaveReplicated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACinematicTBLSpectatorPawn_C::SpawnWaveReplicated(class ASpawnWave* SpawnWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.SpawnWaveReplicated");
		
		ACinematicTBLSpectatorPawn_C_SpawnWaveReplicated_Params params {};
		params.SpawnWave = SpawnWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ExecuteUbergraph_CinematicTBLSpectatorPawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACinematicTBLSpectatorPawn_C::ExecuteUbergraph_CinematicTBLSpectatorPawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ExecuteUbergraph_CinematicTBLSpectatorPawn");
		
		ACinematicTBLSpectatorPawn_C_ExecuteUbergraph_CinematicTBLSpectatorPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACinematicTBLSpectatorPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACinematicTBLSpectatorPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C");
		return ptr;
	}

}


