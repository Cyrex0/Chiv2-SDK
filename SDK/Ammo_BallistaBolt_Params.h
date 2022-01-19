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
	 * Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.GetAttachRagdollParams
	 */
	struct AAmmo_BallistaBolt_C_GetAttachRagdollParams_Params
	{
	public:
		struct FAttachRagdollParams                                AttachRagdollParams;                                     // 0x0000(0x0070)  (Parm, OutParm, ContainsInstancedReference)
		class ATBLCharacter*                                       Character;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDeathDamageTakenEvent                              DamageEvent;                                             // 0x0078(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ShouldAttachRagdoll
	 */
	struct AAmmo_BallistaBolt_C_ShouldAttachRagdoll_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BaseProjectileBlockingHitWorld_Event_1
	 */
	struct AAmmo_BallistaBolt_C_BaseProjectileBlockingHitWorld_Event_1_Params
	{
	public:
		struct FProjectileHitParams                                ProjectileHit;                                           // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature
	 */
	struct AAmmo_BallistaBolt_C_BndEvt__Interactable_K2Node_ComponentBoundEvent_0_InteractableComponentOnUseSignature__DelegateSignature_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInteractableComponent*                              Interactable;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.OnInitialize
	 */
	struct AAmmo_BallistaBolt_C_OnInitialize_Params
	{
	};

	/**
	 * Function Ammo_BallistaBolt.Ammo_BallistaBolt_C.ExecuteUbergraph_Ammo_BallistaBolt
	 */
	struct AAmmo_BallistaBolt_C_ExecuteUbergraph_Ammo_BallistaBolt_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
