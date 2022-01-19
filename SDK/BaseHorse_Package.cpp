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
	 * 		Name   -> Function BaseHorse.BaseHorse_C.SetTeamHeraldry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture*                                    Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseHorse_C::SetTeamHeraldry(class UTexture* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.SetTeamHeraldry");
		
		ABaseHorse_C_SetTeamHeraldry_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.GetPushingCollision
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class UPrimitiveComponent*> ABaseHorse_C::GetPushingCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.GetPushingCollision");
		
		ABaseHorse_C_GetPushingCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.GetWorldCollisionRider
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UCapsuleComponent* ABaseHorse_C::GetWorldCollisionRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.GetWorldCollisionRider");
		
		ABaseHorse_C_GetWorldCollisionRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.ShouldPushBackOnTurnAgainstWall
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABaseHorse_C::ShouldPushBackOnTurnAgainstWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.ShouldPushBackOnTurnAgainstWall");
		
		ABaseHorse_C_ShouldPushBackOnTurnAgainstWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.GetRiderToWorldCollision
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	Engine_ECollisionResponse ABaseHorse_C::GetRiderToWorldCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.GetRiderToWorldCollision");
		
		ABaseHorse_C_GetRiderToWorldCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.FxEvent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              EventScale                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Target_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseHorse_C::FxEvent(const class FName& EventName, float EventScale, bool Target_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.FxEvent");
		
		ABaseHorse_C_FxEvent_Params params {};
		params.EventName = EventName;
		params.EventScale = EventScale;
		params.Target_ = Target_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.GetWorldCollisionBack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class UPrimitiveComponent*> ABaseHorse_C::GetWorldCollisionBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.GetWorldCollisionBack");
		
		ABaseHorse_C_GetWorldCollisionBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.GetWorldCollisionFront
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class UPrimitiveComponent*> ABaseHorse_C::GetWorldCollisionFront()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.GetWorldCollisionFront");
		
		ABaseHorse_C_GetWorldCollisionFront_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.GetWorldCollisionLegs
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCapsuleComponent*                           FrontLegs                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCapsuleComponent*                           BackLegs                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseHorse_C::GetWorldCollisionLegs(class UCapsuleComponent** FrontLegs, class UCapsuleComponent** BackLegs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.GetWorldCollisionLegs");
		
		ABaseHorse_C_GetWorldCollisionLegs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FrontLegs != nullptr)
			*FrontLegs = params.FrontLegs;
		if (BackLegs != nullptr)
			*BackLegs = params.BackLegs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseHorse_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.ReceiveBeginPlay");
		
		ABaseHorse_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.InitAltWeightsState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseHorse_C::InitAltWeightsState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.InitAltWeightsState");
		
		ABaseHorse_C_InitAltWeightsState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.HorseToWorldImpact
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		TBL_EHorseImpactLocation                           ImpactLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHorseToWorldImpactType                        ImpactType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ImpactCombatState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ImpactSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseHorse_C::HorseToWorldImpact(const struct FHitResult& Hit, TBL_EHorseImpactLocation ImpactLocation, TBL_EHorseToWorldImpactType ImpactType, const class FName& ImpactCombatState, float ImpactSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.HorseToWorldImpact");
		
		ABaseHorse_C_HorseToWorldImpact_Params params {};
		params.Hit = Hit;
		params.ImpactLocation = ImpactLocation;
		params.ImpactType = ImpactType;
		params.ImpactCombatState = ImpactCombatState;
		params.ImpactSpeed = ImpactSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.HorseToCharacterImpact
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               TargetCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHorseImpactLocation                           ImpactLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHorseToCharacterImpactType                    ImpactType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ImpactCombatState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ImpactSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseHorse_C::HorseToCharacterImpact(class ATBLCharacter* TargetCharacter, TBL_EHorseImpactLocation ImpactLocation, TBL_EHorseToCharacterImpactType ImpactType, const class FName& ImpactCombatState, float ImpactSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.HorseToCharacterImpact");
		
		ABaseHorse_C_HorseToCharacterImpact_Params params {};
		params.TargetCharacter = TargetCharacter;
		params.ImpactLocation = ImpactLocation;
		params.ImpactType = ImpactType;
		params.ImpactCombatState = ImpactCombatState;
		params.ImpactSpeed = ImpactSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.HorseToHorseImpact
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AHorse*                                      TargetHorse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHorseImpactLocation                           ImpactLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHorseToHorseImpactType                        ImpactType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ImpactCombatState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ImpactSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseHorse_C::HorseToHorseImpact(class AHorse* TargetHorse, TBL_EHorseImpactLocation ImpactLocation, TBL_EHorseToHorseImpactType ImpactType, const class FName& ImpactCombatState, float ImpactSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.HorseToHorseImpact");
		
		ABaseHorse_C_HorseToHorseImpact_Params params {};
		params.TargetHorse = TargetHorse;
		params.ImpactLocation = ImpactLocation;
		params.ImpactType = ImpactType;
		params.ImpactCombatState = ImpactCombatState;
		params.ImpactSpeed = ImpactSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void ABaseHorse_C::BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature(const struct FDeathDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature");
		
		ABaseHorse_C_BndEvt__Stats_K2Node_ComponentBoundEvent_0_KilledSignature__DelegateSignature_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.RiderToWorldImpact
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABaseHorse_C::RiderToWorldImpact(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.RiderToWorldImpact");
		
		ABaseHorse_C_RiderToWorldImpact_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       NewFaction                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseHorse_C::BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature(TBL_EFaction NewFaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature");
		
		ABaseHorse_C_BndEvt__TeamOwnershipComponent_K2Node_ComponentBoundEvent_0_OwnershipSignature__DelegateSignature_Params params {};
		params.NewFaction = NewFaction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.OnDriverMount_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               Driver                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseHorse_C::OnDriverMount_Event_1(class ATBLCharacter* Driver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.OnDriverMount_Event_1");
		
		ABaseHorse_C_OnDriverMount_Event_1_Params params {};
		params.Driver = Driver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.OnDriverDismount_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               Driver                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EDismountType                                  DismountType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseHorse_C::OnDriverDismount_Event_1(class ATBLCharacter* Driver, TBL_EDismountType DismountType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.OnDriverDismount_Event_1");
		
		ABaseHorse_C_OnDriverDismount_Event_1_Params params {};
		params.Driver = Driver;
		params.DismountType = DismountType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.ApplyDamageToCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseHorse_C::ApplyDamageToCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.ApplyDamageToCharacter");
		
		ABaseHorse_C_ApplyDamageToCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseHorse.BaseHorse_C.ExecuteUbergraph_BaseHorse
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseHorse_C::ExecuteUbergraph_BaseHorse(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseHorse.BaseHorse_C.ExecuteUbergraph_BaseHorse");
		
		ABaseHorse_C_ExecuteUbergraph_BaseHorse_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABaseHorse_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseHorse_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseHorse.BaseHorse_C");
		return ptr;
	}

}


