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
	 * WidgetBlueprintGeneratedClass InventoryWidget.InventoryWidget_C
	 * Size -> 0x01D8 (FullSize[0x0420] - InheritedSize[0x0248])
	 */
	class UInventoryWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeInInventoryList;                                     // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      ActionInventoryList;                                     // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_2;                                         // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             InventoryBorder;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInventoryIconEntry_C*                               InventoryIconEntry;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInventoryIconEntry_C*                               InventoryIconEntry_96;                                   // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<TBL_EInventoryItemSlot>                             InventorySlotOrder;                                      // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UInventory*                                          CurrentInventory;                                        // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UInventoryEntry_C*>                           InventoryEntryPoolWidgets;                               // 0x0298(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TMap<class AInventoryItem*, class UInventoryEntry_C*>      InventoryItemsByWIdget;                                  // 0x02A8(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference
		struct FTimerHandle                                        FadeOutTimerHandle;                                      // 0x02F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      CachedAnimProgress;                                      // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMounting;                                              // 0x0304(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7EOX[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInventoryEntry_C*>                           ActionInventoryWidgets;                                  // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		unsigned char                                              PersistenItemSlots[0x10];                                // 0x0318(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<TBL_EInventoryItemSlot>                             ActionInventorySlotList;                                 // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class AInventoryItem*                                      ShieldItem;                                              // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInventoryEntry_C*                                   EquippedInventoryEntry;                                  // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             IsInventoryOpen;                                         // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsClassItem;                                            // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9IS4[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CurrentClass;                                            // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLoadout                                            CurrentLoadout;                                          // 0x0368(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<class AInventoryItem*>                              UnequippingItems;                                        // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class AInventoryItem*>                              EquippingItems;                                          // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class UClass*, class UInventoryEntry_C*>              ActionInventoryItemsByWIdget;                            // 0x03C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       InventoryUpdating;                                       // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FirstUpdate;                                             // 0x0411(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CommittingSuicide;                                       // 0x0412(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IC33[0x5];                                   // 0x0413(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              NoveltyItemClass;                                        // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetOrAddActionEntryWidget(class AInventoryItem* InventoryItem, TBL_EInventoryItemSlot SlotOverride, class UInventoryEntry_C** InventoryEntryWidget);
		void GetOrAddInventoryEntryWidget(class AInventoryItem* InventoryItem, class UInventoryEntry_C** InventoryEntryWidget);
		void Construct();
		void OnPossessedPawn_Event_1(class APawn* NewPawn);
		void OnInventorySlotsUpdated_Event();
		void EquipInventoryItem(class AInventoryItem* InventoryItem);
		void UnequippedInventoryItem(class AInventoryItem* InventoryItem);
		void ResetInventory(bool ResetActionInventory);
		void FadeIn_Inventory();
		void FadeOut_Inventory();
		void StartFadeIn();
		void StartFadeOut();
		void OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event);
		void ForceImmediateFadeOut();
		void OnInventoryItemToBeEquipped_Event_1(class AInventoryItem* InventoryItem);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnAnimationStarted(class UWidgetAnimation* Animation);
		void CustomEvent_1(bool IsMountingHorse);
		void AddPersistentItemIcons(class ATBLCharacter* NewPawn);
		void UpdateActionItems();
		void OnEquippedItemsChanged_Event();
		void OnItemStackChanged(class AInventoryItem* Item, int Delta);
		void OnUnequipItem(class AInventoryItem* InventoryItem);
		void OnEquipItem(class AInventoryItem* InventoryItem);
		void InventoryUpdated();
		void OnClientNotifySuicide_Event_1(TBL_EKillReason Reason);
		void ExecuteUbergraph_InventoryWidget(int EntryPoint);
		void IsInventoryOpen__DelegateSignature(bool _);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
