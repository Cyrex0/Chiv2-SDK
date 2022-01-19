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
	 * Function Canter.Canter_C.OnAssemble_Canter
	 */
	struct UCanter_C_OnAssemble_Canter_Params
	{
	};

	/**
	 * Function Canter.Canter_C.GearUp
	 */
	struct UCanter_C_GearUp_Params
	{
	};

	/**
	 * Function Canter.Canter_C.GearDown
	 */
	struct UCanter_C_GearDown_Params
	{
	};

	/**
	 * Function Canter.Canter_C.UpdateMovement
	 */
	struct UCanter_C_UpdateMovement_Params
	{
	};

	/**
	 * Function Canter.Canter_C.EventBeginFire
	 */
	struct UCanter_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Canter.Canter_C.EventBeginState
	 */
	struct UCanter_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Canter.Canter_C.StrafeGearDown
	 */
	struct UCanter_C_StrafeGearDown_Params
	{
	};

	/**
	 * Function Canter.Canter_C.ExecuteUbergraph_Canter
	 */
	struct UCanter_C_ExecuteUbergraph_Canter_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
