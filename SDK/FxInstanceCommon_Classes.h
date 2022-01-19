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
	// # Classes
	// --------------------------------------------------
	/**
	 * DynamicClass FxInstanceCommon.FxInstanceCommon_C
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class UFxInstanceCommon_C : public UFxInstance
	{
	public:
		TMap<class FName, struct FPostProcessDefaults>             PostProcessDefaults;                                     // 0x00B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TMap<class FName, struct FPostProcessBlendMod>             PostProcessEffectsCurrent;                               // 0x0108(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FTimerHandle                                        PostProcessEffectTimerHandle;                            // 0x0158(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APostProcessVolume*                                  PostProcessVolume;                                       // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Vignette;                                                // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNDR[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastPlayerController;                                    // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0178(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		int                                                        Temp_int_Array_Index_Variable;                           // 0x0188(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M40G[0x4];                                   // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        CallFunc_Map_Keys_Keys;                                  // 0x0190(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CallFunc_Array_Get_Item;                                 // 0x01A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            CallFunc_GetPostProcessMaterial_PostProcessMaterial;     // 0x01A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               K2Node_DynamicCast_AsPawn;                               // 0x01B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x01B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0N3[0x3];                                   // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        Temp_int_Loop_Counter_Variable;                          // 0x01BC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATBLPlayerController*                                K2Node_DynamicCast_AsTBLPlayer_Controller;               // 0x01C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x01C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOAU[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdatePostProcessMaterialWeight(const class FName& bpp__Key__pf);
		void UpdateCombatStateIfInRiposte(const class FName& bpp__NewCombatState__pf, bool bpp__IsRiposte__pf, class FText* bpp__ModifiedNewCombatState__pf);
		void StopCameraAnim(class UCameraAnim* bpp__Anim__pf);
		void Start_FX_Weapon_Damage_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf);
		void Start_FX_Weapon_Blocked_Sound(class ATBLCharacter* bpp__BlockedActor__pf, class ATBLCharacter* bpp__BlockingActor__pf, class AInventoryItem* bpp__BlockedWeapon__pf, class AInventoryItem* bpp__BlockingWeapon__pf, bool bpp__IsConterSuccess__pf);
		void Start_Fx_Sound_With_Params(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__Sound__pf, const class FName& bpp__Socket__pf, TArray<struct FSoundSwitchEntry>* bpp__Switches__pf, TArray<struct FSoundRTPCEntry>* bpp__RTPCxValues__pfT, bool bpp__DebugxPrint__pfT);
		void Start_Fx_Sound(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__Sound__pf, const class FName& bpp__Socket__pf, bool bpp__DebugxPrint__pfT);
		void Start_FX_Projectile_Blocked_By_Shiled_Impact_Sound(class AInventoryItem* bpp__BlockedItem__pf, class AInventoryItem* bpp__BlockingItem__pf, const struct FParryEventState& bpp__ParryState__pf);
		void Start_FX_Horse_Sound(class AActor* bpp__Actor__pf, const class FName& bpp__PreviousCombatState__pf, const class FName& bpp__NewCombatState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf, class UCombatState* bpp__combatState__pf);
		void Start_FX_Horse_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf);
		void Start_FX_Character_Impact_Sound(const struct FDamageTakenEvent& bpp__DamageTakenEvent__pf);
		void Start_FX_Character_and_Weapon_Parry_Success_Sound(class ATBLCharacter* bpp__BlockingCharacter__pf, class ATBLCharacter* bpp__BlockedCharacter__pf, class AInventoryItem* bpp__BlockingWeapon__pf, class AInventoryItem* bpp__BlockedWeapon__pf, const struct FParryEventState& bpp__ParryEvent__pf);
		void ResetPostProcessEffectsInMaterial(TArray<class FName>* bpp__Effects__pf);
		void ResetAllPostProcessEffects();
		void RemoveAllPostProcessEffects();
		void PostProcessEffectTick();
		void PlaySoundOnActor(class AActor* bpp__Actor__pf, class UAkAudioEvent* bpp__AKxEvent__pfT);
		void PlayDirectionalCameraAnim(class UClass* bpp__ShakeClass__pf, float bpp__Scale__pf, class AActor* bpp__Causer__pf, const struct FVector& bpp__Vec__pf, bool bpp__PlayInThirdPerson__pf);
		void PlayCameraShake(class UClass* bpp__ShakeClass__pf, float bpp__Scale__pf);
		void PlayCameraAnim(class UCameraAnim* bpp__Anim__pf, float bpp__Rate__pf, float bpp__Scale__pf, float bpp__BlendInTime__pf, float bpp__BlendOutTime__pf, bool bpp__PlayInThirdPerson__pf);
		void OnAssemble_FxInstanceCommon();
		void IsPostProcessDisabled(bool* bpp__Disabled__pf);
		void IsLocalPlayerAndNotBot(class AActor* bpp__Actor__pf, bool* bpp__ReturnxValue__pfT);
		void GetPostProcessMaterialIfCreated(class UMaterialInstanceDynamic** bpp__PostProcessMaterial__pf);
		void GetPostProcessMaterial(class UMaterialInstanceDynamic** bpp__PostProcessMaterial__pf);
		void GetPostProcessComponent(class UPostProcessComponent** bpp__PostProcessComponent__pf);
		void ForceResetAllPostProcessEffects();
		void FindMaterialInPostProcessComponent(class UPostProcessComponent* bpp__PostProcessComponent__pf, bool* bpp__bFound__pf);
		void DisplayDebug();
		void DisableCameraPostProcessComponent();
		void BP_ResetPostProcess();
		void BeginPostProcessEffectTick();
		void AddPostProcessEffect(const class FName& bpp__Effect__pf, float bpp__Target__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
