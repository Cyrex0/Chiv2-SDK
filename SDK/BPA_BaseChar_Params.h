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
	 * DelegateFunction BPA_BaseChar.BPA_BaseChar_C.OnCustomized_animBP__DelegateSignature
	 */
	struct UBPA_BaseChar_C_OnCustomized_animBP__DelegateSignature_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.UpdateSiegeState
	 */
	struct UBPA_BaseChar_C_UpdateSiegeState_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.UpdateMovementState
	 */
	struct UBPA_BaseChar_C_UpdateMovementState_Params
	{
	public:
		class FName                                                bpp__MovementState__pf;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.updateMorphWhenChange
	 */
	struct UBPA_BaseChar_C_updateMorphWhenChange_Params
	{
	public:
		float                                                      bpp__Value__pf;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__MorphTargetName__pf;                                // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.UpdateCombatState
	 */
	struct UBPA_BaseChar_C_UpdateCombatState_Params
	{
	public:
		class FName                                                bpp__combatState__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttackInfo                                         bpp__AttackxInfo__pfT;                                   // 0x0008(0x0108)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.UpdateBranchEnums
	 */
	struct UBPA_BaseChar_C_UpdateBranchEnums_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.update_isSimulateCloth
	 */
	struct UBPA_BaseChar_C_update_isSimulateCloth_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.StopMovementMontage
	 */
	struct UBPA_BaseChar_C_StopMovementMontage_Params
	{
	public:
		class UNativeAnimationSet_Base*                            bpp__AnimationSet__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.SetSprintMovementState
	 */
	struct UBPA_BaseChar_C_SetSprintMovementState_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.SetIsRecoveryToHolding
	 */
	struct UBPA_BaseChar_C_SetIsRecoveryToHolding_Params
	{
	public:
		bool                                                       bpp__isRecoveryToHolding__pf;                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.SetIsLeaveCombatState
	 */
	struct UBPA_BaseChar_C_SetIsLeaveCombatState_Params
	{
	public:
		bool                                                       bpp__IsLeaveCombatState__pf;                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.setHandIK
	 */
	struct UBPA_BaseChar_C_setHandIK_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.setFootIK
	 */
	struct UBPA_BaseChar_C_setFootIK_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.resetTurnTick
	 */
	struct UBPA_BaseChar_C_resetTurnTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.QueuePoseSnapshot
	 */
	struct UBPA_BaseChar_C_QueuePoseSnapshot_Params
	{
	public:
		class FName                                                bpp__PoseName__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.playMovementMontage
	 */
	struct UBPA_BaseChar_C_playMovementMontage_Params
	{
	public:
		class UAnimMontage*                                        bpp__Montage__pf__const;                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__SectionName__pf;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.playCombatMontage
	 */
	struct UBPA_BaseChar_C_playCombatMontage_Params
	{
	public:
		class UAnimMontage*                                        bpp__AnimMontage__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__SectionName__pf;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__isMultiTrigger__pf;                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.onKnockoffHelemt
	 */
	struct UBPA_BaseChar_C_onKnockoffHelemt_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.OnCustomized_animBP
	 */
	struct UBPA_BaseChar_C_OnCustomized_animBP_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.leftArmCtrl
	 */
	struct UBPA_BaseChar_C_leftArmCtrl_Params
	{
	public:
		bool                                                       bpp__isCheapTick__pf;                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.IsPlayingLadderMontage
	 */
	struct UBPA_BaseChar_C_IsPlayingLadderMontage_Params
	{
	public:
		bool                                                       bpp__IsPlayingMontage__pf;                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.InitialValue
	 */
	struct UBPA_BaseChar_C_InitialValue_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.GetDamageTypeName
	 */
	struct UBPA_BaseChar_C_GetDamageTypeName_Params
	{
	public:
		class UDamageSource*                                       bpp__DamageType__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              bpp__NameString__pf;                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.getAimYawSpeed
	 */
	struct UBPA_BaseChar_C_getAimYawSpeed_Params
	{
	public:
		float                                                      bpp__AimYaw__pf;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__PreAimYaw__pf;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__AimYawSpeed__pf;                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__AimYawAbs__pf;                                      // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.flipYawDirection
	 */
	struct UBPA_BaseChar_C_flipYawDirection_Params
	{
	public:
		float                                                      bpp__inputYaw__pf;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__outputYaw__pf;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_10
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_10_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_9
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_9_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_7
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_7_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_58
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_58_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_6
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_6_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_5
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_5_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_36
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_36_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_34
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_34_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_33
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_33_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_26
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_26_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_24
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_24_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_23
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_23_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_21
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_21_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_20
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_20_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_19
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_19_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_161
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_161_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_144
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_144_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_132
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_132_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_128
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_128_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_124
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_124_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_13
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_13_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_114
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_114_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_113
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_113_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ExecuteUbergraph_BPA_BaseChar_110
	 */
	struct UBPA_BaseChar_C_ExecuteUbergraph_BPA_BaseChar_110_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventVOPlaying
	 */
	struct UBPA_BaseChar_C_EventVOPlaying_Params
	{
	public:
		bool                                                       bpp__IsPlaying__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventUnfreezeRagdollPhysics
	 */
	struct UBPA_BaseChar_C_EventUnfreezeRagdollPhysics_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventSpawnMontageStart
	 */
	struct UBPA_BaseChar_C_EventSpawnMontageStart_Params
	{
	public:
		class FName                                                bpp__AnimationName__pf__const;                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventSpawnMontageComplete
	 */
	struct UBPA_BaseChar_C_EventSpawnMontageComplete_Params
	{
	public:
		class FName                                                bpp__AnimationName__pf__const;                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnWantsToGallop
	 */
	struct UBPA_BaseChar_C_EventOnWantsToGallop_Params
	{
	public:
		bool                                                       bpp__bWantsToGallop__pf;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnStrafeStop
	 */
	struct UBPA_BaseChar_C_EventOnStrafeStop_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnSprintStop
	 */
	struct UBPA_BaseChar_C_EventOnSprintStop_Params
	{
	public:
		bool                                                       bpp__bIsHoldingMoveKey__pf;                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnSprintStart
	 */
	struct UBPA_BaseChar_C_EventOnSprintStart_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnSignificanceChanged
	 */
	struct UBPA_BaseChar_C_EventOnSignificanceChanged_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnSiegeMounted
	 */
	struct UBPA_BaseChar_C_EventOnSiegeMounted_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnSiegeDismounted
	 */
	struct UBPA_BaseChar_C_EventOnSiegeDismounted_Params
	{
	public:
		TBL_EDismountType                                          bpp__DismountType__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnMovementStateChanged
	 */
	struct UBPA_BaseChar_C_EventOnMovementStateChanged_Params
	{
	public:
		class FName                                                bpp__InMovementState__pf;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__InPreviousMovementState__pf;                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnMovementDirectionChanged
	 */
	struct UBPA_BaseChar_C_EventOnMovementDirectionChanged_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnMovementActionStarted
	 */
	struct UBPA_BaseChar_C_EventOnMovementActionStarted_Params
	{
	public:
		class FName                                                bpp__MovementName__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            bpp__Direction__pf;                                      // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnMissingLimb
	 */
	struct UBPA_BaseChar_C_EventOnMissingLimb_Params
	{
	public:
		class FName                                                bpp__Condition__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnLODLevelChanged
	 */
	struct UBPA_BaseChar_C_EventOnLODLevelChanged_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnLanded
	 */
	struct UBPA_BaseChar_C_EventOnLanded_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnKilled
	 */
	struct UBPA_BaseChar_C_EventOnKilled_Params
	{
	public:
		struct FAnimDeathParams                                    bpp__Params__pf__const;                                  // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnInterrupt
	 */
	struct UBPA_BaseChar_C_EventOnInterrupt_Params
	{
	public:
		struct FAnimDamageParams                                   bpp__DamageEvent__pf__const;                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnHorseStartMount
	 */
	struct UBPA_BaseChar_C_EventOnHorseStartMount_Params
	{
	public:
		class FName                                                bpp__Direction__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnHorseStartDismount
	 */
	struct UBPA_BaseChar_C_EventOnHorseStartDismount_Params
	{
	public:
		class FName                                                bpp__Direction__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnHorseMounted
	 */
	struct UBPA_BaseChar_C_EventOnHorseMounted_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnHorseDismounted
	 */
	struct UBPA_BaseChar_C_EventOnHorseDismounted_Params
	{
	public:
		TBL_EDismountType                                          bpp__DismountType__pf;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnHitAfterDeath
	 */
	struct UBPA_BaseChar_C_EventOnHitAfterDeath_Params
	{
	public:
		struct FAnimDeathParams                                    bpp__Params__pf__const;                                  // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnDashCooldownFinished
	 */
	struct UBPA_BaseChar_C_EventOnDashCooldownFinished_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnDash
	 */
	struct UBPA_BaseChar_C_EventOnDash_Params
	{
	public:
		float                                                      bpp__InDashDirection__pf;                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnCombatStateEnd
	 */
	struct UBPA_BaseChar_C_EventOnCombatStateEnd_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__State__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttackInfo                                         bpp__EventAttackInfo__pf__const;                         // 0x0010(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UCombatState*                                        bpp__InCombatState__pf;                                  // 0x0118(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnCombatStateBegin
	 */
	struct UBPA_BaseChar_C_EventOnCombatStateBegin_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__State__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttackInfo                                         bpp__EventAttackInfo__pf__const;                         // 0x0010(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UCombatState*                                        bpp__InCombatState__pf;                                  // 0x0118(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnCameraOffsetEnd
	 */
	struct UBPA_BaseChar_C_EventOnCameraOffsetEnd_Params
	{
	public:
		float                                                      bpp__AngleOffset__pf;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventOnCameraOffsetBegin
	 */
	struct UBPA_BaseChar_C_EventOnCameraOffsetBegin_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventHiddenPositionUpdate
	 */
	struct UBPA_BaseChar_C_EventHiddenPositionUpdate_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventFreezeRagdollPhysics
	 */
	struct UBPA_BaseChar_C_EventFreezeRagdollPhysics_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventFarFromCameraChanged
	 */
	struct UBPA_BaseChar_C_EventFarFromCameraChanged_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventDamageNoInterrupt
	 */
	struct UBPA_BaseChar_C_EventDamageNoInterrupt_Params
	{
	public:
		struct FAnimDamageParams                                   bpp__DamageEvent__pf__const;                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EventCarryableCharacter
	 */
	struct UBPA_BaseChar_C_EventCarryableCharacter_Params
	{
	public:
		class FName                                                bpp__EventName__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLCharacter*                                       bpp__ParentCharacter__pf;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_FFF7CA35497C4A3B1AF41B8A0CD6CA3F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_FFF7CA35497C4A3B1AF41B8A0CD6CA3F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_F70FC43D49AF80BBD95EDE90B98ABB07
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_F70FC43D49AF80BBD95EDE90B98ABB07_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_F44E788B45E3141B78B9DEBF78613246
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_F44E788B45E3141B78B9DEBF78613246_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_E6581173432661F17B43D3A3393B0AD6
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_E6581173432661F17B43D3A3393B0AD6_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_DA1E81654980B42A191638952FA5606D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_DA1E81654980B42A191638952FA5606D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_D8BAB93E44EFBF75E4EA308EEB768CF7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_D8BAB93E44EFBF75E4EA308EEB768CF7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_D326501B455BCAFABC93799514D531A5
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_D326501B455BCAFABC93799514D531A5_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_C8EE48A44EF0F95FDCC8FFB6D794AF36
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_C8EE48A44EF0F95FDCC8FFB6D794AF36_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_C332471E411D9F2FD5E1AC9F99C94E33
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_C332471E411D9F2FD5E1AC9F99C94E33_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_BE5959D041CAD2AE64774DB8D777F45A
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_BE5959D041CAD2AE64774DB8D777F45A_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_B2814A074A009058C37014B2E4BBE572
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_B2814A074A009058C37014B2E4BBE572_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_9CFE86DF48D07817526BF4993E752B41
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_9CFE86DF48D07817526BF4993E752B41_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_9928E2474EA70E9632F1B185301FD875
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_9928E2474EA70E9632F1B185301FD875_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_83BF4EAB4073143A93CFF5A218CFD17C
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_83BF4EAB4073143A93CFF5A218CFD17C_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_7CE1406E48D05F54554D5CB0F8F6E9F6
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_7CE1406E48D05F54554D5CB0F8F6E9F6_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_78C93B624FAFA049D13D9198D9B04E75
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_78C93B624FAFA049D13D9198D9B04E75_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_73485F074A84BA51673105A728947533
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_73485F074A84BA51673105A728947533_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_6594B689495DB961F73024AC3701368F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_6594B689495DB961F73024AC3701368F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_63D7E9DF4D6072456D589891DEEFDDD4
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_63D7E9DF4D6072456D589891DEEFDDD4_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_61A2477D41EE72A811F9CBAD06B08190
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_61A2477D41EE72A811F9CBAD06B08190_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_5652BD174DFB4247DDC63EB052E62CED
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_5652BD174DFB4247DDC63EB052E62CED_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_561FE81942D40D92BFFA698DC4F54D06
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_561FE81942D40D92BFFA698DC4F54D06_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_408C45D84F7A7084D63D3B9A10FF1F39
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_408C45D84F7A7084D63D3B9A10FF1F39_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_3DABA2A94AEE3597BB6392961252BF04
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_3DABA2A94AEE3597BB6392961252BF04_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_34E6655B4B8AEA072229C48FB746FE27
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_34E6655B4B8AEA072229C48FB746FE27_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_2400B0DC452385A247D65286886E5A74
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_2400B0DC452385A247D65286886E5A74_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_1477B96B40C99DF16C200DADC6BEA557
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_1477B96B40C99DF16C200DADC6BEA557_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_1337FC464F69F4C228736989E6D81871
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_1337FC464F69F4C228736989E6D81871_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_0E3A3C5F4D8126BCD87178BA7504B145
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_0E3A3C5F4D8126BCD87178BA7504B145_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_09C022D746FE94B5A5FA3AA985744AFA
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_09C022D746FE94B5A5FA3AA985744AFA_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_095B47CA46C0413DA73CCA874070C551
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_095B47CA46C0413DA73CCA874070C551_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_0412B47B439ABA7C065D4DB8DF05EA94
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_0412B47B439ABA7C065D4DB8DF05EA94_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_01C77901492F8E84852892AE795005E2
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoWayBlend_01C77901492F8E84852892AE795005E2_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_F33C66E54B60753759DBD08867B3BBB6
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_F33C66E54B60753759DBD08867B3BBB6_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_BDE69C69475B4713A5783BB11F93ED05
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_BDE69C69475B4713A5783BB11F93ED05_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_775ED5C54E3EC6CA2A8DE795E17C4EE1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_775ED5C54E3EC6CA2A8DE795E17C4EE1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_47B82E174BF9BF34118808AB59093889
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_47B82E174BF9BF34118808AB59093889_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_2B8829414D1FCD01F18B89AAE3D05713
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_2B8829414D1FCD01F18B89AAE3D05713_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_200B82E64C4EA16B76019096F9482E29
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TwoBoneIK_200B82E64C4EA16B76019096F9482E29_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_FF7D49244168BA780D6B4F829B3807B1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_FF7D49244168BA780D6B4F829B3807B1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_F405F51E47929582A6152FAA50ED4FE6
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_F405F51E47929582A6152FAA50ED4FE6_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_EA4D50214E35BA944B3D73B6D390F5D7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_EA4D50214E35BA944B3D73B6D390F5D7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_E657A69E4493D64D3BE4B0A856EA35DC
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_E657A69E4493D64D3BE4B0A856EA35DC_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_E1CE0F7D44214FC66152B9840399F2D6
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_E1CE0F7D44214FC66152B9840399F2D6_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_CD9B220F47431DF78643B698AC1F3C0A
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_CD9B220F47431DF78643B698AC1F3C0A_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_CB500FD94D25774D6323A5A2768894A0
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_CB500FD94D25774D6323A5A2768894A0_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C85F93824BDCE37B8E4779BE7251F504
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C85F93824BDCE37B8E4779BE7251F504_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C593984847ED7A2EE497ACA80F0AC5F3
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C593984847ED7A2EE497ACA80F0AC5F3_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C0F2A805492E884834FC8B882759A71D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C0F2A805492E884834FC8B882759A71D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C04A1FD34D4B72B9BA258E83BF6D9722
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_C04A1FD34D4B72B9BA258E83BF6D9722_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_B4B3625641F3A47C8C9FEF91AF3F5B43
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_B4B3625641F3A47C8C9FEF91AF3F5B43_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_B44F843A443390F5CDE68693D99CA9F7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_B44F843A443390F5CDE68693D99CA9F7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_ADE1147447740A5E1504308C4814DCF4
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_ADE1147447740A5E1504308C4814DCF4_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_AC9BD4524053777C193847874EF944ED
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_AC9BD4524053777C193847874EF944ED_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_A8636A9447A6871EB0AE10A96E32EDDA
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_A8636A9447A6871EB0AE10A96E32EDDA_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_A758369142F90DE2F19C3D9F199FEFA5
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_A758369142F90DE2F19C3D9F199FEFA5_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_A492D1E2499C6062E947D6B8890BBDF9
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_A492D1E2499C6062E947D6B8890BBDF9_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_9FC6600B48E425511E48588D5E5FD1B5
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_9FC6600B48E425511E48588D5E5FD1B5_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_964C6D194DEC6FEE18662DA8B201460A
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_964C6D194DEC6FEE18662DA8B201460A_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_9568777C4437ED2976576B84332EB9FF
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_9568777C4437ED2976576B84332EB9FF_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8BD51E2C40AFB97AEDC81EB530E8E632
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8BD51E2C40AFB97AEDC81EB530E8E632_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8B52AB0944C24C223BD10FB9A4B9FA51
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8B52AB0944C24C223BD10FB9A4B9FA51_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_88E36D4448739412B379E1B029573DD7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_88E36D4448739412B379E1B029573DD7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_88A0A0994DD6793E21BCD1959C8B39D9
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_88A0A0994DD6793E21BCD1959C8B39D9_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8355B44B4B07A44EF691439B4D5B5D5C
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8355B44B4B07A44EF691439B4D5B5D5C_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_82FB11AA4F9ADF04F946A384F76C1B19
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_82FB11AA4F9ADF04F946A384F76C1B19_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8268E56B4B55F34526B9219A4F42385D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_8268E56B4B55F34526B9219A4F42385D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_7E00595142AED12E421A9B9610F81765
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_7E00595142AED12E421A9B9610F81765_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_7B3D40AC49168B9F036B919E6C6D855F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_7B3D40AC49168B9F036B919E6C6D855F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_7983B9E14C8B5A246991F5A86CAC587C
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_7983B9E14C8B5A246991F5A86CAC587C_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_797C39A54A26BB40B1F54FAA79D2D841
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_797C39A54A26BB40B1F54FAA79D2D841_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_752CC09B485C8F651E6CCDBD01329429
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_752CC09B485C8F651E6CCDBD01329429_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_738A14C14BD3CC7A612BF49990DC68FA
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_738A14C14BD3CC7A612BF49990DC68FA_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_6ACA478E45ABE867AE62B6A82C7E78C9
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_6ACA478E45ABE867AE62B6A82C7E78C9_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_6ABC4EFA4349562F251030AE09751427
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_6ABC4EFA4349562F251030AE09751427_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_69920E004413E9DC2ED962838E69BAFD
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_69920E004413E9DC2ED962838E69BAFD_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_547C39F742ADFDA1183D1BB1EDF56D26
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_547C39F742ADFDA1183D1BB1EDF56D26_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_4746196A4379480885744588A4E109BA
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_4746196A4379480885744588A4E109BA_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_44F8E7D24C7BF14E1BA3BF9482421D81
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_44F8E7D24C7BF14E1BA3BF9482421D81_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_3B6EEAC241694D2A1113E198193DAD24
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_3B6EEAC241694D2A1113E198193DAD24_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_336318274C4CD87A8373279AAD08E6FE
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_336318274C4CD87A8373279AAD08E6FE_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_321B0F7C44E533D1B1D0EFB47CE478EB
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_321B0F7C44E533D1B1D0EFB47CE478EB_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_2FF902154E797B3CBEC87D895B05EC04
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_2FF902154E797B3CBEC87D895B05EC04_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_296EBAA94DD5EDEBC30874B51B276B57
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_296EBAA94DD5EDEBC30874B51B276B57_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_28BF82CF44FA1A7ED413C1926C2031FB
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_28BF82CF44FA1A7ED413C1926C2031FB_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_2496EE864B4AAF4F7547CFB1240B9BE1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_2496EE864B4AAF4F7547CFB1240B9BE1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_14AE1F93432CB3F1CB7CB993AD0AFB2F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_14AE1F93432CB3F1CB7CB993AD0AFB2F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_1242A8A34B6BE4779F03ABAB88ADA479
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_1242A8A34B6BE4779F03ABAB88ADA479_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_0B6000C74C804AFADEF5239391633E22
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_0B6000C74C804AFADEF5239391633E22_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_09D5076442E36584410ECE9601D24142
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_09D5076442E36584410ECE9601D24142_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_02B8215D4C93602C82C104AB6407C61F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_TransitionResult_02B8215D4C93602C82C104AB6407C61F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_FECCD90F4748A8BA3A0109930B7D8120
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_FECCD90F4748A8BA3A0109930B7D8120_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_F2A34B5E42CCFA8FE19307A8F6A35E81
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_F2A34B5E42CCFA8FE19307A8F6A35E81_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_EE6DDC32427342B7C63B2E8B5AFA425F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_EE6DDC32427342B7C63B2E8B5AFA425F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_EA4903634732D0730ACF5BA62290DB8D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_EA4903634732D0730ACF5BA62290DB8D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E861FB5B44738033FC0C3DADC939D8B8
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E861FB5B44738033FC0C3DADC939D8B8_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E797221E449CDFF24ADC778208E4F263
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E797221E449CDFF24ADC778208E4F263_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E726F6224F19BE3DFFAB01AC91A7DB70
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E726F6224F19BE3DFFAB01AC91A7DB70_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E56776CB4F1714C1B45A73BF2F749617
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_E56776CB4F1714C1B45A73BF2F749617_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_DFCECAB94CA5D95B98926087DFA3B0F2
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_DFCECAB94CA5D95B98926087DFA3B0F2_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D8EB1C8540FC74B617200A9145CB27A7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D8EB1C8540FC74B617200A9145CB27A7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D874F0D64AB6F085D19495ACA3AF42C6
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D874F0D64AB6F085D19495ACA3AF42C6_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D7CDEF784700EDF1306B2C9BC990FFDC
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D7CDEF784700EDF1306B2C9BC990FFDC_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D73F7B824B2883F6A913B7B7436D960B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D73F7B824B2883F6A913B7B7436D960B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D3639FB64CA29560313F0D9FEEB33778
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_D3639FB64CA29560313F0D9FEEB33778_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_CD1296A946BDAD8F86649394DB3B89F4
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_CD1296A946BDAD8F86649394DB3B89F4_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C5F3ADED4B3E5162C5507A833EC89AFA
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C5F3ADED4B3E5162C5507A833EC89AFA_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C4A337D547F67FDA04A2A8AA7E91461B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C4A337D547F67FDA04A2A8AA7E91461B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C1C5B37642D76003B4C5F0908102D047
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_C1C5B37642D76003B4C5F0908102D047_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_BD957FF64AD5388A170E44B72CD8207B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_BD957FF64AD5388A170E44B72CD8207B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_BC3F09DE4BCB9F5CBE8731B1683409DF
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_BC3F09DE4BCB9F5CBE8731B1683409DF_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_BBE113514E9DFC2EC014CB8DD15963D7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_BBE113514E9DFC2EC014CB8DD15963D7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_B9FBB1204681A9894A635C80A8A212F3
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_B9FBB1204681A9894A635C80A8A212F3_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_B143AD454750733AAE8955BC678183E1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_B143AD454750733AAE8955BC678183E1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_AE584B7C432A802E6FC93DBC627B6832
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_AE584B7C432A802E6FC93DBC627B6832_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_AE1078DA48C13568BD94EB8D8BC4F9C5
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_AE1078DA48C13568BD94EB8D8BC4F9C5_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_A59B44A6454F3EB44B9820A6007C62F1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_A59B44A6454F3EB44B9820A6007C62F1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_A3AD93EE418613B883D6258DF21AC659
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_A3AD93EE418613B883D6258DF21AC659_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9CA1F6504C44B4FF5D035AA063F59D63
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9CA1F6504C44B4FF5D035AA063F59D63_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9A27A1634C9854593F357BA10B6E61B3
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9A27A1634C9854593F357BA10B6E61B3_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_93E5ED884B7D584A5DB6FB82514D850F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_93E5ED884B7D584A5DB6FB82514D850F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9396FE46416CE661943F3A9813F1042D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9396FE46416CE661943F3A9813F1042D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9323880146094E5255B7D5AC7DEB03D9
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_9323880146094E5255B7D5AC7DEB03D9_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_8D3F77024933E6A4D30E0EACABC453F1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_8D3F77024933E6A4D30E0EACABC453F1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_860D0CF842BFDE4BB8F2F7BE3CC551AE
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_860D0CF842BFDE4BB8F2F7BE3CC551AE_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_806947894C6490556719378869EBB3CC
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_806947894C6490556719378869EBB3CC_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_79F884DA41F106B1153645B13C512310
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_79F884DA41F106B1153645B13C512310_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_75548BAF4CE3D6E602B98280B628C0DB
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_75548BAF4CE3D6E602B98280B628C0DB_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6E885F5343075CBAB1F7C3B671B682E1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6E885F5343075CBAB1F7C3B671B682E1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6C82EBAB48470007B99C6C89137B14D5
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6C82EBAB48470007B99C6C89137B14D5_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6C5AA66C4C96962910B1D987D1F981FB
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6C5AA66C4C96962910B1D987D1F981FB_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6A94B30845D87FE5CF49B9A233E70FF3
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6A94B30845D87FE5CF49B9A233E70FF3_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_62A1BBBB4124F01726AA20A83DDAEF39
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_62A1BBBB4124F01726AA20A83DDAEF39_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6129A7E7490EE3BC2B8518930FBFB545
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_6129A7E7490EE3BC2B8518930FBFB545_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_60C15EA840646D2AB5C816981702B782
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_60C15EA840646D2AB5C816981702B782_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_5E8797DD41505D00E90104BEF965BC11
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_5E8797DD41505D00E90104BEF965BC11_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_5388C0EA455B78B8D77A6DB45A32CE66
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_5388C0EA455B78B8D77A6DB45A32CE66_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_5363203C47E2A572B89D179A239ED4CD
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_5363203C47E2A572B89D179A239ED4CD_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_4BF350EA4D3EC7629FCE8CAD8130BA6E
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_4BF350EA4D3EC7629FCE8CAD8130BA6E_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_4455623E489B82AC8C2879A79F815A4B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_4455623E489B82AC8C2879A79F815A4B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_44504B0E434D55F19B2D79BD0BD26BAB
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_44504B0E434D55F19B2D79BD0BD26BAB_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_41061EF546E4DF797A025B894CF00E5A
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_41061EF546E4DF797A025B894CF00E5A_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_40E77584468EB0BABB04DA8DF3784369
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_40E77584468EB0BABB04DA8DF3784369_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_3FB6D26142651864649918A364D9B567
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_3FB6D26142651864649918A364D9B567_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_3BF10B8742C4A997E7FA5892AB3C3489
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_3BF10B8742C4A997E7FA5892AB3C3489_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_37ECB93544C4D7DE7C8691BDEDF2415E
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_37ECB93544C4D7DE7C8691BDEDF2415E_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_338F4B34460618A4E8EE038E9C703FAE
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_338F4B34460618A4E8EE038E9C703FAE_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_3227244041A811E365572895160FF885
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_3227244041A811E365572895160FF885_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_2FCC5D7943AA4B0227BDBCAE4A7D2A5F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_2FCC5D7943AA4B0227BDBCAE4A7D2A5F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_2DEEF4B44DB7A44B9047CC8C64FFDB0C
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_2DEEF4B44DB7A44B9047CC8C64FFDB0C_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_273968FD4C0A45BF69380F92AC53D34F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_273968FD4C0A45BF69380F92AC53D34F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_1FAB29864136D260C25C449C20904ACA
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_1FAB29864136D260C25C449C20904ACA_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_1792841340A62F98A6D8019AE02BEA49
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_1792841340A62F98A6D8019AE02BEA49_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_1711207E470CC15AFAB40F8A7924A31F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_1711207E470CC15AFAB40F8A7924A31F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_16671DFB4B017D0F85A1CD9F75E40156
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_16671DFB4B017D0F85A1CD9F75E40156_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_154D724C4F2CB2DF163D48AA0D13BC26
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_154D724C4F2CB2DF163D48AA0D13BC26_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_15364AF64E0D71F159BD698D62107746
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_15364AF64E0D71F159BD698D62107746_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_12A03A244FE076107B3FABB8AF9537E1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_12A03A244FE076107B3FABB8AF9537E1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_0A9784774516C74FE43002B23D170CBB
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_0A9784774516C74FE43002B23D170CBB_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_083FF6524C50A97D1926E1BC70E9E464
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_083FF6524C50A97D1926E1BC70E9E464_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_066D8F314AEB1BD114653192395B5646
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_066D8F314AEB1BD114653192395B5646_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_035507FE4E55D00280E44C8F107F04A9
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_SequencePlayer_035507FE4E55D00280E44C8F107F04A9_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_RotationMultiplier_17D4A4A34CB28BCB5D58DEBFD566B5D1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_RotationMultiplier_17D4A4A34CB28BCB5D58DEBFD566B5D1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_RotateRootBone_2BF69BE84B00C128F475FFB1038AB10C
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_RotateRootBone_2BF69BE84B00C128F475FFB1038AB10C_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_MultiWayBlend_C6E6DB8740C103DA1B6A1AB20C4456C8
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_MultiWayBlend_C6E6DB8740C103DA1B6A1AB20C4456C8_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_F661E06543C0E000F7E197BFE98B6458
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_F661E06543C0E000F7E197BFE98B6458_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_E6DBA83C4ADA41E82FD3DE8ECD1F0461
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_E6DBA83C4ADA41E82FD3DE8ECD1F0461_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_D569FCF34F85CB6F32C9E7B61422A67D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_D569FCF34F85CB6F32C9E7B61422A67D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_CBDECB7548B3DB12E6B56C92A268F425
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_CBDECB7548B3DB12E6B56C92A268F425_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_BCBEC7C14F28B86853D3EFB599359D33
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_BCBEC7C14F28B86853D3EFB599359D33_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_B05790EA4A39236BA7B124A887F1E057
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_B05790EA4A39236BA7B124A887F1E057_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_AA6A9D8D44C127044C987CA9883B4C18
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_AA6A9D8D44C127044C987CA9883B4C18_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_9A6FCB4540DF0FFCDE71529197901395
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_9A6FCB4540DF0FFCDE71529197901395_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_942EC5444C3BF52AF225FEB0AAA3A124
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_942EC5444C3BF52AF225FEB0AAA3A124_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_7FFB8FF14E867BA8C4824B9C8794D670
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_7FFB8FF14E867BA8C4824B9C8794D670_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_717503D34E5ED48F391EA691AF884FFF
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_717503D34E5ED48F391EA691AF884FFF_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_58D8E173437A83F3411258B8AA56FC5E
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_58D8E173437A83F3411258B8AA56FC5E_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_56CE149941F4B080D8FD6897B2B98A27
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_56CE149941F4B080D8FD6897B2B98A27_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_55577D0847792C856DE279B3E7ABBA34
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_55577D0847792C856DE279B3E7ABBA34_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_4F42C53D4E3B828D258DEFAEA4595F1D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_4F42C53D4E3B828D258DEFAEA4595F1D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_41DF41C94308B9273BBEDE92DD162F68
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_41DF41C94308B9273BBEDE92DD162F68_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_3DFAA9B342CE2FDC05139B82EA7B4873
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_3DFAA9B342CE2FDC05139B82EA7B4873_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_3D3DAC684F7CF4ECAD493A905B2D5A9C
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_3D3DAC684F7CF4ECAD493A905B2D5A9C_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_2597AB2B4A1D6843720B5B86BCC1313B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ModifyBone_2597AB2B4A1D6843720B5B86BCC1313B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LookAt_824B60D240D97D73BCBC2C919E454A78
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LookAt_824B60D240D97D73BCBC2C919E454A78_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LookAt_588D133B4BACC85F401F80AFE97E8265
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LookAt_588D133B4BACC85F401F80AFE97E8265_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LegIK_936C7BF942F8D2F451A615AC087B7F04
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LegIK_936C7BF942F8D2F451A615AC087B7F04_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_E927541A49BCDF1AF3D265AA07296DDC
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_E927541A49BCDF1AF3D265AA07296DDC_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_DAAE2FDC49BC957A4FE1D38F422F7A5A
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_DAAE2FDC49BC957A4FE1D38F422F7A5A_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_CE3384E94A8922193B5CFBA83CB3F168
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_CE3384E94A8922193B5CFBA83CB3F168_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_AF0E4CDD45808B4643F27FB84D998B35
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_AF0E4CDD45808B4643F27FB84D998B35_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_967C175647BD08643676E299CB05B832
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_967C175647BD08643676E299CB05B832_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_9642E7E24B79B7A56F392FB03C5AA0E8
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_9642E7E24B79B7A56F392FB03C5AA0E8_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_772C667C43982AEA082630BCB95F9767
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_772C667C43982AEA082630BCB95F9767_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_6CBE58924C9F0E0491D292B702605C37
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_6CBE58924C9F0E0491D292B702605C37_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_61D5648548DBDDA2C6306F9A993E348E
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_61D5648548DBDDA2C6306F9A993E348E_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_4459BBEC4137AEB5A61C28B2D316B5A7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_4459BBEC4137AEB5A61C28B2D316B5A7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_1A856B93483F6DFE8C52439E3D0FC56A
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_1A856B93483F6DFE8C52439E3D0FC56A_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_0180C1684762962830128DB9EB0A226A
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_LayeredBoneBlend_0180C1684762962830128DB9EB0A226A_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_AA29E06247C83FA88C5CBD9FD2B6589B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_AA29E06247C83FA88C5CBD9FD2B6589B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_9A8C760943DEBE044E5B4BA1C9A2C73E
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_9A8C760943DEBE044E5B4BA1C9A2C73E_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_8A742A7145155FED164FBEA92958915D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_8A742A7145155FED164FBEA92958915D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_6856E46A42F3FE669745DA87292002A1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_6856E46A42F3FE669745DA87292002A1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_2DC077EF401B377C7CC02D829FA3A635
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_2DC077EF401B377C7CC02D829FA3A635_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_26E90A154C5B16247BEED0B7DC07DB2A
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_26E90A154C5B16247BEED0B7DC07DB2A_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_15DBCF944C87076422D9BCB38EA8AD5E
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_15DBCF944C87076422D9BCB38EA8AD5E_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_0B693D8C45AD6FAC023B80B213B15F49
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_CopyBone_0B693D8C45AD6FAC023B80B213B15F49_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_FEFF208D4D1A8E9BBCBEE5B8AB5B3EAA
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_FEFF208D4D1A8E9BBCBEE5B8AB5B3EAA_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_FBBA904F492321A0ACD4A7A259C9F260
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_FBBA904F492321A0ACD4A7A259C9F260_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_F9BDD7A54DF5145066EB93ACE89219FD
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_F9BDD7A54DF5145066EB93ACE89219FD_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_F3C8E4B046B996A914C1A9B52601C870
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_F3C8E4B046B996A914C1A9B52601C870_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_F1F794A24CEC99FF6F7E128F28DBA2AD
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_F1F794A24CEC99FF6F7E128F28DBA2AD_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_EEA28164430E8729FF84DCA6280A24A3
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_EEA28164430E8729FF84DCA6280A24A3_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_EE7482514A164369502C3CB2B76FDE48
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_EE7482514A164369502C3CB2B76FDE48_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_DEC989CB4190A0CDBF79299B956F0CFD
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_DEC989CB4190A0CDBF79299B956F0CFD_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_DE422AD24B8760901869B08EE7715502
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_DE422AD24B8760901869B08EE7715502_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_DDE80C06474FF3AA4AEF94B58921F11B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_DDE80C06474FF3AA4AEF94B58921F11B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D9880CC049F19290805085B68D6D9D64
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D9880CC049F19290805085B68D6D9D64_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D60925BE446AA5EC54F9EAB9D6A0581E
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D60925BE446AA5EC54F9EAB9D6A0581E_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D2395BB742A9DED1439B31AC373CE580
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D2395BB742A9DED1439B31AC373CE580_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D114D1D94AA6217A9805DE8B6B81F66C
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_D114D1D94AA6217A9805DE8B6B81F66C_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_CF397057484BEB20F507F8A70A52E67B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_CF397057484BEB20F507F8A70A52E67B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_CDF513D44A2D08367A59909D5D78701B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_CDF513D44A2D08367A59909D5D78701B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_CB4FC88849128A027714A79E0C2B5046
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_CB4FC88849128A027714A79E0C2B5046_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_C461179B4D0851B233D9CDA0EF017AFB
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_C461179B4D0851B233D9CDA0EF017AFB_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_C3A82CB948806FEE0612E98EA3F6FB99
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_C3A82CB948806FEE0612E98EA3F6FB99_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_B7BB243445A710E855FD97A3458907BE
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_B7BB243445A710E855FD97A3458907BE_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_B616DE594806C8D5422B6E8819C24198
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_B616DE594806C8D5422B6E8819C24198_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_B12F0F954D5837AB7DC7969DAA66CBE7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_B12F0F954D5837AB7DC7969DAA66CBE7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A3E331DE4DE4AB47F34D459CD7433FB8
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A3E331DE4DE4AB47F34D459CD7433FB8_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A13BD6C246DAA9F81E7DBDA4EE33D224
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A13BD6C246DAA9F81E7DBDA4EE33D224_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A13039574A3D9739364611803E229BB9
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A13039574A3D9739364611803E229BB9_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A09E380E4B57E0C73504D9B2EFF5E98C
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_A09E380E4B57E0C73504D9B2EFF5E98C_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_9C676ACA4F7FAD7E2564B7AEC4C73A3F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_9C676ACA4F7FAD7E2564B7AEC4C73A3F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_9954709A42935D00B5F7D7BED178C0E7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_9954709A42935D00B5F7D7BED178C0E7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_969DD8A94B2137DFD8920D97D6A866F1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_969DD8A94B2137DFD8920D97D6A866F1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8E9FBD3C4AC2BF4A06C437BC0330B271
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8E9FBD3C4AC2BF4A06C437BC0330B271_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8E0A1AE94DC0B7977E9005AC2F6AB487
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8E0A1AE94DC0B7977E9005AC2F6AB487_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8C787B3D471CD66B2F317C8586D1F588
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8C787B3D471CD66B2F317C8586D1F588_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8587B3044C1C2E34CC9085ABB12240E2
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_8587B3044C1C2E34CC9085ABB12240E2_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_841A5C9F4016B40BDE8299991E262B11
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_841A5C9F4016B40BDE8299991E262B11_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_810E447040BECAE35658058633133CA9
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_810E447040BECAE35658058633133CA9_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_7BBE85C94EB64D8AD6098EB4CCE108AD
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_7BBE85C94EB64D8AD6098EB4CCE108AD_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_7B784BD24DA257995E2427A9EEEACE94
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_7B784BD24DA257995E2427A9EEEACE94_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_7066F8804BF635BCEF4E15831A4F62E8
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_7066F8804BF635BCEF4E15831A4F62E8_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_6FE5FD95485817FFEDAFC8A4255CDE96
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_6FE5FD95485817FFEDAFC8A4255CDE96_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_6C7D14C84C3A01053897B7AF51DA9A95
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_6C7D14C84C3A01053897B7AF51DA9A95_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_4CDCA2E74310209BF7F9F4916961E275
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_4CDCA2E74310209BF7F9F4916961E275_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_3E2649DA45235E869CC667B73F5A02B5
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_3E2649DA45235E869CC667B73F5A02B5_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_3B79E5974B987C2DE5103BA62F48A8BC
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_3B79E5974B987C2DE5103BA62F48A8BC_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_3A427B51409294DF209BE29372638EF2
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_3A427B51409294DF209BE29372638EF2_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_327DBEFB40DA6FF8EE81F1A39255E6E2
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_327DBEFB40DA6FF8EE81F1A39255E6E2_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_1D9C4D6F44473C04761DB0BD906F3C3F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_1D9C4D6F44473C04761DB0BD906F3C3F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_1C2AACB843768F7D9CD8E5BA247B1707
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_1C2AACB843768F7D9CD8E5BA247B1707_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_19B489B34D32B5BEA6CCAC9D8BA960E9
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_19B489B34D32B5BEA6CCAC9D8BA960E9_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_181CD33C4EC141D1600392A287E273AD
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_181CD33C4EC141D1600392A287E273AD_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_151236994926563A3970FD9FE6EEA50D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_151236994926563A3970FD9FE6EEA50D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_13CDB1A0495D6F65217F92B253323907
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_13CDB1A0495D6F65217F92B253323907_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_127340F54A505F968F5F9AA12548A7A8
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_127340F54A505F968F5F9AA12548A7A8_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_0E67662F48979D7DB2652E805147AA78
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendSpacePlayer_0E67662F48979D7DB2652E805147AA78_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_FA550C364F0175074DB049B2041CD2A7
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_FA550C364F0175074DB049B2041CD2A7_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_F21BCD7540B25BFB8F3F2C9A1EB3807F
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_F21BCD7540B25BFB8F3F2C9A1EB3807F_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_E75D413E460104D88669E08E587F08D4
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_E75D413E460104D88669E08E587F08D4_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_D1BF224246DD646269AF96AC2BE77B57
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_D1BF224246DD646269AF96AC2BE77B57_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_D00657C04E97DC0C02DD4DA5D1476475
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_D00657C04E97DC0C02DD4DA5D1476475_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_CBD9F6AD4860DA45D71364A1A5D899D6
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_CBD9F6AD4860DA45D71364A1A5D899D6_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_BC70B46B4DF8122736A2E08C2B6D61E1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_BC70B46B4DF8122736A2E08C2B6D61E1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_B89406B14B0AF4EFE1147399B44AC258
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_B89406B14B0AF4EFE1147399B44AC258_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_B09C88A640B2EA006D5D18AB1A9A8FB9
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_B09C88A640B2EA006D5D18AB1A9A8FB9_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_A65234664B6B5DDF572BBE932EB80973
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_A65234664B6B5DDF572BBE932EB80973_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_A5836F1F4548CD5ACFB2D9BEFC974BD4
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_A5836F1F4548CD5ACFB2D9BEFC974BD4_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_9CDF380145DEA95748180798142AE219
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_9CDF380145DEA95748180798142AE219_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_857CA5DD402D5EBB462A0D9CE2375936
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_857CA5DD402D5EBB462A0D9CE2375936_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_7CC79AC945E9069D30D597B870F83E02
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_7CC79AC945E9069D30D597B870F83E02_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_70A1BB2448F7F1CB71B314939BB425BD
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_70A1BB2448F7F1CB71B314939BB425BD_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_6EB24FB04F49A54D63E75ABC6CE462B8
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_6EB24FB04F49A54D63E75ABC6CE462B8_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_6A96C27B423F61CC47C75D83B4DFB914
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_6A96C27B423F61CC47C75D83B4DFB914_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_62F8EC164BFDB8DDB692389D4508731B
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_62F8EC164BFDB8DDB692389D4508731B_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_4B4FC4CF487D14F81FE0088EB175A6E8
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_4B4FC4CF487D14F81FE0088EB175A6E8_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_483FCBDA44F1B14F95DB548E054A0B6D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_483FCBDA44F1B14F95DB548E054A0B6D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_41581DED4401D9AC13B0D5BE15554352
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_41581DED4401D9AC13B0D5BE15554352_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_3BBD11104B40ACDB967F16BC8C0D6A6D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_3BBD11104B40ACDB967F16BC8C0D6A6D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_35321432409A4C90C6AF37A680A45F21
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_35321432409A4C90C6AF37A680A45F21_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_30C7511246A25D0D7092988B4FE41507
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_30C7511246A25D0D7092988B4FE41507_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_1E4EF7484FD1E1B1F8B4F6B93A2BA788
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_1E4EF7484FD1E1B1F8B4F6B93A2BA788_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_10D0090E4C19191B785E298FA9ACED21
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_10D0090E4C19191B785E298FA9ACED21_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_10B4B80949CF3169B178EBA0A5C3B13D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendListByBool_10B4B80949CF3169B178EBA0A5C3B13D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendBoneByChannel_BA7887164EC3AFFF445FA3A9D6503B4E
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendBoneByChannel_BA7887164EC3AFFF445FA3A9D6503B4E_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendBoneByChannel_5C64358C4D0C2DE18BFDBFBB97E33F7C
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_BlendBoneByChannel_5C64358C4D0C2DE18BFDBFBB97E33F7C_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyMeshSpaceAdditive_222815A1496D37D54BA5FA86203894C3
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyMeshSpaceAdditive_222815A1496D37D54BA5FA86203894C3_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_F745A7B541577E096402FA925795583D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_F745A7B541577E096402FA925795583D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_ED767EAB4E588BF06A0A4081AB76F9BA
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_ED767EAB4E588BF06A0A4081AB76F9BA_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_ECB15FA046613F7560C370BF10CB9AE1
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_ECB15FA046613F7560C370BF10CB9AE1_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_E3A383E84E06DB248C5859B1CFC59EE0
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_E3A383E84E06DB248C5859B1CFC59EE0_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_65E29BBC438A9236CF7CC9AF0F101F98
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_65E29BBC438A9236CF7CC9AF0F101F98_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_4EFD2D2D47BC5BFFB8039E8C7DE36E9D
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_4EFD2D2D47BC5BFFB8039E8C7DE36E9D_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_31458ABF4B86376DE73BAC9F5320FEB5
	 */
	struct UBPA_BaseChar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_AnimGraphNode_ApplyAdditive_31458ABF4B86376DE73BAC9F5320FEB5_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.ConvertDirectionAngleToName
	 */
	struct UBPA_BaseChar_C_ConvertDirectionAngleToName_Params
	{
	public:
		float                                                      bpp__DirectionxAngel__pfT;                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__DirectionxName__pfT;                                // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.BlueprintUpdateAnimation
	 */
	struct UBPA_BaseChar_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.BlueprintOnAnimationSetChanged
	 */
	struct UBPA_BaseChar_C_BlueprintOnAnimationSetChanged_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.BlueprintInitializeAnimation
	 */
	struct UBPA_BaseChar_C_BlueprintInitializeAnimation_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.BlueprintBeginPlay
	 */
	struct UBPA_BaseChar_C_BlueprintBeginPlay_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_turnAnother_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_turnAnother_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_turn_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_turn_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_Turn_AnimEnd
	 */
	struct UBPA_BaseChar_C_AnimNotify_Turn_AnimEnd_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_strafeToSprintStart_start
	 */
	struct UBPA_BaseChar_C_AnimNotify_strafeToSprintStart_start_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_strafeStartToSprintStart_start
	 */
	struct UBPA_BaseChar_C_AnimNotify_strafeStartToSprintStart_start_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_strafeStart_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_strafeStart_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_startTrans_sprintTurn
	 */
	struct UBPA_BaseChar_C_AnimNotify_startTrans_sprintTurn_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_StartCrouch
	 */
	struct UBPA_BaseChar_C_AnimNotify_StartCrouch_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_sprintTap_enter
	 */
	struct UBPA_BaseChar_C_AnimNotify_sprintTap_enter_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_sprintAdditive_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_sprintAdditive_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_SpringStop_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_SpringStop_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_Ragdoll_RightLeg
	 */
	struct UBPA_BaseChar_C_AnimNotify_Ragdoll_RightLeg_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_Ragdoll_LeftLeg
	 */
	struct UBPA_BaseChar_C_AnimNotify_Ragdoll_LeftLeg_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_MountOn_Start
	 */
	struct UBPA_BaseChar_C_AnimNotify_MountOn_Start_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_MountOn_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_MountOn_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_MountOff_Start
	 */
	struct UBPA_BaseChar_C_AnimNotify_MountOff_Start_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_MountOff_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_MountOff_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_lungeEnd
	 */
	struct UBPA_BaseChar_C_AnimNotify_lungeEnd_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_LeaveCrouch
	 */
	struct UBPA_BaseChar_C_AnimNotify_LeaveCrouch_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_jumpLand_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_jumpLand_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_interruptStep_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_interruptStep_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_fully_turnAnother
	 */
	struct UBPA_BaseChar_C_AnimNotify_fully_turnAnother_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_fully_turn
	 */
	struct UBPA_BaseChar_C_AnimNotify_fully_turn_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_fully_sprintStart
	 */
	struct UBPA_BaseChar_C_AnimNotify_fully_sprintStart_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_fully_FinishTurn
	 */
	struct UBPA_BaseChar_C_AnimNotify_fully_FinishTurn_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_FullbodyReload_On
	 */
	struct UBPA_BaseChar_C_AnimNotify_FullbodyReload_On_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_FullbodyReload_Off
	 */
	struct UBPA_BaseChar_C_AnimNotify_FullbodyReload_Off_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_FullBody_On
	 */
	struct UBPA_BaseChar_C_AnimNotify_FullBody_On_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_FullBody_Off
	 */
	struct UBPA_BaseChar_C_AnimNotify_FullBody_Off_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_enter_strafe
	 */
	struct UBPA_BaseChar_C_AnimNotify_enter_strafe_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_enter_sprintStop
	 */
	struct UBPA_BaseChar_C_AnimNotify_enter_sprintStop_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_enter_sprintStart
	 */
	struct UBPA_BaseChar_C_AnimNotify_enter_sprintStart_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_enter_sprint
	 */
	struct UBPA_BaseChar_C_AnimNotify_enter_sprint_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_enter_idle
	 */
	struct UBPA_BaseChar_C_AnimNotify_enter_idle_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_enter_hop
	 */
	struct UBPA_BaseChar_C_AnimNotify_enter_hop_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_enter_DownedIdle
	 */
	struct UBPA_BaseChar_C_AnimNotify_enter_DownedIdle_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_enter_changeDirection_another
	 */
	struct UBPA_BaseChar_C_AnimNotify_enter_changeDirection_another_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_enter_changeDirection
	 */
	struct UBPA_BaseChar_C_AnimNotify_enter_changeDirection_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_endTrans_sprintTurn
	 */
	struct UBPA_BaseChar_C_AnimNotify_endTrans_sprintTurn_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_DeathAnim_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_DeathAnim_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimNotify_DeathAnim_1P_End
	 */
	struct UBPA_BaseChar_C_AnimNotify_DeathAnim_1P_End_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimGraph
	 */
	struct UBPA_BaseChar_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimEvent_SprintShieldParry
	 */
	struct UBPA_BaseChar_C_AnimEvent_SprintShieldParry_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimEvent_JumpTick
	 */
	struct UBPA_BaseChar_C_AnimEvent_JumpTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimEvent_HopTick
	 */
	struct UBPA_BaseChar_C_AnimEvent_HopTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimEvent_HideSprintTick
	 */
	struct UBPA_BaseChar_C_AnimEvent_HideSprintTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimEvent_HideMovementTick
	 */
	struct UBPA_BaseChar_C_AnimEvent_HideMovementTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.AnimEvent_HideCombatTick
	 */
	struct UBPA_BaseChar_C_AnimEvent_HideCombatTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_WorldHitTick
	 */
	struct UBPA_BaseChar_C_Anim_WorldHitTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_WeakParryTick
	 */
	struct UBPA_BaseChar_C_Anim_WeakParryTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_TurnTick
	 */
	struct UBPA_BaseChar_C_Anim_TurnTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_StrafeBlendTick
	 */
	struct UBPA_BaseChar_C_Anim_StrafeBlendTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_SignificeTick
	 */
	struct UBPA_BaseChar_C_Anim_SignificeTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_SiegeTick
	 */
	struct UBPA_BaseChar_C_Anim_SiegeTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_ServerTick
	 */
	struct UBPA_BaseChar_C_Anim_ServerTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_RightWeaponTick
	 */
	struct UBPA_BaseChar_C_Anim_RightWeaponTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_MountTick
	 */
	struct UBPA_BaseChar_C_Anim_MountTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_MeleeWeightTick
	 */
	struct UBPA_BaseChar_C_Anim_MeleeWeightTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_LungeTapTick
	 */
	struct UBPA_BaseChar_C_Anim_LungeTapTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_LowerBodyYawTick
	 */
	struct UBPA_BaseChar_C_Anim_LowerBodyYawTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_LookAtTick
	 */
	struct UBPA_BaseChar_C_Anim_LookAtTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_LandTimeTick
	 */
	struct UBPA_BaseChar_C_Anim_LandTimeTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_LadderTick
	 */
	struct UBPA_BaseChar_C_Anim_LadderTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_JawTick
	 */
	struct UBPA_BaseChar_C_Anim_JawTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_IdleAdditiveTick
	 */
	struct UBPA_BaseChar_C_Anim_IdleAdditiveTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_HipOffsetTick
	 */
	struct UBPA_BaseChar_C_Anim_HipOffsetTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_FacialMorphTick
	 */
	struct UBPA_BaseChar_C_Anim_FacialMorphTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_DeathStartPoseTick
	 */
	struct UBPA_BaseChar_C_Anim_DeathStartPoseTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_DeathSnapPoseTick
	 */
	struct UBPA_BaseChar_C_Anim_DeathSnapPoseTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_deathRagdollTick
	 */
	struct UBPA_BaseChar_C_Anim_deathRagdollTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_CombatWeightTick
	 */
	struct UBPA_BaseChar_C_Anim_CombatWeightTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_CombatParryTick
	 */
	struct UBPA_BaseChar_C_Anim_CombatParryTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_BasicMovementTick
	 */
	struct UBPA_BaseChar_C_Anim_BasicMovementTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_ArmBaseTick
	 */
	struct UBPA_BaseChar_C_Anim_ArmBaseTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_ArimYawTick
	 */
	struct UBPA_BaseChar_C_Anim_ArimYawTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_3PLowerBody
	 */
	struct UBPA_BaseChar_C_Anim_3PLowerBody_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_1PCameraTick
	 */
	struct UBPA_BaseChar_C_Anim_1PCameraTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.Anim_1PBodyOffsetTick
	 */
	struct UBPA_BaseChar_C_Anim_1PBodyOffsetTick_Params
	{
	};

	/**
	 * Function BPA_BaseChar.BPA_BaseChar_C.angleBetweenVectors
	 */
	struct UBPA_BaseChar_C_angleBetweenVectors_Params
	{
	public:
		struct FVector                                             bpp__V1__pf;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__V2__pf;                                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Degree__pf;                                         // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
