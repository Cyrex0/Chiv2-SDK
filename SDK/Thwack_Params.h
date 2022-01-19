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
	 * Function Thwack.CombatStateBlueprint_0_C.GetTimeToClearQueue
	 */
	struct UCombatStateBlueprint_0_C_GetTimeToClearQueue_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.GetAttackTransition
	 */
	struct UCombatStateBlueprint_0_C_GetAttackTransition_Params
	{
	public:
		TBL_EAttackTransition                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1
	 */
	struct UCombatStateBlueprint_0_C_OnAssemble_CombatStateBlueprint_1_Params
	{
	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.EventEndAnimation
	 */
	struct UCombatStateBlueprint_0_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.EventBeginFire
	 */
	struct UCombatStateBlueprint_0_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.EventBeginState
	 */
	struct UCombatStateBlueprint_0_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.EnableCombo
	 */
	struct UCombatStateBlueprint_0_C_EnableCombo_Params
	{
	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.TryStartAttack
	 */
	struct UCombatStateBlueprint_0_C_TryStartAttack_Params
	{
	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.EnableParryFromShove
	 */
	struct UCombatStateBlueprint_0_C_EnableParryFromShove_Params
	{
	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.EnableJabShoveSpecial
	 */
	struct UCombatStateBlueprint_0_C_EnableJabShoveSpecial_Params
	{
	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.EnableAttackFromShove
	 */
	struct UCombatStateBlueprint_0_C_EnableAttackFromShove_Params
	{
	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.AllowParry
	 */
	struct UCombatStateBlueprint_0_C_AllowParry_Params
	{
	};

	/**
	 * Function Thwack.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1
	 */
	struct UCombatStateBlueprint_0_C_ExecuteUbergraph_CombatStateBlueprint_1_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Thwack.Thwack_C.GetTimeToClearQueue
	 */
	struct UThwack_C_GetTimeToClearQueue_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Thwack.Thwack_C.GetAttackTransition
	 */
	struct UThwack_C_GetAttackTransition_Params
	{
	public:
		TBL_EAttackTransition                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Thwack.Thwack_C.OnAssemble_CombatStateBlueprint_1
	 */
	struct UThwack_C_OnAssemble_CombatStateBlueprint_1_Params
	{
	};

	/**
	 * Function Thwack.Thwack_C.EventEndAnimation
	 */
	struct UThwack_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function Thwack.Thwack_C.EventBeginFire
	 */
	struct UThwack_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Thwack.Thwack_C.EventBeginState
	 */
	struct UThwack_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Thwack.Thwack_C.EnableCombo
	 */
	struct UThwack_C_EnableCombo_Params
	{
	};

	/**
	 * Function Thwack.Thwack_C.TryStartAttack
	 */
	struct UThwack_C_TryStartAttack_Params
	{
	};

	/**
	 * Function Thwack.Thwack_C.EnableParryFromShove
	 */
	struct UThwack_C_EnableParryFromShove_Params
	{
	};

	/**
	 * Function Thwack.Thwack_C.EnableJabShoveSpecial
	 */
	struct UThwack_C_EnableJabShoveSpecial_Params
	{
	};

	/**
	 * Function Thwack.Thwack_C.EnableAttackFromShove
	 */
	struct UThwack_C_EnableAttackFromShove_Params
	{
	};

	/**
	 * Function Thwack.Thwack_C.AllowParry
	 */
	struct UThwack_C_AllowParry_Params
	{
	};

	/**
	 * Function Thwack.Thwack_C.EventWasParried
	 */
	struct UThwack_C_EventWasParried_Params
	{
	public:
		class ATBLCharacter*                                       ParryingCharacter;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Thwack.Thwack_C.EnableComboAfterJabWasBlocked
	 */
	struct UThwack_C_EnableComboAfterJabWasBlocked_Params
	{
	};

	/**
	 * Function Thwack.Thwack_C.ExecuteUbergraph_Thwack
	 */
	struct UThwack_C_ExecuteUbergraph_Thwack_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
