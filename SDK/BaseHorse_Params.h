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
	 * Function BaseHorse.BaseHorse_C.SetTeamHeraldry
	 */
	struct ABaseHorse_C_SetTeamHeraldry_Params
	{
	public:
		class UTexture*                                            Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.GetPushingCollision
	 */
	struct ABaseHorse_C_GetPushingCollision_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.GetWorldCollisionRider
	 */
	struct ABaseHorse_C_GetWorldCollisionRider_Params
	{
	public:
		class UCapsuleComponent*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.ShouldPushBackOnTurnAgainstWall
	 */
	struct ABaseHorse_C_ShouldPushBackOnTurnAgainstWall_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.GetRiderToWorldCollision
	 */
	struct ABaseHorse_C_GetRiderToWorldCollision_Params
	{
	public:
		Engine_ECollisionResponse                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.FxEvent
	 */
	struct ABaseHorse_C_FxEvent_Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      EventScale;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Target_;                                                 // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.GetWorldCollisionBack
	 */
	struct ABaseHorse_C_GetWorldCollisionBack_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.GetWorldCollisionFront
	 */
	struct ABaseHorse_C_GetWorldCollisionFront_Params
	{
	public:
		TArray<class UPrimitiveComponent*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.GetWorldCollisionLegs
	 */
	struct ABaseHorse_C_GetWorldCollisionLegs_Params
	{
	public:
		class UCapsuleComponent*                                   FrontLegs;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCapsuleComponent*                                   BackLegs;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.ReceiveBeginPlay
	 */
	struct ABaseHorse_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BaseHorse.BaseHorse_C.InitAltWeightsState
	 */
	struct ABaseHorse_C_InitAltWeightsState_Params
	{
	};

	/**
	 * Function BaseHorse.BaseHorse_C.HorseToWorldImpact
	 */
	struct ABaseHorse_C_HorseToWorldImpact_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		TBL_EHorseImpactLocation                                   ImpactLocation;                                          // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHorseToWorldImpactType                                ImpactType;                                              // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ImpactCombatState;                                       // 0x008C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ImpactSpeed;                                             // 0x0094(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.HorseToCharacterImpact
	 */
	struct ABaseHorse_C_HorseToCharacterImpact_Params
	{
	public:
		class ATBLCharacter*                                       TargetCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHorseImpactLocation                                   ImpactLocation;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHorseToCharacterImpactType                            ImpactType;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ImpactCombatState;                                       // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ImpactSpeed;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.HorseToHorseImpact
	 */
	struct ABaseHorse_C_HorseToHorseImpact_Params
	{
	public:
		class AHorse*                                              TargetHorse;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHorseImpactLocation                                   ImpactLocation;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHorseToHorseImpactType                                ImpactType;                                              // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ImpactCombatState;                                       // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ImpactSpeed;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
	 */
	struct ABaseHorse_C_BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.RiderToWorldImpact
	 */
	struct ABaseHorse_C_RiderToWorldImpact_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature
	 */
	struct ABaseHorse_C_BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature_Params
	{
	public:
		TBL_EFaction                                               NewFaction;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.OnDriverMount_Event_1
	 */
	struct ABaseHorse_C_OnDriverMount_Event_1_Params
	{
	public:
		class ATBLCharacter*                                       Driver;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.OnDriverDismount_Event_1
	 */
	struct ABaseHorse_C_OnDriverDismount_Event_1_Params
	{
	public:
		class ATBLCharacter*                                       Driver;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EDismountType                                          DismountType;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseHorse.BaseHorse_C.ApplyDamageToCharacter
	 */
	struct ABaseHorse_C_ApplyDamageToCharacter_Params
	{
	};

	/**
	 * Function BaseHorse.BaseHorse_C.ExecuteUbergraph_BaseHorse
	 */
	struct ABaseHorse_C_ExecuteUbergraph_BaseHorse_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
