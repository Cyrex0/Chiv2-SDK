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
	 * Function AchievementMenuEntry.AchievementMenuEntry_C.PreConstruct
	 */
	struct UAchievementMenuEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function AchievementMenuEntry.AchievementMenuEntry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAchievementMenuEntry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function AchievementMenuEntry.AchievementMenuEntry_C.OpenMessage
	 */
	struct UAchievementMenuEntry_C_OpenMessage_Params
	{
	};

	/**
	 * Function AchievementMenuEntry.AchievementMenuEntry_C.Update Widget
	 */
	struct UAchievementMenuEntry_C_Update_Widget_Params
	{
	};

	/**
	 * Function AchievementMenuEntry.AchievementMenuEntry_C.SetState
	 */
	struct UAchievementMenuEntry_C_SetState_Params
	{
	public:
		AchievementState_EAchievementState                         Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AchievementMenuEntry.AchievementMenuEntry_C.CloseMessage
	 */
	struct UAchievementMenuEntry_C_CloseMessage_Params
	{
	};

	/**
	 * Function AchievementMenuEntry.AchievementMenuEntry_C.ExecuteUbergraph_AchievementMenuEntry
	 */
	struct UAchievementMenuEntry_C_ExecuteUbergraph_AchievementMenuEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AchievementMenuEntry.AchievementMenuEntry_C.OnEntryOpened__DelegateSignature
	 */
	struct UAchievementMenuEntry_C_OnEntryOpened__DelegateSignature_Params
	{
	public:
		class UAchievementMenuEntry_C*                             Entry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
