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
	 * Function Idle.Idle_C.OnAssemble_Idle
	 */
	struct UIdle_C_OnAssemble_Idle_Params
	{
	};

	/**
	 * Function Idle.Idle_C.EventBeginState
	 */
	struct UIdle_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Idle.Idle_C.EventBeginFire
	 */
	struct UIdle_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Idle.Idle_C.GearDown
	 */
	struct UIdle_C_GearDown_Params
	{
	};

	/**
	 * Function Idle.Idle_C.GearUp
	 */
	struct UIdle_C_GearUp_Params
	{
	};

	/**
	 * Function Idle.Idle_C.StrafeGearUp
	 */
	struct UIdle_C_StrafeGearUp_Params
	{
	};

	/**
	 * Function Idle.Idle_C.UpdateMovement
	 */
	struct UIdle_C_UpdateMovement_Params
	{
	};

	/**
	 * Function Idle.Idle_C.ExecuteUbergraph_Idle
	 */
	struct UIdle_C_ExecuteUbergraph_Idle_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
