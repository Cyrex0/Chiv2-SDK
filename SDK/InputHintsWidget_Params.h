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
	 * Function InputHintsWidget.InputHintsWidget_C.FindCrosshairConditionWidget
	 */
	struct UInputHintsWidget_C_FindCrosshairConditionWidget_Params
	{
	public:
		class FString                                              InActionName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Found;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UCrosshairConditonText_C*                            Widget;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Index;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InputHintsWidget.InputHintsWidget_C.FindCrosshairCondition
	 */
	struct UInputHintsWidget_C_FindCrosshairCondition_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFound;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int                                                        ArrayIndex;                                              // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function InputHintsWidget.InputHintsWidget_C.UpdateCrosshairConditionWidgets
	 */
	struct UInputHintsWidget_C_UpdateCrosshairConditionWidgets_Params
	{
	};

	/**
	 * Function InputHintsWidget.InputHintsWidget_C.InitCrosshairConditionWidgets
	 */
	struct UInputHintsWidget_C_InitCrosshairConditionWidgets_Params
	{
	};

	/**
	 * Function InputHintsWidget.InputHintsWidget_C.EnableCombatConditions
	 */
	struct UInputHintsWidget_C_EnableCombatConditions_Params
	{
	public:
		class FString                                              Keybinding;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                Tag;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                HintText;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Enable;                                                  // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AddToTop;                                                // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function InputHintsWidget.InputHintsWidget_C.ClearAllHints
	 */
	struct UInputHintsWidget_C_ClearAllHints_Params
	{
	};

	/**
	 * Function InputHintsWidget.InputHintsWidget_C.OnPlayerKilled_Event_1
	 */
	struct UInputHintsWidget_C_OnPlayerKilled_Event_1_Params
	{
	public:
		struct FDeathEvent                                         DeathEvent;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function InputHintsWidget.InputHintsWidget_C.Construct
	 */
	struct UInputHintsWidget_C_Construct_Params
	{
	};

	/**
	 * Function InputHintsWidget.InputHintsWidget_C.ExecuteUbergraph_InputHintsWidget
	 */
	struct UInputHintsWidget_C_ExecuteUbergraph_InputHintsWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
