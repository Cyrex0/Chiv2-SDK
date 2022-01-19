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
	 * Function RadialVOMenu.RadialVOMenu_C.IsCharacterCarried
	 */
	struct URadialVOMenu_C_IsCharacterCarried_Params
	{
	public:
		bool                                                       Carried;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.Update Controller Movement Allowance
	 */
	struct URadialVOMenu_C_Update_Controller_Movement_Allowance_Params
	{
	public:
		bool                                                       IngoreMovements;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.TogglePage
	 */
	struct URadialVOMenu_C_TogglePage_Params
	{
	public:
		RadialVOMenuPageEnum_ERadialVOMenuPageEnum                 Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		RadialVOMenuPageEnum_ERadialVOMenuPageEnum                 Output_Get;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.UpdateNumKeyOrder
	 */
	struct URadialVOMenu_C_UpdateNumKeyOrder_Params
	{
	public:
		bool                                                       ForceDefaultOrder;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SwapOrder;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.OnNumDown
	 */
	struct URadialVOMenu_C_OnNumDown_Params
	{
	public:
		int                                                        Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.OnKeyDown
	 */
	struct URadialVOMenu_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.ResetUnusedButtons
	 */
	struct URadialVOMenu_C_ResetUnusedButtons_Params
	{
	public:
		int                                                        StartingIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.PopulateRadialButtons
	 */
	struct URadialVOMenu_C_PopulateRadialButtons_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.ShouldOverrideIsFocusable
	 */
	struct URadialVOMenu_C_ShouldOverrideIsFocusable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.ShouldShowMouseCursorOnInputCapture
	 */
	struct URadialVOMenu_C_ShouldShowMouseCursorOnInputCapture_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.SetOverlayColorAndOpacity
	 */
	struct URadialVOMenu_C_SetOverlayColorAndOpacity_Params
	{
	public:
		class UOverlay*                                            Overlay;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FColor                                              Color;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Opacity;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              EmoteImage;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.BindActionInput
	 */
	struct URadialVOMenu_C_BindActionInput_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Consume;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FScriptDelegate                                      Callback;                                                // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.IsCharacterDowned
	 */
	struct URadialVOMenu_C_IsCharacterDowned_Params
	{
	public:
		bool                                                       Downed;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.SetEquippedPersonality
	 */
	struct URadialVOMenu_C_SetEquippedPersonality_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.GetFirstHeldChicken
	 */
	struct URadialVOMenu_C_GetFirstHeldChicken_Params
	{
	public:
		class AInventory_Chicken_C*                                Chicken;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.GetCharacter
	 */
	struct URadialVOMenu_C_GetCharacter_Params
	{
	public:
		class ATBLCharacter*                                       Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.GetPersonalityEmotes
	 */
	struct URadialVOMenu_C_GetPersonalityEmotes_Params
	{
	public:
		TArray<struct FPersonalityEmoteTableRow>                   Output;                                                  // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.SetTextAndColor
	 */
	struct URadialVOMenu_C_SetTextAndColor_Params
	{
	public:
		struct FUIRadialEmoteStruct                                RadialEmote;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsDisabled;                                              // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.UpdateRadialButtonText
	 */
	struct URadialVOMenu_C_UpdateRadialButtonText_Params
	{
	public:
		RadialVOMenuPageEnum_ERadialVOMenuPageEnum                 NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.ShowRadialMenu
	 */
	struct URadialVOMenu_C_ShowRadialMenu_Params
	{
	public:
		RadialVOMenuPageEnum_ERadialVOMenuPageEnum                 VOMenuPage;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                                Key;                                                     // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.HideRadialMenu
	 */
	struct URadialVOMenu_C_HideRadialMenu_Params
	{
	public:
		bool                                                       SkipPlayingEmote;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.SetupRadialImageStruct
	 */
	struct URadialVOMenu_C_SetupRadialImageStruct_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.PlayEmote
	 */
	struct URadialVOMenu_C_PlayEmote_Params
	{
	public:
		int                                                        EmoteIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.PlayCurrentEmote
	 */
	struct URadialVOMenu_C_PlayCurrentEmote_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.OnToggleEmoteMenu
	 */
	struct URadialVOMenu_C_OnToggleEmoteMenu_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.BindToggleEmoteMenu
	 */
	struct URadialVOMenu_C_BindToggleEmoteMenu_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.UnbindTOggleEmoteMenu
	 */
	struct URadialVOMenu_C_UnbindTOggleEmoteMenu_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.OpenAnimation
	 */
	struct URadialVOMenu_C_OpenAnimation_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.CloseAnimation
	 */
	struct URadialVOMenu_C_CloseAnimation_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.PreConstruct
	 */
	struct URadialVOMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.Tick
	 */
	struct URadialVOMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.GenerateEmoteLists
	 */
	struct URadialVOMenu_C_GenerateEmoteLists_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.OnReverToggleEmoteMenu
	 */
	struct URadialVOMenu_C_OnReverToggleEmoteMenu_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.OnPossessedPawn_Event_1
	 */
	struct URadialVOMenu_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.OnKilled_Event_1
	 */
	struct URadialVOMenu_C_OnKilled_Event_1_Params
	{
	public:
		struct FDeathDamageTakenEvent                              Event;                                                   // 0x0000(0x0160)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.HideRadialMenuNoEmote
	 */
	struct URadialVOMenu_C_HideRadialMenuNoEmote_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.HideRadialEmotePlayEmote
	 */
	struct URadialVOMenu_C_HideRadialEmotePlayEmote_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.OnInitialized
	 */
	struct URadialVOMenu_C_OnInitialized_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.StartQuickUseTimer
	 */
	struct URadialVOMenu_C_StartQuickUseTimer_Params
	{
	public:
		bool                                                       IsGamepadKey;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.Not used
	 */
	struct URadialVOMenu_C_Not_used_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.Construct
	 */
	struct URadialVOMenu_C_Construct_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.BindNumberKeys
	 */
	struct URadialVOMenu_C_BindNumberKeys_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.1Key
	 */
	struct URadialVOMenu_C__1Key_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.2Key
	 */
	struct URadialVOMenu_C__2Key_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.3Key
	 */
	struct URadialVOMenu_C__3Key_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.4Key
	 */
	struct URadialVOMenu_C__4Key_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.5Key
	 */
	struct URadialVOMenu_C__5Key_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.6Key
	 */
	struct URadialVOMenu_C__6Key_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.7Key
	 */
	struct URadialVOMenu_C__7Key_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.8Key
	 */
	struct URadialVOMenu_C__8Key_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.UnBindNumberKeys
	 */
	struct URadialVOMenu_C_UnBindNumberKeys_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.ProcessNumKey
	 */
	struct URadialVOMenu_C_ProcessNumKey_Params
	{
	public:
		int                                                        Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.FadeAndCloseRadialVo_Internal
	 */
	struct URadialVOMenu_C_FadeAndCloseRadialVo_Internal_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.CollapseRadialVO
	 */
	struct URadialVOMenu_C_CollapseRadialVO_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.AutoHideTimerStarted
	 */
	struct URadialVOMenu_C_AutoHideTimerStarted_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.CustomEvent_1
	 */
	struct URadialVOMenu_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.InputModeChanged
	 */
	struct URadialVOMenu_C_InputModeChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.UnlockSprint
	 */
	struct URadialVOMenu_C_UnlockSprint_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.OnFadeOutAnimationFinished
	 */
	struct URadialVOMenu_C_OnFadeOutAnimationFinished_Params
	{
	};

	/**
	 * Function RadialVOMenu.RadialVOMenu_C.ExecuteUbergraph_RadialVOMenu
	 */
	struct URadialVOMenu_C_ExecuteUbergraph_RadialVOMenu_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
