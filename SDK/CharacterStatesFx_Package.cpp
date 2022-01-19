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
	 * 		Offset -> 0x00EA64F0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.UpdateStaminaRTPC
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__StaminaPercent__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsLocalActorNotBotNotNPC__pf                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::UpdateStaminaRTPC(float bpp__StaminaPercent__pf, class AActor* bpp__Actor__pf, bool bpp__IsLocalActorNotBotNotNPC__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.UpdateStaminaRTPC");
		
		UCharacterStatesFx_C_UpdateStaminaRTPC_Params params {};
		params.bpp__StaminaPercent__pf = bpp__StaminaPercent__pf;
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__IsLocalActorNotBotNotNPC__pf = bpp__IsLocalActorNotBotNotNPC__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA6360
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.UpdateHealthRTPC
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__HealthPercent__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__HealthValue__pf                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__HealthMaxValue__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__IsLocalActorNotBotNotNPC__pf                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::UpdateHealthRTPC(float bpp__HealthPercent__pf, float bpp__HealthValue__pf, float bpp__HealthMaxValue__pf, class AActor* bpp__Actor__pf, bool bpp__IsLocalActorNotBotNotNPC__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.UpdateHealthRTPC");
		
		UCharacterStatesFx_C_UpdateHealthRTPC_Params params {};
		params.bpp__HealthPercent__pf = bpp__HealthPercent__pf;
		params.bpp__HealthValue__pf = bpp__HealthValue__pf;
		params.bpp__HealthMaxValue__pf = bpp__HealthMaxValue__pf;
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__IsLocalActorNotBotNotNPC__pf = bpp__IsLocalActorNotBotNotNPC__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA62E0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.UpdateDownedStatePercentage
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__Percentage__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::UpdateDownedStatePercentage(float bpp__Percentage__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.UpdateDownedStatePercentage");
		
		UCharacterStatesFx_C_UpdateDownedStatePercentage_Params params {};
		params.bpp__Percentage__pf = bpp__Percentage__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E91CF0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.UpdateBloodEffect
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterStatesFx_C::UpdateBloodEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.UpdateBloodEffect");
		
		UCharacterStatesFx_C_UpdateBloodEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FA50
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.RemoveBurningParticleSystem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterStatesFx_C::RemoveBurningParticleSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.RemoveBurningParticleSystem");
		
		UCharacterStatesFx_C_RemoveBurningParticleSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA6260
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.RemoveAudioState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		AudioCharacterStates_EAudioCharacterStates         bpp__AudioState__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::RemoveAudioState(AudioCharacterStates_EAudioCharacterStates bpp__AudioState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.RemoveAudioState");
		
		UCharacterStatesFx_C_RemoveAudioState_Params params {};
		params.bpp__AudioState__pf = bpp__AudioState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B74630
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllConditions
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterStatesFx_C::RemoveAllConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllConditions");
		
		UCharacterStatesFx_C_RemoveAllConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F9F0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllAudioStates
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterStatesFx_C::RemoveAllAudioStates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllAudioStates");
		
		UCharacterStatesFx_C_RemoveAllAudioStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA6190
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.PlaySoundForLocalCharacter
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               bpp__Event__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLCharacter*                               bpp__Character__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::PlaySoundForLocalCharacter(class UAkAudioEvent* bpp__Event__pf, class ATBLCharacter* bpp__Character__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.PlaySoundForLocalCharacter");
		
		UCharacterStatesFx_C_PlaySoundForLocalCharacter_Params params {};
		params.bpp__Event__pf = bpp__Event__pf;
		params.bpp__Character__pf = bpp__Character__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA60C0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OutOfStaminaUpdate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__IsOutOfStamina__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::OutOfStaminaUpdate(bool bpp__IsOutOfStamina__pf, class AActor* bpp__Actor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OutOfStaminaUpdate");
		
		UCharacterStatesFx_C_OutOfStaminaUpdate_Params params {};
		params.bpp__IsOutOfStamina__pf = bpp__IsOutOfStamina__pf;
		params.bpp__Actor__pf = bpp__Actor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5F40
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnStatChanged
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_EStat                                          bpp__Type__pf                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FStatEntry                                  bpp__Stat__pf__const                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              bpp__DeltaValue__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::OnStatChanged(class AActor* bpp__Actor__pf, TBL_EStat bpp__Type__pf, const struct FStatEntry& bpp__Stat__pf__const, float bpp__DeltaValue__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnStatChanged");
		
		UCharacterStatesFx_C_OnStatChanged_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Type__pf = bpp__Type__pf;
		params.bpp__Stat__pf__const = bpp__Stat__pf__const;
		params.bpp__DeltaValue__pf = bpp__DeltaValue__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5E70
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnStaminaUpdate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__IsLow__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::OnStaminaUpdate(bool bpp__IsLow__pf, class AActor* bpp__Actor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnStaminaUpdate");
		
		UCharacterStatesFx_C_OnStaminaUpdate_Params params {};
		params.bpp__IsLow__pf = bpp__IsLow__pf;
		params.bpp__Actor__pf = bpp__Actor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B74610
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnRevived
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterStatesFx_C::OnRevived()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnRevived");
		
		UCharacterStatesFx_C_OnRevived_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5DA0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnRemoveCondition
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_EConditionType                                 bpp__Condition__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::OnRemoveCondition(class AActor* bpp__Actor__pf, TBL_EConditionType bpp__Condition__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnRemoveCondition");
		
		UCharacterStatesFx_C_OnRemoveCondition_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Condition__pf = bpp__Condition__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5D10
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnPossessed
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AController*                                 bpp__Controller__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::OnPossessed(class AController* bpp__Controller__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnPossessed");
		
		UCharacterStatesFx_C_OnPossessed_Params params {};
		params.bpp__Controller__pf = bpp__Controller__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5C30
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnKilled
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnKilled");
		
		UCharacterStatesFx_C_OnKilled_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5B60
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnHealthUpdate
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__IsLow__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::OnHealthUpdate(bool bpp__IsLow__pf, class AActor* bpp__Actor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnHealthUpdate");
		
		UCharacterStatesFx_C_OnHealthUpdate_Params params {};
		params.bpp__IsLow__pf = bpp__IsLow__pf;
		params.bpp__Actor__pf = bpp__Actor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5AD0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnConstruct
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::OnConstruct(class AActor* bpp__Actor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnConstruct");
		
		UCharacterStatesFx_C_OnConstruct_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F8B0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnAssemble_CharacterStatesFx
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterStatesFx_C::OnAssemble_CharacterStatesFx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnAssemble_CharacterStatesFx");
		
		UCharacterStatesFx_C_OnAssemble_CharacterStatesFx_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5A00
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.OnApplyCondition
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_EConditionType                                 bpp__Condition__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::OnApplyCondition(class AActor* bpp__Actor__pf, TBL_EConditionType bpp__Condition__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.OnApplyCondition");
		
		UCharacterStatesFx_C_OnApplyCondition_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Condition__pf = bpp__Condition__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5960
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.IsActorDead
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__ReturnxValue__pfT                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::IsActorDead(bool* bpp__ReturnxValue__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.IsActorDead");
		
		UCharacterStatesFx_C_IsActorDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ReturnxValue__pfT != nullptr)
			*bpp__ReturnxValue__pfT = params.bpp__ReturnxValue__pfT;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5880
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.HasCondition
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TBL_EConditionType                                 bpp__Condition__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__ReturnxValue__pfT                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::HasCondition(TBL_EConditionType bpp__Condition__pf, bool* bpp__ReturnxValue__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.HasCondition");
		
		UCharacterStatesFx_C_HasCondition_Params params {};
		params.bpp__Condition__pf = bpp__Condition__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ReturnxValue__pfT != nullptr)
			*bpp__ReturnxValue__pfT = params.bpp__ReturnxValue__pfT;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA57B0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.HandleRemovingCondition
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TBL_EConditionType                                 bpp__Condition__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::HandleRemovingCondition(class AActor* bpp__Actor__pf, TBL_EConditionType bpp__Condition__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.HandleRemovingCondition");
		
		UCharacterStatesFx_C_HandleRemovingCondition_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__Condition__pf = bpp__Condition__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5710
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.GetHighestPriorityCondition
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		AudioCharacterStates_EAudioCharacterStates         bpp__AudioCondition__pf                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::GetHighestPriorityCondition(AudioCharacterStates_EAudioCharacterStates* bpp__AudioCondition__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.GetHighestPriorityCondition");
		
		UCharacterStatesFx_C_GetHighestPriorityCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AudioCondition__pf != nullptr)
			*bpp__AudioCondition__pf = params.bpp__AudioCondition__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5690
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.ExecuteUbergraph_CharacterStatesFx_4
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::ExecuteUbergraph_CharacterStatesFx_4(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.ExecuteUbergraph_CharacterStatesFx_4");
		
		UCharacterStatesFx_C_ExecuteUbergraph_CharacterStatesFx_4_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E91CB0
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.CustomEvent_1
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterStatesFx_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.CustomEvent_1");
		
		UCharacterStatesFx_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5610
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.ApplyAudioState
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		AudioCharacterStates_EAudioCharacterStates         bpp__AudioState__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::ApplyAudioState(AudioCharacterStates_EAudioCharacterStates bpp__AudioState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.ApplyAudioState");
		
		UCharacterStatesFx_C_ApplyAudioState_Params params {};
		params.bpp__AudioState__pf = bpp__AudioState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5580
	 * 		Name   -> Function CharacterStatesFx.CharacterStatesFx_C.AddBurningParticleSystem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ATBLCharacter*                               bpp__InActor__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterStatesFx_C::AddBurningParticleSystem(class ATBLCharacter* bpp__InActor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatesFx.CharacterStatesFx_C.AddBurningParticleSystem");
		
		UCharacterStatesFx_C_AddBurningParticleSystem_Params params {};
		params.bpp__InActor__pf = bpp__InActor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCharacterStatesFx_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterStatesFx_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CharacterStatesFx.CharacterStatesFx_C");
		return ptr;
	}

}


