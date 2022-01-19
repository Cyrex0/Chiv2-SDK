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
	 * Function ChargeStab.ChargeStab_C.OnAssemble_ChargeStab
	 */
	struct UChargeStab_C_OnAssemble_ChargeStab_Params
	{
	};

	/**
	 * Function ChargeStab.ChargeStab_C.EventEndAnimation
	 */
	struct UChargeStab_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function ChargeStab.ChargeStab_C.EventBeginFire
	 */
	struct UChargeStab_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ChargeStab.ChargeStab_C.ExecuteUbergraph_ChargeStab
	 */
	struct UChargeStab_C_ExecuteUbergraph_ChargeStab_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
