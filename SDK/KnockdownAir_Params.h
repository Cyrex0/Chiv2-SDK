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
	 * Function KnockdownAir.KnockdownAir_C.OnAssemble_KnockdownAir
	 */
	struct UKnockdownAir_C_OnAssemble_KnockdownAir_Params
	{
	};

	/**
	 * Function KnockdownAir.KnockdownAir_C.EventBeginState
	 */
	struct UKnockdownAir_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KnockdownAir.KnockdownAir_C.EventLanded
	 */
	struct UKnockdownAir_C_EventLanded_Params
	{
	public:
		class ACharacter*                                          InTarget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KnockdownAir.KnockdownAir_C.EventEndAnimation
	 */
	struct UKnockdownAir_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function KnockdownAir.KnockdownAir_C.EventEndState
	 */
	struct UKnockdownAir_C_EventEndState_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bStartAttack;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KnockdownAir.KnockdownAir_C.ExecuteUbergraph_KnockdownAir
	 */
	struct UKnockdownAir_C_ExecuteUbergraph_KnockdownAir_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
