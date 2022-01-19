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
	 * BlueprintGeneratedClass StandardStage.StandardStage_C
	 * Size -> 0x00D8 (FullSize[0x03C8] - InheritedSize[0x02F0])
	 */
	class AStandardStage_C : public ATBLActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStageCinematicsComponent_C*                         StageCinematicsComponent;                                // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ACameraActor*                                        Overview_Screen_Camera;                                  // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             On_Stage_Started;                                        // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Stage_Ended;                                          // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              AgathaStageCommander[0x28];                              // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MasonStageCommander[0x28];                               // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int                                                        StageIdNum;                                              // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YFLC[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             On_Cosmetic_Stage_Started;                               // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Cosmetic_Stage_Ended;                                 // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FAKAudioStartStopStruct                             AgathaStageSounds;                                       // 0x03A8(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FAKAudioStartStopStruct                             MasonStageSounds;                                        // 0x03B8(0x0010) Edit, BlueprintVisible, NoDestructor

	public:
		float GetTimeRemaining();
		float GetTimeRemainingPercent();
		int GetStageIdNum();
		class AActor* GetStageCommander(TBL_EFaction Faction);
		void CompleteStage();
		bool IsStageReadyToComplete();
		void StartStage();
		void BroadcastStageEnded();
		void BroadcastStageStarted();
		void ExecuteUbergraph_StandardStage(int EntryPoint);
		void On_Cosmetic_Stage_Ended__DelegateSignature();
		void On_Cosmetic_Stage_Started__DelegateSignature();
		void On_Stage_Ended__DelegateSignature(class AStandardStage_C* Stage);
		void On_Stage_Started__DelegateSignature(class AStandardStage_C* Stage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
