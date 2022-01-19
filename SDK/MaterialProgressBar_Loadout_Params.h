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
	 * Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.PreConstruct
	 */
	struct UMaterialProgressBar_Loadout_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.Construct
	 */
	struct UMaterialProgressBar_Loadout_C_Construct_Params
	{
	};

	/**
	 * Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgress
	 */
	struct UMaterialProgressBar_Loadout_C_UpdateProgress_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundFillVisibility
	 */
	struct UMaterialProgressBar_Loadout_C_UpdateBackgroundFillVisibility_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundVisibility
	 */
	struct UMaterialProgressBar_Loadout_C_UpdateBackgroundVisibility_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgressBarVisibility
	 */
	struct UMaterialProgressBar_Loadout_C_UpdateProgressBarVisibility_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateColor
	 */
	struct UMaterialProgressBar_Loadout_C_UpdateColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.ExecuteUbergraph_MaterialProgressBar_Loadout
	 */
	struct UMaterialProgressBar_Loadout_C_ExecuteUbergraph_MaterialProgressBar_Loadout_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
