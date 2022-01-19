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
	 * Function AmmoWidget.AmmoWidget_C.AddOrFindItemPickedUpWidget
	 */
	struct UAmmoWidget_C_AddOrFindItemPickedUpWidget_Params
	{
	public:
		class UClass*                                              InventoryItemClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAmmoEventEntry_C*                                   ItemPickedUpWidget;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.GetAmmoItem
	 */
	struct UAmmoWidget_C_GetAmmoItem_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AInventoryItem*                                      ItemOut;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ItemClassOut;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.Construct
	 */
	struct UAmmoWidget_C_Construct_Params
	{
	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.OnEquippedItemsChanged_Event_1
	 */
	struct UAmmoWidget_C_OnEquippedItemsChanged_Event_1_Params
	{
	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.UpdateAmmoDisplay
	 */
	struct UAmmoWidget_C_UpdateAmmoDisplay_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AInventoryItem*                                      Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.OnItemStackChanged_Event_1
	 */
	struct UAmmoWidget_C_OnItemStackChanged_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.OnInventorySlotsUpdated_Event_1
	 */
	struct UAmmoWidget_C_OnInventorySlotsUpdated_Event_1_Params
	{
	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.OnError_Event_1
	 */
	struct UAmmoWidget_C_OnError_Event_1_Params
	{
	public:
		class AActor*                                              Initiator;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EResultCode                                            Code;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AAbilityInvocation*                                  Invocation;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AttackName;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ItemClass;                                               // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.ListenToPawnEvents
	 */
	struct UAmmoWidget_C_ListenToPawnEvents_Params
	{
	public:
		class APawn*                                               New_Pawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.On Possessed Pawn
	 */
	struct UAmmoWidget_C_On_Possessed_Pawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AmmoWidget.AmmoWidget_C.ExecuteUbergraph_AmmoWidget
	 */
	struct UAmmoWidget_C_ExecuteUbergraph_AmmoWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
