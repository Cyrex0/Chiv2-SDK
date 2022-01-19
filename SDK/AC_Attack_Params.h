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
	 * Function AC_Attack.AC_Attack_C.PerformAction
	 */
	struct UAC_Attack_C_PerformAction_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function AC_Attack.AC_Attack_C.Combat State Begin
	 */
	struct UAC_Attack_C_Combat_State_Begin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                State;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAttackInfo                                         EventAttackInfo;                                         // 0x0010(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UCombatState*                                        CombatState;                                             // 0x0118(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AC_Attack.AC_Attack_C.Timeout
	 */
	struct UAC_Attack_C_Timeout_Params
	{
	};

	/**
	 * Function AC_Attack.AC_Attack_C.CompleteAction
	 */
	struct UAC_Attack_C_CompleteAction_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function AC_Attack.AC_Attack_C.ExecuteUbergraph_AC_Attack
	 */
	struct UAC_Attack_C_ExecuteUbergraph_AC_Attack_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
