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
	 * BlueprintGeneratedClass ScoredStage.ScoredStage_C
	 * Size -> 0x00B4 (FullSize[0x047C] - InheritedSize[0x03C8])
	 */
	class AScoredStage_C : public AStandardStage_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTimeObjectiveComponent_C*                           TimeObjectiveComponent;                                  // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UActorInfoDisplayComponent*                          ActorInfoDisplay;                                        // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UObjectiveStatusDisplayComponent*                    Objective_Bar_Display_Component;                         // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Next_Stage[0x10];                                        // 0x03E8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              Timeout_Stage[0x10];                                     // 0x03F8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		int                                                        Score;                                                   // 0x0408(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int                                                        Max_Score;                                               // 0x040C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		int                                                        Initial_Score;                                           // 0x0410(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8RO0[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             On_Started;                                              // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Ended;                                                // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Timed_Out;                                            // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Completed_by_Score;                                   // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Score_Changed;                                        // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      StageActiveDuration;                                     // 0x0468(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StageStartTime;                                          // 0x046C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         PlayerCountScoreScaling;                                 // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int                                                        DefaultMaxScore;                                         // 0x0478(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Create_debug_menu_widget(class UUserWidget** Debug_menu_widget);
		void RecalculateMaxScore(int Max_Score);
		float GetTimeRemainingPercent();
		float GetTimeRemaining();
		void SetScore(int NewScore);
		void OnRep_Max_Score();
		void OnRep_Score();
		void Initialize_ScoredStage(const struct FScoredStageProperties& Settings, const struct FStandardStageCinematicProperties& cinematics);
		void Initialize_ScoredStage_No_Cinematics(const struct FScoredStageProperties& Settings);
		void CompleteStage();
		bool IsStageReadyToComplete();
		bool Is_MaxScore_exceeded();
		void Add_Score(int Delta);
		void Initialize_ScoredStage_No_Settings();
		void StartStage();
		void Set_HUD_Elements_Visible(bool Visible);
		void On_Score_Changed_Event_2(int CurrentScore, int MaxScore);
		void On_Ended_Event(class AScoredStage_C* Stage);
		void AddScore(int Amount);
		void ExecuteUbergraph_ScoredStage(int EntryPoint);
		void On_Score_Changed__DelegateSignature(int CurrentScore, int MaxScore);
		void On_Completed_by_Score__DelegateSignature();
		void On_Timed_Out__DelegateSignature();
		void On_Ended__DelegateSignature(class AScoredStage_C* Stage);
		void On_Started__DelegateSignature(class AScoredStage_C* Stage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
