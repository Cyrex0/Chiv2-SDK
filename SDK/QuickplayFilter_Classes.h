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
	 * WidgetBlueprintGeneratedClass QuickplayFilter.QuickplayFilter_C
	 * Size -> 0x0060 (FullSize[0x02A8] - InheritedSize[0x0248])
	 */
	class UQuickplayFilter_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        GameModesVerticalList;                                   // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuickplayFilterButton_C*                            QuickplayFilterButton;                                   // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuickplayFilterButton_C*                            QuickplayFilterButton_C_2;                               // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuickplayFilterButton_C*                            QuickplayFilterButton_C_3;                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuickplayFilterButton_C*                            QuickplayFilterButton_C_4;                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuickplayFilterButton_C*                            QuickplayFilterButton_C_5;                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuickplayFilterButton_C*                            QuickplayFilterButton_C_6;                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuickplayFilterButton_C*                            QuickplayFilterButton_C_7;                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStatefulButton_C*                                   CurrentStatefulButton;                                   // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FMatchmakingQueue>                           Queues;                                                  // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void Update_Selected_Queue(class UQuickplayFilterButton_C* Filter_Button);
		void UpdateVisibleButtons(int* SelectedCount);
		void Get_Selected_Queues(TArray<struct FMatchmakingQueue>* Queues);
		void OnInitialized();
		void OnMatchmakingQueueStatisticsChanged_Event_1(const class FName& QueueName);
		void On_Queues_Updated();
		void OnMatchMakingChanged(bool bIsMatchmaking);
		void OnFilterSelectionChange(class UQuickplayFilterButton_C* QuickplayFilterButton);
		void ExecuteUbergraph_QuickplayFilter(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
