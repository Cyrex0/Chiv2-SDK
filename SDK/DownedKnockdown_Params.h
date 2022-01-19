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
	 * Function DownedKnockdown.DownedKnockdown_C.OnAssemble_DownedKnockdown
	 */
	struct UDownedKnockdown_C_OnAssemble_DownedKnockdown_Params
	{
	};

	/**
	 * Function DownedKnockdown.DownedKnockdown_C.EventEndAnimation
	 */
	struct UDownedKnockdown_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function DownedKnockdown.DownedKnockdown_C.EventBeginState
	 */
	struct UDownedKnockdown_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function DownedKnockdown.DownedKnockdown_C.EventEndState
	 */
	struct UDownedKnockdown_C_EventEndState_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bStartAttack;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function DownedKnockdown.DownedKnockdown_C.ExecuteUbergraph_DownedKnockdown
	 */
	struct UDownedKnockdown_C_ExecuteUbergraph_DownedKnockdown_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
