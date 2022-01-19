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
	 * Function KnockdownGround.KnockdownGround_C.HitDirectionToGetUpDirection
	 */
	struct UKnockdownGround_C_HitDirectionToGetUpDirection_Params
	{
	public:
		class FName                                                Direction;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KnockdownGround.KnockdownGround_C.OverrideCrowdControlEvent
	 */
	struct UKnockdownGround_C_OverrideCrowdControlEvent_Params
	{
	public:
		TBL_ECrowdControlCombatState                               CombatState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_ECrowdControlVariant                                   Variant;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KnockdownGround.KnockdownGround_C.OnAssemble_KnockdownGround
	 */
	struct UKnockdownGround_C_OnAssemble_KnockdownGround_Params
	{
	};

	/**
	 * Function KnockdownGround.KnockdownGround_C.EventBeginState
	 */
	struct UKnockdownGround_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KnockdownGround.KnockdownGround_C.OnMovementInput
	 */
	struct UKnockdownGround_C_OnMovementInput_Params
	{
	public:
		class FName                                                Direction;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KnockdownGround.KnockdownGround_C.EventEndState
	 */
	struct UKnockdownGround_C_EventEndState_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bStartAttack;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KnockdownGround.KnockdownGround_C.MinimumTimeEnded
	 */
	struct UKnockdownGround_C_MinimumTimeEnded_Params
	{
	};

	/**
	 * Function KnockdownGround.KnockdownGround_C.OnJumpPressed
	 */
	struct UKnockdownGround_C_OnJumpPressed_Params
	{
	};

	/**
	 * Function KnockdownGround.KnockdownGround_C.ExecuteUbergraph_KnockdownGround
	 */
	struct UKnockdownGround_C_ExecuteUbergraph_KnockdownGround_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
