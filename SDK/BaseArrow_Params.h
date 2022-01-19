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
	 * Function BaseArrow.BaseArrow_C.OnRep_StartTimestamp
	 */
	struct ABaseArrow_C_OnRep_StartTimestamp_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.PlaySoundOnLocalFakeClient
	 */
	struct ABaseArrow_C_PlaySoundOnLocalFakeClient_Params
	{
	public:
		class UAkAudioEvent*                                       Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseArrow.BaseArrow_C.UserConstructionScript
	 */
	struct ABaseArrow_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.Disable glint
	 */
	struct ABaseArrow_C_Disable_glint_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.Enable glint
	 */
	struct ABaseArrow_C_Enable_glint_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.EnableProjectileTailParticle
	 */
	struct ABaseArrow_C_EnableProjectileTailParticle_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.DisableProjectileTailParticle
	 */
	struct ABaseArrow_C_DisableProjectileTailParticle_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.ProjectileMovementStarted_BaseArrow
	 */
	struct ABaseArrow_C_ProjectileMovementStarted_BaseArrow_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.ProjectileMovementStopped_BaseArrow
	 */
	struct ABaseArrow_C_ProjectileMovementStopped_BaseArrow_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.BaseArrow_AssignProjectileEvents
	 */
	struct ABaseArrow_C_BaseArrow_AssignProjectileEvents_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.ParticleTimerEvent
	 */
	struct ABaseArrow_C_ParticleTimerEvent_Params
	{
	};

	/**
	 * Function BaseArrow.BaseArrow_C.ExecuteUbergraph_BaseArrow
	 */
	struct ABaseArrow_C_ExecuteUbergraph_BaseArrow_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
