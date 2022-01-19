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
	 * Function Feint.Feint_C.CanAttackBeHeavy
	 */
	struct UFeint_C_CanAttackBeHeavy_Params
	{
	public:
		bool                                                       Output;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Feint.Feint_C.CrosshairAborted
	 */
	struct UFeint_C_CrosshairAborted_Params
	{
	public:
		bool                                                       IsStateEnd;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Feint.Feint_C.CrosshairCompleted
	 */
	struct UFeint_C_CrosshairCompleted_Params
	{
	};

	/**
	 * Function Feint.Feint_C.CrosshairInitiated
	 */
	struct UFeint_C_CrosshairInitiated_Params
	{
	};

	/**
	 * Function Feint.Feint_C.CrosshairProgress
	 */
	struct UFeint_C_CrosshairProgress_Params
	{
	};

	/**
	 * Function Feint.Feint_C.OnAssemble_Feint
	 */
	struct UFeint_C_OnAssemble_Feint_Params
	{
	};

	/**
	 * Function Feint.Feint_C.EventEndAnimation
	 */
	struct UFeint_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function Feint.Feint_C.StartHoldAttack
	 */
	struct UFeint_C_StartHoldAttack_Params
	{
	};

	/**
	 * Function Feint.Feint_C.StartHolding
	 */
	struct UFeint_C_StartHolding_Params
	{
	};

	/**
	 * Function Feint.Feint_C.EventBeginState
	 */
	struct UFeint_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Feint.Feint_C.EventTick
	 */
	struct UFeint_C_EventTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Feint.Feint_C.ExecuteUbergraph_Feint
	 */
	struct UFeint_C_ExecuteUbergraph_Feint_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
