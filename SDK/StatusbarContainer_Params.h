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
	 * Function StatusbarContainer.StatusbarContainer_C.ShouldShowStatusBar
	 */
	struct UStatusbarContainer_C_ShouldShowStatusBar_Params
	{
	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.UpdateTeamIcon
	 */
	struct UStatusbarContainer_C_UpdateTeamIcon_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_0_OnUpdate__DelegateSignature
	 */
	struct UStatusbarContainer_C_BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_0_OnUpdate__DelegateSignature_Params
	{
	public:
		class UActorHealthBar_C*                                   Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.Construct
	 */
	struct UStatusbarContainer_C_Construct_Params
	{
	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.ForceUpdateBandage
	 */
	struct UStatusbarContainer_C_ForceUpdateBandage_Params
	{
	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.OnAddedToInventoryChanged_Event_1
	 */
	struct UStatusbarContainer_C_OnAddedToInventoryChanged_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAddedToInventory;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.OnPossessedPawn_Event_1
	 */
	struct UStatusbarContainer_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.HideBandage
	 */
	struct UStatusbarContainer_C_HideBandage_Params
	{
	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.OnTeamChanged_Event_1
	 */
	struct UStatusbarContainer_C_OnTeamChanged_Event_1_Params
	{
	public:
		class ATBLTeam*                                            NewTeam;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.ToggleHorseMode
	 */
	struct UStatusbarContainer_C_ToggleHorseMode_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.BndEvt__ActorHealthBar_C_1_K2Node_ComponentBoundEvent_1_OnUpdate__DelegateSignature
	 */
	struct UStatusbarContainer_C_BndEvt__ActorHealthBar_C_1_K2Node_ComponentBoundEvent_1_OnUpdate__DelegateSignature_Params
	{
	public:
		class UActorHealthBar_C*                                   Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.AttemptFadeSTatusBar
	 */
	struct UStatusbarContainer_C_AttemptFadeSTatusBar_Params
	{
	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.OnInputChange
	 */
	struct UStatusbarContainer_C_OnInputChange_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeStart_Event_1
	 */
	struct UStatusbarContainer_C_OnHealOverTimeStart_Event_1_Params
	{
	public:
		TBL_EHealingSource                                         HealingSource;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLPlayerState*                                     InstigatorPlayerState;                                   // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeEnd_Event_1
	 */
	struct UStatusbarContainer_C_OnHealOverTimeEnd_Event_1_Params
	{
	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_2_OnRecievedNewStatsComp__DelegateSignature
	 */
	struct UStatusbarContainer_C_BndEvt__PlayerHealthBar_K2Node_ComponentBoundEvent_2_OnRecievedNewStatsComp__DelegateSignature_Params
	{
	public:
		class UStatsComponent*                                     StatsComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.BndEvt__ConditionsBar_206_K2Node_ComponentBoundEvent_3_IsShowingCondition__DelegateSignature
	 */
	struct UStatusbarContainer_C_BndEvt__ConditionsBar_206_K2Node_ComponentBoundEvent_3_IsShowingCondition__DelegateSignature_Params
	{
	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.OnHealOverTimeAdded
	 */
	struct UStatusbarContainer_C_OnHealOverTimeAdded_Params
	{
	public:
		TBL_EHealingSource                                         HealingSource;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLPlayerState*                                     InstigatorPlayerState;                                   // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function StatusbarContainer.StatusbarContainer_C.ExecuteUbergraph_StatusbarContainer
	 */
	struct UStatusbarContainer_C_ExecuteUbergraph_StatusbarContainer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
