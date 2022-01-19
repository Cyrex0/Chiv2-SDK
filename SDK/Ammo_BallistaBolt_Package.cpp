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
	 * 		Name   -> Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.GetAttachRagdollParams
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAttachRagdollParams                        AttachRagdollParams                                        (Parm, OutParm, ContainsInstancedReference)
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDeathDamageTakenEvent                      DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void AAmmo_BallistaBolt_C::GetAttachRagdollParams(struct FAttachRagdollParams* AttachRagdollParams, class ATBLCharacter* Character, const struct FDeathDamageTakenEvent& DamageEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.GetAttachRagdollParams");
		
		AAmmo_BallistaBolt_C_GetAttachRagdollParams_Params params {};
		params.Character = Character;
		params.DamageEvent = DamageEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachRagdollParams != nullptr)
			*AttachRagdollParams = params.AttachRagdollParams;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ShouldAttachRagdoll
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AAmmo_BallistaBolt_C::ShouldAttachRagdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ShouldAttachRagdoll");
		
		AAmmo_BallistaBolt_C_ShouldAttachRagdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BaseProjectileBlockingHitWorld_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileHitParams                        ProjectileHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void AAmmo_BallistaBolt_C::BaseProjectileBlockingHitWorld_Event_1(const struct FProjectileHitParams& ProjectileHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BaseProjectileBlockingHitWorld_Event_1");
		
		AAmmo_BallistaBolt_C_BaseProjectileBlockingHitWorld_Event_1_Params params {};
		params.ProjectileHit = ProjectileHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAmmo_BallistaBolt_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature");
		
		AAmmo_BallistaBolt_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature_Params params {};
		params.Pawn = Pawn;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.OnInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AAmmo_BallistaBolt_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.OnInitialize");
		
		AAmmo_BallistaBolt_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ExecuteUbergraph_Ammo_BallistaBolt
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAmmo_BallistaBolt_C::ExecuteUbergraph_Ammo_BallistaBolt(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ExecuteUbergraph_Ammo_BallistaBolt");
		
		AAmmo_BallistaBolt_C_ExecuteUbergraph_Ammo_BallistaBolt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AAmmo_BallistaBolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmmo_BallistaBolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ammo_BallistaBolt.Ammo_BallistaBolt_C");
		return ptr;
	}

}


