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
	 * Function ConditionsBarEntry.ConditionsBarEntry_C.AssignCondition
	 */
	struct UConditionsBarEntry_C_AssignCondition_Params
	{
	public:
		TBL_EConditionType                                         Condition;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ConditionsBarEntry.ConditionsBarEntry_C.UnassignCondition
	 */
	struct UConditionsBarEntry_C_UnassignCondition_Params
	{
	};

	/**
	 * Function ConditionsBarEntry.ConditionsBarEntry_C.Construct
	 */
	struct UConditionsBarEntry_C_Construct_Params
	{
	};

	/**
	 * Function ConditionsBarEntry.ConditionsBarEntry_C.ExecuteUbergraph_ConditionsBarEntry
	 */
	struct UConditionsBarEntry_C_ExecuteUbergraph_ConditionsBarEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
