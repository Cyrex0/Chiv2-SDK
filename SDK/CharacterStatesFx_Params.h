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
	 * Function CharacterStatesFx.CharacterStatesFx_C.UpdateStaminaRTPC
	 */
	struct UCharacterStatesFx_C_UpdateStaminaRTPC_Params
	{
	public:
		float                                                      bpp__StaminaPercent__pf;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Actor__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsLocalActorNotBotNotNPC__pf;                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.UpdateHealthRTPC
	 */
	struct UCharacterStatesFx_C_UpdateHealthRTPC_Params
	{
	public:
		float                                                      bpp__HealthPercent__pf;                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__HealthValue__pf;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bpp__HealthMaxValue__pf;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Actor__pf;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__IsLocalActorNotBotNotNPC__pf;                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.UpdateDownedStatePercentage
	 */
	struct UCharacterStatesFx_C_UpdateDownedStatePercentage_Params
	{
	public:
		float                                                      bpp__Percentage__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.UpdateBloodEffect
	 */
	struct UCharacterStatesFx_C_UpdateBloodEffect_Params
	{
	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.RemoveBurningParticleSystem
	 */
	struct UCharacterStatesFx_C_RemoveBurningParticleSystem_Params
	{
	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.RemoveAudioState
	 */
	struct UCharacterStatesFx_C_RemoveAudioState_Params
	{
	public:
		AudioCharacterStates_EAudioCharacterStates                 bpp__AudioState__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllConditions
	 */
	struct UCharacterStatesFx_C_RemoveAllConditions_Params
	{
	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.RemoveAllAudioStates
	 */
	struct UCharacterStatesFx_C_RemoveAllAudioStates_Params
	{
	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.PlaySoundForLocalCharacter
	 */
	struct UCharacterStatesFx_C_PlaySoundForLocalCharacter_Params
	{
	public:
		class UAkAudioEvent*                                       bpp__Event__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLCharacter*                                       bpp__Character__pf;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OutOfStaminaUpdate
	 */
	struct UCharacterStatesFx_C_OutOfStaminaUpdate_Params
	{
	public:
		bool                                                       bpp__IsOutOfStamina__pf;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Actor__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnStatChanged
	 */
	struct UCharacterStatesFx_C_OnStatChanged_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_EStat                                                  bpp__Type__pf;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FStatEntry                                          bpp__Stat__pf__const;                                    // 0x0010(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		float                                                      bpp__DeltaValue__pf;                                     // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnStaminaUpdate
	 */
	struct UCharacterStatesFx_C_OnStaminaUpdate_Params
	{
	public:
		bool                                                       bpp__IsLow__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Actor__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnRevived
	 */
	struct UCharacterStatesFx_C_OnRevived_Params
	{
	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnRemoveCondition
	 */
	struct UCharacterStatesFx_C_OnRemoveCondition_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_EConditionType                                         bpp__Condition__pf;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnPossessed
	 */
	struct UCharacterStatesFx_C_OnPossessed_Params
	{
	public:
		class AController*                                         bpp__Controller__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnKilled
	 */
	struct UCharacterStatesFx_C_OnKilled_Params
	{
	public:
		struct FDeathDamageTakenEvent                              bpp__DamageEvent__pf__const;                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnHealthUpdate
	 */
	struct UCharacterStatesFx_C_OnHealthUpdate_Params
	{
	public:
		bool                                                       bpp__IsLow__pf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              bpp__Actor__pf;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnConstruct
	 */
	struct UCharacterStatesFx_C_OnConstruct_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnAssemble_CharacterStatesFx
	 */
	struct UCharacterStatesFx_C_OnAssemble_CharacterStatesFx_Params
	{
	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.OnApplyCondition
	 */
	struct UCharacterStatesFx_C_OnApplyCondition_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_EConditionType                                         bpp__Condition__pf;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.IsActorDead
	 */
	struct UCharacterStatesFx_C_IsActorDead_Params
	{
	public:
		bool                                                       bpp__ReturnxValue__pfT;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.HasCondition
	 */
	struct UCharacterStatesFx_C_HasCondition_Params
	{
	public:
		TBL_EConditionType                                         bpp__Condition__pf;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__ReturnxValue__pfT;                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.HandleRemovingCondition
	 */
	struct UCharacterStatesFx_C_HandleRemovingCondition_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TBL_EConditionType                                         bpp__Condition__pf;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.GetHighestPriorityCondition
	 */
	struct UCharacterStatesFx_C_GetHighestPriorityCondition_Params
	{
	public:
		AudioCharacterStates_EAudioCharacterStates                 bpp__AudioCondition__pf;                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.ExecuteUbergraph_CharacterStatesFx_4
	 */
	struct UCharacterStatesFx_C_ExecuteUbergraph_CharacterStatesFx_4_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.CustomEvent_1
	 */
	struct UCharacterStatesFx_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.ApplyAudioState
	 */
	struct UCharacterStatesFx_C_ApplyAudioState_Params
	{
	public:
		AudioCharacterStates_EAudioCharacterStates                 bpp__AudioState__pf;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterStatesFx.CharacterStatesFx_C.AddBurningParticleSystem
	 */
	struct UCharacterStatesFx_C_AddBurningParticleSystem_Params
	{
	public:
		class ATBLCharacter*                                       bpp__InActor__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
