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
	 * BlueprintGeneratedClass TransitionStage.TransitionStage_C
	 * Size -> 0x00B3 (FullSize[0x047B] - InheritedSize[0x03C8])
	 */
	class ATransitionStage_C : public AStandardStage_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTimeObjectiveComponent_C*                           TimeObjectiveComponent;                                  // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              NextStage[0x10];                                         // 0x03D8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class FScriptMulticastDelegate                             On_Transition_Stage_Ended;                               // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Transition_Stage_Started;                             // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ALevelSequenceActor*                                 Agatha_Sequence;                                         // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 Mason_Sequence;                                          // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 Server_Sequence;                                         // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Skip_in_PIE;                                             // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RSGX[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ASpawner*, class FString>                       Spawner_Prefixes;                                        // 0x0428(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       Stage_Ready_To_Start;                                    // 0x0478(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Mode_Ready_For_Stage_Start;                              // 0x0479(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Stage_Started;                                           // 0x047A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void TryFastForwardServerWarmup();
		void InitializeTransitionStage_With_Bindings(const struct FTransitionStageSettings& Settings, TMap<class ASpawner*, class FString> Spawner_Binding_Prefixes);
		void CompleteStage();
		void InitializeTransitionStage(const struct FTransitionStageSettings& Settings);
		bool IsStageReadyToComplete();
		void ReceiveBeginPlay();
		void StartStage();
		void OnMatchStateChanged_Event_1(const class FName& State);
		void Conditional_Start_Stage();
		void ExecuteUbergraph_TransitionStage(int EntryPoint);
		void On_Transition_Stage_Started__DelegateSignature();
		void On_Transition_Stage_Ended__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
