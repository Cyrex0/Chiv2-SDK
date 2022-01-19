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
	 * Function BaseCarryable.BaseCarryable_C.EvaluateImpact
	 */
	struct ABaseCarryable_C_EvaluateImpact_Params
	{
	public:
		float                                                      DistanceTravelled;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseCarryable.BaseCarryable_C.OnCustomImpact
	 */
	struct ABaseCarryable_C_OnCustomImpact_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FProjectileHitParams                                ProjectileHit;                                           // 0x0004(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitWorld_Event_BaseCarryable
	 */
	struct ABaseCarryable_C_BaseProjectileBlockingHitWorld_Event_BaseCarryable_Params
	{
	public:
		struct FProjectileHitParams                                ProjectileHit;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitNonWorld_Event_BaseCarryable
	 */
	struct ABaseCarryable_C_BaseProjectileBlockingHitNonWorld_Event_BaseCarryable_Params
	{
	public:
		struct FProjectileHitParams                                ProjectileHit;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function BaseCarryable.BaseCarryable_C.OnInitialize
	 */
	struct ABaseCarryable_C_OnInitialize_Params
	{
	};

	/**
	 * Function BaseCarryable.BaseCarryable_C.ExecuteUbergraph_BaseCarryable
	 */
	struct ABaseCarryable_C_ExecuteUbergraph_BaseCarryable_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
