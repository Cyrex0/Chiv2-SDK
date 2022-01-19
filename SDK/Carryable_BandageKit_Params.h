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
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.SendHealAnalyticsEvent
	 */
	struct ACarryable_BandageKit_C_SendHealAnalyticsEvent_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.GetHealAmount
	 */
	struct ACarryable_BandageKit_C_GetHealAmount_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HealAmount;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.GetTeamProjectileCollision
	 */
	struct ACarryable_BandageKit_C_GetTeamProjectileCollision_Params
	{
	public:
		class UShapeComponent*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.CanUseBandageKit
	 */
	struct ACarryable_BandageKit_C_CanUseBandageKit_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanUse;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.CannotAutoPickup
	 */
	struct ACarryable_BandageKit_C_CannotAutoPickup_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OnRep_LastOwner
	 */
	struct ACarryable_BandageKit_C_OnRep_LastOwner_Params
	{
	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OnRep_Faction
	 */
	struct ACarryable_BandageKit_C_OnRep_Faction_Params
	{
	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.CanPickup
	 */
	struct ACarryable_BandageKit_C_CanPickup_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OverridePickupEvent
	 */
	struct ACarryable_BandageKit_C_OverridePickupEvent_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bGiveWeapon;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsAutoPickup;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.CanUseItem
	 */
	struct ACarryable_BandageKit_C_CanUseItem_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.HealCharacter
	 */
	struct ACarryable_BandageKit_C_HealCharacter_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.ReceiveBeginPlay
	 */
	struct ACarryable_BandageKit_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OnThrown_Event_1
	 */
	struct ACarryable_BandageKit_C_OnThrown_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OnPossessedPawn
	 */
	struct ACarryable_BandageKit_C_OnPossessedPawn_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OnHealOverTimeStart
	 */
	struct ACarryable_BandageKit_C_OnHealOverTimeStart_Params
	{
	public:
		TBL_EHealingSource                                         HealingSource;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLPlayerState*                                     InstigatorPlayerState;                                   // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OnHealOverTimeEnd
	 */
	struct ACarryable_BandageKit_C_OnHealOverTimeEnd_Params
	{
	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.UpdateHealHUDMarker
	 */
	struct ACarryable_BandageKit_C_UpdateHealHUDMarker_Params
	{
	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OnDamageTaken
	 */
	struct ACarryable_BandageKit_C_OnDamageTaken_Params
	{
	public:
		struct FDamageTakenEvent                                   Event;                                                   // 0x0000(0x0148)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_MovementFinishedSignature__DelegateSignature
	 */
	struct ACarryable_BandageKit_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_MovementFinishedSignature__DelegateSignature_Params
	{
	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature
	 */
	struct ACarryable_BandageKit_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileBounceDelegate__DelegateSignature_Params
	{
	public:
		struct FHitResult                                          ImpactResult;                                            // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ImpactVelocity;                                          // 0x0088(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OnSetAttached_Event_1
	 */
	struct ACarryable_BandageKit_C_OnSetAttached_Event_1_Params
	{
	public:
		bool                                                       bAttached;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.SetTeam
	 */
	struct ACarryable_BandageKit_C_SetTeam_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.SetTeamMaterial
	 */
	struct ACarryable_BandageKit_C_SetTeamMaterial_Params
	{
	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.OnProjectileHitTarget
	 */
	struct ACarryable_BandageKit_C_OnProjectileHitTarget_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function Carryable_BandageKit.Carryable_BandageKit_C.ExecuteUbergraph_Carryable_BandageKit
	 */
	struct ACarryable_BandageKit_C_ExecuteUbergraph_Carryable_BandageKit_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
