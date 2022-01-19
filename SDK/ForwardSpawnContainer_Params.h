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
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.Get Visibility of HUD marker container
	 */
	struct UForwardSpawnContainer_C_Get_Visibility_of_HUD_marker_container_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.GetVisibility_1
	 */
	struct UForwardSpawnContainer_C_GetVisibility_1_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.Construct
	 */
	struct UForwardSpawnContainer_C_Construct_Params
	{
	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Started Wave Hover
	 */
	struct UForwardSpawnContainer_C_Notify_Started_Wave_Hover_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Ended Wave Hover
	 */
	struct UForwardSpawnContainer_C_Notify_Ended_Wave_Hover_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnJoinableSpawnWavesUpdated_Event_1
	 */
	struct UForwardSpawnContainer_C_OnJoinableSpawnWavesUpdated_Event_1_Params
	{
	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnPromptPlayerMessageRequest
	 */
	struct UForwardSpawnContainer_C_OnPromptPlayerMessageRequest_Params
	{
	public:
		struct FGameplayTag                                        MessageTag;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		int                                                        MessageId;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.ResetIsShowingPrompt
	 */
	struct UForwardSpawnContainer_C_ResetIsShowingPrompt_Params
	{
	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.CancelPrompt
	 */
	struct UForwardSpawnContainer_C_CancelPrompt_Params
	{
	public:
		int                                                        MessageId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.ExecuteUbergraph_ForwardSpawnContainer
	 */
	struct UForwardSpawnContainer_C_ExecuteUbergraph_ForwardSpawnContainer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Ended Wave Hover__DelegateSignature
	 */
	struct UForwardSpawnContainer_C_On_Ended_Wave_Hover__DelegateSignature_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Started Wave Hover__DelegateSignature
	 */
	struct UForwardSpawnContainer_C_On_Started_Wave_Hover__DelegateSignature_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
