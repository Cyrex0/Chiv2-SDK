#pragma once

/**
 * Name: chiv2
 * Version: 123456
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GamemodeFunctions.GamemodeFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGamemodeFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ManuallyPlayCommanderMessages(TArray<struct FGameModeMessageTable>* Messages, class UObject* __WorldContext);
		void STATIC_IsListenServer(class AActor* ContextObject, class UObject* __WorldContext, bool* Return_Value);
		void STATIC_BroadcastTdmPrivateMessage(TdmMessageTypes_ETdmMessageTypes TdmMessageType, int Value, class APlayerController* PlayerController, class UObject* Object, class UObject* __WorldContext);
		void STATIC_BroadcastTdmMessage(TdmMessageTypes_ETdmMessageTypes TdmMessageType, int Value, class UObject* WorldContextObject, class UObject* Object, class UObject* __WorldContext);
		void STATIC_BroadcastGameModeMessages(TArray<struct FGameModeMessageTable>* Messages, class UObject* __WorldContext);
		void STATIC_Player_With_Most_Kills_Victory(TBL_EFaction Faction, int StageIdNum, class UObject* __WorldContext);
		void STATIC_Get_Level_Sequence_from_Asset_Ptr__4_16_workaround_remove_in_4_18_(class UObject* World_Context_Object, class UObject* __WorldContext, class ALevelSequenceActor** Actor);
		void STATIC_Get_Current_Stage(class UObject* __WorldContext, class UObject** Stage);
		void STATIC_Start_Initial_Spawn_with_manual_start__preferred_(class ASpawner* Spawner, TBL_EFaction Faction, bool Force_Spawning, class UObject* __WorldContext, class ASpawnWave** Wave);
		void STATIC_Auto_Start_All_Spawn_Sequences_Like_TDM_Does_It(class UObject* __WorldContext);
		void STATIC_Defenders_Victory(int StageIdNum, class UObject* __WorldContext);
		void STATIC_Attackers_Victory(int StageIdNum, class UObject* __WorldContext);
		void STATIC_Start_Initial_Spawns_From_World_Settings(bool Force_Spawning, bool Manual_start, class UObject* __WorldContext, class ASpawnWave** Out_agatha_wave, class ASpawnWave** Out_mason_wave);
		void STATIC_Start_Initial_Spawn__With_duration_(class ASpawner* Spawner, TBL_EFaction Faction, bool Force_Spawning, float Seconds_before_spawning_starts, class UObject* __WorldContext, class ASpawnWave** Wave);
		void STATIC_Draw(int StageIdNum, class UObject* __WorldContext);
		void STATIC_Blue_Victory(int StageIdNum, class UObject* __WorldContext);
		void STATIC_Red_Victory(int StageIdNum, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
