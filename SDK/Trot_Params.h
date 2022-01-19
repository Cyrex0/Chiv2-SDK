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
	 * Function Trot.Trot_C.OnAssemble_Trot
	 */
	struct UTrot_C_OnAssemble_Trot_Params
	{
	};

	/**
	 * Function Trot.Trot_C.StrafeGearDown
	 */
	struct UTrot_C_StrafeGearDown_Params
	{
	};

	/**
	 * Function Trot.Trot_C.EventBeginState
	 */
	struct UTrot_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Trot.Trot_C.GearDown
	 */
	struct UTrot_C_GearDown_Params
	{
	};

	/**
	 * Function Trot.Trot_C.GearUp
	 */
	struct UTrot_C_GearUp_Params
	{
	};

	/**
	 * Function Trot.Trot_C.UpdateMovement
	 */
	struct UTrot_C_UpdateMovement_Params
	{
	};

	/**
	 * Function Trot.Trot_C.EventBeginFire
	 */
	struct UTrot_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Trot.Trot_C.ExecuteUbergraph_Trot
	 */
	struct UTrot_C_ExecuteUbergraph_Trot_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
