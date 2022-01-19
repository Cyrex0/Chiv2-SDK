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
	 * Function Siege_Reload.Siege_Reload_C.DisableCameraModifier
	 */
	struct USiege_Reload_C_DisableCameraModifier_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Siege_Reload.Siege_Reload_C.EnableCameraModifier
	 */
	struct USiege_Reload_C_EnableCameraModifier_Params
	{
	};

	/**
	 * Function Siege_Reload.Siege_Reload_C.OnAssemble_Siege_Reload
	 */
	struct USiege_Reload_C_OnAssemble_Siege_Reload_Params
	{
	};

	/**
	 * Function Siege_Reload.Siege_Reload_C.EventBeginState
	 */
	struct USiege_Reload_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Siege_Reload.Siege_Reload_C.SoftRecovery
	 */
	struct USiege_Reload_C_SoftRecovery_Params
	{
	};

	/**
	 * Function Siege_Reload.Siege_Reload_C.EventBeginFire
	 */
	struct USiege_Reload_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Siege_Reload.Siege_Reload_C.EventEndAnimation
	 */
	struct USiege_Reload_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function Siege_Reload.Siege_Reload_C.EventEndState
	 */
	struct USiege_Reload_C_EventEndState_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bStartAttack;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Siege_Reload.Siege_Reload_C.ExecuteUbergraph_Siege_Reload
	 */
	struct USiege_Reload_C_ExecuteUbergraph_Siege_Reload_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
