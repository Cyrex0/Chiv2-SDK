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
	 * Function ConditionsBar.ConditionsBar_C.GetFreeConditionsWidget
	 */
	struct UConditionsBar_C_GetFreeConditionsWidget_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UConditionsBarEntry_C*                               Widget;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.RemoveCondition
	 */
	struct UConditionsBar_C_RemoveCondition_Params
	{
	public:
		TBL_EConditionType                                         RemovedCondition;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.AddCondition
	 */
	struct UConditionsBar_C_AddCondition_Params
	{
	public:
		TBL_EConditionType                                         NewCondition;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.GetConditionWidgets
	 */
	struct UConditionsBar_C_GetConditionWidgets_Params
	{
	public:
		TArray<class UConditionsBarEntry_C*>                       Array;                                                   // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.ClearConditionsBar
	 */
	struct UConditionsBar_C_ClearConditionsBar_Params
	{
	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.Construct
	 */
	struct UConditionsBar_C_Construct_Params
	{
	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.OnApplyCondition_Event_1
	 */
	struct UConditionsBar_C_OnApplyCondition_Event_1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.OnRemoveCondition_Event_1
	 */
	struct UConditionsBar_C_OnRemoveCondition_Event_1_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.OnPossessedPawn_Event_1
	 */
	struct UConditionsBar_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.OnClientPossessedPawn_Event_1
	 */
	struct UConditionsBar_C_OnClientPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.BindOnUpdatedEvents
	 */
	struct UConditionsBar_C_BindOnUpdatedEvents_Params
	{
	public:
		class UConditionsComponent*                                Comp;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.ExecuteUbergraph_ConditionsBar
	 */
	struct UConditionsBar_C_ExecuteUbergraph_ConditionsBar_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBar.ConditionsBar_C.IsShowingCondition__DelegateSignature
	 */
	struct UConditionsBar_C_IsShowingCondition__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
