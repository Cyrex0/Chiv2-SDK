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
	 * Function CharacterFx.CharacterFx_C.UnequipState
	 */
	struct UCharacterFx_C_UnequipState_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.Spawn Blood Decal
	 */
	struct UCharacterFx_C_Spawn_Blood_Decal_Params
	{
	public:
		struct FHitResult                                          bpp__Hit__pf__const;                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsDeathDecal__pf;                                   // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Causer__pf;                                         // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsRagdollHit__pf;                                   // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAbilitySpec*                                        bpp__AbilityRef__pf;                                     // 0x00A0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.SpawnHeadExplosionEffect
	 */
	struct UCharacterFx_C_SpawnHeadExplosionEffect_Params
	{
	public:
		class ATBLCharacter*                                       bpp__Character__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLCharacter*                                       bpp__Causer__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__HitLocation__pf;                                    // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.SpawnGoreFx
	 */
	struct UCharacterFx_C_SpawnGoreFx_Params
	{
	public:
		GorePiece_EGorePiece                                       bpp__Piece__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__Bone__pf;                                           // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Location__pf;                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACharacter*                                          bpp__Character__pf;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_EHeadGoreAction                                        bpp__HeadGoreAction__pf;                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_ELimbGoreAction                                        bpp__LimbGoreAction__pf;                                 // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.SpawnBloodDecalParticle
	 */
	struct UCharacterFx_C_SpawnBloodDecalParticle_Params
	{
	public:
		struct FVector                                             bpp__Location__pf;                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInstanceConstant*                           bpp__DecalMaterial__pf;                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.Should Ragdoll
	 */
	struct UCharacterFx_C_Should_Ragdoll_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Causer__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__HitLocaton__pf__const;                              // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Impulse__pf;                                        // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__HitBone__pf;                                        // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__DamageTakerCombatState__pf;                         // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__AttachParent__pf;                                   // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		GorePiece_EGorePiece                                       bpp__GorePiece__pf;                                      // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDamageTakenEvent                                   bpp__DamageEvent__pf;                                    // 0x0048(0x0148)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bpp__AttachedToBallistaBolt__pf;                         // 0x0190(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Ragdoll__pf;                                        // 0x0191(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.SetWeaponBloodLevel
	 */
	struct UCharacterFx_C_SetWeaponBloodLevel_Params
	{
	public:
		class UObject*                                             bpp__Object__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.SetPhysicsVelocityToZero
	 */
	struct UCharacterFx_C_SetPhysicsVelocityToZero_Params
	{
	public:
		class UPrimitiveComponent*                                 bpp__Mesh__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.SetCutMaterialEffects
	 */
	struct UCharacterFx_C_SetCutMaterialEffects_Params
	{
	public:
		class FName                                                bpp__HitBone__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__x__pfT;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.RemoveLocalFxStack
	 */
	struct UCharacterFx_C_RemoveLocalFxStack_Params
	{
	public:
		class UParticleSystem*                                     bpp__Particle__pf__const;                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        bpp__Value__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.RemoveLocalFx
	 */
	struct UCharacterFx_C_RemoveLocalFx_Params
	{
	public:
		class UParticleSystem*                                     bpp__Particle__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        bpp__Intensity__pf;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.RemoveHelmeet
	 */
	struct UCharacterFx_C_RemoveHelmeet_Params
	{
	public:
		struct FVector                                             bpp__Direction__pf;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Attacker__pf;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.RemoveDrunkEffect
	 */
	struct UCharacterFx_C_RemoveDrunkEffect_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.RangedCombatEvent
	 */
	struct UCharacterFx_C_RangedCombatEvent_Params
	{
	public:
		class FName                                                bpp__NewState__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__PrevState__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttackInfo                                         bpp__AttackInfo__pf;                                     // 0x0010(0x0108)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UCombatState*                                        bpp__combatState__pf;                                    // 0x0118(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.QueueBloodParticlePlacement
	 */
	struct UCharacterFx_C_QueueBloodParticlePlacement_Params
	{
	public:
		struct FVector                                             bpp__CharMeshLocation__pf;                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__HitLocation__pf;                                    // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__CauserLocation__pf;                                 // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__HitActorlocation__pf;                               // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsRagdollHit__pf;                                   // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.PlayWwiseForceFeedback
	 */
	struct UCharacterFx_C_PlayWwiseForceFeedback_Params
	{
	public:
		class UAkAudioEvent*                                       bpp__AKxEvent__pfT;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.PlayParrySparkParticle
	 */
	struct UCharacterFx_C_PlayParrySparkParticle_Params
	{
	public:
		struct FParryEventState                                    bpp__ParryEventState__pf__const;                         // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class ATBLCharacter*                                       bpp__BlockingCharacter__pf;                              // 0x0070(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLCharacter*                                       bpp__BlockedCharacter__pf;                               // 0x0078(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.PlayDeathSound
	 */
	struct UCharacterFx_C_PlayDeathSound_Params
	{
	public:
		GorePiece_EGorePiece                                       bpp__Selection__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_EHeadGoreAction                                        bpp__HeadGoreAction__pf;                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_ELimbGoreAction                                        bpp__LimbGoreAction__pf;                                 // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.PlayDeathAnimation
	 */
	struct UCharacterFx_C_PlayDeathAnimation_Params
	{
	public:
		bool                                                       bpp__xx__pfTT;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.PerformLineTraceForFoot
	 */
	struct UCharacterFx_C_PerformLineTraceForFoot_Params
	{
	public:
		class ATBLCharacter*                                       bpp__Character__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              bpp__PhysMatString__pf;                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnWorldHit
	 */
	struct UCharacterFx_C_OnWorldHit_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Location__pf;                                       // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPhysicalMaterial*                                   bpp__PhysMaterial__pf;                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnWasParried
	 */
	struct UCharacterFx_C_OnWasParried_Params
	{
	public:
		class ATBLCharacter*                                       bpp__ThisCharacter__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLCharacter*                                       bpp__OtherCharacter__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FParryEventState                                    bpp__ParryEventState__pf;                                // 0x0010(0x0070)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnTeamChanged_Event_1
	 */
	struct UCharacterFx_C_OnTeamChanged_Event_1_Params
	{
	public:
		class ATBLTeam*                                            bpp__NewTeam__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnStaminaCostFailed
	 */
	struct UCharacterFx_C_OnStaminaCostFailed_Params
	{
	public:
		class FName                                                bpp__Event__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnRagdollHit
	 */
	struct UCharacterFx_C_OnRagdollHit_Params
	{
	public:
		class AActor*                                              bpp__HitTaker__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__HitCauser__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInventoryItem*                                      bpp__Weapon__pf;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          bpp__HitResult__pf__const;                               // 0x0018(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__HitDirection__pf__const;                            // 0x00A0(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Damage__pf;                                         // 0x00AC(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDamageSource*                                       bpp__DamageSource__pf;                                   // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Projectile__pf;                                     // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__AttackName__pf;                                     // 0x00C0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnParrySuccess
	 */
	struct UCharacterFx_C_OnParrySuccess_Params
	{
	public:
		class ATBLCharacter*                                       bpp__ThisCharacter__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLCharacter*                                       bpp__OtherCharacter__pf;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FParryEventState                                    bpp__ParryEventState__pf;                                // 0x0010(0x0070)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnMountSiegeEngine
	 */
	struct UCharacterFx_C_OnMountSiegeEngine_Params
	{
	public:
		class ASiegeEngine*                                        bpp__SiegeEngine__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnMatchEnded_Event_1
	 */
	struct UCharacterFx_C_OnMatchEnded_Event_1_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnInventoryProjectileHitPassiveShield
	 */
	struct UCharacterFx_C_OnInventoryProjectileHitPassiveShield_Params
	{
	public:
		class AInventoryItem*                                      bpp__Shield__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInventoryItem*                                      bpp__Projectile__pf;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnInventoryItemDamageStateChanged
	 */
	struct UCharacterFx_C_OnInventoryItemDamageStateChanged_Params
	{
	public:
		class AInventoryItem*                                      bpp__Item__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_EInventoryItemDamagedState                             bpp__DamagedState__pf;                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnInventoryItemDamaged
	 */
	struct UCharacterFx_C_OnInventoryItemDamaged_Params
	{
	public:
		class AInventoryItem*                                      bpp__Item__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryItemDamagedParams                         bpp__Params__pf;                                         // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnInventoryActionFailed
	 */
	struct UCharacterFx_C_OnInventoryActionFailed_Params
	{
	public:
		TBL_EFailedInventoryAction                                 bpp__Action__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnHealOverTimeStart
	 */
	struct UCharacterFx_C_OnHealOverTimeStart_Params
	{
	public:
		TBL_EHealingSource                                         bpp__HealingSource__pf;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLPlayerState*                                     bpp__InstigatingPlayerState__pf__const;                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnHealOverTimeEnd
	 */
	struct UCharacterFx_C_OnHealOverTimeEnd_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnHealOverTimeAdded
	 */
	struct UCharacterFx_C_OnHealOverTimeAdded_Params
	{
	public:
		TBL_EHealingSource                                         bpp__HealingSource__pf;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLPlayerState*                                     bpp__InstigatingPlayerState__pf__const;                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnGamepadInputModeChanged_Event_1
	 */
	struct UCharacterFx_C_OnGamepadInputModeChanged_Event_1_Params
	{
	public:
		TBL_EGamepadInputMode                                      bpp__GamepadInputMode__pf;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnDismountSiegeEngine
	 */
	struct UCharacterFx_C_OnDismountSiegeEngine_Params
	{
	public:
		class ASiegeEngine*                                        bpp__SiegeEngine__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Forced__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnDamageTaken
	 */
	struct UCharacterFx_C_OnDamageTaken_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageEvent__pf__const;                             // 0x0000(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnDamageCaused
	 */
	struct UCharacterFx_C_OnDamageCaused_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageEvent__pf__const;                             // 0x0000(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnCrowdControlNoDamage
	 */
	struct UCharacterFx_C_OnCrowdControlNoDamage_Params
	{
	public:
		class AActor*                                              bpp__OwningActor__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__combatState__pf;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCrowdControlParams                                 bpp__CrowdControlParams__pf;                             // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnConstruct
	 */
	struct UCharacterFx_C_OnConstruct_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnCombatStateChanged
	 */
	struct UCharacterFx_C_OnCombatStateChanged_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__PreviousState__pf;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__NewState__pf;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttackInfo                                         bpp__EventAttackInfo__pf__const;                         // 0x0018(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UCombatState*                                        bpp__InCombatState__pf;                                  // 0x0120(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnCharacterLanded
	 */
	struct UCharacterFx_C_OnCharacterLanded_Params
	{
	public:
		struct FLandedResult                                       bpp__LandedResult__pf__const;                            // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnBlocked
	 */
	struct UCharacterFx_C_OnBlocked_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnAssemble_CharacterFx
	 */
	struct UCharacterFx_C_OnAssemble_CharacterFx_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnAnimNotifyStepEvent
	 */
	struct UCharacterFx_C_OnAnimNotifyStepEvent_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.OnAbilityError
	 */
	struct UCharacterFx_C_OnAbilityError_Params
	{
	public:
		class AActor*                                              bpp__Initiator__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_EResultCode                                            bpp__Code__pf;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AAbilityInvocation*                                  bpp__Invocation__pf;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__AttackName__pf;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              bpp__ItemClass__pf;                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GotoRagdoll
	 */
	struct UCharacterFx_C_GotoRagdoll_Params
	{
	public:
		class ATBLCharacter*                                       bpp__x__pfT;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GoreEvent
	 */
	struct UCharacterFx_C_GoreEvent_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageTakenEvent__pf;                               // 0x0000(0x0148)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.Get This Actor Health Percent
	 */
	struct UCharacterFx_C_Get_This_Actor_Health_Percent_Params
	{
	public:
		float                                                      bpp__Health__pf;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GetWeaponRagdollImpulseStrength (Body)
	 */
	struct UCharacterFx_C_GetWeaponRagdollImpulseStrength__Body__Params
	{
	public:
		class AActor*                                              bpp__Attacker__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Force__pf;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Limb)
	 */
	struct UCharacterFx_C_GetRangedRagdollImpulseStrength__Limb__Params
	{
	public:
		class AActor*                                              bpp__Attacker__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Force__pf;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GetRangedRagdollImpulseStrength (Body)
	 */
	struct UCharacterFx_C_GetRangedRagdollImpulseStrength__Body__Params
	{
	public:
		class AActor*                                              bpp__Attacker__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Force__pf;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GetRagdollImpulseStrength (Limb)
	 */
	struct UCharacterFx_C_GetRagdollImpulseStrength__Limb__Params
	{
	public:
		class AActor*                                              bpp__Attacker__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Force__pf;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GetPlayerCameraManager
	 */
	struct UCharacterFx_C_GetPlayerCameraManager_Params
	{
	public:
		class APlayerCameraManager*                                bpp__PlayerCameraManager__pf;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Success__pf;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GetLocalPlayerState
	 */
	struct UCharacterFx_C_GetLocalPlayerState_Params
	{
	public:
		class ATBLPlayerState*                                     bpp__AsTBLPlayerxState__pfT;                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GetHitDirection
	 */
	struct UCharacterFx_C_GetHitDirection_Params
	{
	public:
		class AActor*                                              bpp__Causer__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Taker__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__HitDirection__pf;                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.GetBloodParticle
	 */
	struct UCharacterFx_C_GetBloodParticle_Params
	{
	public:
		class FName                                                bpp__Ability__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInventoryItem*                                      bpp__Item__pf;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UParticleSystem*                                     bpp__Particle__pf;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsValid__pf;                                        // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ForceFeedback (Directional)
	 */
	struct UCharacterFx_C_ForceFeedback__Directional__Params
	{
	public:
		class UForceFeedbackEffect*                                bpp__ForceFeedbackEffect__pf;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__IntensityMultiplier__pf;                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Location__pf;                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            bpp__Rotation__pf;                                       // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ForceFeedback
	 */
	struct UCharacterFx_C_ForceFeedback_Params
	{
	public:
		class UForceFeedbackEffect*                                bpp__ForceFeedbackEffect__pf;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__IntensityMultiplier__pf;                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.FadeEmber
	 */
	struct UCharacterFx_C_FadeEmber_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_8
	 */
	struct UCharacterFx_C_ExecuteUbergraph_CharacterFx_8_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_37
	 */
	struct UCharacterFx_C_ExecuteUbergraph_CharacterFx_37_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_24
	 */
	struct UCharacterFx_C_ExecuteUbergraph_CharacterFx_24_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_22
	 */
	struct UCharacterFx_C_ExecuteUbergraph_CharacterFx_22_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_19
	 */
	struct UCharacterFx_C_ExecuteUbergraph_CharacterFx_19_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_18
	 */
	struct UCharacterFx_C_ExecuteUbergraph_CharacterFx_18_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_2
	 */
	struct UCharacterFx_C_ExecuteUbergraph_CharacterFx_2_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ExecuteUbergraph_CharacterFx_1
	 */
	struct UCharacterFx_C_ExecuteUbergraph_CharacterFx_1_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.EquipState
	 */
	struct UCharacterFx_C_EquipState_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.DrunkCameraShakeTick
	 */
	struct UCharacterFx_C_DrunkCameraShakeTick_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.DisableClientBloodSplatter
	 */
	struct UCharacterFx_C_DisableClientBloodSplatter_Params
	{
	};

	/**
	 * Function CharacterFx.CharacterFx_C.DeathGore
	 */
	struct UCharacterFx_C_DeathGore_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageTakenEvent__pf;                               // 0x0000(0x0148)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.CrosshairEvent
	 */
	struct UCharacterFx_C_CrosshairEvent_Params
	{
	public:
		class FName                                                bpp__Event__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Enable__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Scaling__pf;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsPositive__pf;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.CrosshairDamageTakenEvent
	 */
	struct UCharacterFx_C_CrosshairDamageTakenEvent_Params
	{
	public:
		float                                                      bpp__Damage__pf;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__HitDirection__pf;                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.CrosshairDamageEvent
	 */
	struct UCharacterFx_C_CrosshairDamageEvent_Params
	{
	public:
		class FName                                                bpp__Event__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDamageTakenEvent                                   bpp__Damage__pf;                                         // 0x0008(0x0148)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsEnemy__pf;                                        // 0x0150(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.CanRemoveHelmet
	 */
	struct UCharacterFx_C_CanRemoveHelmet_Params
	{
	public:
		bool                                                       bpp__CanRemoveHelmet__pf;                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.CanAddLocalFx
	 */
	struct UCharacterFx_C_CanAddLocalFx_Params
	{
	public:
		bool                                                       bpp__x__pfT;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.BreakAtClosestBone
	 */
	struct UCharacterFx_C_BreakAtClosestBone_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Causer__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__HitLocaton__pf__const;                              // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Impulse__pf;                                        // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__HitBone__pf;                                        // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsRagdollHit__pf;                                   // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__DamageTakerCombatState__pf;                         // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__AttachParent__pf;                                   // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTBL_FGoreEvent                                     bpp__GoreEvent__pf;                                      // 0x0048(0x001C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsKillingBlow__pf;                                  // 0x0064(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Success__pf;                                        // 0x0065(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		GorePiece_EGorePiece                                       bpp__Selection__pf;                                      // 0x0066(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__BoneName__pf;                                       // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.BeakBodyPart
	 */
	struct UCharacterFx_C_BeakBodyPart_Params
	{
	public:
		class ACharacter*                                          bpp__Char__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__BoneName__pf;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Impulse__pf__const;                                 // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__HitLocation__pf__const;                             // 0x001C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		GorePiece_EGorePiece                                       bpp__Selection__pf;                                      // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_EHeadGoreAction                                        bpp__HeadGoreAction__pf;                                 // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_ELimbGoreAction                                        bpp__LimbGoreAction__pf;                                 // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__SpawnedItem__pf;                                    // 0x002B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.AttachToBallistaBolt
	 */
	struct UCharacterFx_C_AttachToBallistaBolt_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Projectile__pf;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Attached__pf;                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ApplyRagdollImpactImpulse
	 */
	struct UCharacterFx_C_ApplyRagdollImpactImpulse_Params
	{
	public:
		struct FHitResult                                          bpp__Hit__pf__const;                                     // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Attacker__pf;                                       // 0x0088(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             bpp__Projectile__pf__const;                              // 0x0090(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__HitDirection__pf;                                   // 0x0098(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Scaling__pf;                                        // 0x00A4(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__AbilitiesTableRow__pf;                              // 0x00A8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDamageSource*                                       bpp__DamageSource__pf;                                   // 0x00B0(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.ApplyDrunkEffect
	 */
	struct UCharacterFx_C_ApplyDrunkEffect_Params
	{
	public:
		bool                                                       bpp__Enable__pf;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.AddLocalFxStack
	 */
	struct UCharacterFx_C_AddLocalFxStack_Params
	{
	public:
		class UParticleSystem*                                     bpp__Particle__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        bpp__Value__pf__const;                                   // 0x0008(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.AddLocalFx
	 */
	struct UCharacterFx_C_AddLocalFx_Params
	{
	public:
		class UParticleSystem*                                     bpp__Particle__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        bpp__Intensity__pf;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.AddKill
	 */
	struct UCharacterFx_C_AddKill_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterFx.CharacterFx_C.AddHelmetForce
	 */
	struct UCharacterFx_C_AddHelmetForce_Params
	{
	};

	/**
	 * DelegateFunction CharacterFx.CharacterFx_C.TeamChangedSignature__DelegateSignature
	 */
	struct UCharacterFx_C_TeamChangedSignature__DelegateSignature_Params
	{
	public:
		class ATBLTeam*                                            bpp__NewTeam__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction CharacterFx.CharacterFx_C.OnGamepadInputModeSwitchEvent__DelegateSignature
	 */
	struct UCharacterFx_C_OnGamepadInputModeSwitchEvent__DelegateSignature_Params
	{
	public:
		TBL_EGamepadInputMode                                      bpp__GamepadInputMode__pf;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * DelegateFunction CharacterFx.CharacterFx_C.MatchEndedSignature__DelegateSignature
	 */
	struct UCharacterFx_C_MatchEndedSignature__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
