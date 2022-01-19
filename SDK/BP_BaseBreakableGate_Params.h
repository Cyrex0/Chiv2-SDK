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
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.IsValidDamagingFaction
	 */
	struct ABP_BaseBreakableGate_C_IsValidDamagingFaction_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.Get Owner Faction
	 */
	struct ABP_BaseBreakableGate_C_Get_Owner_Faction_Params
	{
	public:
		TBL_EFaction                                               Output_Get;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetGateState
	 */
	struct ABP_BaseBreakableGate_C_SetGateState_Params
	{
	public:
		struct FDamageTakenEvent                                   DamageTakenEvent;                                        // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ToggleDoorCollision
	 */
	struct ABP_BaseBreakableGate_C_ToggleDoorCollision_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateBreakableState
	 */
	struct ABP_BaseBreakableGate_C_UpdateBreakableState_Params
	{
	public:
		BreakableState_EBreakableState                             Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.EnableChildComponents
	 */
	struct ABP_BaseBreakableGate_C_EnableChildComponents_Params
	{
	public:
		class USceneComponent*                                     ParentComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateStateChanged
	 */
	struct ABP_BaseBreakableGate_C_OnGateStateChanged_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_GateState
	 */
	struct ABP_BaseBreakableGate_C_OnRep_GateState_Params
	{
	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnRep_BreakableState
	 */
	struct ABP_BaseBreakableGate_C_OnRep_BreakableState_Params
	{
	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateMesh
	 */
	struct ABP_BaseBreakableGate_C_UpdateMesh_Params
	{
	public:
		class UStaticMesh*                                         NewMesh;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UserConstructionScript
	 */
	struct ABP_BaseBreakableGate_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature
	 */
	struct ABP_BaseBreakableGate_C_BndEvt__Stats_K2Node_ComponentBoundEvent_1_DamageTakenSignature__DelegateSignature_Params
	{
	public:
		struct FDamageTakenEvent                                   Event;                                                   // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.DamageFx
	 */
	struct ABP_BaseBreakableGate_C_DamageFx_Params
	{
	public:
		struct FDamageTakenEvent                                   DamageTakenEvent;                                        // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.KilledFx
	 */
	struct ABP_BaseBreakableGate_C_KilledFx_Params
	{
	public:
		struct FDamageTakenEvent                                   DamageTakenEvent;                                        // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.UpdateState
	 */
	struct ABP_BaseBreakableGate_C_UpdateState_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature
	 */
	struct ABP_BaseBreakableGate_C_BndEvt__Stats_K2Node_ComponentBoundEvent_5_StatHealthChangedSignature__DelegateSignature_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Initiator;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.InitializeState
	 */
	struct ABP_BaseBreakableGate_C_InitializeState_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceOpened
	 */
	struct ABP_BaseBreakableGate_C_ForceOpened_Params
	{
	public:
		GateDirection_EGateDirection                               OpenGateDirection;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ManuallyOpenGate
	 */
	struct ABP_BaseBreakableGate_C_ManuallyOpenGate_Params
	{
	public:
		GateDirection_EGateDirection                               Direction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OpenGate
	 */
	struct ABP_BaseBreakableGate_C_OpenGate_Params
	{
	public:
		GateDirection_EGateDirection                               OpenGateDirection;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.RemoveCollisionOnMeshes
	 */
	struct ABP_BaseBreakableGate_C_RemoveCollisionOnMeshes_Params
	{
	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ReceiveBeginPlay
	 */
	struct ABP_BaseBreakableGate_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ForceBrokenState
	 */
	struct ABP_BaseBreakableGate_C_ForceBrokenState_Params
	{
	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
	 */
	struct ABP_BaseBreakableGate_C_BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.BreakableStateChanged
	 */
	struct ABP_BaseBreakableGate_C_BreakableStateChanged_Params
	{
	public:
		BreakableState_EBreakableState                             BreakableState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.SetActorInvulnerable
	 */
	struct ABP_BaseBreakableGate_C_SetActorInvulnerable_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ChangeCanBeDamaged
	 */
	struct ABP_BaseBreakableGate_C_ChangeCanBeDamaged_Params
	{
	public:
		bool                                                       CanBeDamaged;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnPushableBeginOverlap
	 */
	struct ABP_BaseBreakableGate_C_OnPushableBeginOverlap_Params
	{
	public:
		class UPushableComponent*                                  Pushable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.ExecuteUbergraph_BP_BaseBreakableGate
	 */
	struct ABP_BaseBreakableGate_C_ExecuteUbergraph_BP_BaseBreakableGate_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDestroyed__DelegateSignature
	 */
	struct ABP_BaseBreakableGate_C_OnGateDestroyed__DelegateSignature_Params
	{
	public:
		class ATBLCharacter*                                       Destroyer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateOpened__DelegateSignature
	 */
	struct ABP_BaseBreakableGate_C_OnGateOpened__DelegateSignature_Params
	{
	};

	/**
	 * Function BP_BaseBreakableGate.BP_BaseBreakableGate_C.OnGateDamaged__DelegateSignature
	 */
	struct ABP_BaseBreakableGate_C_OnGateDamaged__DelegateSignature_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
