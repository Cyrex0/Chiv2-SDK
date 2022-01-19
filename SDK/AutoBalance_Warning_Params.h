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
	 * Function AutoBalance_Warning.AutoBalance_Warning_C.Set Owning HUD Component
	 */
	struct UAutoBalance_Warning_C_Set_Owning_HUD_Component_Params
	{
	public:
		class UHUDComponent_C*                                     New_Owner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AutoBalance_Warning.AutoBalance_Warning_C.Initialize
	 */
	struct UAutoBalance_Warning_C_Initialize_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AutoBalance_Warning.AutoBalance_Warning_C.Construct
	 */
	struct UAutoBalance_Warning_C_Construct_Params
	{
	};

	/**
	 * Function AutoBalance_Warning.AutoBalance_Warning_C.OnInitialized
	 */
	struct UAutoBalance_Warning_C_OnInitialized_Params
	{
	};

	/**
	 * Function AutoBalance_Warning.AutoBalance_Warning_C.AutoBalanceNotificationReceived_Event_1
	 */
	struct UAutoBalance_Warning_C_AutoBalanceNotificationReceived_Event_1_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function AutoBalance_Warning.AutoBalance_Warning_C.CustomEvent_1
	 */
	struct UAutoBalance_Warning_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function AutoBalance_Warning.AutoBalance_Warning_C.ExecuteUbergraph_AutoBalance_Warning
	 */
	struct UAutoBalance_Warning_C_ExecuteUbergraph_AutoBalance_Warning_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
