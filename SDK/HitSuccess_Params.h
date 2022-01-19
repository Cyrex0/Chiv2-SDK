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
	 * Function HitSuccess.CombatStateBlueprint_0_C.OnAssemble_CombatStateBlueprint_1
	 */
	struct UCombatStateBlueprint_0_C_OnAssemble_CombatStateBlueprint_1_Params
	{
	};

	/**
	 * Function HitSuccess.CombatStateBlueprint_0_C.EventEndAnimation
	 */
	struct UCombatStateBlueprint_0_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function HitSuccess.CombatStateBlueprint_0_C.EventBeginFire
	 */
	struct UCombatStateBlueprint_0_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HitSuccess.CombatStateBlueprint_0_C.SetCanCombo
	 */
	struct UCombatStateBlueprint_0_C_SetCanCombo_Params
	{
	};

	/**
	 * Function HitSuccess.CombatStateBlueprint_0_C.EventBeginState
	 */
	struct UCombatStateBlueprint_0_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HitSuccess.CombatStateBlueprint_0_C.SetCanSpecial
	 */
	struct UCombatStateBlueprint_0_C_SetCanSpecial_Params
	{
	};

	/**
	 * Function HitSuccess.CombatStateBlueprint_0_C.TryStartAttack
	 */
	struct UCombatStateBlueprint_0_C_TryStartAttack_Params
	{
	};

	/**
	 * Function HitSuccess.CombatStateBlueprint_0_C.AllowParry
	 */
	struct UCombatStateBlueprint_0_C_AllowParry_Params
	{
	};

	/**
	 * Function HitSuccess.CombatStateBlueprint_0_C.ExecuteUbergraph_CombatStateBlueprint_1
	 */
	struct UCombatStateBlueprint_0_C_ExecuteUbergraph_CombatStateBlueprint_1_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HitSuccess.HitSuccess_C.OnAssemble_CombatStateBlueprint_1
	 */
	struct UHitSuccess_C_OnAssemble_CombatStateBlueprint_1_Params
	{
	};

	/**
	 * Function HitSuccess.HitSuccess_C.EventEndAnimation
	 */
	struct UHitSuccess_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function HitSuccess.HitSuccess_C.EventBeginFire
	 */
	struct UHitSuccess_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function HitSuccess.HitSuccess_C.SetCanCombo
	 */
	struct UHitSuccess_C_SetCanCombo_Params
	{
	};

	/**
	 * Function HitSuccess.HitSuccess_C.EventBeginState
	 */
	struct UHitSuccess_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HitSuccess.HitSuccess_C.SetCanSpecial
	 */
	struct UHitSuccess_C_SetCanSpecial_Params
	{
	};

	/**
	 * Function HitSuccess.HitSuccess_C.TryStartAttack
	 */
	struct UHitSuccess_C_TryStartAttack_Params
	{
	};

	/**
	 * Function HitSuccess.HitSuccess_C.AllowParry
	 */
	struct UHitSuccess_C_AllowParry_Params
	{
	};

	/**
	 * Function HitSuccess.HitSuccess_C.ExecuteUbergraph_HitSuccess
	 */
	struct UHitSuccess_C_ExecuteUbergraph_HitSuccess_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
