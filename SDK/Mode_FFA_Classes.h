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
	 * BlueprintGeneratedClass Mode_FFA.Mode_FFA_C
	 * Size -> 0x0048 (FullSize[0x11D8] - InheritedSize[0x1190])
	 */
	class AMode_FFA_C : public AStagedGameMode_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1190(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int                                                        MaxScore;                                                // 0x1198(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M39R[0x4];                                   // 0x119C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLPlayerState*                                     KillLeader;                                              // 0x11A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             KillLeaderUpdated;                                       // 0x11A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             VictoryAwarded;                                          // 0x11B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int                                                        CurrentHighScore;                                        // 0x11C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CILR[0x4];                                   // 0x11CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFFATimeoutStage_C*                                  FFAStage;                                                // 0x11D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float GetScorePercent();
		void ConfigureFFATimeoutStage(class AFFATimeoutStage_C* Stage);
		void Get_First_Stage();
		void ReceiveBeginPlay();
		void OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent);
		void K2_HandleMatchHasStarted();
		void UpdateDynamicMusic();
		void ExecuteUbergraph_Mode_FFA(int EntryPoint);
		void VictoryAwarded__DelegateSignature(class ATBLPlayerState* PlayerState);
		void KillLeaderUpdated__DelegateSignature(class ATBLPlayerState* PlayerState, int Kills, int MaxScore);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
