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
	 * Function StandardStage.StandardStage_C.GetTimeRemaining
	 */
	struct AStandardStage_C_GetTimeRemaining_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StandardStage.StandardStage_C.GetTimeRemainingPercent
	 */
	struct AStandardStage_C_GetTimeRemainingPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StandardStage.StandardStage_C.GetStageIdNum
	 */
	struct AStandardStage_C_GetStageIdNum_Params
	{
	public:
		int                                                        ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StandardStage.StandardStage_C.GetStageCommander
	 */
	struct AStandardStage_C_GetStageCommander_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StandardStage.StandardStage_C.CompleteStage
	 */
	struct AStandardStage_C_CompleteStage_Params
	{
	};

	/**
	 * Function StandardStage.StandardStage_C.IsStageReadyToComplete
	 */
	struct AStandardStage_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StandardStage.StandardStage_C.StartStage
	 */
	struct AStandardStage_C_StartStage_Params
	{
	};

	/**
	 * Function StandardStage.StandardStage_C.BroadcastStageEnded
	 */
	struct AStandardStage_C_BroadcastStageEnded_Params
	{
	};

	/**
	 * Function StandardStage.StandardStage_C.BroadcastStageStarted
	 */
	struct AStandardStage_C_BroadcastStageStarted_Params
	{
	};

	/**
	 * Function StandardStage.StandardStage_C.ExecuteUbergraph_StandardStage
	 */
	struct AStandardStage_C_ExecuteUbergraph_StandardStage_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StandardStage.StandardStage_C.On Cosmetic Stage Ended__DelegateSignature
	 */
	struct AStandardStage_C_On_Cosmetic_Stage_Ended__DelegateSignature_Params
	{
	};

	/**
	 * Function StandardStage.StandardStage_C.On Cosmetic Stage Started__DelegateSignature
	 */
	struct AStandardStage_C_On_Cosmetic_Stage_Started__DelegateSignature_Params
	{
	};

	/**
	 * Function StandardStage.StandardStage_C.On Stage Ended__DelegateSignature
	 */
	struct AStandardStage_C_On_Stage_Ended__DelegateSignature_Params
	{
	public:
		class AStandardStage_C*                                    Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StandardStage.StandardStage_C.On Stage Started__DelegateSignature
	 */
	struct AStandardStage_C_On_Stage_Started__DelegateSignature_Params
	{
	public:
		class AStandardStage_C*                                    Stage;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
