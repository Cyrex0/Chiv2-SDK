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
	 * Function LoadoutButton.LoadoutButton_C.OnKeyDown
	 */
	struct ULoadoutButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.BndEvt__Button_154_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULoadoutButton_C_BndEvt__Button_154_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.SetEquipped
	 */
	struct ULoadoutButton_C_SetEquipped_Params
	{
	public:
		bool                                                       bEquipped;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSkipAnim;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.OnAddedToFocusPath
	 */
	struct ULoadoutButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.OnRemovedFromFocusPath
	 */
	struct ULoadoutButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.Clicked
	 */
	struct ULoadoutButton_C_Clicked_Params
	{
	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULoadoutButton_C_BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULoadoutButton_C_BndEvt__LoadoutItembutton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.SetLocked
	 */
	struct ULoadoutButton_C_SetLocked_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int                                                        Level;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.Construct
	 */
	struct ULoadoutButton_C_Construct_Params
	{
	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.UpdateLoadoutItem
	 */
	struct ULoadoutButton_C_UpdateLoadoutItem_Params
	{
	public:
		class UClass*                                              InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EInventoryItemSlot                                     Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Subclass;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.ExecuteUbergraph_LoadoutButton
	 */
	struct ULoadoutButton_C_ExecuteUbergraph_LoadoutButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.OnItemHovered__DelegateSignature
	 */
	struct ULoadoutButton_C_OnItemHovered__DelegateSignature_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InventoryItem;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutButton.LoadoutButton_C.OnInventoryItemClicked__DelegateSignature
	 */
	struct ULoadoutButton_C_OnInventoryItemClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EInventoryItemSlot                                     Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutButton_C*                                    LoadoutButton;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
