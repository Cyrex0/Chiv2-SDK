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
	 * Function SprintStop.SprintStop_C.OnAssemble_SprintStop
	 */
	struct USprintStop_C_OnAssemble_SprintStop_Params
	{
	};

	/**
	 * Function SprintStop.SprintStop_C.EventEndAnimation
	 */
	struct USprintStop_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function SprintStop.SprintStop_C.EventTick
	 */
	struct USprintStop_C_EventTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SprintStop.SprintStop_C.EventBeginFire
	 */
	struct USprintStop_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SprintStop.SprintStop_C.ExecuteUbergraph_SprintStop
	 */
	struct USprintStop_C_ExecuteUbergraph_SprintStop_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
