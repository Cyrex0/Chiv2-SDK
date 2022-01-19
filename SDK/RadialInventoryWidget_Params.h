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
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.ClearCurrentSelection
	 */
	struct URadialInventoryWidget_C_ClearCurrentSelection_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateSelectedOverlay
	 */
	struct URadialInventoryWidget_C_UpdateSelectedOverlay_Params
	{
	public:
		struct FUIRadialInventoryStruct                            UIRadialInventoryStruct;                                 // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.ResetAllSlotColors
	 */
	struct URadialInventoryWidget_C_ResetAllSlotColors_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.SetSlotColor
	 */
	struct URadialInventoryWidget_C_SetSlotColor_Params
	{
	public:
		int                                                        Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FColor                                              Color;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Opacity;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.SelectIndex
	 */
	struct URadialInventoryWidget_C_SelectIndex_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.ResetInventoryContents
	 */
	struct URadialInventoryWidget_C_ResetInventoryContents_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateContentsForSlot
	 */
	struct URadialInventoryWidget_C_UpdateContentsForSlot_Params
	{
	public:
		struct FUIRadialInventoryStruct                            RadialSlot;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		class UTexture2D*                                          ItemTexture;                                             // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ItemName;                                                // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bHasItem;                                                // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TBL_EInventoryItemSlot                                     InventorySlot;                                           // 0x0059(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowShield;                                              // 0x005A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          ShieldIcon;                                              // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShieldEquipped;                                          // 0x0068(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateInventory
	 */
	struct URadialInventoryWidget_C_UpdateInventory_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.UpdateAxis
	 */
	struct URadialInventoryWidget_C_UpdateAxis_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.SetupRadialSlots
	 */
	struct URadialInventoryWidget_C_SetupRadialSlots_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.Tick
	 */
	struct URadialInventoryWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.OnPossessedPawn
	 */
	struct URadialInventoryWidget_C_OnPossessedPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.OnInvSlotsUpdated
	 */
	struct URadialInventoryWidget_C_OnInvSlotsUpdated_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.OnInventoryChanged
	 */
	struct URadialInventoryWidget_C_OnInventoryChanged_Params
	{
	public:
		class AInventoryItem*                                      InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.OnPlayerKilled
	 */
	struct URadialInventoryWidget_C_OnPlayerKilled_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialClosing
	 */
	struct URadialInventoryWidget_C_OnRadialClosing_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.OnRadialOpening
	 */
	struct URadialInventoryWidget_C_OnRadialOpening_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.OnInitialized
	 */
	struct URadialInventoryWidget_C_OnInitialized_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.PressInventoryKey
	 */
	struct URadialInventoryWidget_C_PressInventoryKey_Params
	{
	public:
		TBL_EInventoryItemSlot                                     Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.Do nothing
	 */
	struct URadialInventoryWidget_C_Do_nothing_Params
	{
	};

	/**
	 * Function RadialInventoryWidget.RadialInventoryWidget_C.ExecuteUbergraph_RadialInventoryWidget
	 */
	struct URadialInventoryWidget_C_ExecuteUbergraph_RadialInventoryWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
