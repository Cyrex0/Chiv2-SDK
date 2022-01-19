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
	 * Function InventoryIconEntry.InventoryIconEntry_C.UpdateKeybind
	 */
	struct UInventoryIconEntry_C_UpdateKeybind_Params
	{
	};

	/**
	 * Function InventoryIconEntry.InventoryIconEntry_C.SetSelected
	 */
	struct UInventoryIconEntry_C_SetSelected_Params
	{
	public:
		bool                                                       _;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function InventoryIconEntry.InventoryIconEntry_C.Construct
	 */
	struct UInventoryIconEntry_C_Construct_Params
	{
	};

	/**
	 * Function InventoryIconEntry.InventoryIconEntry_C.UpdateInventoryItem
	 */
	struct UInventoryIconEntry_C_UpdateInventoryItem_Params
	{
	public:
		class UClass*                                              InventoryItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryIconEntry.InventoryIconEntry_C.UpdateStatus
	 */
	struct UInventoryIconEntry_C_UpdateStatus_Params
	{
	};

	/**
	 * Function InventoryIconEntry.InventoryIconEntry_C.On Key Bind Changed
	 */
	struct UInventoryIconEntry_C_On_Key_Bind_Changed_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InventoryIconEntry.InventoryIconEntry_C.Hide
	 */
	struct UInventoryIconEntry_C_Hide_Params
	{
	};

	/**
	 * Function InventoryIconEntry.InventoryIconEntry_C.SetSelectedState
	 */
	struct UInventoryIconEntry_C_SetSelectedState_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function InventoryIconEntry.InventoryIconEntry_C.ExecuteUbergraph_InventoryIconEntry
	 */
	struct UInventoryIconEntry_C_ExecuteUbergraph_InventoryIconEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
