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
	 * Function Stagger.Stagger_C.OnAssemble_Stagger
	 */
	struct UStagger_C_OnAssemble_Stagger_Params
	{
	};

	/**
	 * Function Stagger.Stagger_C.EventBeginFire
	 */
	struct UStagger_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Stagger.Stagger_C.EventBeginState
	 */
	struct UStagger_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Stagger.Stagger_C.EarlyOut
	 */
	struct UStagger_C_EarlyOut_Params
	{
	};

	/**
	 * Function Stagger.Stagger_C.DashJabOut
	 */
	struct UStagger_C_DashJabOut_Params
	{
	};

	/**
	 * Function Stagger.Stagger_C.AllowParry
	 */
	struct UStagger_C_AllowParry_Params
	{
	};

	/**
	 * Function Stagger.Stagger_C.TryStartAttack
	 */
	struct UStagger_C_TryStartAttack_Params
	{
	};

	/**
	 * Function Stagger.Stagger_C.ExecuteUbergraph_Stagger
	 */
	struct UStagger_C_ExecuteUbergraph_Stagger_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
