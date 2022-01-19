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
	 * BlueprintGeneratedClass StagedGameMode.StagedGameMode_C
	 * Size -> 0x00B0 (FullSize[0x1190] - InheritedSize[0x10E0])
	 */
	class AStagedGameMode_C : public ATBLGameMode
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGameModeMessageComponent_C*                         GameModeMessageComponent;                                // 0x10E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x10F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Current_Stage[0x10];                                     // 0x10F8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class FScriptMulticastDelegate                             Started_New_Stage;                                       // 0x1108(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              Previous_Stage[0x10];                                    // 0x1118(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class ASpawnWave*                                          Agatha_initial_wave;                                     // 0x1128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASpawnWave*                                          Mason_initial_wave;                                      // 0x1130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Skip_current_stage_;                                     // 0x1138(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y3P6[0x3];                                   // 0x1139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FirstStageDelayTime;                                     // 0x113C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class AScoredStage_C*, float>                         StagePlaytimes;                                          // 0x1140(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance

	public:
		bool IsAutoBalanceBlocked();
		class UObject* K2_GetCurrentStage();
		void Get_First_Stage();
		void Get_First_Stage_With_Warmup();
		void ReceiveTick(float DeltaSeconds);
		void K2_HandleMatchHasStarted();
		void K2_OnSetMatchState(const class FName& NewState);
		void K2_HandleSkipStage();
		void K2_HandleMatchIsWaitingToStart();
		void ExecuteUbergraph_StagedGameMode(int EntryPoint);
		void Started_New_Stage__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
