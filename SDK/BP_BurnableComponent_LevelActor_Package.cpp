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
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.DestroyWithoutDamage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::DestroyWithoutDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.DestroyWithoutDamage");
		
		UBP_BurnableComponent_LevelActor_C_DestroyWithoutDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UnbindEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::UnbindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UnbindEvents");
		
		UBP_BurnableComponent_LevelActor_C_UnbindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BindEvents
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::BindEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BindEvents");
		
		UBP_BurnableComponent_LevelActor_C_BindEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateBurntMeshReplacements
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::CreateBurntMeshReplacements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateBurntMeshReplacements");
		
		UBP_BurnableComponent_LevelActor_C_CreateBurntMeshReplacements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ApplyBurnToOverlappingCharacters
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::ApplyBurnToOverlappingCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ApplyBurnToOverlappingCharacters");
		
		UBP_BurnableComponent_LevelActor_C_ApplyBurnToOverlappingCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.AssembleComponents
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::AssembleComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.AssembleComponents");
		
		UBP_BurnableComponent_LevelActor_C_AssembleComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.SetBurnableExpressions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Parameter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::SetBurnableExpressions(const class FName& Parameter, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.SetBurnableExpressions");
		
		UBP_BurnableComponent_LevelActor_C_SetBurnableExpressions_Params params {};
		params.Parameter = Parameter;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateDynamicMaterials
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::CreateDynamicMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateDynamicMaterials");
		
		UBP_BurnableComponent_LevelActor_C_CreateDynamicMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ReceiveBeginPlay");
		
		UBP_BurnableComponent_LevelActor_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.HealthChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Initiator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::HealthChanged(float Amount, class AActor* Initiator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.HealthChanged");
		
		UBP_BurnableComponent_LevelActor_C_HealthChanged_Params params {};
		params.Amount = Amount;
		params.Initiator = Initiator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.StartBurningEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::StartBurningEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.StartBurningEffect");
		
		UBP_BurnableComponent_LevelActor_C_StartBurningEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.StopBurningEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::StopBurningEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.StopBurningEffect");
		
		UBP_BurnableComponent_LevelActor_C_StopBurningEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginDissolve
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::BeginDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginDissolve");
		
		UBP_BurnableComponent_LevelActor_C_BeginDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginOverlap
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBP_BurnableComponent_LevelActor_C::BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginOverlap");
		
		UBP_BurnableComponent_LevelActor_C_BeginOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginFireFade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::BeginFireFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginFireFade");
		
		UBP_BurnableComponent_LevelActor_C_BeginFireFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.OnHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFLammableHitEvent                          HitEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 */
	void UBP_BurnableComponent_LevelActor_C::OnHit(const struct FFLammableHitEvent& HitEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.OnHit");
		
		UBP_BurnableComponent_LevelActor_C_OnHit_Params params {};
		params.HitEvent = HitEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateDestroyedParticles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::CreateDestroyedParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateDestroyedParticles");
		
		UBP_BurnableComponent_LevelActor_C_CreateDestroyedParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.StopBurningSound_PlayDestroyedSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::StopBurningSound_PlayDestroyedSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.StopBurningSound_PlayDestroyedSound");
		
		UBP_BurnableComponent_LevelActor_C_StopBurningSound_PlayDestroyedSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateCharring
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::UpdateCharring(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateCharring");
		
		UBP_BurnableComponent_LevelActor_C_UpdateCharring_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateDissolve
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::UpdateDissolve(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateDissolve");
		
		UBP_BurnableComponent_LevelActor_C_UpdateDissolve_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateFireParticle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::UpdateFireParticle(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateFireParticle");
		
		UBP_BurnableComponent_LevelActor_C_UpdateFireParticle_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.HealthChangedCosmetic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Initiator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::HealthChangedCosmetic(float Health, class AActor* Initiator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.HealthChangedCosmetic");
		
		UBP_BurnableComponent_LevelActor_C_HealthChangedCosmetic_Params params {};
		params.Health = Health;
		params.Initiator = Initiator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ConditionsChangedCosmetic
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EConditionType                                 Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::ConditionsChangedCosmetic(class AActor* Actor, TBL_EConditionType Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ConditionsChangedCosmetic");
		
		UBP_BurnableComponent_LevelActor_C_ConditionsChangedCosmetic_Params params {};
		params.Actor = Actor;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateHealthMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::UpdateHealthMaterial(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateHealthMaterial");
		
		UBP_BurnableComponent_LevelActor_C_UpdateHealthMaterial_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.SwapToDestroyedMeshes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::SwapToDestroyedMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.SwapToDestroyedMeshes");
		
		UBP_BurnableComponent_LevelActor_C_SwapToDestroyedMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.EndOverlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.EndOverlap");
		
		UBP_BurnableComponent_LevelActor_C_EndOverlap_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BurnPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::BurnPlayer(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BurnPlayer");
		
		UBP_BurnableComponent_LevelActor_C_BurnPlayer_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.LockBurningEffects
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::LockBurningEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.LockBurningEffects");
		
		UBP_BurnableComponent_LevelActor_C_LockBurningEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginFireFadeReverse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::BeginFireFadeReverse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginFireFadeReverse");
		
		UBP_BurnableComponent_LevelActor_C_BeginFireFadeReverse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ExecuteUbergraph_BP_BurnableComponent_LevelActor
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_BurnableComponent_LevelActor_C::ExecuteUbergraph_BP_BurnableComponent_LevelActor(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ExecuteUbergraph_BP_BurnableComponent_LevelActor");
		
		UBP_BurnableComponent_LevelActor_C_ExecuteUbergraph_BP_BurnableComponent_LevelActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateLocators__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::CreateLocators__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateLocators__DelegateSignature");
		
		UBP_BurnableComponent_LevelActor_C_CreateLocators__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BurnableActorKilled__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_BurnableComponent_LevelActor_C::BurnableActorKilled__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BurnableActorKilled__DelegateSignature");
		
		UBP_BurnableComponent_LevelActor_C_BurnableActorKilled__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_BurnableComponent_LevelActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_BurnableComponent_LevelActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C");
		return ptr;
	}

}


