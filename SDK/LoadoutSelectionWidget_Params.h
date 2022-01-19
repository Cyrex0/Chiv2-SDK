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
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryDownNavLogic
	 */
	struct ULoadoutSelectionWidget_C_SecondaryDownNavLogic_Params
	{
	public:
		SlateCore_EUINavigation                                    Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SecondaryUpNavLogic
	 */
	struct ULoadoutSelectionWidget_C_SecondaryUpNavLogic_Params
	{
	public:
		SlateCore_EUINavigation                                    Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.PrimaryDownNavLogic
	 */
	struct ULoadoutSelectionWidget_C_PrimaryDownNavLogic_Params
	{
	public:
		SlateCore_EUINavigation                                    Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponSelections
	 */
	struct ULoadoutSelectionWidget_C_UpdateWeaponSelections_Params
	{
	public:
		class UClass*                                              SubclassChoice;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLoadout                                            Loadout;                                                 // 0x0008(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideAllItems
	 */
	struct ULoadoutSelectionWidget_C_HideAllItems_Params
	{
	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UpdateWeaponItems
	 */
	struct ULoadoutSelectionWidget_C_UpdateWeaponItems_Params
	{
	public:
		class UHorizontalBox*                                      HoriBox;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      WeaponGroup;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TBL_EInventoryItemSlot                                     Slot;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              CurrentEquipped;                                         // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ContainerBox;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              LoadoutSelection;                                        // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.HideItems
	 */
	struct ULoadoutSelectionWidget_C_HideItems_Params
	{
	public:
		class UHorizontalBox*                                      HoriBox;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindAllSlots
	 */
	struct ULoadoutSelectionWidget_C_BindAllSlots_Params
	{
	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.BindSlots
	 */
	struct ULoadoutSelectionWidget_C_BindSlots_Params
	{
	public:
		class UHorizontalBox*                                      HoriBox;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnInitialized
	 */
	struct ULoadoutSelectionWidget_C_OnInitialized_Params
	{
	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.OnItemHovered
	 */
	struct ULoadoutSelectionWidget_C_OnItemHovered_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InventoryItem;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.UnhoveredItems
	 */
	struct ULoadoutSelectionWidget_C_UnhoveredItems_Params
	{
	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemClickedHandler
	 */
	struct ULoadoutSelectionWidget_C_ItemClickedHandler_Params
	{
	public:
		class UClass*                                              InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EInventoryItemSlot                                     Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutButton_C*                                    LoadoutButton;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.EquipItem
	 */
	struct ULoadoutSelectionWidget_C_EquipItem_Params
	{
	public:
		class ULoadoutButton_C*                                    LoadoutButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EInventoryItemSlot                                     Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSkipAnim;                                               // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ResetCount
	 */
	struct ULoadoutSelectionWidget_C_ResetCount_Params
	{
	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ExecuteUbergraph_LoadoutSelectionWidget
	 */
	struct ULoadoutSelectionWidget_C_ExecuteUbergraph_LoadoutSelectionWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.SubclassItemsUpdated__DelegateSignature
	 */
	struct ULoadoutSelectionWidget_C_SubclassItemsUpdated__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemHovered__DelegateSignature
	 */
	struct ULoadoutSelectionWidget_C_ItemHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSelectionWidget.LoadoutSelectionWidget_C.ItemSelected__DelegateSignature
	 */
	struct ULoadoutSelectionWidget_C_ItemSelected__DelegateSignature_Params
	{
	public:
		TBL_EInventoryItemSlot                                     Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutButton_C*                                    LoadoutButton;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
