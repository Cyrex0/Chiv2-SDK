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
	 * Function FxInstanceCommon.FxInstanceCommon_C.UpdatePostProcessMaterialWeight
	 */
	struct UFxInstanceCommon_C_UpdatePostProcessMaterialWeight_Params
	{
	public:
		class FName                                                bpp__Key__pf;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.UpdateCombatStateIfInRiposte
	 */
	struct UFxInstanceCommon_C_UpdateCombatStateIfInRiposte_Params
	{
	public:
		class FName                                                bpp__NewCombatState__pf;                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsRiposte__pf;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                bpp__ModifiedNewCombatState__pf;                         // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.StopCameraAnim
	 */
	struct UFxInstanceCommon_C_StopCameraAnim_Params
	{
	public:
		class UCameraAnim*                                         bpp__Anim__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Damage Impact Sound
	 */
	struct UFxInstanceCommon_C_Start_FX_Weapon_Damage_Impact_Sound_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageTakenEvent__pf;                               // 0x0000(0x0148)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Blocked Sound
	 */
	struct UFxInstanceCommon_C_Start_FX_Weapon_Blocked_Sound_Params
	{
	public:
		class ATBLCharacter*                                       bpp__BlockedActor__pf;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLCharacter*                                       bpp__BlockingActor__pf;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInventoryItem*                                      bpp__BlockedWeapon__pf;                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInventoryItem*                                      bpp__BlockingWeapon__pf;                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsConterSuccess__pf;                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound With Params
	 */
	struct UFxInstanceCommon_C_Start_Fx_Sound_With_Params_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       bpp__Sound__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__Socket__pf;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSoundSwitchEntry>                           bpp__Switches__pf;                                       // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSoundRTPCEntry>                             bpp__RTPCxValues__pfT;                                   // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__DebugxPrint__pfT;                                   // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound
	 */
	struct UFxInstanceCommon_C_Start_Fx_Sound_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       bpp__Sound__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__Socket__pf;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__DebugxPrint__pfT;                                   // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.Start FX Projectile Blocked By Shiled Impact Sound
	 */
	struct UFxInstanceCommon_C_Start_FX_Projectile_Blocked_By_Shiled_Impact_Sound_Params
	{
	public:
		class AInventoryItem*                                      bpp__BlockedItem__pf;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInventoryItem*                                      bpp__BlockingItem__pf;                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FParryEventState                                    bpp__ParryState__pf;                                     // 0x0010(0x0070)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Sound
	 */
	struct UFxInstanceCommon_C_Start_FX_Horse_Sound_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__PreviousCombatState__pf;                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__NewCombatState__pf;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttackInfo                                         bpp__EventAttackInfo__pf;                                // 0x0018(0x0108)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UCombatState*                                        bpp__combatState__pf;                                    // 0x0120(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Impact Sound
	 */
	struct UFxInstanceCommon_C_Start_FX_Horse_Impact_Sound_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageTakenEvent__pf;                               // 0x0000(0x0148)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character Impact Sound
	 */
	struct UFxInstanceCommon_C_Start_FX_Character_Impact_Sound_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageTakenEvent__pf;                               // 0x0000(0x0148)  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character and Weapon Parry Success Sound
	 */
	struct UFxInstanceCommon_C_Start_FX_Character_and_Weapon_Parry_Success_Sound_Params
	{
	public:
		class ATBLCharacter*                                       bpp__BlockingCharacter__pf;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLCharacter*                                       bpp__BlockedCharacter__pf;                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInventoryItem*                                      bpp__BlockingWeapon__pf;                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AInventoryItem*                                      bpp__BlockedWeapon__pf;                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FParryEventState                                    bpp__ParryEvent__pf;                                     // 0x0020(0x0070)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.ResetPostProcessEffectsInMaterial
	 */
	struct UFxInstanceCommon_C_ResetPostProcessEffectsInMaterial_Params
	{
	public:
		TArray<class FName>                                        bpp__Effects__pf;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.ResetAllPostProcessEffects
	 */
	struct UFxInstanceCommon_C_ResetAllPostProcessEffects_Params
	{
	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.RemoveAllPostProcessEffects
	 */
	struct UFxInstanceCommon_C_RemoveAllPostProcessEffects_Params
	{
	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.PostProcessEffectTick
	 */
	struct UFxInstanceCommon_C_PostProcessEffectTick_Params
	{
	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.PlaySoundOnActor
	 */
	struct UFxInstanceCommon_C_PlaySoundOnActor_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAkAudioEvent*                                       bpp__AKxEvent__pfT;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.PlayDirectionalCameraAnim
	 */
	struct UFxInstanceCommon_C_PlayDirectionalCameraAnim_Params
	{
	public:
		class UClass*                                              bpp__ShakeClass__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Scale__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Causer__pf;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             bpp__Vec__pf;                                            // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__PlayInThirdPerson__pf;                              // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraShake
	 */
	struct UFxInstanceCommon_C_PlayCameraShake_Params
	{
	public:
		class UClass*                                              bpp__ShakeClass__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Scale__pf;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraAnim
	 */
	struct UFxInstanceCommon_C_PlayCameraAnim_Params
	{
	public:
		class UCameraAnim*                                         bpp__Anim__pf;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Rate__pf;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Scale__pf;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__BlendInTime__pf;                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__BlendOutTime__pf;                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__PlayInThirdPerson__pf;                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.OnAssemble_FxInstanceCommon
	 */
	struct UFxInstanceCommon_C_OnAssemble_FxInstanceCommon_Params
	{
	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.IsPostProcessDisabled
	 */
	struct UFxInstanceCommon_C_IsPostProcessDisabled_Params
	{
	public:
		bool                                                       bpp__Disabled__pf;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.IsLocalPlayerAndNotBot
	 */
	struct UFxInstanceCommon_C_IsLocalPlayerAndNotBot_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__ReturnxValue__pfT;                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterialIfCreated
	 */
	struct UFxInstanceCommon_C_GetPostProcessMaterialIfCreated_Params
	{
	public:
		class UMaterialInstanceDynamic*                            bpp__PostProcessMaterial__pf;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterial
	 */
	struct UFxInstanceCommon_C_GetPostProcessMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            bpp__PostProcessMaterial__pf;                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessComponent
	 */
	struct UFxInstanceCommon_C_GetPostProcessComponent_Params
	{
	public:
		class UPostProcessComponent*                               bpp__PostProcessComponent__pf;                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.ForceResetAllPostProcessEffects
	 */
	struct UFxInstanceCommon_C_ForceResetAllPostProcessEffects_Params
	{
	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.FindMaterialInPostProcessComponent
	 */
	struct UFxInstanceCommon_C_FindMaterialInPostProcessComponent_Params
	{
	public:
		class UPostProcessComponent*                               bpp__PostProcessComponent__pf;                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bFound__pf;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.DisplayDebug
	 */
	struct UFxInstanceCommon_C_DisplayDebug_Params
	{
	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.DisableCameraPostProcessComponent
	 */
	struct UFxInstanceCommon_C_DisableCameraPostProcessComponent_Params
	{
	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.BP_ResetPostProcess
	 */
	struct UFxInstanceCommon_C_BP_ResetPostProcess_Params
	{
	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.BeginPostProcessEffectTick
	 */
	struct UFxInstanceCommon_C_BeginPostProcessEffectTick_Params
	{
	};

	/**
	 * Function FxInstanceCommon.FxInstanceCommon_C.AddPostProcessEffect
	 */
	struct UFxInstanceCommon_C_AddPostProcessEffect_Params
	{
	public:
		class FName                                                bpp__Effect__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__Target__pf;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
