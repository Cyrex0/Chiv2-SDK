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
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetTimeRemaining
	 */
	struct UTimeObjectiveComponent_C_GetTimeRemaining_Params
	{
	public:
		float                                                      TimeSeconds;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Create debug menu widget
	 */
	struct UTimeObjectiveComponent_C_Create_debug_menu_widget_Params
	{
	public:
		class UUserWidget*                                         Debug_menu_widget;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetDebugStringInfo
	 */
	struct UTimeObjectiveComponent_C_GetDebugStringInfo_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Minutes
	 */
	struct UTimeObjectiveComponent_C_Get_Elapsed_Time_Minutes_Params
	{
	public:
		float                                                      Elapsed;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.GetBonusTime
	 */
	struct UTimeObjectiveComponent_C_GetBonusTime_Params
	{
	public:
		float                                                      BonusTimeSeconds;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Elapsed Time Seconds
	 */
	struct UTimeObjectiveComponent_C_Get_Elapsed_Time_Seconds_Params
	{
	public:
		float                                                      Elapsed;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Time Left
	 */
	struct UTimeObjectiveComponent_C_Get_Time_Left_Params
	{
	public:
		float                                                      Time_Left_Seconds;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Take Shared Time
	 */
	struct UTimeObjectiveComponent_C_Take_Shared_Time_Params
	{
	public:
		class FName                                                TimeSharingGroup;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTimespan                                           SharedTime;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Get Total Duration Seconds
	 */
	struct UTimeObjectiveComponent_C_Get_Total_Duration_Seconds_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Add Bonus Time
	 */
	struct UTimeObjectiveComponent_C_Add_Bonus_Time_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Is Duration Exceeded
	 */
	struct UTimeObjectiveComponent_C_Is_Duration_Exceeded_Params
	{
	public:
		bool                                                       Exceeded;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveBeginPlay
	 */
	struct UTimeObjectiveComponent_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Start
	 */
	struct UTimeObjectiveComponent_C_Start_Params
	{
	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.Stop
	 */
	struct UTimeObjectiveComponent_C_Stop_Params
	{
	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Duration Exceeded
	 */
	struct UTimeObjectiveComponent_C_PRIVATE_Handle_Duration_Exceeded_Params
	{
	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Handle Bonus Duration Changed
	 */
	struct UTimeObjectiveComponent_C_PRIVATE_Handle_Bonus_Duration_Changed_Params
	{
	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE (Re)Start Timer
	 */
	struct UTimeObjectiveComponent_C_PRIVATE__Re_Start_Timer_Params
	{
	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.PRIVATE Add Shared Bonus Time
	 */
	struct UTimeObjectiveComponent_C_PRIVATE_Add_Shared_Bonus_Time_Params
	{
	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.ReceiveTick
	 */
	struct UTimeObjectiveComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.ExecuteUbergraph_TimeObjectiveComponent
	 */
	struct UTimeObjectiveComponent_C_ExecuteUbergraph_TimeObjectiveComponent_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.MinutesRemaining__DelegateSignature
	 */
	struct UTimeObjectiveComponent_C_MinutesRemaining__DelegateSignature_Params
	{
	public:
		int                                                        MinutesRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TimeObjectiveComponent.TimeObjectiveComponent_C.On Duration Exceeded__DelegateSignature
	 */
	struct UTimeObjectiveComponent_C_On_Duration_Exceeded__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
