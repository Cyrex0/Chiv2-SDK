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
	 * Function BaseInventoryItem.BaseInventoryItem_C.Get Gore Params
	 */
	struct ABaseInventoryItem_C_Get_Gore_Params_Params
	{
	public:
		struct FBaseInventoryItem_GoreParams                       Params;                                                  // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.GetVelocityVector
	 */
	struct ABaseInventoryItem_C_GetVelocityVector_Params
	{
	public:
		float                                                      VelocityLength;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Velocity;                                                // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.CanPlayWorldHitDropped
	 */
	struct ABaseInventoryItem_C_CanPlayWorldHitDropped_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.StopCloseCallSound
	 */
	struct ABaseInventoryItem_C_StopCloseCallSound_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.ShouldPlayProjectileSounds
	 */
	struct ABaseInventoryItem_C_ShouldPlayProjectileSounds_Params
	{
	public:
		bool                                                       ProjectileSounds;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CloseCallSound;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.IsClientFakeProjectile
	 */
	struct ABaseInventoryItem_C_IsClientFakeProjectile_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.ShouldDropOnDowned
	 */
	struct ABaseInventoryItem_C_ShouldDropOnDowned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.UserConstructionScript
	 */
	struct ABaseInventoryItem_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature
	 */
	struct ABaseInventoryItem_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableUnreachableSignature__DelegateSignature_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature
	 */
	struct ABaseInventoryItem_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnInteractableFocusedSignature__DelegateSignature_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature
	 */
	struct ABaseInventoryItem_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnInteractableLostFocusSignature__DelegateSignature_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature
	 */
	struct ABaseInventoryItem_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_1_InteractableComponentOnUseSignature__DelegateSignature_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.Start_CloseCall_OverlapCheck
	 */
	struct ABaseInventoryItem_C_Start_CloseCall_OverlapCheck_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.CustomEvent_1
	 */
	struct ABaseInventoryItem_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.Stop_CloseCall_OverlapCheck
	 */
	struct ABaseInventoryItem_C_Stop_CloseCall_OverlapCheck_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.BroadcastProjectileWorldBlockingHit
	 */
	struct ABaseInventoryItem_C_BroadcastProjectileWorldBlockingHit_Params
	{
	public:
		struct FProjectileHitParams                                ProjectileHit;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileBounce
	 */
	struct ABaseInventoryItem_C_OnProjectileBounce_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       bParried;                                                // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.AssignProjectileMovementEvents
	 */
	struct ABaseInventoryItem_C_AssignProjectileMovementEvents_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.OnMovementStarted_Event_1
	 */
	struct ABaseInventoryItem_C_OnMovementStarted_Event_1_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.OnMovementFinished_Event_1
	 */
	struct ABaseInventoryItem_C_OnMovementFinished_Event_1_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.BroadcastNonWorldBlockingHit
	 */
	struct ABaseInventoryItem_C_BroadcastNonWorldBlockingHit_Params
	{
	public:
		struct FProjectileHitParams                                ProjectileHit;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.OnDropped_Event_1
	 */
	struct ABaseInventoryItem_C_OnDropped_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.OnOwnerChanged_Event_1
	 */
	struct ABaseInventoryItem_C_OnOwnerChanged_Event_1_Params
	{
	public:
		class AActor*                                              Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.OnPlayerStateReplicated_Event_1
	 */
	struct ABaseInventoryItem_C_OnPlayerStateReplicated_Event_1_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.OnInitialize
	 */
	struct ABaseInventoryItem_C_OnInitialize_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.ListenToWeaponDrop
	 */
	struct ABaseInventoryItem_C_ListenToWeaponDrop_Params
	{
	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.OnComponentHit_Event_1
	 */
	struct ABaseInventoryItem_C_OnComponentHit_Event_1_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.OnProjectileHitEvent_1
	 */
	struct ABaseInventoryItem_C_OnProjectileHitEvent_1_Params
	{
	public:
		struct FProjectileHitParams                                HitParams;                                               // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.ExecuteUbergraph_BaseInventoryItem
	 */
	struct ABaseInventoryItem_C_ExecuteUbergraph_BaseInventoryItem_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitNonWorld__DelegateSignature
	 */
	struct ABaseInventoryItem_C_BaseProjectileBlockingHitNonWorld__DelegateSignature_Params
	{
	public:
		struct FProjectileHitParams                                ProjectileHit;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function BaseInventoryItem.BaseInventoryItem_C.BaseProjectileBlockingHitWorld__DelegateSignature
	 */
	struct ABaseInventoryItem_C_BaseProjectileBlockingHitWorld__DelegateSignature_Params
	{
	public:
		struct FProjectileHitParams                                ProjectileHit;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
