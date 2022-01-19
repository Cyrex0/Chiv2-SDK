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
	 * Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Get Relevant Overview Sequence
	 */
	struct ACinematicTBLSpectatorPawn_C_Get_Relevant_Overview_Sequence_Params
	{
	public:
		class ALevelSequenceActor*                                 Sequence;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveBeginPlay
	 */
	struct ACinematicTBLSpectatorPawn_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveDestroyed
	 */
	struct ACinematicTBLSpectatorPawn_C_ReceiveDestroyed_Params
	{
	};

	/**
	 * Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Start the overview sequence
	 */
	struct ACinematicTBLSpectatorPawn_C_Start_the_overview_sequence_Params
	{
	};

	/**
	 * Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceiveUnpossessed
	 */
	struct ACinematicTBLSpectatorPawn_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.Current Stage Changed_Event_1
	 */
	struct ACinematicTBLSpectatorPawn_C_Current_Stage_Changed_Event_1_Params
	{
	public:
		class UObject*                                             Previous_Stage;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             New_Stage;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ReceivePossessed
	 */
	struct ACinematicTBLSpectatorPawn_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.SpawnWaveReplicated
	 */
	struct ACinematicTBLSpectatorPawn_C_SpawnWaveReplicated_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicTBLSpectatorPawn.CinematicTBLSpectatorPawn_C.ExecuteUbergraph_CinematicTBLSpectatorPawn
	 */
	struct ACinematicTBLSpectatorPawn_C_ExecuteUbergraph_CinematicTBLSpectatorPawn_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
