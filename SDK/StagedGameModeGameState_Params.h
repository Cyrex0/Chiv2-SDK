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
	 * Function StagedGameModeGameState.StagedGameModeGameState_C.GetWinningFactionFromPreviousStage
	 */
	struct AStagedGameModeGameState_C_GetWinningFactionFromPreviousStage_Params
	{
	public:
		TBL_EFaction                                               PreviousWinningFaction;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StagedGameModeGameState.StagedGameModeGameState_C.GetCurrentStage
	 */
	struct AStagedGameModeGameState_C_GetCurrentStage_Params
	{
	};

	/**
	 * Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Actor
	 */
	struct AStagedGameModeGameState_C_OnRep_Stage_Actor_Params
	{
	};

	/**
	 * Function StagedGameModeGameState.StagedGameModeGameState_C.OnRep_Stage Index
	 */
	struct AStagedGameModeGameState_C_OnRep_Stage_Index_Params
	{
	};

	/**
	 * Function StagedGameModeGameState.StagedGameModeGameState_C.Set New Stage
	 */
	struct AStagedGameModeGameState_C_Set_New_Stage_Params
	{
	};

	/**
	 * Function StagedGameModeGameState.StagedGameModeGameState_C.ReceiveBeginPlay
	 */
	struct AStagedGameModeGameState_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function StagedGameModeGameState.StagedGameModeGameState_C.ExecuteUbergraph_StagedGameModeGameState
	 */
	struct AStagedGameModeGameState_C_ExecuteUbergraph_StagedGameModeGameState_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StagedGameModeGameState.StagedGameModeGameState_C.Stage Index Changed__DelegateSignature
	 */
	struct AStagedGameModeGameState_C_Stage_Index_Changed__DelegateSignature_Params
	{
	public:
		int                                                        New_Index;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StagedGameModeGameState.StagedGameModeGameState_C.Current Stage Changed__DelegateSignature
	 */
	struct AStagedGameModeGameState_C_Current_Stage_Changed__DelegateSignature_Params
	{
	public:
		class UObject*                                             Previous_Stage;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             New_Stage;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
