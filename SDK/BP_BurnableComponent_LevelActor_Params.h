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
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.DestroyWithoutDamage
	 */
	struct UBP_BurnableComponent_LevelActor_C_DestroyWithoutDamage_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UnbindEvents
	 */
	struct UBP_BurnableComponent_LevelActor_C_UnbindEvents_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BindEvents
	 */
	struct UBP_BurnableComponent_LevelActor_C_BindEvents_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateBurntMeshReplacements
	 */
	struct UBP_BurnableComponent_LevelActor_C_CreateBurntMeshReplacements_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ApplyBurnToOverlappingCharacters
	 */
	struct UBP_BurnableComponent_LevelActor_C_ApplyBurnToOverlappingCharacters_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.AssembleComponents
	 */
	struct UBP_BurnableComponent_LevelActor_C_AssembleComponents_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.SetBurnableExpressions
	 */
	struct UBP_BurnableComponent_LevelActor_C_SetBurnableExpressions_Params
	{
	public:
		class FName                                                Parameter;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateDynamicMaterials
	 */
	struct UBP_BurnableComponent_LevelActor_C_CreateDynamicMaterials_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ReceiveBeginPlay
	 */
	struct UBP_BurnableComponent_LevelActor_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.HealthChanged
	 */
	struct UBP_BurnableComponent_LevelActor_C_HealthChanged_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Initiator;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.StartBurningEffect
	 */
	struct UBP_BurnableComponent_LevelActor_C_StartBurningEffect_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.StopBurningEffect
	 */
	struct UBP_BurnableComponent_LevelActor_C_StopBurningEffect_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginDissolve
	 */
	struct UBP_BurnableComponent_LevelActor_C_BeginDissolve_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginOverlap
	 */
	struct UBP_BurnableComponent_LevelActor_C_BeginOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginFireFade
	 */
	struct UBP_BurnableComponent_LevelActor_C_BeginFireFade_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.OnHit
	 */
	struct UBP_BurnableComponent_LevelActor_C_OnHit_Params
	{
	public:
		struct FFLammableHitEvent                                  HitEvent;                                                // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateDestroyedParticles
	 */
	struct UBP_BurnableComponent_LevelActor_C_CreateDestroyedParticles_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.StopBurningSound_PlayDestroyedSound
	 */
	struct UBP_BurnableComponent_LevelActor_C_StopBurningSound_PlayDestroyedSound_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateCharring
	 */
	struct UBP_BurnableComponent_LevelActor_C_UpdateCharring_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateDissolve
	 */
	struct UBP_BurnableComponent_LevelActor_C_UpdateDissolve_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateFireParticle
	 */
	struct UBP_BurnableComponent_LevelActor_C_UpdateFireParticle_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.HealthChangedCosmetic
	 */
	struct UBP_BurnableComponent_LevelActor_C_HealthChangedCosmetic_Params
	{
	public:
		float                                                      Health;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Initiator;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ConditionsChangedCosmetic
	 */
	struct UBP_BurnableComponent_LevelActor_C_ConditionsChangedCosmetic_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EConditionType                                         Condition;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.UpdateHealthMaterial
	 */
	struct UBP_BurnableComponent_LevelActor_C_UpdateHealthMaterial_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.SwapToDestroyedMeshes
	 */
	struct UBP_BurnableComponent_LevelActor_C_SwapToDestroyedMeshes_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.EndOverlap
	 */
	struct UBP_BurnableComponent_LevelActor_C_EndOverlap_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BurnPlayer
	 */
	struct UBP_BurnableComponent_LevelActor_C_BurnPlayer_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.LockBurningEffects
	 */
	struct UBP_BurnableComponent_LevelActor_C_LockBurningEffects_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BeginFireFadeReverse
	 */
	struct UBP_BurnableComponent_LevelActor_C_BeginFireFadeReverse_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.ExecuteUbergraph_BP_BurnableComponent_LevelActor
	 */
	struct UBP_BurnableComponent_LevelActor_C_ExecuteUbergraph_BP_BurnableComponent_LevelActor_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.CreateLocators__DelegateSignature
	 */
	struct UBP_BurnableComponent_LevelActor_C_CreateLocators__DelegateSignature_Params
	{
	};

	/**
	 * Function BP_BurnableComponent_LevelActor.BP_BurnableComponent_LevelActor_C.BurnableActorKilled__DelegateSignature
	 */
	struct UBP_BurnableComponent_LevelActor_C_BurnableActorKilled__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
