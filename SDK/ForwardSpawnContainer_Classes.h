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
	 * WidgetBlueprintGeneratedClass ForwardSpawnContainer.ForwardSpawnContainer_C
	 * Size -> 0x011C (FullSize[0x0364] - InheritedSize[0x0248])
	 */
	class UForwardSpawnContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UForwardSpawnWidget_C*                               ForwardSpawnWidget_C_1;                                  // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UForwardSpawnWidget_C*                               ForwardSpawnWidget_C_2;                                  // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UForwardSpawnWidget_C*                               PromptWidget;                                            // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_2;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UForwardSpawnWidget_C*                               WaveWidget;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class ASpawnWave*>                                  Waves;                                                   // 0x0278(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       Changed;                                                 // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PEJE[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UForwardSpawnWidget_C*>                       Wave_widgets;                                            // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FScriptMulticastDelegate                             On_Started_Wave_Hover;                                   // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Ended_Wave_Hover;                                     // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class ASpawnWave*>                                  Special_Waves;                                           // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsShowingPromptMessage;                                  // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RH9D[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int, struct FGameplayTag>                             PendingPromptMessages;                                   // 0x02D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPlayerPromptFormattedMessage                       CurrentPromptMessageStruct;                              // 0x0328(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		int                                                        CurrentPromptMessage;                                    // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		UMG_ESlateVisibility Get_Visibility_of_HUD_marker_container();
		UMG_ESlateVisibility GetVisibility_1();
		void Construct();
		void Notify_Started_Wave_Hover(class ASpawnWave* Wave);
		void Notify_Ended_Wave_Hover(class ASpawnWave* Wave);
		void OnJoinableSpawnWavesUpdated_Event_1();
		void OnPromptPlayerMessageRequest(const struct FGameplayTag& MessageTag, int MessageId);
		void ResetIsShowingPrompt();
		void CancelPrompt(int MessageId);
		void ExecuteUbergraph_ForwardSpawnContainer(int EntryPoint);
		void On_Ended_Wave_Hover__DelegateSignature(class ASpawnWave* Wave);
		void On_Started_Wave_Hover__DelegateSignature(class ASpawnWave* Wave);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
