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
	 * Function BaseSpawner.BaseSpawner_C.KillConstructablesInRadius
	 */
	struct ABaseSpawner_C_KillConstructablesInRadius_Params
	{
	public:
		struct FVector                                             ForwardVector;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.UserConstructionScript
	 */
	struct ABaseSpawner_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.ReceiveBeginPlay
	 */
	struct ABaseSpawner_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.Cinematics_ControllerPossessedPawn
	 */
	struct ABaseSpawner_C_Cinematics_ControllerPossessedPawn_Params
	{
	public:
		class ATBLPlayerController*                                Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       Pawn;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.Add HUD Marker to Wave
	 */
	struct ABaseSpawner_C_Add_HUD_Marker_to_Wave_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.Interp Z
	 */
	struct ABaseSpawner_C_Interp_Z_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.Interp rot
	 */
	struct ABaseSpawner_C_Interp_rot_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.OnPossessedCharacter
	 */
	struct ABaseSpawner_C_OnPossessedCharacter_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController*                                         Controller;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.OnKilled_Event_1
	 */
	struct ABaseSpawner_C_OnKilled_Event_1_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.StopPlayerKilledStageAction
	 */
	struct ABaseSpawner_C_StopPlayerKilledStageAction_Params
	{
	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.OnSpawnedCharacter
	 */
	struct ABaseSpawner_C_OnSpawnedCharacter_Params
	{
	public:
		class ATBLCharacter*                                       NewCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     SpawnComp;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.ExecuteUbergraph_BaseSpawner
	 */
	struct ABaseSpawner_C_ExecuteUbergraph_BaseSpawner_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseSpawner.BaseSpawner_C.OnSpawnedPlayerKilled__DelegateSignature
	 */
	struct ABaseSpawner_C_OnSpawnedPlayerKilled__DelegateSignature_Params
	{
	public:
		class AActor*                                              Killed;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
