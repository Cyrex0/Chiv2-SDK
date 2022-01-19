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
	 * BlueprintGeneratedClass BaseCinematicState.BaseCinematicState_C
	 * Size -> 0x0009 (FullSize[0x0031] - InheritedSize[0x0028])
	 */
	class UBaseCinematicState_C : public UCinematicState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Can_Be_Interrupted;                                      // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetPreparingMatchTimeThreshold(float* MinTimeThreshold);
		void Get_Cinematic_State_from_GameState(struct FGameplayTag* Tag);
		void Get_Cinematic_State_from_Match_State(struct FGameplayTag* State);
		void HandleGoingToSpawnAtSpawner(class ASpawner* Spawner);
		void HandleMatchStateChanged(const class FName& MatchState);
		void HandleGameCinematicStateChanged(TBL_ECinematicGameState GameStateCinematicState);
		void HandlePossessedPawn(class APawn* Pawn);
		void HandleTeamChanged(class ATBLTeam* NewTeam);
		void HandleSuicideNotify(TBL_EKillReason KillReason);
		void HandleNextSpawnWaveChanged(class ASpawnWave* SpawnWave);
		void ExecuteUbergraph_BaseCinematicState(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
