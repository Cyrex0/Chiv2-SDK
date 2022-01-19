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
	 * Function ParryBreak.ParryBreak_C.CanSwitchInventoryItems
	 */
	struct UParryBreak_C_CanSwitchInventoryItems_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ParryBreak.ParryBreak_C.OnAssemble_ParryBreak
	 */
	struct UParryBreak_C_OnAssemble_ParryBreak_Params
	{
	};

	/**
	 * Function ParryBreak.ParryBreak_C.EventBeginState
	 */
	struct UParryBreak_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ParryBreak.ParryBreak_C.EventBeginFire
	 */
	struct UParryBreak_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ParryBreak.ParryBreak_C.ParryBreakStamina
	 */
	struct UParryBreak_C_ParryBreakStamina_Params
	{
	};

	/**
	 * Function ParryBreak.ParryBreak_C.SoftRecovery
	 */
	struct UParryBreak_C_SoftRecovery_Params
	{
	};

	/**
	 * Function ParryBreak.ParryBreak_C.DashOut
	 */
	struct UParryBreak_C_DashOut_Params
	{
	};

	/**
	 * Function ParryBreak.ParryBreak_C.TryStartAttack
	 */
	struct UParryBreak_C_TryStartAttack_Params
	{
	};

	/**
	 * Function ParryBreak.ParryBreak_C.OnStartEquip
	 */
	struct UParryBreak_C_OnStartEquip_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ParryBreak.ParryBreak_C.PlayEquipTimer
	 */
	struct UParryBreak_C_PlayEquipTimer_Params
	{
	};

	/**
	 * Function ParryBreak.ParryBreak_C.EventEndState
	 */
	struct UParryBreak_C_EventEndState_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bStartAttack;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ParryBreak.ParryBreak_C.JabOut
	 */
	struct UParryBreak_C_JabOut_Params
	{
	};

	/**
	 * Function ParryBreak.ParryBreak_C.ExecuteUbergraph_ParryBreak
	 */
	struct UParryBreak_C_ExecuteUbergraph_ParryBreak_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
