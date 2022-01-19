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
	 * Function RangedCrosshair.RangedCrosshair_C.SetSpacer
	 */
	struct URangedCrosshair_C_SetSpacer_Params
	{
	public:
		bool                                                       Initialize;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Output_Get;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RangedCrosshair.RangedCrosshair_C.UpdateChargebarVisibility
	 */
	struct URangedCrosshair_C_UpdateChargebarVisibility_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RangedCrosshair.RangedCrosshair_C.Tick
	 */
	struct URangedCrosshair_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RangedCrosshair.RangedCrosshair_C.FiredProjectile
	 */
	struct URangedCrosshair_C_FiredProjectile_Params
	{
	};

	/**
	 * Function RangedCrosshair.RangedCrosshair_C.Construct
	 */
	struct URangedCrosshair_C_Construct_Params
	{
	};

	/**
	 * Function RangedCrosshair.RangedCrosshair_C.UpdateChargebar
	 */
	struct URangedCrosshair_C_UpdateChargebar_Params
	{
	public:
		float                                                      Valur;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RangedCrosshair.RangedCrosshair_C.ExecuteUbergraph_RangedCrosshair
	 */
	struct URangedCrosshair_C_ExecuteUbergraph_RangedCrosshair_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
