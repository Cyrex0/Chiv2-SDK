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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass TBLHud_General.TBLHud_General_C
	 * Size -> 0x0651 (FullSize[0x0F39] - InheritedSize[0x08E8])
	 */
	class ATBLHud_General_C : public ATBLHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x08E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x08F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ScoreboardWidget;                                        // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             Customization;                                           // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         MapWidget;                                               // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess;                                             // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Current_Post_Process_Alpha;                              // 0x0918(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time_to_fade_in_background;                              // 0x091C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            Background_MID;                                          // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Number_screens_that_want_background_to_display;          // 0x0928(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UUQU[0x4];                                   // 0x092C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                PP_Settings;                                             // 0x0930(0x0540) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             NumRowKeyUp;                                             // 0x0E70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUserWidget*                                         GameInputMappings;                                       // 0x0E80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        PendingVONum;                                            // 0x0E88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DoubleClickVOTime;                                       // 0x0E8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        VOOptionTimerHandle;                                     // 0x0E90(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowAbilityDescriptionInputHeld;                        // 0x0E98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JT01[0x7];                                   // 0x0E99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ShowAbilityDescriptionInputHeldTimer;                    // 0x0EA0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsAbilityDescriptionsVisible;                           // 0x0EA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FW1S[0x7];                                   // 0x0EA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            blurMID;                                                 // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       reversePP;                                               // 0x0EB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       switchScreen;                                            // 0x0EB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       VOPersonalMenu_Open;                                     // 0x0EBA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       VOTacticalMenu_Open;                                     // 0x0EBB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       VOEmoteMenu_Open;                                        // 0x0EBC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A0C8[0x3];                                   // 0x0EBD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        EmoteGamepadHandle;                                      // 0x0EC0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       modifiedNumpad;                                          // 0x0EC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3L1U[0x7];                                   // 0x0EC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      SightlineCameras;                                        // 0x0ED0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bFoundCameras;                                           // 0x0EE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YQJY[0x3];                                   // 0x0EE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        curNumpadPressed;                                        // 0x0EE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        currentCam;                                              // 0x0EE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IWMA[0x4];                                   // 0x0EEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        RadialInventoryGamepadHandle;                            // 0x0EF0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInGameMenuInputHeld;                                   // 0x0EF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsScoreboardInputHeld;                                   // 0x0EF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NCXX[0x6];                                   // 0x0EFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        InGameMenuTimerHandle;                                   // 0x0F00(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AutoHideRadialVoTimerHandle;                             // 0x0F08(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       RadialVoCanHide;                                         // 0x0F10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LFY5[0x3];                                   // 0x0F11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadialVoOpenedTimeSeconds;                               // 0x0F14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumRadialVoTime;                                     // 0x0F18(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OpenRadialInventoryHoldTime;                             // 0x0F1C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsRadialInventoryTimerActive;                            // 0x0F20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HCYI[0x3];                                   // 0x0F21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScoreboardGamepadInputHoldStartTime;                     // 0x0F24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShowKeymapGamepadRequiredHoldTime;                       // 0x0F28(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PJU3[0x4];                                   // 0x0F2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ShowKeymapGamepadTimerHandle;                            // 0x0F30(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsScoreboardTimerActive;                                 // 0x0F38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsScoreboardOpen(bool* bIsOpen);
		void CanHideRadialVoImmediately(bool IsGamePad, bool* Return_Value);
		void ShouldShowRadialMenus(bool* Result);
		void DismissRadials();
		void ConvertDoubleKeyToVOOption(int Key, int* NewKey);
		void VOOptionExpired();
		void HandleVOOption(int VOOption);
		void InpActEvt_ShowScoreboard_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_ShowScoreboard_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_SelectClass_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_Five_K2Node_InputKeyEvent_12(const struct FKey& Key);
		void InpActEvt_Six_K2Node_InputKeyEvent_11(const struct FKey& Key);
		void InpActEvt_Seven_K2Node_InputKeyEvent_10(const struct FKey& Key);
		void InpActEvt_Eight_K2Node_InputKeyEvent_9(const struct FKey& Key);
		void InpActEvt_Nine_K2Node_InputKeyEvent_8(const struct FKey& Key);
		void InpActEvt_Zero_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_Three_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_Four_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_VOMenuPersonal_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_VOMenuCombat_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_VOMenuCombat_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_One_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_VOMenuEmote_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_VOMenuEmote_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_VOMenuCombat_Gamepad_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_DebugMacros_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_DebugMacros_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_NumPadOne_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_ShowControlMap_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_RadialInventory_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_RadialInventory_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ShowTeamSelectScreen(bool bGameStart);
		void ShowIngameMenu();
		void ShowLoadoutScreen();
		void OnTeamChanged_Event_1(class ATBLTeam* NewTeam);
		void OnPossessedPawn(class APawn* NewPawn);
		void OnDeathRecapReplicated_Event_1();
		void OnMatchWonBy_Event_1(TBL_EFaction Victor);
		void Emote_Gamepad_Released();
		void CloseEmoteMenu();
		void Emote_Gamepad_Pressed(const struct FKey& Key, bool Personal);
		void SpectateAndHideHUD();
		void CloseRadialInventory();
		void InGameMenuReleased();
		void AfterTimerShowMenu();
		void PS4TouchpadPressed();
		void StartRadialVOTimer_PC();
		void CustomEvent_1();
		void GamepadShowEmoteWheel();
		void GamepadHideEmoteWheel();
		void InventoryPressedTimerFinished();
		void HideEmoteMenu(bool IsGamePad);
		void OnGamepadShowKeymapInputComplete();
		void Scoreboard_Input_Timer_Finished();
		void InGameMenuPressed();
		void ExecuteUbergraph_TBLHud_General(int EntryPoint);
		void NumRowKeyUp__DelegateSignature(int Number);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
