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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function InventoryWidget.InventoryWidget_C.GetOrAddActionEntryWidget
	 */
	struct UInventoryWidget_C_GetOrAddActionEntryWidget_Params
	{
	public:
		class AInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EInventoryItemSlot                                     SlotOverride;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryEntry_C*                                   InventoryEntryWidget;                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.GetOrAddInventoryEntryWidget
	 */
	struct UInventoryWidget_C_GetOrAddInventoryEntryWidget_Params
	{
	public:
		class AInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInventoryEntry_C*                                   InventoryEntryWidget;                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.Construct
	 */
	struct UInventoryWidget_C_Construct_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnPossessedPawn_Event_1
	 */
	struct UInventoryWidget_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnInventorySlotsUpdated_Event
	 */
	struct UInventoryWidget_C_OnInventorySlotsUpdated_Event_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.EquipInventoryItem
	 */
	struct UInventoryWidget_C_EquipInventoryItem_Params
	{
	public:
		class AInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.UnequippedInventoryItem
	 */
	struct UInventoryWidget_C_UnequippedInventoryItem_Params
	{
	public:
		class AInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.ResetInventory
	 */
	struct UInventoryWidget_C_ResetInventory_Params
	{
	public:
		bool                                                       ResetActionInventory;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.FadeIn_Inventory
	 */
	struct UInventoryWidget_C_FadeIn_Inventory_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.FadeOut_Inventory
	 */
	struct UInventoryWidget_C_FadeOut_Inventory_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.StartFadeIn
	 */
	struct UInventoryWidget_C_StartFadeIn_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.StartFadeOut
	 */
	struct UInventoryWidget_C_StartFadeOut_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnKilled_Event_1
	 */
	struct UInventoryWidget_C_OnKilled_Event_1_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.ForceImmediateFadeOut
	 */
	struct UInventoryWidget_C_ForceImmediateFadeOut_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnInventoryItemToBeEquipped_Event_1
	 */
	struct UInventoryWidget_C_OnInventoryItemToBeEquipped_Event_1_Params
	{
	public:
		class AInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnAnimationFinished
	 */
	struct UInventoryWidget_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnAnimationStarted
	 */
	struct UInventoryWidget_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.CustomEvent_1
	 */
	struct UInventoryWidget_C_CustomEvent_1_Params
	{
	public:
		bool                                                       IsMountingHorse;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.AddPersistentItemIcons
	 */
	struct UInventoryWidget_C_AddPersistentItemIcons_Params
	{
	public:
		class ATBLCharacter*                                       NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.UpdateActionItems
	 */
	struct UInventoryWidget_C_UpdateActionItems_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnEquippedItemsChanged_Event
	 */
	struct UInventoryWidget_C_OnEquippedItemsChanged_Event_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnItemStackChanged
	 */
	struct UInventoryWidget_C_OnItemStackChanged_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnUnequipItem
	 */
	struct UInventoryWidget_C_OnUnequipItem_Params
	{
	public:
		class AInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnEquipItem
	 */
	struct UInventoryWidget_C_OnEquipItem_Params
	{
	public:
		class AInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.InventoryUpdated
	 */
	struct UInventoryWidget_C_InventoryUpdated_Params
	{
	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.OnClientNotifySuicide_Event_1
	 */
	struct UInventoryWidget_C_OnClientNotifySuicide_Event_1_Params
	{
	public:
		TBL_EKillReason                                            Reason;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.ExecuteUbergraph_InventoryWidget
	 */
	struct UInventoryWidget_C_ExecuteUbergraph_InventoryWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryWidget.InventoryWidget_C.IsInventoryOpen__DelegateSignature
	 */
	struct UInventoryWidget_C_IsInventoryOpen__DelegateSignature_Params
	{
	public:
		bool                                                       _;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
