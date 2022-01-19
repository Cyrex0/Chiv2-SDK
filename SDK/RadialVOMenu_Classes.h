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
	 * WidgetBlueprintGeneratedClass RadialVOMenu.RadialVOMenu_C
	 * Size -> 0x0368 (FullSize[0x0718] - InheritedSize[0x03B0])
	 */
	class URadialVOMenu_C : public UTBLScreenWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeSliceIn;                                             // 0x03B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x03C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x03C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class URadialVOMenuCenterButton_C*                         BottomSelectButton;                                      // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CenterIcon;                                              // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Emote1Bind;                                              // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Emote1Overlay;                                           // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Emote2Bind;                                              // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Emote2Overlay;                                           // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Emote3Bind;                                              // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Emote3Overlay;                                           // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Emote4Bind;                                              // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Emote4Overlay;                                           // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadialVOMenuButton_C*                               Emote5;                                                  // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Emote5Bind;                                              // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Emote5Overlay;                                           // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Emote6Bind;                                              // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Emote6Overlay;                                           // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadialVOMenuButton_C*                               Emote7;                                                  // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Emote7Bind;                                              // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Emote7Overlay;                                           // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Emote8Bind;                                              // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Emote8Overlay;                                           // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FadeSlice;                                               // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RadialFade;                                              // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RotationImage;                                           // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            RotationOverlay;                                         // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              RotationRing;                                            // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_2;                                             // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_3;                                             // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_4;                                             // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_5;                                             // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_6;                                             // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_7;                                             // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_8;                                             // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_9;                                             // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FUIRadialEmoteStruct>                        RadialConfig;                                            // 0x04D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		struct FTimerHandle                                        CloseRadialVOTimerHandle;                                // 0x04E8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int                                                        StartingEmoteIndex;                                      // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NPML[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPersonalityEmoteTableRow>                   CurrentPersonalityEmotes;                                // 0x04F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                ToggleEmoteMenuName;                                     // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UOverlay*                                            HighlightedOverlay;                                      // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPersonalityEmoteTableRow>                   PersonalEmoteList;                                       // 0x0518(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FPersonalityEmoteTableRow>                   TacticalEmoteList;                                       // 0x0528(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FPersonalityEmoteTableRow>                   EmoteEmoteList;                                          // 0x0538(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FPersonalityEmoteTableRow>                   DownedEmoteList;                                         // 0x0548(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TBL_EAudioPersonalityType                                  EquippedPersonality;                                     // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		RadialVOMenuPageEnum_ERadialVOMenuPageEnum                 CurrentEmoteMenuPage;                                    // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PGFX[0x2];                                   // 0x055A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ReverseToggleEmoteMenuName;                              // 0x055C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsEmoteMenuOpen;                                         // 0x0564(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ED29[0x3];                                   // 0x0565(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ToggleEmoteMenuGamepadName;                              // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                ReverseToggleEmoteMenuGamepadName;                       // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                UseEmoteMenuEmoteName;                                   // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                CloseEmoteMenuName;                                      // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPersonalityEmoteTableRow>                   DukeEmoteList;                                           // 0x0588(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FPersonalityEmoteTableRow>                   PlayablePeasantList;                                     // 0x0598(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		class UTexture2D*                                          DefaultIconTexture;                                      // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_ERadialVOMenuPage                                      EmoteType;                                               // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OBT4[0x3];                                   // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      QuickUseTime;                                            // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        QuickUseTimerHandle;                                     // 0x05B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       ReverseNumberOrder;                                      // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C46I[0x7];                                   // 0x05C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int, int>                                             NumKeyMapping;                                           // 0x05C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<int, int>                                             NumKeyMapping_Reverse;                                   // 0x0618(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        CollapseRadialVoTimerHandle;                             // 0x0668(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      CollapseRadialVoTime;                                    // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2WXE[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              NumKeyTextBinds[0x50];                                   // 0x0674(0x0050) UNKNOWN PROPERTY: SetProperty
		RadialVOMenuPageEnum_ERadialVOMenuPageEnum                 LastPageSelection;                                       // 0x06C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SGKH[0x7];                                   // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        AutoHideLoopingTimer;                                    // 0x06D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SprintLockTimer;                                         // 0x06D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       ShouldBlockInput;                                        // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F6NG[0x7];                                   // 0x06E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPersonalityEmoteTableRow>                   MonkEmoteList;                                           // 0x06E8(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FPersonalityEmoteTableRow>                   DruidEmoteList;                                          // 0x06F8(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		TArray<struct FPersonalityEmoteTableRow>                   CarriedEmoteList;                                        // 0x0708(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void IsCharacterCarried(bool* Carried);
		void Update_Controller_Movement_Allowance(bool IngoreMovements);
		void TogglePage(RadialVOMenuPageEnum_ERadialVOMenuPageEnum Selection, RadialVOMenuPageEnum_ERadialVOMenuPageEnum* Output_Get);
		void UpdateNumKeyOrder(bool ForceDefaultOrder, bool SwapOrder);
		void OnNumDown(int Number);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void ResetUnusedButtons(int StartingIndex);
		void PopulateRadialButtons();
		bool ShouldOverrideIsFocusable();
		bool ShouldShowMouseCursorOnInputCapture();
		void SetOverlayColorAndOpacity(class UOverlay* Overlay, const struct FColor& Color, float Opacity, class UImage** EmoteImage);
		void BindActionInput(const class FName& ActionName, bool Consume, const class FScriptDelegate& Callback);
		void IsCharacterDowned(bool* Downed);
		void SetEquippedPersonality();
		void GetFirstHeldChicken(class AInventory_Chicken_C** Chicken);
		void GetCharacter(class ATBLCharacter** Character);
		void GetPersonalityEmotes(TArray<struct FPersonalityEmoteTableRow>* Output);
		void SetTextAndColor(const struct FUIRadialEmoteStruct& RadialEmote, const class FText& Text, bool IsDisabled);
		void UpdateRadialButtonText(RadialVOMenuPageEnum_ERadialVOMenuPageEnum NewPage);
		void ShowRadialMenu(RadialVOMenuPageEnum_ERadialVOMenuPageEnum VOMenuPage, const struct FKey& Key);
		void HideRadialMenu(bool SkipPlayingEmote);
		void SetupRadialImageStruct();
		void PlayEmote(int EmoteIndex);
		void PlayCurrentEmote();
		void OnToggleEmoteMenu();
		void BindToggleEmoteMenu();
		void UnbindTOggleEmoteMenu();
		void OpenAnimation();
		void CloseAnimation();
		void PreConstruct(bool IsDesignTime);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void GenerateEmoteLists();
		void OnReverToggleEmoteMenu();
		void OnPossessedPawn_Event_1(class APawn* NewPawn);
		void OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event);
		void HideRadialMenuNoEmote();
		void HideRadialEmotePlayEmote();
		void OnInitialized();
		void StartQuickUseTimer(bool IsGamepadKey);
		void Not_used();
		void Construct();
		void BindNumberKeys();
		void _1Key();
		void _2Key();
		void _3Key();
		void _4Key();
		void _5Key();
		void _6Key();
		void _7Key();
		void _8Key();
		void UnBindNumberKeys();
		void ProcessNumKey(int Index);
		void FadeAndCloseRadialVo_Internal();
		void CollapseRadialVO();
		void AutoHideTimerStarted();
		void CustomEvent_1();
		void InputModeChanged(TBL_EGamepadInputMode GamepadInputMode);
		void UnlockSprint();
		void OnFadeOutAnimationFinished();
		void ExecuteUbergraph_RadialVOMenu(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
