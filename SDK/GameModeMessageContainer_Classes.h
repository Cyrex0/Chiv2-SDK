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
	 * WidgetBlueprintGeneratedClass GameModeMessageContainer.GameModeMessageContainer_C
	 * Size -> 0x0118 (FullSize[0x0360] - InheritedSize[0x0248])
	 */
	class UGameModeMessageContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            GameModeMessage;                                         // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGameModeMessageWidget_C*                            GameModeMessageWidget;                                   // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FGameModeMessage>                            GameModeMessageQueue;                                    // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsShowingMessage;                                       // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CSRJ[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameModeMessage                                    CurrentMessage;                                          // 0x0278(0x0070) Edit, BlueprintVisible, DisableEditOnInstance
		class UCinematicsComponent*                                PlayersCinematicsComponent;                              // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameModeMessage                                    TempMessage;                                             // 0x02F0(0x0070) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetRankUpMessageTypeFromOnlineStat(TBL_EOnlineStat OnlineStat, RankUpMessageType_ERankUpMessageType* RankUpMessageType);
		void CanShowMessage(bool* Show);
		void Construct();
		void GameModeMessageReceived_Event_1(const struct FGameModeMessage& Message);
		void ShowMessage(const struct FGameModeMessage& Message);
		void BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature();
		void OnCinematicStateChanged_Event_1(const struct FGameplayTag& PreviousStateTag, class UCinematicState* PreviousState, const struct FGameplayTag& NewStateTag, class UCinematicState* NewState);
		void ProcessNewMessage(const struct FGameModeMessage& GameModeMessage);
		void ExecuteUbergraph_GameModeMessageContainer(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
