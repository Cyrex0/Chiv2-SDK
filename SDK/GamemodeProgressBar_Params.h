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
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.GetProgressPercentageText
	 */
	struct UGamemodeProgressBar_C_GetProgressPercentageText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.ApplyState
	 */
	struct UGamemodeProgressBar_C_ApplyState_Params
	{
	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.SetProgress
	 */
	struct UGamemodeProgressBar_C_SetProgress_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.PreConstruct
	 */
	struct UGamemodeProgressBar_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.Update Parameters
	 */
	struct UGamemodeProgressBar_C_Update_Parameters_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ObjectiveMarkerState_EObjectiveMarkerState                 State;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ObjMarkerTeam_EObjMarkerTeam                               Team;                                                    // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show_Progress;                                           // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                Objective_Text;                                          // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShowIcon;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UMaterialInstance*                                   MaterialInstance;                                        // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.Update Progress
	 */
	struct UGamemodeProgressBar_C_Update_Progress_Params
	{
	public:
		float                                                      Progress;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.Update State
	 */
	struct UGamemodeProgressBar_C_Update_State_Params
	{
	public:
		ObjectiveMarkerState_EObjectiveMarkerState                 State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.Update Team
	 */
	struct UGamemodeProgressBar_C_Update_Team_Params
	{
	public:
		ObjMarkerTeam_EObjMarkerTeam                               Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AttackingTeam;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.Update Team From Faction
	 */
	struct UGamemodeProgressBar_C_Update_Team_From_Faction_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.Construct
	 */
	struct UGamemodeProgressBar_C_Construct_Params
	{
	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.PlayScoreGainedAnim
	 */
	struct UGamemodeProgressBar_C_PlayScoreGainedAnim_Params
	{
	public:
		GamemodeScoreChange_EGamemodeScoreChange                   Change;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.OnAnimationStarted
	 */
	struct UGamemodeProgressBar_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.OnAnimationFinished
	 */
	struct UGamemodeProgressBar_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.PlayHighlightAnim
	 */
	struct UGamemodeProgressBar_C_PlayHighlightAnim_Params
	{
	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.Tick
	 */
	struct UGamemodeProgressBar_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function GamemodeProgressBar.GamemodeProgressBar_C.ExecuteUbergraph_GamemodeProgressBar
	 */
	struct UGamemodeProgressBar_C_ExecuteUbergraph_GamemodeProgressBar_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
