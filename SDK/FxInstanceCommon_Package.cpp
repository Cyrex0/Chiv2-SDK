/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00EAC7E0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.UpdatePostProcessMaterialWeight
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__Key__pf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::UpdatePostProcessMaterialWeight(const class FName& bpp__Key__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.UpdatePostProcessMaterialWeight");
		
		UFxInstanceCommon_C_UpdatePostProcessMaterialWeight_Params params {};
		params.bpp__Key__pf = bpp__Key__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAC690
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.UpdateCombatStateIfInRiposte
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__NewCombatState__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsRiposte__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        bpp__ModifiedNewCombatState__pf                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::UpdateCombatStateIfInRiposte(const class FName& bpp__NewCombatState__pf, bool bpp__IsRiposte__pf, class FText* bpp__ModifiedNewCombatState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.UpdateCombatStateIfInRiposte");
		
		UFxInstanceCommon_C_UpdateCombatStateIfInRiposte_Params params {};
		params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;
		params.bpp__IsRiposte__pf = bpp__IsRiposte__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ModifiedNewCombatState__pf != nullptr)
			*bpp__ModifiedNewCombatState__pf = params.bpp__ModifiedNewCombatState__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAC600
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.StopCameraAnim
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCameraAnim*                                 bpp__Anim__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::StopCameraAnim(class UCameraAnim* bpp__Anim__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.StopCameraAnim");
		
		UFxInstanceCommon_C_StopCameraAnim_Params params {};
		params.bpp__Anim__pf = bpp__Anim__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAC140
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Damage Impact Sound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageTakenEvent__pf                                  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::Start_FX_Weapon_Damage_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Damage Impact Sound");
		
		UFxInstanceCommon_C_Start_FX_Weapon_Damage_Impact_Sound_Params params {};
		params.bpp__DamageTakenEvent__pf = bpp__DamageTakenEvent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EABFC0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Blocked Sound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ATBLCharacter*                               bpp__BlockedActor__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLCharacter*                               bpp__BlockingActor__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInventoryItem*                              bpp__BlockedWeapon__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInventoryItem*                              bpp__BlockingWeapon__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsConterSuccess__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::Start_FX_Weapon_Blocked_Sound(class ATBLCharacter* bpp__BlockedActor__pf, class ATBLCharacter* bpp__BlockingActor__pf, class AInventoryItem* bpp__BlockedWeapon__pf, class AInventoryItem* bpp__BlockingWeapon__pf, bool bpp__IsConterSuccess__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Weapon Blocked Sound");
		
		UFxInstanceCommon_C_Start_FX_Weapon_Blocked_Sound_Params params {};
		params.bpp__BlockedActor__pf = bpp__BlockedActor__pf;
		params.bpp__BlockingActor__pf = bpp__BlockingActor__pf;
		params.bpp__BlockedWeapon__pf = bpp__BlockedWeapon__pf;
		params.bpp__BlockingWeapon__pf = bpp__BlockingWeapon__pf;
		params.bpp__IsConterSuccess__pf = bpp__IsConterSuccess__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAC3A0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound With Params
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               bpp__Sound__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Socket__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSoundSwitchEntry>                   bpp__Switches__pf                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSoundRTPCEntry>                     bpp__RTPCxValues__pfT                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__DebugxPrint__pfT                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::Start_Fx_Sound_With_Params(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__Sound__pf, const class FName& bpp__Socket__pf, TArray<struct FSoundSwitchEntry>* bpp__Switches__pf, TArray<struct FSoundRTPCEntry>* bpp__RTPCxValues__pfT, bool bpp__DebugxPrint__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound With Params");
		
		UFxInstanceCommon_C_Start_Fx_Sound_With_Params_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Sound__pf = bpp__Sound__pf;
		params.bpp__Socket__pf = bpp__Socket__pf;
		params.bpp__DebugxPrint__pfT = bpp__DebugxPrint__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Switches__pf != nullptr)
			*bpp__Switches__pf = params.bpp__Switches__pf;
		if (bpp__RTPCxValues__pfT != nullptr)
			*bpp__RTPCxValues__pfT = params.bpp__RTPCxValues__pfT;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAC260
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               bpp__Sound__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__Socket__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__DebugxPrint__pfT                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::Start_Fx_Sound(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__Sound__pf, const class FName& bpp__Socket__pf, bool bpp__DebugxPrint__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.Start Fx Sound");
		
		UFxInstanceCommon_C_Start_Fx_Sound_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Sound__pf = bpp__Sound__pf;
		params.bpp__Socket__pf = bpp__Socket__pf;
		params.bpp__DebugxPrint__pfT = bpp__DebugxPrint__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EABE20
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.Start FX Projectile Blocked By Shiled Impact Sound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AInventoryItem*                              bpp__BlockedItem__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInventoryItem*                              bpp__BlockingItem__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FParryEventState                            bpp__ParryState__pf                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::Start_FX_Projectile_Blocked_By_Shiled_Impact_Sound(class AInventoryItem* bpp__BlockedItem__pf, class AInventoryItem* bpp__BlockingItem__pf, const struct FParryEventState& bpp__ParryState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Projectile Blocked By Shiled Impact Sound");
		
		UFxInstanceCommon_C_Start_FX_Projectile_Blocked_By_Shiled_Impact_Sound_Params params {};
		params.bpp__BlockedItem__pf = bpp__BlockedItem__pf;
		params.bpp__BlockingItem__pf = bpp__BlockingItem__pf;
		params.bpp__ParryState__pf = bpp__ParryState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EABB10
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Sound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__PreviousCombatState__pf                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__NewCombatState__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAttackInfo                                 bpp__EventAttackInfo__pf                                   (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UCombatState*                                bpp__combatState__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::Start_FX_Horse_Sound(class AActor* bpp__Actor__pf, const class FName& bpp__PreviousCombatState__pf, const class FName& bpp__NewCombatState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf, class UCombatState* bpp__combatState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Sound");
		
		UFxInstanceCommon_C_Start_FX_Horse_Sound_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__PreviousCombatState__pf = bpp__PreviousCombatState__pf;
		params.bpp__NewCombatState__pf = bpp__NewCombatState__pf;
		params.bpp__EventAttackInfo__pf = bpp__EventAttackInfo__pf;
		params.bpp__combatState__pf = bpp__combatState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB9F0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Impact Sound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageTakenEvent__pf                                  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::Start_FX_Horse_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Horse Impact Sound");
		
		UFxInstanceCommon_C_Start_FX_Horse_Impact_Sound_Params params {};
		params.bpp__DamageTakenEvent__pf = bpp__DamageTakenEvent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB6B0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character Impact Sound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageTakenEvent__pf                                  (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::Start_FX_Character_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character Impact Sound");
		
		UFxInstanceCommon_C_Start_FX_Character_Impact_Sound_Params params {};
		params.bpp__DamageTakenEvent__pf = bpp__DamageTakenEvent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB7D0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character and Weapon Parry Success Sound
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ATBLCharacter*                               bpp__BlockingCharacter__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLCharacter*                               bpp__BlockedCharacter__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInventoryItem*                              bpp__BlockingWeapon__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AInventoryItem*                              bpp__BlockedWeapon__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FParryEventState                            bpp__ParryEvent__pf                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::Start_FX_Character_and_Weapon_Parry_Success_Sound(class ATBLCharacter* bpp__BlockingCharacter__pf, class ATBLCharacter* bpp__BlockedCharacter__pf, class AInventoryItem* bpp__BlockingWeapon__pf, class AInventoryItem* bpp__BlockedWeapon__pf, const struct FParryEventState& bpp__ParryEvent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.Start FX Character and Weapon Parry Success Sound");
		
		UFxInstanceCommon_C_Start_FX_Character_and_Weapon_Parry_Success_Sound_Params params {};
		params.bpp__BlockingCharacter__pf = bpp__BlockingCharacter__pf;
		params.bpp__BlockedCharacter__pf = bpp__BlockedCharacter__pf;
		params.bpp__BlockingWeapon__pf = bpp__BlockingWeapon__pf;
		params.bpp__BlockedWeapon__pf = bpp__BlockedWeapon__pf;
		params.bpp__ParryEvent__pf = bpp__ParryEvent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB600
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.ResetPostProcessEffectsInMaterial
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FName>                                bpp__Effects__pf                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::ResetPostProcessEffectsInMaterial(TArray<class FName>* bpp__Effects__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.ResetPostProcessEffectsInMaterial");
		
		UFxInstanceCommon_C_ResetPostProcessEffectsInMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Effects__pf != nullptr)
			*bpp__Effects__pf = params.bpp__Effects__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB5E0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.ResetAllPostProcessEffects
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFxInstanceCommon_C::ResetAllPostProcessEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.ResetAllPostProcessEffects");
		
		UFxInstanceCommon_C_ResetAllPostProcessEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E92030
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.RemoveAllPostProcessEffects
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFxInstanceCommon_C::RemoveAllPostProcessEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.RemoveAllPostProcessEffects");
		
		UFxInstanceCommon_C_RemoveAllPostProcessEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB5C0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.PostProcessEffectTick
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFxInstanceCommon_C::PostProcessEffectTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.PostProcessEffectTick");
		
		UFxInstanceCommon_C_PostProcessEffectTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB4F0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.PlaySoundOnActor
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAkAudioEvent*                               bpp__AKxEvent__pfT                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::PlaySoundOnActor(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__AKxEvent__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.PlaySoundOnActor");
		
		UFxInstanceCommon_C_PlaySoundOnActor_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__AKxEvent__pfT = bpp__AKxEvent__pfT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB330
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.PlayDirectionalCameraAnim
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      bpp__ShakeClass__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Scale__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Causer__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__Vec__pf                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__PlayInThirdPerson__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::PlayDirectionalCameraAnim(class UClass* bpp__ShakeClass__pf, float bpp__Scale__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__Vec__pf, bool bpp__PlayInThirdPerson__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.PlayDirectionalCameraAnim");
		
		UFxInstanceCommon_C_PlayDirectionalCameraAnim_Params params {};
		params.bpp__ShakeClass__pf = bpp__ShakeClass__pf;
		params.bpp__Scale__pf = bpp__Scale__pf;
		params.bpp__Causer__pf = bpp__Causer__pf;
		params.bpp__Vec__pf = bpp__Vec__pf;
		params.bpp__PlayInThirdPerson__pf = bpp__PlayInThirdPerson__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB260
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraShake
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      bpp__ShakeClass__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Scale__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::PlayCameraShake(class UClass* bpp__ShakeClass__pf, float bpp__Scale__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraShake");
		
		UFxInstanceCommon_C_PlayCameraShake_Params params {};
		params.bpp__ShakeClass__pf = bpp__ShakeClass__pf;
		params.bpp__Scale__pf = bpp__Scale__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB0A0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraAnim
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCameraAnim*                                 bpp__Anim__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Rate__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Scale__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__BlendInTime__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__BlendOutTime__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__PlayInThirdPerson__pf                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::PlayCameraAnim(class UCameraAnim* bpp__Anim__pf, float bpp__Rate__pf, float bpp__Scale__pf, float bpp__BlendInTime__pf, float bpp__BlendOutTime__pf, bool bpp__PlayInThirdPerson__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.PlayCameraAnim");
		
		UFxInstanceCommon_C_PlayCameraAnim_Params params {};
		params.bpp__Anim__pf = bpp__Anim__pf;
		params.bpp__Rate__pf = bpp__Rate__pf;
		params.bpp__Scale__pf = bpp__Scale__pf;
		params.bpp__BlendInTime__pf = bpp__BlendInTime__pf;
		params.bpp__BlendOutTime__pf = bpp__BlendOutTime__pf;
		params.bpp__PlayInThirdPerson__pf = bpp__PlayInThirdPerson__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAB080
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.OnAssemble_FxInstanceCommon
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFxInstanceCommon_C::OnAssemble_FxInstanceCommon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.OnAssemble_FxInstanceCommon");
		
		UFxInstanceCommon_C_OnAssemble_FxInstanceCommon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAAFE0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.IsPostProcessDisabled
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bpp__Disabled__pf                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::IsPostProcessDisabled(bool* bpp__Disabled__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.IsPostProcessDisabled");
		
		UFxInstanceCommon_C_IsPostProcessDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Disabled__pf != nullptr)
			*bpp__Disabled__pf = params.bpp__Disabled__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAAF00
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.IsLocalPlayerAndNotBot
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__ReturnxValue__pfT                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::IsLocalPlayerAndNotBot(class AActor* bpp__Actor__pf, bool* bpp__ReturnxValue__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.IsLocalPlayerAndNotBot");
		
		UFxInstanceCommon_C_IsLocalPlayerAndNotBot_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ReturnxValue__pfT != nullptr)
			*bpp__ReturnxValue__pfT = params.bpp__ReturnxValue__pfT;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAADC0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterialIfCreated
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    bpp__PostProcessMaterial__pf                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::GetPostProcessMaterialIfCreated(class UMaterialInstanceDynamic** bpp__PostProcessMaterial__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterialIfCreated");
		
		UFxInstanceCommon_C_GetPostProcessMaterialIfCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__PostProcessMaterial__pf != nullptr)
			*bpp__PostProcessMaterial__pf = params.bpp__PostProcessMaterial__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAAE60
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterial
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    bpp__PostProcessMaterial__pf                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::GetPostProcessMaterial(class UMaterialInstanceDynamic** bpp__PostProcessMaterial__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessMaterial");
		
		UFxInstanceCommon_C_GetPostProcessMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__PostProcessMaterial__pf != nullptr)
			*bpp__PostProcessMaterial__pf = params.bpp__PostProcessMaterial__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAAD20
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessComponent
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPostProcessComponent*                       bpp__PostProcessComponent__pf                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::GetPostProcessComponent(class UPostProcessComponent** bpp__PostProcessComponent__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.GetPostProcessComponent");
		
		UFxInstanceCommon_C_GetPostProcessComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__PostProcessComponent__pf != nullptr)
			*bpp__PostProcessComponent__pf = params.bpp__PostProcessComponent__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E94FD0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.ForceResetAllPostProcessEffects
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFxInstanceCommon_C::ForceResetAllPostProcessEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.ForceResetAllPostProcessEffects");
		
		UFxInstanceCommon_C_ForceResetAllPostProcessEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAAC40
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.FindMaterialInPostProcessComponent
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UPostProcessComponent*                       bpp__PostProcessComponent__pf                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bFound__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::FindMaterialInPostProcessComponent(class UPostProcessComponent* bpp__PostProcessComponent__pf, bool* bpp__bFound__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.FindMaterialInPostProcessComponent");
		
		UFxInstanceCommon_C_FindMaterialInPostProcessComponent_Params params {};
		params.bpp__PostProcessComponent__pf = bpp__PostProcessComponent__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__bFound__pf != nullptr)
			*bpp__bFound__pf = params.bpp__bFound__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAAC20
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.DisplayDebug
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFxInstanceCommon_C::DisplayDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.DisplayDebug");
		
		UFxInstanceCommon_C_DisplayDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E993F0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.DisableCameraPostProcessComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFxInstanceCommon_C::DisableCameraPostProcessComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.DisableCameraPostProcessComponent");
		
		UFxInstanceCommon_C_DisableCameraPostProcessComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAABE0
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.BP_ResetPostProcess
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UFxInstanceCommon_C::BP_ResetPostProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.BP_ResetPostProcess");
		
		UFxInstanceCommon_C_BP_ResetPostProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAAC00
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.BeginPostProcessEffectTick
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UFxInstanceCommon_C::BeginPostProcessEffectTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.BeginPostProcessEffectTick");
		
		UFxInstanceCommon_C_BeginPostProcessEffectTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EAAB10
	 * 		Name   -> Function FxInstanceCommon.FxInstanceCommon_C.AddPostProcessEffect
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        bpp__Effect__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__Target__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFxInstanceCommon_C::AddPostProcessEffect(const class FName& bpp__Effect__pf, float bpp__Target__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FxInstanceCommon.FxInstanceCommon_C.AddPostProcessEffect");
		
		UFxInstanceCommon_C_AddPostProcessEffect_Params params {};
		params.bpp__Effect__pf = bpp__Effect__pf;
		params.bpp__Target__pf = bpp__Target__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFxInstanceCommon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFxInstanceCommon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass FxInstanceCommon.FxInstanceCommon_C");
		return ptr;
	}

}


