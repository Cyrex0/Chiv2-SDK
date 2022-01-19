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
	 * Function A_UseInteractable.A_UseInteractable_C.Get Location or Actor I Want To Move To
	 */
	struct UA_UseInteractable_C_Get_Location_or_Actor_I_Want_To_Move_To_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class AActor*                                              TargetActor;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AAIController*                                       Controller;                                              // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function A_UseInteractable.A_UseInteractable_C.IsInRangeOfTarget
	 */
	struct UA_UseInteractable_C_IsInRangeOfTarget_Params
	{
	public:
		float                                                      AcceptanceMultiplier;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInRange;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function A_UseInteractable.A_UseInteractable_C.OnMoveFinished_C60871134FF654389219A2AFBCB9B884
	 */
	struct UA_UseInteractable_C_OnMoveFinished_C60871134FF654389219A2AFBCB9B884_Params
	{
	public:
		AIModule_EPathFollowingResult                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AAIController*                                       AIController;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function A_UseInteractable.A_UseInteractable_C.OnRequestFailed_C60871134FF654389219A2AFBCB9B884
	 */
	struct UA_UseInteractable_C_OnRequestFailed_C60871134FF654389219A2AFBCB9B884_Params
	{
	};

	/**
	 * Function A_UseInteractable.A_UseInteractable_C.On Move is finished
	 */
	struct UA_UseInteractable_C_On_Move_is_finished_Params
	{
	};

	/**
	 * Function A_UseInteractable.A_UseInteractable_C.PerformAction
	 */
	struct UA_UseInteractable_C_PerformAction_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function A_UseInteractable.A_UseInteractable_C.CompleteAction
	 */
	struct UA_UseInteractable_C_CompleteAction_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function A_UseInteractable.A_UseInteractable_C.OnInteractableStoppedBeingHeld_Event_1
	 */
	struct UA_UseInteractable_C_OnInteractableStoppedBeingHeld_Event_1_Params
	{
	public:
		class UInteractableComponent*                              InteractableUsed;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function A_UseInteractable.A_UseInteractable_C.ExecuteUbergraph_A_UseInteractable
	 */
	struct UA_UseInteractable_C_ExecuteUbergraph_A_UseInteractable_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
