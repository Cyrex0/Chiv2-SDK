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
	 * Function BaseMovementState.BaseMovementState_C.GetTurnInputScale
	 */
	struct UBaseMovementState_C_GetTurnInputScale_Params
	{
	public:
		TBL_EHorseTurnInput                                        TurnInput;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseMovementState.BaseMovementState_C.GetMovementStateFromInput
	 */
	struct UBaseMovementState_C_GetMovementStateFromInput_Params
	{
	public:
		float                                                      Input;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FInputMovementStateRange>                    InputMovementRanges;                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FInputMovementStateRange                            BoostInputMovementRange;                                 // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FInputMovementStateRange                            ControlInputMovementRange;                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class FName                                                MovementState;                                           // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SpeedPercentage;                                         // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseMovementState.BaseMovementState_C.SetTurn
	 */
	struct UBaseMovementState_C_SetTurn_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		HorseInterpCategory_EHorseInterpCategory                   _;                                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Boost_Scale;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		HorseInterpCategory_EHorseInterpCategory                   __;                                                      // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Control_Scale;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		HorseInterpCategory_EHorseInterpCategory                   ___;                                                     // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseMovementState.BaseMovementState_C.SetAcceleration
	 */
	struct UBaseMovementState_C_SetAcceleration_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		HorseInterpCategory_EHorseInterpCategory                   _;                                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Boost_Scale;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		HorseInterpCategory_EHorseInterpCategory                   __;                                                      // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Control_Scale;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		HorseInterpCategory_EHorseInterpCategory                   ___;                                                     // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState (percentage)
	 */
	struct UBaseMovementState_C_SetTargetSpeedState__percentage__Params
	{
	public:
		class FName                                                State;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Percent;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState
	 */
	struct UBaseMovementState_C_SetTargetSpeedState_Params
	{
	public:
		class FName                                                State;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseMovementState.BaseMovementState_C.SetMovement
	 */
	struct UBaseMovementState_C_SetMovement_Params
	{
	public:
		float                                                      AccelScale;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AccelInterp;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AccelBoostModifier;                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TurnScale;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TurnInterp;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TurnBoostModifier;                                       // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseMovementState.BaseMovementState_C.OnAssemble_BaseMovementState
	 */
	struct UBaseMovementState_C_OnAssemble_BaseMovementState_Params
	{
	};

	/**
	 * Function BaseMovementState.BaseMovementState_C.UpdateMovement
	 */
	struct UBaseMovementState_C_UpdateMovement_Params
	{
	};

	/**
	 * Function BaseMovementState.BaseMovementState_C.ExecuteUbergraph_BaseMovementState
	 */
	struct UBaseMovementState_C_ExecuteUbergraph_BaseMovementState_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
