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
	 * Function BaseCharacter.BaseCharacter_C.DisableOutOfCombatPostProcess
	 */
	struct ABaseCharacter_C_DisableOutOfCombatPostProcess_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.ToggleOutOfCombatPostProcess
	 */
	struct ABaseCharacter_C_ToggleOutOfCombatPostProcess_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.SetGameTimeOnMeshComponents
	 */
	struct ABaseCharacter_C_SetGameTimeOnMeshComponents_Params
	{
	public:
		TArray<class UMeshComponent*>                              MeshComponents;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.UserConstructionScript
	 */
	struct ABaseCharacter_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.Customize bot
	 */
	struct ABaseCharacter_C_Customize_bot_Params
	{
	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.InitAltWeightsState
	 */
	struct ABaseCharacter_C_InitAltWeightsState_Params
	{
	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.Set master pose
	 */
	struct ABaseCharacter_C_Set_master_pose_Params
	{
	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.OnCustomized
	 */
	struct ABaseCharacter_C_OnCustomized_Params
	{
	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.SetSpawnTime Material Parameter
	 */
	struct ABaseCharacter_C_SetSpawnTime_Material_Parameter_Params
	{
	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.TEMP Customize
	 */
	struct ABaseCharacter_C_TEMP_Customize_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.OnInitializeAltWeightsState
	 */
	struct ABaseCharacter_C_OnInitializeAltWeightsState_Params
	{
	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.K2_OnBecomeViewTarget
	 */
	struct ABaseCharacter_C_K2_OnBecomeViewTarget_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.K2_OnEndViewTarget
	 */
	struct ABaseCharacter_C_K2_OnEndViewTarget_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.OnApplyCondition_Event
	 */
	struct ABaseCharacter_C_OnApplyCondition_Event_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.OnRemoveCondition_Event
	 */
	struct ABaseCharacter_C_OnRemoveCondition_Event_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.ReceiveBeginPlay
	 */
	struct ABaseCharacter_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.ReceiveTick
	 */
	struct ABaseCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.ExecuteUbergraph_BaseCharacter
	 */
	struct ABaseCharacter_C_ExecuteUbergraph_BaseCharacter_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseCharacter.BaseCharacter_C.OnCustomized_animBP__DelegateSignature
	 */
	struct ABaseCharacter_C_OnCustomized_animBP__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
