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
	 * WidgetBlueprintGeneratedClass Loadout_Screen.Loadout_Screen_C
	 * Size -> 0x0258 (FullSize[0x0608] - InheritedSize[0x03B0])
	 */
	class ULoadout_Screen_C : public UTBLScreenWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeStat;                                                // 0x03B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBotBlackActionBar_C*                                BotBlackActionBar_112;                                   // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              CancelShuffleButton;                                     // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              CancelShuffleLockButton;                                 // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       ChangedWarningText;                                      // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ClassSelectBox;                                          // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      ClassSelectHorizontalBox;                                // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ClassSelectLockedOverlay;                                // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              CloseButton;                                             // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Content;                                                 // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        CustomLoadout;                                           // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGamepadSelectButton_C*                              GamepadSelectButton;                                     // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_125;                                               // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       LevelText;                                               // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadoutClassSelectionWidget_C*                      LoadoutClassSelectionWidget;                             // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadoutClassSelectionWidget_C*                      LoadoutClassSelectionWidget_C_2;                         // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadoutClassSelectionWidget_C*                      LoadoutClassSelectionWidget_C_3;                         // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadoutClassSelectionWidget_C*                      LoadoutClassSelectionWidget_C_4;                         // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadoutSelectionWidget_C*                           LoadoutSelectionWidget;                                  // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULoadoutSubclassInfo_C*                              LoadoutSubclassInfo;                                     // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LockedIcon;                                              // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LockedIcon_2;                                            // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LockedIcon_3;                                            // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       LockedTextBlock;                                         // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       LockedTextBlock_2;                                       // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       LockedTextBlock_3;                                       // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        LockedVerticalBox;                                       // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadiobutton_C*                                      RadioButton_232;                                         // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadiobutton_C*                                      RadioButton_376;                                         // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              RandomButton;                                            // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UResumeButton_C*                                     ResumeButton;                                            // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              ShuffleButton;                                           // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ShuffleLocked;                                           // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TeamColorGlow;                                           // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TeamIcon;                                                // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNavigationBotButton_C*                              TeamSelectButton;                                        // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Class_Selected;                                          // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              CurrentSubclassSelected;                                 // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      PawnClasses;                                             // 0x04F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FLoadout                                            SavedLoadout;                                            // 0x0500(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class UClass*                                              CurrentWeapon;                                           // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAlive;                                                 // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsLoadoutDifferent;                                      // 0x0541(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RV1U[0x6];                                   // 0x0542(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CurrentSpawnedSubclass;                                  // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ULoadoutClassButton_C*>                       Class_Buttons;                                           // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Loadout_confirmed;                                       // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		UMG_ESlateVisibility                                       SpecialSpawnWaveVisibility;                              // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J878[0x7];                                   // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAchievementMenuEntry_C*                             LastSelectedAchievement;                                 // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLoadoutSelectOpen;                                     // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1FF7[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ValidClassTypes[0x50];                                   // 0x0589(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       InitializedClassSelectBox;                               // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0QSM[0x3];                                   // 0x05E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CurrentGamepadIndex;                                     // 0x05E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bBinded;                                                 // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NJFH[0x7];                                   // 0x05E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULoadoutClassSelectionWidget_C*                      CurrentLoadoutClassSelection;                            // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ULoadoutSubclassButton_C*>                    LoadoutSubclassButtons;                                  // 0x05F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		class UWidget* K2_GetFocusWidget();
		void UpdateContentVisibility(UMG_ESlateVisibility InVisibility);
		void GetLoadoutSubclassButton(class UClass* Subclass, class ULoadoutSubclassButton_C** SubclassButton);
		void SelectNextSubclass(bool bIsNext);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ConstructLoadoutClassButtons();
		TArray<class UClass*> GetSpawnableClasses();
		void GetCurrentWeapon(class UClass* CurrentLoadoutItemClass, TArray<class UClass*>* WeaponGroup, class ATBLPlayerController* Controller, class UClass* Loadout, class UClass** CurrentWeaponClass);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void FindCurrentSubclass(class UClass** Subclass, bool* SaveLoadout);
		void GetWeaponSelection(class UClass* CharacterClass, int WeaponSlot, TArray<class UClass*>* WeaponList);
		void GetDefaultWeapon(TArray<class UClass*>* WeaponGroupArray, class UClass** Weapon);
		void GetCurrentLoadoutForClass(class UClass* CurrentClass, struct FLoadout* Loadout);
		void SaveLoadout(class UClass* Class);
		void PlayNewLoadoutAnimation();
		void NextSpawnWaveReplicated_Event_1(class ASpawnWave* SpawnWave);
		void OnOpenedScreen();
		void BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
		void SetAllowedClasses(class ASpawnWave* SpawnWave);
		void OnInitialized();
		void NewBaseClassSelected(class UClass* Class);
		void InitSpawnableClasses();
		void InitLoadout();
		void InitClassSelectBar();
		void InitUI();
		void InitLoadoutScreen();
		void CloseAndConfirmLoadout();
		void Spectate();
		void OpenTeamSelect();
		void PostYouWillRespawnAsNotification();
		void OnInputChanged(TBL_EGamepadInputMode GamepadInputMode);
		void NewSubclassSelected(class UClass* Subclass);
		void OnStateChanged(OverviewScreenState_EOverviewScreenState NewState, OverviewScreenState_EOverviewScreenState PreviousState);
		void Reset();
		void BindWidgets();
		void SubclassSelected(class UClass* Subclass, class ULoadoutClassSelectionWidget_C* LoadoutClassSelectionWidget, class ULoadoutSubclassButton_C* LoadoutClassButton, bool bIsLocked);
		void ItemClicked(TBL_EInventoryItemSlot Slot, class UClass* Item, class ULoadoutButton_C* LoadoutButton);
		void OnItemClicked(TBL_EInventoryItemSlot Slot, class UClass* InventoryItem);
		void PostShuffleModeMessage();
		void RandomClass();
		void ToggleShuffle();
		void BackToInGameMenu();
		void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature();
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void LockedSubclassSelected(class UClass* Subclass, bool bLevelLocked);
		void BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void UpdateShuffleButtons(bool bShuffle);
		void ExecuteUbergraph_Loadout_Screen(int EntryPoint);
		void Loadout_confirmed__DelegateSignature();
		void Class_Selected__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
