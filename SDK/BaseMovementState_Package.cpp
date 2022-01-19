/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.GetTurnInputScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EHorseTurnInput                                TurnInput                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBaseMovementState_C::GetTurnInputScale(TBL_EHorseTurnInput TurnInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.GetTurnInputScale");
		
		UBaseMovementState_C_GetTurnInputScale_Params params {};
		params.TurnInput = TurnInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.GetMovementStateFromInput
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Input                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FInputMovementStateRange>            InputMovementRanges                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FInputMovementStateRange                    BoostInputMovementRange                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FInputMovementStateRange                    ControlInputMovementRange                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class FName                                        MovementState                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SpeedPercentage                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseMovementState_C::GetMovementStateFromInput(float Input, TArray<struct FInputMovementStateRange>* InputMovementRanges, const struct FInputMovementStateRange& BoostInputMovementRange, const struct FInputMovementStateRange& ControlInputMovementRange, class FName* MovementState, float* SpeedPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.GetMovementStateFromInput");
		
		UBaseMovementState_C_GetMovementStateFromInput_Params params {};
		params.Input = Input;
		params.BoostInputMovementRange = BoostInputMovementRange;
		params.ControlInputMovementRange = ControlInputMovementRange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputMovementRanges != nullptr)
			*InputMovementRanges = params.InputMovementRanges;
		if (MovementState != nullptr)
			*MovementState = params.MovementState;
		if (SpeedPercentage != nullptr)
			*SpeedPercentage = params.SpeedPercentage;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.SetTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		HorseInterpCategory_EHorseInterpCategory           _                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Boost_Scale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		HorseInterpCategory_EHorseInterpCategory           __                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Control_Scale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		HorseInterpCategory_EHorseInterpCategory           ___                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseMovementState_C::SetTurn(float Scale, HorseInterpCategory_EHorseInterpCategory _, float Boost_Scale, HorseInterpCategory_EHorseInterpCategory __, float Control_Scale, HorseInterpCategory_EHorseInterpCategory ___)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.SetTurn");
		
		UBaseMovementState_C_SetTurn_Params params {};
		params.Scale = Scale;
		params._ = _;
		params.Boost_Scale = Boost_Scale;
		params.__ = __;
		params.Control_Scale = Control_Scale;
		params.___ = ___;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.SetAcceleration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		HorseInterpCategory_EHorseInterpCategory           _                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Boost_Scale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		HorseInterpCategory_EHorseInterpCategory           __                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Control_Scale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		HorseInterpCategory_EHorseInterpCategory           ___                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseMovementState_C::SetAcceleration(float Scale, HorseInterpCategory_EHorseInterpCategory _, float Boost_Scale, HorseInterpCategory_EHorseInterpCategory __, float Control_Scale, HorseInterpCategory_EHorseInterpCategory ___)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.SetAcceleration");
		
		UBaseMovementState_C_SetAcceleration_Params params {};
		params.Scale = Scale;
		params._ = _;
		params.Boost_Scale = Boost_Scale;
		params.__ = __;
		params.Control_Scale = Control_Scale;
		params.___ = ___;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState (percentage)
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseMovementState_C::SetTargetSpeedState__percentage_(const class FName& State, float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState (percentage)");
		
		UBaseMovementState_C_SetTargetSpeedState__percentage__Params params {};
		params.State = State;
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseMovementState_C::SetTargetSpeedState(const class FName& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.SetTargetSpeedState");
		
		UBaseMovementState_C_SetTargetSpeedState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.SetMovement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AccelScale                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AccelInterp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AccelBoostModifier                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TurnScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TurnInterp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TurnBoostModifier                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseMovementState_C::SetMovement(float AccelScale, float AccelInterp, float AccelBoostModifier, float TurnScale, float TurnInterp, float TurnBoostModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.SetMovement");
		
		UBaseMovementState_C_SetMovement_Params params {};
		params.AccelScale = AccelScale;
		params.AccelInterp = AccelInterp;
		params.AccelBoostModifier = AccelBoostModifier;
		params.TurnScale = TurnScale;
		params.TurnInterp = TurnInterp;
		params.TurnBoostModifier = TurnBoostModifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.OnAssemble_BaseMovementState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBaseMovementState_C::OnAssemble_BaseMovementState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.OnAssemble_BaseMovementState");
		
		UBaseMovementState_C_OnAssemble_BaseMovementState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.UpdateMovement
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBaseMovementState_C::UpdateMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.UpdateMovement");
		
		UBaseMovementState_C_UpdateMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseMovementState.BaseMovementState_C.ExecuteUbergraph_BaseMovementState
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseMovementState_C::ExecuteUbergraph_BaseMovementState(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseMovementState.BaseMovementState_C.ExecuteUbergraph_BaseMovementState");
		
		UBaseMovementState_C_ExecuteUbergraph_BaseMovementState_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBaseMovementState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMovementState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseMovementState.BaseMovementState_C");
		return ptr;
	}

}


