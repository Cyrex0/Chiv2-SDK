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
	 * BlueprintGeneratedClass GameModeMessageComponent.GameModeMessageComponent_C
	 * Size -> 0x015C (FullSize[0x0264] - InheritedSize[0x0108])
	 */
	class UGameModeMessageComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDataTable*                                          MessageDataTable;                                        // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        StageNumber;                                             // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K0QE[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<float, struct FGameModeMessageArray>                  DelayedMessages;                                         // 0x0120(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      WorldSeconds;                                            // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D7UG[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int, int>                                             LastStageScoreMap;                                       // 0x0178(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       StageNearingCompletionTriggered;                         // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseWorldSettingsDataTable;                               // 0x01C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RSH0[0x6];                                   // 0x01CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AgathaStageCommander;                                    // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MasonStageCommander;                                     // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseNewStageIdNumbers;                                    // 0x01E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5JWZ[0x3];                                   // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        LastTicketPercent;                                       // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<TBL_EFaction, int>                                    LastTicketPercentByFaction;                              // 0x01E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FAKAudioStartStopStruct>                     AllStageEndingMusicList;                                 // 0x0238(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FAKAudioStartStopStruct>                     RemainingStageEndingMusicList;                           // 0x0248(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UObject*                                             CurrentStage;                                            // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        RandomIndex;                                             // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SendFFA_MatchEndedMessages(class ATBLPlayerState* Player_Victor);
		void RemovePreviousStageContextVos();
		void AppendAndGetTDMMessages(TArray<class FString>* TDMPercentMessages, TArray<class FString>* TDMTicketsMessage, TArray<struct FGameModeMessageTable>* Messages);
		void GetTDMStageTicketsPercentText(int TicketsRemaining, int InitialTickets, TBL_EFaction Faction, TArray<class FString>* EventTags);
		void NewStageStarted();
		void BroadcastMessages(TArray<struct FGameModeMessageTable>* GameModeMessages);
		void TriggerStageEndingMusic();
		void HandleStageNearingScoreComplete(int NewScorePercentage);
		void HandleStageNearingTimeOut(int MinutesRemaining);
		void FormatFFAText(TArray<struct FGameModeMessageTable>* GameModeMessages, class ATBLPlayerState* PlayerState, int Kills, int KillsForVictory, TArray<struct FGameModeMessageTable>* FormattedGameModeMessages);
		void SetStageLastScore(int Score);
		void GetGameModeMessages(TArray<class FString>* EventTags, TArray<struct FGameModeMessageTable>* Messages);
		void GetStageLastScore(int* LastScore);
		void GetStageMinutesRemaingText(int MinutesRemaining, TArray<class FString>* EventTags);
		void GetTDMStageTicketsText(int TicketsRemaining, int InitialTickets, TBL_EFaction Faction, TArray<class FString>* EventTags);
		void GetFactionVictoryText(TBL_EFaction VictoryFaction, TArray<class FString>* EventTags);
		void GetDefenderVictoryText(TArray<class FString>* EventTags);
		void GetAttackerVictoryText(TArray<class FString>* EventTags);
		void GetScoreStageScoreRows(int Percentage, TArray<struct FGameModeMessageTable>* Messages);
		void QueueGameModeMessages(TArray<struct FGameModeMessageTable>* Messages);
		void GetStageBeginText(TArray<class FString>* EventTags);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void Started_New_Stage_Event_1();
		void On_Score_Changed_Event_1(int CurrentScore, int MaxScore);
		void On_Tickets_Changed_Event_1(TBL_EFaction Faction, int Delta, int NewTickets);
		void MinutesRemaining_Event_1(int MinutesRemaining);
		void KillLeaderUpdated_Event_1(class ATBLPlayerState* PlayerState, int Kills, int MaxScore);
		void MatchWaitingToStart();
		void Interface_QueueGameModeMessages(TArray<struct FGameModeMessageTable> Messages);
		void FFAPlayerVictory(class ATBLPlayerState* Player);
		void OnMatchWonBy_Event_1(TBL_EFaction Victor);
		void ExecuteUbergraph_GameModeMessageComponent(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
