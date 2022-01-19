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
	 * Function VotekickWidget.VotekickWidget_C.SubmitVote
	 */
	struct UVotekickWidget_C_SubmitVote_Params
	{
	public:
		class FName                                                Vote;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsVoteSubmitted;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.UpdateIdleTime
	 */
	struct UVotekickWidget_C_UpdateIdleTime_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.UpdateTeamDamage
	 */
	struct UVotekickWidget_C_UpdateTeamDamage_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.UpdatePing
	 */
	struct UVotekickWidget_C_UpdatePing_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.UpdateTime
	 */
	struct UVotekickWidget_C_UpdateTime_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.UpdateReportingPlayer
	 */
	struct UVotekickWidget_C_UpdateReportingPlayer_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.UpdateKickTarget
	 */
	struct UVotekickWidget_C_UpdateKickTarget_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.UpdateVotesNeeded
	 */
	struct UVotekickWidget_C_UpdateVotesNeeded_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.UpdateVotingNumbers
	 */
	struct UVotekickWidget_C_UpdateVotingNumbers_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.UpdateWidget
	 */
	struct UVotekickWidget_C_UpdateWidget_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.Construct
	 */
	struct UVotekickWidget_C_Construct_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.Tick
	 */
	struct UVotekickWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.EnableWidget
	 */
	struct UVotekickWidget_C_EnableWidget_Params
	{
	public:
		class UKickVotingInstance*                                 KickVote;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.VoteFinished
	 */
	struct UVotekickWidget_C_VoteFinished_Params
	{
	public:
		struct FVotingResults                                      VoteResults;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.DisableWidget
	 */
	struct UVotekickWidget_C_DisableWidget_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.VoteEndDisableWidget
	 */
	struct UVotekickWidget_C_VoteEndDisableWidget_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.VoteNo
	 */
	struct UVotekickWidget_C_VoteNo_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.VoteYes
	 */
	struct UVotekickWidget_C_VoteYes_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.OnVotesReplicated_Event_1
	 */
	struct UVotekickWidget_C_OnVotesReplicated_Event_1_Params
	{
	};

	/**
	 * Function VotekickWidget.VotekickWidget_C.ExecuteUbergraph_VotekickWidget
	 */
	struct UVotekickWidget_C_ExecuteUbergraph_VotekickWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
