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
	 * Function Walk.Walk_C.OnAssemble_Walk
	 */
	struct UWalk_C_OnAssemble_Walk_Params
	{
	};

	/**
	 * Function Walk.Walk_C.StrafeGearDown
	 */
	struct UWalk_C_StrafeGearDown_Params
	{
	};

	/**
	 * Function Walk.Walk_C.StrafeGearUp
	 */
	struct UWalk_C_StrafeGearUp_Params
	{
	};

	/**
	 * Function Walk.Walk_C.GearUp
	 */
	struct UWalk_C_GearUp_Params
	{
	};

	/**
	 * Function Walk.Walk_C.GearDown
	 */
	struct UWalk_C_GearDown_Params
	{
	};

	/**
	 * Function Walk.Walk_C.EventBeginFire
	 */
	struct UWalk_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Walk.Walk_C.EventBeginState
	 */
	struct UWalk_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Walk.Walk_C.UpdateMovement
	 */
	struct UWalk_C_UpdateMovement_Params
	{
	};

	/**
	 * Function Walk.Walk_C.ExecuteUbergraph_Walk
	 */
	struct UWalk_C_ExecuteUbergraph_Walk_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
