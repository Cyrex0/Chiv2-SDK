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
	 * Function TransitionStage.TransitionStage_C.TryFastForwardServerWarmup
	 */
	struct ATransitionStage_C_TryFastForwardServerWarmup_Params
	{
	};

	/**
	 * Function TransitionStage.TransitionStage_C.InitializeTransitionStage With Bindings
	 */
	struct ATransitionStage_C_InitializeTransitionStage_With_Bindings_Params
	{
	public:
		struct FTransitionStageSettings                            Settings;                                                // 0x0010(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		TMap<class ASpawner*, class FString>                       Spawner_Binding_Prefixes;                                // 0x0038(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function TransitionStage.TransitionStage_C.CompleteStage
	 */
	struct ATransitionStage_C_CompleteStage_Params
	{
	};

	/**
	 * Function TransitionStage.TransitionStage_C.InitializeTransitionStage
	 */
	struct ATransitionStage_C_InitializeTransitionStage_Params
	{
	public:
		struct FTransitionStageSettings                            Settings;                                                // 0x0010(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TransitionStage.TransitionStage_C.IsStageReadyToComplete
	 */
	struct ATransitionStage_C_IsStageReadyToComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TransitionStage.TransitionStage_C.ReceiveBeginPlay
	 */
	struct ATransitionStage_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function TransitionStage.TransitionStage_C.StartStage
	 */
	struct ATransitionStage_C_StartStage_Params
	{
	};

	/**
	 * Function TransitionStage.TransitionStage_C.OnMatchStateChanged_Event_1
	 */
	struct ATransitionStage_C_OnMatchStateChanged_Event_1_Params
	{
	public:
		class FName                                                State;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TransitionStage.TransitionStage_C.Conditional Start Stage
	 */
	struct ATransitionStage_C_Conditional_Start_Stage_Params
	{
	};

	/**
	 * Function TransitionStage.TransitionStage_C.ExecuteUbergraph_TransitionStage
	 */
	struct ATransitionStage_C_ExecuteUbergraph_TransitionStage_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TransitionStage.TransitionStage_C.On Transition Stage Started__DelegateSignature
	 */
	struct ATransitionStage_C_On_Transition_Stage_Started__DelegateSignature_Params
	{
	};

	/**
	 * Function TransitionStage.TransitionStage_C.On Transition Stage Ended__DelegateSignature
	 */
	struct ATransitionStage_C_On_Transition_Stage_Ended__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
