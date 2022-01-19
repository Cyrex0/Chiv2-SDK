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
	 * Function Blocked.Blocked_C.GetAttackTransition
	 */
	struct UBlocked_C_GetAttackTransition_Params
	{
	public:
		TBL_EAttackTransition                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Blocked.Blocked_C.OnAssemble_Blocked
	 */
	struct UBlocked_C_OnAssemble_Blocked_Params
	{
	};

	/**
	 * Function Blocked.Blocked_C.EventBeginFire
	 */
	struct UBlocked_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Blocked.Blocked_C.AllowCombo
	 */
	struct UBlocked_C_AllowCombo_Params
	{
	};

	/**
	 * Function Blocked.Blocked_C.EventBeginState
	 */
	struct UBlocked_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Blocked.Blocked_C.AllowParry
	 */
	struct UBlocked_C_AllowParry_Params
	{
	};

	/**
	 * Function Blocked.Blocked_C.SoftRecovery
	 */
	struct UBlocked_C_SoftRecovery_Params
	{
	};

	/**
	 * Function Blocked.Blocked_C.TryStartAttack
	 */
	struct UBlocked_C_TryStartAttack_Params
	{
	};

	/**
	 * Function Blocked.Blocked_C.ExecuteUbergraph_Blocked
	 */
	struct UBlocked_C_ExecuteUbergraph_Blocked_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
