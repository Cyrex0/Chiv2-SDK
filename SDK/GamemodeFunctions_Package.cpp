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
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.ManuallyPlayCommanderMessages
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FGameModeMessageTable>               Messages                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_ManuallyPlayCommanderMessages(TArray<struct FGameModeMessageTable>* Messages, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.ManuallyPlayCommanderMessages");
		
		UGamemodeFunctions_C_ManuallyPlayCommanderMessages_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Messages != nullptr)
			*Messages = params.Messages;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.IsListenServer
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ContextObject                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGamemodeFunctions_C::STATIC_IsListenServer(class AActor* ContextObject, class UObject* __WorldContext, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.IsListenServer");
		
		UGamemodeFunctions_C_IsListenServer_Params params {};
		params.ContextObject = ContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.BroadcastTdmPrivateMessage
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TdmMessageTypes_ETdmMessageTypes                   TdmMessageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_BroadcastTdmPrivateMessage(TdmMessageTypes_ETdmMessageTypes TdmMessageType, int Value, class APlayerController* PlayerController, class UObject* Object, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.BroadcastTdmPrivateMessage");
		
		UGamemodeFunctions_C_BroadcastTdmPrivateMessage_Params params {};
		params.TdmMessageType = TdmMessageType;
		params.Value = Value;
		params.PlayerController = PlayerController;
		params.Object = Object;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.BroadcastTdmMessage
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TdmMessageTypes_ETdmMessageTypes                   TdmMessageType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_BroadcastTdmMessage(TdmMessageTypes_ETdmMessageTypes TdmMessageType, int Value, class UObject* WorldContextObject, class UObject* Object, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.BroadcastTdmMessage");
		
		UGamemodeFunctions_C_BroadcastTdmMessage_Params params {};
		params.TdmMessageType = TdmMessageType;
		params.Value = Value;
		params.WorldContextObject = WorldContextObject;
		params.Object = Object;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.BroadcastGameModeMessages
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FGameModeMessageTable>               Messages                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_BroadcastGameModeMessages(TArray<struct FGameModeMessageTable>* Messages, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.BroadcastGameModeMessages");
		
		UGamemodeFunctions_C_BroadcastGameModeMessages_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Messages != nullptr)
			*Messages = params.Messages;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Player With Most Kills Victory
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                StageIdNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Player_With_Most_Kills_Victory(TBL_EFaction Faction, int StageIdNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Player With Most Kills Victory");
		
		UGamemodeFunctions_C_Player_With_Most_Kills_Victory_Params params {};
		params.Faction = Faction;
		params.StageIdNum = StageIdNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Get Level Sequence from Asset Ptr (4.16 workaround, remove in 4.18)
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     World_Context_Object                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALevelSequenceActor*                         Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Get_Level_Sequence_from_Asset_Ptr__4_16_workaround_remove_in_4_18_(class UObject* World_Context_Object, class UObject* __WorldContext, class ALevelSequenceActor** Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Get Level Sequence from Asset Ptr (4.16 workaround, remove in 4.18)");
		
		UGamemodeFunctions_C_Get_Level_Sequence_from_Asset_Ptr__4_16_workaround_remove_in_4_18__Params params {};
		params.World_Context_Object = World_Context_Object;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Get Current Stage
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Stage                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Get_Current_Stage(class UObject* __WorldContext, class UObject** Stage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Get Current Stage");
		
		UGamemodeFunctions_C_Get_Current_Stage_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Stage != nullptr)
			*Stage = params.Stage;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawn with manual start (preferred)
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force_Spawning                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASpawnWave*                                  Wave                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Start_Initial_Spawn_with_manual_start__preferred_(class ASpawner* Spawner, TBL_EFaction Faction, bool Force_Spawning, class UObject* __WorldContext, class ASpawnWave** Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawn with manual start (preferred)");
		
		UGamemodeFunctions_C_Start_Initial_Spawn_with_manual_start__preferred__Params params {};
		params.Spawner = Spawner;
		params.Faction = Faction;
		params.Force_Spawning = Force_Spawning;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Wave != nullptr)
			*Wave = params.Wave;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Auto Start All Spawn Sequences Like TDM Does It
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Auto_Start_All_Spawn_Sequences_Like_TDM_Does_It(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Auto Start All Spawn Sequences Like TDM Does It");
		
		UGamemodeFunctions_C_Auto_Start_All_Spawn_Sequences_Like_TDM_Does_It_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Defenders Victory
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                StageIdNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Defenders_Victory(int StageIdNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Defenders Victory");
		
		UGamemodeFunctions_C_Defenders_Victory_Params params {};
		params.StageIdNum = StageIdNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Attackers Victory
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                StageIdNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Attackers_Victory(int StageIdNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Attackers Victory");
		
		UGamemodeFunctions_C_Attackers_Victory_Params params {};
		params.StageIdNum = StageIdNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawns From World Settings
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Force_Spawning                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Manual_start                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASpawnWave*                                  Out_agatha_wave                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASpawnWave*                                  Out_mason_wave                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Start_Initial_Spawns_From_World_Settings(bool Force_Spawning, bool Manual_start, class UObject* __WorldContext, class ASpawnWave** Out_agatha_wave, class ASpawnWave** Out_mason_wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawns From World Settings");
		
		UGamemodeFunctions_C_Start_Initial_Spawns_From_World_Settings_Params params {};
		params.Force_Spawning = Force_Spawning;
		params.Manual_start = Manual_start;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out_agatha_wave != nullptr)
			*Out_agatha_wave = params.Out_agatha_wave;
		if (Out_mason_wave != nullptr)
			*Out_mason_wave = params.Out_mason_wave;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawn (With duration!)
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawner*                                    Spawner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force_Spawning                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Seconds_before_spawning_starts                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ASpawnWave*                                  Wave                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Start_Initial_Spawn__With_duration_(class ASpawner* Spawner, TBL_EFaction Faction, bool Force_Spawning, float Seconds_before_spawning_starts, class UObject* __WorldContext, class ASpawnWave** Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Start Initial Spawn (With duration!)");
		
		UGamemodeFunctions_C_Start_Initial_Spawn__With_duration__Params params {};
		params.Spawner = Spawner;
		params.Faction = Faction;
		params.Force_Spawning = Force_Spawning;
		params.Seconds_before_spawning_starts = Seconds_before_spawning_starts;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Wave != nullptr)
			*Wave = params.Wave;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Draw
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                StageIdNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Draw(int StageIdNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Draw");
		
		UGamemodeFunctions_C_Draw_Params params {};
		params.StageIdNum = StageIdNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Blue Victory
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                StageIdNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Blue_Victory(int StageIdNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Blue Victory");
		
		UGamemodeFunctions_C_Blue_Victory_Params params {};
		params.StageIdNum = StageIdNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GamemodeFunctions.GamemodeFunctions_C.Red Victory
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int                                                StageIdNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGamemodeFunctions_C::STATIC_Red_Victory(int StageIdNum, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamemodeFunctions.GamemodeFunctions_C.Red Victory");
		
		UGamemodeFunctions_C_Red_Victory_Params params {};
		params.StageIdNum = StageIdNum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGamemodeFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamemodeFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GamemodeFunctions.GamemodeFunctions_C");
		return ptr;
	}

}


