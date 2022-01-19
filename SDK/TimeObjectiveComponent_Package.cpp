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
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetTimeRemaining
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeSeconds                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::GetTimeRemaining(float* TimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetTimeRemaining");
		
		UTimeObjectiveComponent_C_GetTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeSeconds != nullptr)
			*TimeSeconds = params.TimeSeconds;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Create debug menu widget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UUserWidget*                                 Debug_menu_widget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::Create_debug_menu_widget(class UUserWidget** Debug_menu_widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Create debug menu widget");
		
		UTimeObjectiveComponent_C_Create_debug_menu_widget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Debug_menu_widget != nullptr)
			*Debug_menu_widget = params.Debug_menu_widget;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetDebugStringInfo
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString UTimeObjectiveComponent_C::GetDebugStringInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetDebugStringInfo");
		
		UTimeObjectiveComponent_C_GetDebugStringInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Minutes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Elapsed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::Get_Elapsed_Time_Minutes(float* Elapsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Minutes");
		
		UTimeObjectiveComponent_C_Get_Elapsed_Time_Minutes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Elapsed != nullptr)
			*Elapsed = params.Elapsed;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetBonusTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BonusTimeSeconds                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::GetBonusTime(float* BonusTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetBonusTime");
		
		UTimeObjectiveComponent_C_GetBonusTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BonusTimeSeconds != nullptr)
			*BonusTimeSeconds = params.BonusTimeSeconds;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Seconds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Elapsed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::Get_Elapsed_Time_Seconds(float* Elapsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Seconds");
		
		UTimeObjectiveComponent_C_Get_Elapsed_Time_Seconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Elapsed != nullptr)
			*Elapsed = params.Elapsed;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Time Left
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Time_Left_Seconds                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::Get_Time_Left(float* Time_Left_Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Time Left");
		
		UTimeObjectiveComponent_C_Get_Time_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time_Left_Seconds != nullptr)
			*Time_Left_Seconds = params.Time_Left_Seconds;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Take Shared Time
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        TimeSharingGroup                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTimespan                                   SharedTime                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::Take_Shared_Time(const class FName& TimeSharingGroup, struct FTimespan* SharedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Take Shared Time");
		
		UTimeObjectiveComponent_C_Take_Shared_Time_Params params {};
		params.TimeSharingGroup = TimeSharingGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SharedTime != nullptr)
			*SharedTime = params.SharedTime;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Total Duration Seconds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::Get_Total_Duration_Seconds(float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Total Duration Seconds");
		
		UTimeObjectiveComponent_C_Get_Total_Duration_Seconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Add Bonus Time
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::Add_Bonus_Time(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Add Bonus Time");
		
		UTimeObjectiveComponent_C_Add_Bonus_Time_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Is Duration Exceeded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Exceeded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTimeObjectiveComponent_C::Is_Duration_Exceeded(bool* Exceeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Is Duration Exceeded");
		
		UTimeObjectiveComponent_C_Is_Duration_Exceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exceeded != nullptr)
			*Exceeded = params.Exceeded;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTimeObjectiveComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveBeginPlay");
		
		UTimeObjectiveComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Start
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTimeObjectiveComponent_C::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Start");
		
		UTimeObjectiveComponent_C_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.Stop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTimeObjectiveComponent_C::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.Stop");
		
		UTimeObjectiveComponent_C_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Duration Exceeded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTimeObjectiveComponent_C::PRIVATE_Handle_Duration_Exceeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Duration Exceeded");
		
		UTimeObjectiveComponent_C_PRIVATE_Handle_Duration_Exceeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Bonus Duration Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTimeObjectiveComponent_C::PRIVATE_Handle_Bonus_Duration_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Bonus Duration Changed");
		
		UTimeObjectiveComponent_C_PRIVATE_Handle_Bonus_Duration_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE (Re)Start Timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTimeObjectiveComponent_C::PRIVATE__Re_Start_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE (Re)Start Timer");
		
		UTimeObjectiveComponent_C_PRIVATE__Re_Start_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Add Shared Bonus Time
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UTimeObjectiveComponent_C::PRIVATE_Add_Shared_Bonus_Time()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Add Shared Bonus Time");
		
		UTimeObjectiveComponent_C_PRIVATE_Add_Shared_Bonus_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveTick");
		
		UTimeObjectiveComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.ExecuteUbergraph_TimeObjectiveComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::ExecuteUbergraph_TimeObjectiveComponent(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.ExecuteUbergraph_TimeObjectiveComponent");
		
		UTimeObjectiveComponent_C_ExecuteUbergraph_TimeObjectiveComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.MinutesRemaining__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                MinutesRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTimeObjectiveComponent_C::MinutesRemaining__DelegateSignature(int MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.MinutesRemaining__DelegateSignature");
		
		UTimeObjectiveComponent_C_MinutesRemaining__DelegateSignature_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TimeObjectiveComponent.TimeObjectiveComponent_C.On Duration Exceeded__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UTimeObjectiveComponent_C::On_Duration_Exceeded__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TimeObjectiveComponent.TimeObjectiveComponent_C.On Duration Exceeded__DelegateSignature");
		
		UTimeObjectiveComponent_C_On_Duration_Exceeded__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTimeObjectiveComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeObjectiveComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TimeObjectiveComponent.TimeObjectiveComponent_C");
		return ptr;
	}

}


