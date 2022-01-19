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
	 * Function TutorialActionList.TutorialActionList_C.GetActionEntry
	 */
	struct UTutorialActionList_C_GetActionEntry_Params
	{
	public:
		class UTutorialActionEntry_C*                              Action_Entry;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialActionList.TutorialActionList_C.EntryFailed
	 */
	struct UTutorialActionList_C_EntryFailed_Params
	{
	public:
		class FText                                                EntryText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function TutorialActionList.TutorialActionList_C.ResetEntries
	 */
	struct UTutorialActionList_C_ResetEntries_Params
	{
	};

	/**
	 * Function TutorialActionList.TutorialActionList_C.GetPercentTasksDone
	 */
	struct UTutorialActionList_C_GetPercentTasksDone_Params
	{
	public:
		float                                                      ProgressPercent;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialActionList.TutorialActionList_C.ClearEntries
	 */
	struct UTutorialActionList_C_ClearEntries_Params
	{
	};

	/**
	 * Function TutorialActionList.TutorialActionList_C.UpdateEntryCount
	 */
	struct UTutorialActionList_C_UpdateEntryCount_Params
	{
	public:
		class FString                                              EntryText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int                                                        NewCount;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialActionList.TutorialActionList_C.AddEntry
	 */
	struct UTutorialActionList_C_AddEntry_Params
	{
	public:
		class FString                                              EntryText;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ControllerEntryText;                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              EntryKeyboardCallout;                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              EntryControllerCallout;                                  // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                EntryDesc;                                               // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int                                                        EntryCount;                                              // 0x0058(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TutorialActionList.TutorialActionList_C.Construct
	 */
	struct UTutorialActionList_C_Construct_Params
	{
	};

	/**
	 * Function TutorialActionList.TutorialActionList_C.ExecuteUbergraph_TutorialActionList
	 */
	struct UTutorialActionList_C_ExecuteUbergraph_TutorialActionList_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
