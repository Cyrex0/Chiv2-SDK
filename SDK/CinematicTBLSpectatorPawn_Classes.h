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
	 * BlueprintGeneratedClass CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C
	 * Size -> 0x0039 (FullSize[0x04E1] - InheritedSize[0x04A8])
	 */
	class ACinematicTBLSpectatorPawn_C : public ATBLSpectatorPawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ULevelSequencePlayer*                                FadeInPlayer;                                            // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULevelSequencePlayer*                                FadeOutPlayer;                                           // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        StartSequenceHandle;                                     // 0x04C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 Overview_Sequence;                                       // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      FadeActors;                                              // 0x04D0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       NewVar_1;                                                // 0x04E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Get_Relevant_Overview_Sequence(class ALevelSequenceActor** Sequence);
		void ReceiveBeginPlay();
		void ReceiveDestroyed();
		void Start_the_overview_sequence();
		void ReceiveUnpossessed(class AController* OldController);
		void Current_Stage_Changed_Event_1(class UObject* Previous_Stage, class UObject* New_Stage);
		void ReceivePossessed(class AController* NewController);
		void SpawnWaveReplicated(class ASpawnWave* SpawnWave);
		void ExecuteUbergraph_CinematicTBLSpectatorPawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
