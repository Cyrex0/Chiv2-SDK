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
	 * Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnGenerateRow_2
	 */
	struct UPlayerlistDropdownMenu_C_OnGenerateRow_2_Params
	{
	public:
		class UDropDownListItem*                                   DropDownItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.AddText
	 */
	struct UPlayerlistDropdownMenu_C_AddText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.RemoveAllItems
	 */
	struct UPlayerlistDropdownMenu_C_RemoveAllItems_Params
	{
	};

	/**
	 * Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnDropDownClicked
	 */
	struct UPlayerlistDropdownMenu_C_OnDropDownClicked_Params
	{
	public:
		class UOptionsDropDownEntry_C*                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnMouseButtonDownEvent_Event_1
	 */
	struct UPlayerlistDropdownMenu_C_OnMouseButtonDownEvent_Event_1_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.UpdatePlayername
	 */
	struct UPlayerlistDropdownMenu_C_UpdatePlayername_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnInitialized
	 */
	struct UPlayerlistDropdownMenu_C_OnInitialized_Params
	{
	};

	/**
	 * Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.ExecuteUbergraph_PlayerlistDropdownMenu
	 */
	struct UPlayerlistDropdownMenu_C_ExecuteUbergraph_PlayerlistDropdownMenu_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnSelectionChanged__DelegateSignature
	 */
	struct UPlayerlistDropdownMenu_C_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
