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
	 * Function SpawnMarker.SpawnMarker_C.Get_PlayersTexT_Deploying
	 */
	struct USpawnMarker_C_Get_PlayersTexT_Deploying_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.Get_PlayersText_Text_1
	 */
	struct USpawnMarker_C_Get_PlayersText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.GetVisibility_1
	 */
	struct USpawnMarker_C_GetVisibility_1_Params
	{
	public:
		UMG_ESlateVisibility                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.Get_DeployingInText_Text_1
	 */
	struct USpawnMarker_C_Get_DeployingInText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.SetState
	 */
	struct USpawnMarker_C_SetState_Params
	{
	public:
		SpawnMarkerState_ESpawnMarkerState                         State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.ApplyStyle
	 */
	struct USpawnMarker_C_ApplyStyle_Params
	{
	public:
		SpawnMarkerState_ESpawnMarkerState                         State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.Tick
	 */
	struct USpawnMarker_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
	 */
	struct USpawnMarker_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.ForceHovered
	 */
	struct USpawnMarker_C_ForceHovered_Params
	{
	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.ForceUnhovered
	 */
	struct USpawnMarker_C_ForceUnhovered_Params
	{
	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct USpawnMarker_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.PreConstruct
	 */
	struct USpawnMarker_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.On Started Wave Hover_Event_1
	 */
	struct USpawnMarker_C_On_Started_Wave_Hover_Event_1_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.On Ended Wave Hover_Event_1
	 */
	struct USpawnMarker_C_On_Ended_Wave_Hover_Event_1_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.Construct
	 */
	struct USpawnMarker_C_Construct_Params
	{
	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.K2_OnAssignedToActor
	 */
	struct USpawnMarker_C_K2_OnAssignedToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UActorComponent*                                     Component;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.K2_OnReturnedToPool
	 */
	struct USpawnMarker_C_K2_OnReturnedToPool_Params
	{
	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USpawnMarker_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.WidgetAnimationEvt_DeployingStartAnimation_K2Node_WidgetAnimationEvent_1
	 */
	struct USpawnMarker_C_WidgetAnimationEvt_DeployingStartAnimation_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.ExecuteUbergraph_SpawnMarker
	 */
	struct USpawnMarker_C_ExecuteUbergraph_SpawnMarker_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpawnMarker.SpawnMarker_C.Hovered__DelegateSignature
	 */
	struct USpawnMarker_C_Hovered__DelegateSignature_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
