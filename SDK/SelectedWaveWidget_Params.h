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
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.Get seconds to deploy
	 */
	struct USelectedWaveWidget_C_Get_seconds_to_deploy_Params
	{
	public:
		class FText                                                Seconds_as_text;                                         // 0x0000(0x0018)  (Parm, OutParm)
		int                                                        Seconds;                                                 // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.Construct
	 */
	struct USelectedWaveWidget_C_Construct_Params
	{
	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.Set Spawn Wave
	 */
	struct USelectedWaveWidget_C_Set_Spawn_Wave_Params
	{
	public:
		class ASpawnWave*                                          In_Spawn_Wave;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.ShowWidget
	 */
	struct USelectedWaveWidget_C_ShowWidget_Params
	{
	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.HideWidget
	 */
	struct USelectedWaveWidget_C_HideWidget_Params
	{
	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.InvalidateCache
	 */
	struct USelectedWaveWidget_C_InvalidateCache_Params
	{
	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
	 */
	struct USelectedWaveWidget_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2
	 */
	struct USelectedWaveWidget_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2_Params
	{
	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.UpdateVisibility
	 */
	struct USelectedWaveWidget_C_UpdateVisibility_Params
	{
	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.Current Stage Changed
	 */
	struct USelectedWaveWidget_C_Current_Stage_Changed_Params
	{
	public:
		class UObject*                                             Previous_Stage;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             New_Stage;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.Client Tickets Changed
	 */
	struct USelectedWaveWidget_C_Client_Tickets_Changed_Params
	{
	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.Tick
	 */
	struct USelectedWaveWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.HandlePlayerSelectedSpectatorMode
	 */
	struct USelectedWaveWidget_C_HandlePlayerSelectedSpectatorMode_Params
	{
	public:
		bool                                                       IsPlayerSpectator;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.ExecuteUbergraph_SelectedWaveWidget
	 */
	struct USelectedWaveWidget_C_ExecuteUbergraph_SelectedWaveWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.ChangeLoadout__DelegateSignature
	 */
	struct USelectedWaveWidget_C_ChangeLoadout__DelegateSignature_Params
	{
	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.Clicked__DelegateSignature
	 */
	struct USelectedWaveWidget_C_Clicked__DelegateSignature_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SelectedWaveWidget.SelectedWaveWidget_C.Hovered__DelegateSignature
	 */
	struct USelectedWaveWidget_C_Hovered__DelegateSignature_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
