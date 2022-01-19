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
	 * Function HorseFx.HorseFx_C.SpawnGoreBlood
	 */
	struct UHorseFx_C_SpawnGoreBlood_Params
	{
	public:
		GorePiece_EGorePiece                                       bpp__Piece__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__Bone__pf;                                           // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Location__pf;                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACharacter*                                          bpp__Character__pf;                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.RagdollHorse
	 */
	struct UHorseFx_C_RagdollHorse_Params
	{
	public:
		class ACharacter*                                          bpp__Char__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__BoneName__pf;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.PerformHorseFootTrace
	 */
	struct UHorseFx_C_PerformHorseFootTrace_Params
	{
	public:
		class AHorse*                                              bpp__Horse__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              bpp__PhysMatString__pf;                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.OnRagdollHit
	 */
	struct UHorseFx_C_OnRagdollHit_Params
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
	 * Function HorseFx.HorseFx_C.OnMountSiegeEngine
	 */
	struct UHorseFx_C_OnMountSiegeEngine_Params
	{
	public:
		class ASiegeEngine*                                        bpp__SiegeEngine__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.OnHorseFxEvent
	 */
	struct UHorseFx_C_OnHorseFxEvent_Params
	{
	public:
		class FName                                                bpp__EventName__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__EventScale__pf;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        bpp__EventTags__pf__const;                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.OnDismountSiegeEngine
	 */
	struct UHorseFx_C_OnDismountSiegeEngine_Params
	{
	public:
		class ASiegeEngine*                                        bpp__SiegeEngine__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Forced__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.OnDamageTaken
	 */
	struct UHorseFx_C_OnDamageTaken_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageEvent__pf__const;                             // 0x0000(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.OnDamageCaused
	 */
	struct UHorseFx_C_OnDamageCaused_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageEvent__pf__const;                             // 0x0000(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.OnCombatStateChanged
	 */
	struct UHorseFx_C_OnCombatStateChanged_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__PreviousState__pf;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__NewState__pf;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttackInfo                                         bpp__EventAttackInfo__pf__const;                         // 0x0018(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UCombatState*                                        bpp__InCombatState__pf;                                  // 0x0120(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.OnAssemble_HorseFx
	 */
	struct UHorseFx_C_OnAssemble_HorseFx_Params
	{
	};

	/**
	 * Function HorseFx.HorseFx_C.OnAnimNotifyStepEvent
	 */
	struct UHorseFx_C_OnAnimNotifyStepEvent_Params
	{
	};

	/**
	 * Function HorseFx.HorseFx_C.HorseImpactSound
	 */
	struct UHorseFx_C_HorseImpactSound_Params
	{
	public:
		class UAkAudioEvent*                                       bpp__AkEvent__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.HitParticle
	 */
	struct UHorseFx_C_HitParticle_Params
	{
	public:
		class FName                                                bpp__HitBone__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__NewLocation__pf;                                    // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.GetRagdollForce (Limb)
	 */
	struct UHorseFx_C_GetRagdollForce__Limb__Params
	{
	public:
		class AActor*                                              bpp__Attacker__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Force__pf;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.GetRagdollForce (Body)
	 */
	struct UHorseFx_C_GetRagdollForce__Body__Params
	{
	public:
		class AActor*                                              bpp__Attacker__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Force__pf;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.ExecuteUbergraph_HorseFx_4
	 */
	struct UHorseFx_C_ExecuteUbergraph_HorseFx_4_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.DeathGore
	 */
	struct UHorseFx_C_DeathGore_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageTakenEvent__pf;                               // 0x0000(0x0148)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.CrosshairEvent
	 */
	struct UHorseFx_C_CrosshairEvent_Params
	{
	public:
		class FName                                                bpp__Event__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Enable__pf;                                         // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Scaling__pf;                                        // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function HorseFx.HorseFx_C.BreakAtClosestBone
	 */
	struct UHorseFx_C_BreakAtClosestBone_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Causer__pf;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__HitLocaton__pf__const;                              // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Impulse__pf;                                        // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__HitBone__pf;                                        // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__Success__pf;                                        // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
