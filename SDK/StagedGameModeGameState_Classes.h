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
	 * BlueprintGeneratedClass StagedGameModeGameState.StagedGameModeGameState_C
	 * Size -> 0x0080 (FullSize[0x09D8] - InheritedSize[0x0958])
	 */
	class AStagedGameModeGameState_C : public ATBLGameState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0958(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0960(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Current_Stage[0x10];                                     // 0x0968(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class FScriptMulticastDelegate                             Current_Stage_Changed;                                   // 0x0978(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AActor*                                              Last_Stage;                                              // 0x0988(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Stage_Index;                                             // 0x0990(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_36UX[0x4];                                   // 0x0994(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Stage_Index_Changed;                                     // 0x0998(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AActor*                                              Stage_Actor;                                             // 0x09A8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Gamemode_Widget[0x28];                                   // 0x09B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void GetWinningFactionFromPreviousStage(TBL_EFaction* PreviousWinningFaction);
		void GetCurrentStage();
		void OnRep_Stage_Actor();
		void OnRep_Stage_Index();
		void Set_New_Stage();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_StagedGameModeGameState(int EntryPoint);
		void Stage_Index_Changed__DelegateSignature(int New_Index);
		void Current_Stage_Changed__DelegateSignature(class UObject* Previous_Stage, class UObject* New_Stage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
