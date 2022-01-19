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
	 * Function Draw.Draw_C.GetMaxDrawStrengthTime
	 */
	struct UDraw_C_GetMaxDrawStrengthTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Draw.Draw_C.ToggleFocusHint
	 */
	struct UDraw_C_ToggleFocusHint_Params
	{
	public:
		bool                                                       _;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Draw.Draw_C.CrosshairFire
	 */
	struct UDraw_C_CrosshairFire_Params
	{
	};

	/**
	 * Function Draw.Draw_C.NeedsCharge
	 */
	struct UDraw_C_NeedsCharge_Params
	{
	public:
		bool                                                       bClickToFire;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Draw.Draw_C.Fire
	 */
	struct UDraw_C_Fire_Params
	{
	};

	/**
	 * Function Draw.Draw_C.ClickToFire
	 */
	struct UDraw_C_ClickToFire_Params
	{
	public:
		bool                                                       bClickToFire;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Draw.Draw_C.IsOutOfStamina
	 */
	struct UDraw_C_IsOutOfStamina_Params
	{
	public:
		bool                                                       OutOfStamina;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Draw.Draw_C.CrosshairAborted
	 */
	struct UDraw_C_CrosshairAborted_Params
	{
	};

	/**
	 * Function Draw.Draw_C.UpdateCrosshair
	 */
	struct UDraw_C_UpdateCrosshair_Params
	{
	};

	/**
	 * Function Draw.Draw_C.CanBeCancelled
	 */
	struct UDraw_C_CanBeCancelled_Params
	{
	public:
		bool                                                       bIsCancelIntoParry;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Draw.Draw_C.GetDrawStrengthModifier
	 */
	struct UDraw_C_GetDrawStrengthModifier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Draw.Draw_C.CrosshairInitiated
	 */
	struct UDraw_C_CrosshairInitiated_Params
	{
	};

	/**
	 * Function Draw.Draw_C.OnAssemble_Draw
	 */
	struct UDraw_C_OnAssemble_Draw_Params
	{
	};

	/**
	 * Function Draw.Draw_C.EventEndAnimation
	 */
	struct UDraw_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function Draw.Draw_C.EventTick
	 */
	struct UDraw_C_EventTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Draw.Draw_C.EventBeginState
	 */
	struct UDraw_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Draw.Draw_C.EventEndState
	 */
	struct UDraw_C_EventEndState_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bStartAttack;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Draw.Draw_C.OnFocusPressed
	 */
	struct UDraw_C_OnFocusPressed_Params
	{
	};

	/**
	 * Function Draw.Draw_C.OnFocusReleased
	 */
	struct UDraw_C_OnFocusReleased_Params
	{
	};

	/**
	 * Function Draw.Draw_C.EventBeginFire
	 */
	struct UDraw_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Draw.Draw_C.TriggerWeakDraw
	 */
	struct UDraw_C_TriggerWeakDraw_Params
	{
	};

	/**
	 * Function Draw.Draw_C.OnAttackQueued
	 */
	struct UDraw_C_OnAttackQueued_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Draw.Draw_C.MaxThrowHoldTime
	 */
	struct UDraw_C_MaxThrowHoldTime_Params
	{
	};

	/**
	 * Function Draw.Draw_C.ExecuteUbergraph_Draw
	 */
	struct UDraw_C_ExecuteUbergraph_Draw_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
