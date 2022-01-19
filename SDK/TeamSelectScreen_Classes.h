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
	 * WidgetBlueprintGeneratedClass TeamSelectScreen.TeamSelectScreen_C
	 * Size -> 0x00E1 (FullSize[0x0491] - InheritedSize[0x03B0])
	 */
	class UTeamSelectScreen_C : public UTBLScreenWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      AgathaMasonSelect;                                       // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTeamSelectWidget_C*                                 AgathaSelect;                                            // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBotBlackActionBar_C*                                BotBlackActionBar;                                       // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              CloseButton;                                             // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            FFASelect;                                               // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTeamSelectWidget_C*                                 FFAWidget;                                               // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadSelectButton_C*                              GamepadSelectButton;                                     // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              LoadoutButton;                                           // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTeamSelectWidget_C*                                 MasonSelect;                                             // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResumeButton_C*                                     ResumeButton;                                            // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SpectatingOverlay;                                       // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              SpectatorButton;                                         // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       SpectatorCountTextBlock;                                 // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Spectators;                                              // 0x0420(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int                                                        AgathaPlayers;                                           // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1S4X[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SendToServerChatRequest;                                 // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             TeamChanged;                                             // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TBL_EFaction                                               PlayerFaction;                                           // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTutorialMode;                                         // 0x0461(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V78L[0x6];                                   // 0x0462(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TutorialTeamSelected;                                    // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             LoreVideoComplete;                                       // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UFactionVideoOverlay_C*                              FactionVideoOverlay;                                     // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TutorialTeamChosen;                                      // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		class UWidget* K2_GetFocusWidget();
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void TeamToSwitchTo(TBL_EFaction TeamToSwitchTo);
		void SendChatNotification(TBL_EFaction FactionToSwitchTo);
		void Init_Team_Select_Screen();
		bool IsInSpectatorMode();
		void Close_This_Screen();
		void Open_Loadout_Menu();
		void BndEvt__TeamSelectWidget_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__MasonSelect_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__FFAWidget_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__AgathaSelect_K2Node_ComponentBoundEvent_4_OnHighlightEvent__DelegateSignature();
		void BndEvt__MasonSelect_K2Node_ComponentBoundEvent_5_OnHighlightEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void OnAgathaUnhighlight();
		void OnMasonUnhighlight();
		void StartTimer();
		void TimerAction();
		void OpenLoadout();
		void Spectate();
		void OnInitialized();
		void OnAcknowledgedTeamRequest_Event_1(bool bSuccess, TBL_EFaction Faction);
		void OnGamepadChange(TBL_EGamepadInputMode GamepadInputMode);
		void Construct();
		void InterceptTutorialTeamSelect(TBL_EFaction Faction);
		void SetTutorialMode(bool bEnabled);
		void OnLoreVideoComplete();
		void GoToInGameMenu();
		void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void BndEvt__SpectatorButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature();
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void ExecuteUbergraph_TeamSelectScreen(int EntryPoint);
		void LoreVideoComplete__DelegateSignature();
		void TutorialTeamSelected__DelegateSignature(TBL_EFaction Faction);
		void TeamChanged__DelegateSignature();
		void SendToServerChatRequest__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
