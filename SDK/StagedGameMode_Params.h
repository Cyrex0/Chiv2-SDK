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
	 * Function StagedGameMode.StagedGameMode_C.IsAutoBalanceBlocked
	 */
	struct AStagedGameMode_C_IsAutoBalanceBlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.K2_GetCurrentStage
	 */
	struct AStagedGameMode_C_K2_GetCurrentStage_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.Get First Stage
	 */
	struct AStagedGameMode_C_Get_First_Stage_Params
	{
	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.Get First Stage With Warmup
	 */
	struct AStagedGameMode_C_Get_First_Stage_With_Warmup_Params
	{
	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.ReceiveTick
	 */
	struct AStagedGameMode_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.K2_HandleMatchHasStarted
	 */
	struct AStagedGameMode_C_K2_HandleMatchHasStarted_Params
	{
	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.K2_OnSetMatchState
	 */
	struct AStagedGameMode_C_K2_OnSetMatchState_Params
	{
	public:
		class FName                                                NewState;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.K2_HandleSkipStage
	 */
	struct AStagedGameMode_C_K2_HandleSkipStage_Params
	{
	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.K2_HandleMatchIsWaitingToStart
	 */
	struct AStagedGameMode_C_K2_HandleMatchIsWaitingToStart_Params
	{
	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.ExecuteUbergraph_StagedGameMode
	 */
	struct AStagedGameMode_C_ExecuteUbergraph_StagedGameMode_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StagedGameMode.StagedGameMode_C.Started New Stage__DelegateSignature
	 */
	struct AStagedGameMode_C_Started_New_Stage__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
