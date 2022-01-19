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
	 * Function SpecialItemWidget.SpecialItemWidget_C.UpdateInputMethod
	 */
	struct USpecialItemWidget_C_UpdateInputMethod_Params
	{
	public:
		TBL_EGamepadInputMode                                      Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.Construct
	 */
	struct USpecialItemWidget_C_Construct_Params
	{
	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.OnPossessedPawn
	 */
	struct USpecialItemWidget_C_OnPossessedPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.PreConstruct
	 */
	struct USpecialItemWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.OnChargeUpdated_Event_1
	 */
	struct USpecialItemWidget_C_OnChargeUpdated_Event_1_Params
	{
	public:
		float                                                      CurrentCharge;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxCharge;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_ESpecialItemChargeType                                 ChargeType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.SetIsAvailable
	 */
	struct USpecialItemWidget_C_SetIsAvailable_Params
	{
	public:
		bool                                                       IsInitializing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.SetUnavailable
	 */
	struct USpecialItemWidget_C_SetUnavailable_Params
	{
	public:
		bool                                                       IsInitializing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.OnUseSpecialItem_Event_1
	 */
	struct USpecialItemWidget_C_OnUseSpecialItem_Event_1_Params
	{
	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.OnEquipSpecialItem_Event_1
	 */
	struct USpecialItemWidget_C_OnEquipSpecialItem_Event_1_Params
	{
	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.OnSpecialItemUseFailed_Event_1
	 */
	struct USpecialItemWidget_C_OnSpecialItemUseFailed_Event_1_Params
	{
	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.OnGamepadInputModeChanged_Event_1
	 */
	struct USpecialItemWidget_C_OnGamepadInputModeChanged_Event_1_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.SpecialItemSet
	 */
	struct USpecialItemWidget_C_SpecialItemSet_Params
	{
	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.OnItemStackChanged_Event_1
	 */
	struct USpecialItemWidget_C_OnItemStackChanged_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Delta;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpecialItemWidget.SpecialItemWidget_C.ExecuteUbergraph_SpecialItemWidget
	 */
	struct USpecialItemWidget_C_ExecuteUbergraph_SpecialItemWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
