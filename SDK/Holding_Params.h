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
	 * Function Holding.Holding_C.GetFeintMinTime
	 */
	struct UHolding_C_GetFeintMinTime_Params
	{
	public:
		float                                                      MinTime;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Holding.Holding_C.ShouldDoHeavyAttack
	 */
	struct UHolding_C_ShouldDoHeavyAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Holding.Holding_C.CrosshairAborted
	 */
	struct UHolding_C_CrosshairAborted_Params
	{
	public:
		bool                                                       IsStateEnd;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Holding.Holding_C.CrosshairCompleted
	 */
	struct UHolding_C_CrosshairCompleted_Params
	{
	};

	/**
	 * Function Holding.Holding_C.CrosshairInitiated
	 */
	struct UHolding_C_CrosshairInitiated_Params
	{
	};

	/**
	 * Function Holding.Holding_C.CrosshairProgress
	 */
	struct UHolding_C_CrosshairProgress_Params
	{
	};

	/**
	 * Function Holding.Holding_C.CanBeCancelled
	 */
	struct UHolding_C_CanBeCancelled_Params
	{
	public:
		bool                                                       bIsCancelIntoParry;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Holding.Holding_C.OnAssemble_Holding
	 */
	struct UHolding_C_OnAssemble_Holding_Params
	{
	};

	/**
	 * Function Holding.Holding_C.EventEndAnimation
	 */
	struct UHolding_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function Holding.Holding_C.EventBeginFire
	 */
	struct UHolding_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Holding.Holding_C.StartHoldAttack
	 */
	struct UHolding_C_StartHoldAttack_Params
	{
	};

	/**
	 * Function Holding.Holding_C.StartHolding
	 */
	struct UHolding_C_StartHolding_Params
	{
	};

	/**
	 * Function Holding.Holding_C.EventBeginState
	 */
	struct UHolding_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Holding.Holding_C.EventTick
	 */
	struct UHolding_C_EventTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Holding.Holding_C.EventEndState
	 */
	struct UHolding_C_EventEndState_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bStartAttack;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Holding.Holding_C.ExecuteUbergraph_Holding
	 */
	struct UHolding_C_ExecuteUbergraph_Holding_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
