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
	 * WidgetBlueprintGeneratedClass OverviewScreen.OverviewScreen_C
	 * Size -> 0x00D4 (FullSize[0x031C] - InheritedSize[0x0248])
	 */
	class UOverviewScreen_C : public UTBLOverviewScreen
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Bigclickablearea;                                        // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeymapWidget_C*                                     KeymapWidget;                                            // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Loadout;                                                 // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadout_Screen_C*                                   LoadoutScreen;                                           // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            NavOverlay;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PlayerList;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerList_C*                                       PlayerListScreen;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TeamSelect;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTeamSelectScreen_C*                                 TeamSelectScreen;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Is_Cinematic_Mode;                                       // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		OverviewScreenState_EOverviewScreenState                   State;                                                   // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DM8Z[0x2];                                   // 0x029A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        PlayerInputIdNum;                                        // 0x029C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNavigationWidget_C*                                 NavigationWidget;                                        // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                TogglePlayerlistKeybind;                                 // 0x02A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       PlayerListAlwaysVisibleOverride;                         // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F0E1[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                ShorcutKeyPressed;                                       // 0x02C8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OverviewScreenStateChanged;                              // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              OptionsScreen[0x28];                                     // 0x02F0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bIsPlayerlistToggle;                                     // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bLockScreenMode;                                         // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bBypassTutorialLockout;                                  // 0x031A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TutorialKeymapOverride;                                  // 0x031B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UWidget* K2_GetFocusWidget();
		void GetMenuTakeOverActionName(class FName* Action);
		void StopListeningForMenuTakeOver();
		void StartListeningForMenuTakeOver();
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void DisplayNavigationMenu(OverviewScreenState_EOverviewScreenState State, OverviewScreenState_EOverviewScreenState PreviousState, bool* Return);
		void Set_Keyboard_Focus();
		void Get_Widget_For_Current_State(class UWidget** Out);
		void Set_cinematics_UI_state(const struct FGameplayTag& State);
		class FText Get_Loadout_Toggle_Button_Text();
		void IsInEditor(bool* Return_Value);
		void Toggle_Cinematic_Mode(bool Enable_Cinematic_Mode);
		void IsPlayerInSpawnWave(class AController* Player, bool* InSpawnWave);
		void InitNavigationMenu();
		void Hide_Overview_Screen_If_In_Scoreboard_Mode();
		void Set_Overview_Screen_Mode(OverviewScreenState_EOverviewScreenState New_mode);
		void Init_Subwidgets();
		void Construct();
		void BindVIewportFocus_GameAndUIInput(class ATBLPlayerController* TBLPlayerController);
		void OnGameViewportReceivedFocus_Event_1();
		void BindVIewportFocus_GameInput(class ATBLPlayerController* TBLPlayerController);
		void OnGameViewportReceivedFocus_Event_2();
		void BndEvt__LoadoutToggleButton_K2Node_ComponentBoundEvent_147_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void BndEvt__SimpleButton_C_0_K2Node_ComponentBoundEvent_250_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void BndEvt__Bigclickablearea_K2Node_ComponentBoundEvent_292_OnButtonClickedEvent__DelegateSignature();
		void RequestedToJoinSpawnWave_Event_1(class ASpawnWave* SpawnWave);
		void OnReceivedSpawnWaveJoinResponse_Event_1(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess);
		void Bind_navigation_widget();
		void Resume_Clicked_Event_1();
		void Toggle_ingame_menu();
		void Fired_Button_Action_Event_1(const class FName& Button_ID);
		void CustomEvent_2();
		void BP_ShowLoadout(bool bReset);
		void PlayerListFocused();
		void GamepadInputChanged(TBL_EGamepadInputMode GamepadInputMode);
		void ExecuteUbergraph_OverviewScreen(int EntryPoint);
		void OverviewScreenStateChanged__DelegateSignature(OverviewScreenState_EOverviewScreenState NewState, OverviewScreenState_EOverviewScreenState PreviousState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
