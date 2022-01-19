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
	 * Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.SendHealAnalyticsEvent
	 */
	struct USpecialItemAbility_Inspired_C_SendHealAnalyticsEvent_Params
	{
	};

	/**
	 * Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.InspireCharacter
	 */
	struct USpecialItemAbility_Inspired_C_InspireCharacter_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.OnUseItem
	 */
	struct USpecialItemAbility_Inspired_C_OnUseItem_Params
	{
	};

	/**
	 * Function SpecialItemAbility_Inspired.SpecialItemAbility_Inspired_C.ExecuteUbergraph_SpecialItemAbility_Inspired
	 */
	struct USpecialItemAbility_Inspired_C_ExecuteUbergraph_SpecialItemAbility_Inspired_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
