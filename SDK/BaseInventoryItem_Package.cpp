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
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.Get Gore Params
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FBaseInventoryItem_GoreParams               Params                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseInventoryItem_C::Get_Gore_Params(struct FBaseInventoryItem_GoreParams* Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.Get Gore Params");
		
		ABaseInventoryItem_C_Get_Gore_Params_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Params != nullptr)
			*Params = params.Params;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.GetVelocityVector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              VelocityLength                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseInventoryItem_C::GetVelocityVector(float* VelocityLength, struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.GetVelocityVector");
		
		ABaseInventoryItem_C_GetVelocityVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VelocityLength != nullptr)
			*VelocityLength = params.VelocityLength;
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.CanPlayWorldHitDropped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseInventoryItem_C::CanPlayWorldHitDropped(bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.CanPlayWorldHitDropped");
		
		ABaseInventoryItem_C_CanPlayWorldHitDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.StopCloseCallSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::StopCloseCallSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.StopCloseCallSound");
		
		ABaseInventoryItem_C_StopCloseCallSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.ShouldPlayProjectileSounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ProjectileSounds                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CloseCallSound                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseInventoryItem_C::ShouldPlayProjectileSounds(bool* ProjectileSounds, bool* CloseCallSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.ShouldPlayProjectileSounds");
		
		ABaseInventoryItem_C_ShouldPlayProjectileSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjectileSounds != nullptr)
			*ProjectileSounds = params.ProjectileSounds;
		if (CloseCallSound != nullptr)
			*CloseCallSound = params.CloseCallSound;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.IsClientFakeProjectile
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ABaseInventoryItem_C::IsClientFakeProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.IsClientFakeProjectile");
		
		ABaseInventoryItem_C_IsClientFakeProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.ShouldDropOnDowned
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABaseInventoryItem_C::ShouldDropOnDowned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.ShouldDropOnDowned");
		
		ABaseInventoryItem_C_ShouldDropOnDowned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.UserConstructionScript");
		
		ABaseInventoryItem_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseInventoryItem_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature");
		
		ABaseInventoryItem_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseInventoryItem_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature");
		
		ABaseInventoryItem_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature_Params params {};
		params.Pawn = Pawn;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseInventoryItem_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature");
		
		ABaseInventoryItem_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature_Params params {};
		params.Pawn = Pawn;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseInventoryItem_C::BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature(class APawn* Pawn, class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature");
		
		ABaseInventoryItem_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature_Params params {};
		params.Pawn = Pawn;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.Start_CloseCall_OverlapCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::Start_CloseCall_OverlapCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.Start_CloseCall_OverlapCheck");
		
		ABaseInventoryItem_C_Start_CloseCall_OverlapCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.CustomEvent_1");
		
		ABaseInventoryItem_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.Stop_CloseCall_OverlapCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::Stop_CloseCall_OverlapCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.Stop_CloseCall_OverlapCheck");
		
		ABaseInventoryItem_C_Stop_CloseCall_OverlapCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.BroadcastProjectileWorldBlockingHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileHitParams                        ProjectileHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABaseInventoryItem_C::BroadcastProjectileWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.BroadcastProjectileWorldBlockingHit");
		
		ABaseInventoryItem_C_BroadcastProjectileWorldBlockingHit_Params params {};
		params.ProjectileHit = ProjectileHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileBounce
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bParried                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseInventoryItem_C::OnProjectileBounce(const struct FHitResult& Hit, bool bParried)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileBounce");
		
		ABaseInventoryItem_C_OnProjectileBounce_Params params {};
		params.Hit = Hit;
		params.bParried = bParried;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.AssignProjectileMovementEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::AssignProjectileMovementEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.AssignProjectileMovementEvents");
		
		ABaseInventoryItem_C_AssignProjectileMovementEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.OnMovementStarted_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::OnMovementStarted_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.OnMovementStarted_Event_1");
		
		ABaseInventoryItem_C_OnMovementStarted_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.OnMovementFinished_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::OnMovementFinished_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.OnMovementFinished_Event_1");
		
		ABaseInventoryItem_C_OnMovementFinished_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.BroadcastNonWorldBlockingHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileHitParams                        ProjectileHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABaseInventoryItem_C::BroadcastNonWorldBlockingHit(const struct FProjectileHitParams& ProjectileHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.BroadcastNonWorldBlockingHit");
		
		ABaseInventoryItem_C_BroadcastNonWorldBlockingHit_Params params {};
		params.ProjectileHit = ProjectileHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.OnDropped_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AInventoryItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 */
	void ABaseInventoryItem_C::OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.OnDropped_Event_1");
		
		ABaseInventoryItem_C_OnDropped_Event_1_Params params {};
		params.Item = Item;
		params.Character = Character;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.OnOwnerChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Owner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseInventoryItem_C::OnOwnerChanged_Event_1(class AActor* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.OnOwnerChanged_Event_1");
		
		ABaseInventoryItem_C_OnOwnerChanged_Event_1_Params params {};
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.OnPlayerStateReplicated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseInventoryItem_C::OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.OnPlayerStateReplicated_Event_1");
		
		ABaseInventoryItem_C_OnPlayerStateReplicated_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.OnInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.OnInitialize");
		
		ABaseInventoryItem_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.ListenToWeaponDrop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseInventoryItem_C::ListenToWeaponDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.ListenToWeaponDrop");
		
		ABaseInventoryItem_C_ListenToWeaponDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.OnComponentHit_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABaseInventoryItem_C::OnComponentHit_Event_1(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.OnComponentHit_Event_1");
		
		ABaseInventoryItem_C_OnComponentHit_Event_1_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileHitEvent_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileHitParams                        HitParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABaseInventoryItem_C::OnProjectileHitEvent_1(const struct FProjectileHitParams& HitParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileHitEvent_1");
		
		ABaseInventoryItem_C_OnProjectileHitEvent_1_Params params {};
		params.HitParams = HitParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.ExecuteUbergraph_BaseInventoryItem
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseInventoryItem_C::ExecuteUbergraph_BaseInventoryItem(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.ExecuteUbergraph_BaseInventoryItem");
		
		ABaseInventoryItem_C_ExecuteUbergraph_BaseInventoryItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitNonWorld__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileHitParams                        ProjectileHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABaseInventoryItem_C::BaseProjectileBlockingHitNonWorld__DelegateSignature(const struct FProjectileHitParams& ProjectileHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitNonWorld__DelegateSignature");
		
		ABaseInventoryItem_C_BaseProjectileBlockingHitNonWorld__DelegateSignature_Params params {};
		params.ProjectileHit = ProjectileHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitWorld__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileHitParams                        ProjectileHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABaseInventoryItem_C::BaseProjectileBlockingHitWorld__DelegateSignature(const struct FProjectileHitParams& ProjectileHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitWorld__DelegateSignature");
		
		ABaseInventoryItem_C_BaseProjectileBlockingHitWorld__DelegateSignature_Params params {};
		params.ProjectileHit = ProjectileHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABaseInventoryItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseInventoryItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseInventoryItem.BaseInventoryItem_C");
		return ptr;
	}

}


