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
	 * Function A_Moveto.A_MoveTo_C.Get Location or Actor I Want To Move To
	 */
	struct UA_MoveTo_C_Get_Location_or_Actor_I_Want_To_Move_To_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AActor*                                              TargetActor;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AAIController*                                       Controller;                                              // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function A_Moveto.A_MoveTo_C.OnMoveFinished_465269984326E120B547178314624ED9
	 */
	struct UA_MoveTo_C_OnMoveFinished_465269984326E120B547178314624ED9_Params
	{
	public:
		AIModule_EPathFollowingResult                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function A_Moveto.A_MoveTo_C.OnRequestFailed_465269984326E120B547178314624ED9
	 */
	struct UA_MoveTo_C_OnRequestFailed_465269984326E120B547178314624ED9_Params
	{
	};

	/**
	 * Function A_Moveto.A_MoveTo_C.PerformAction
	 */
	struct UA_MoveTo_C_PerformAction_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function A_Moveto.A_MoveTo_C.CompleteAction
	 */
	struct UA_MoveTo_C_CompleteAction_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function A_Moveto.A_MoveTo_C.Finish the move
	 */
	struct UA_MoveTo_C_Finish_the_move_Params
	{
	};

	/**
	 * Function A_Moveto.A_MoveTo_C.On Move is finished
	 */
	struct UA_MoveTo_C_On_Move_is_finished_Params
	{
	};

	/**
	 * Function A_Moveto.A_MoveTo_C.ExecuteUbergraph_A_MoveTo
	 */
	struct UA_MoveTo_C_ExecuteUbergraph_A_MoveTo_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
