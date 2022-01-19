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
	 * Function HorseCharge.HorseCharge_C.OnAssemble_HorseCharge
	 */
	struct UHorseCharge_C_OnAssemble_HorseCharge_Params
	{
	};

	/**
	 * Function HorseCharge.HorseCharge_C.EventEndAnimation
	 */
	struct UHorseCharge_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function HorseCharge.HorseCharge_C.EventDamageCaused
	 */
	struct UHorseCharge_C_EventDamageCaused_Params
	{
	public:
		struct FDamageTakenEvent                                   DamageEvent;                                             // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function HorseCharge.HorseCharge_C.ExecuteUbergraph_HorseCharge
	 */
	struct UHorseCharge_C_ExecuteUbergraph_HorseCharge_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
