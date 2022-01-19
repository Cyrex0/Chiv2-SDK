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
	 * WidgetBlueprintGeneratedClass GenericDialog.GenericDialog_C
	 * Size -> 0x01A2 (FullSize[0x05CA] - InheritedSize[0x0428])
	 */
	class UGenericDialog_C : public UTBLDialogWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    loadingAnim;                                             // 0x0430(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    outroAnim;                                               // 0x0438(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    introAnim;                                               // 0x0440(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class U169ScreenContainer_C*                               _169ScreenContainer;                                     // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadiobutton_C*                                      AcceptButton;                                            // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadiobutton_C*                                      DeclineButton;                                           // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       DescriptionTextBlock;                                    // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DialogBoxBackground;                                     // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              DialogBoxBorder;                                         // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoverHighlight;                                          // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0480(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x0488(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      One_buttonbox;                                           // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URadiobutton_C*                                      SingleButton;                                            // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_5;                                               // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAnimatableImage*                                    Throbber;                                                // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TitleHorizontalBox;                                      // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       TitleTextBlock;                                          // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleTextDivider;                                        // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleTextIcon;                                           // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TwoButtonBox;                                            // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Title;                                                   // 0x04D8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                Body;                                                    // 0x04F0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       Show_Working_Indicator;                                  // 0x0508(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_1KKF[0x7];                                   // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Cancel_Text;                                             // 0x0510(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Was_Already_Showing_Mouse_Cursor;                        // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9BQ7[0x3];                                   // 0x0529(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        InputNum;                                                // 0x052C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		UMG_ESlateVisibility                                       ShowQuitIcon;                                            // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_29NE[0x7];                                   // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonCallout                                      Accept_Callout;                                          // 0x0538(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonCallout                                      Decline_Callout;                                         // 0x0578(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Closed;                                                  // 0x05C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TBL_ESlateInputMode                                        Previous_Slate_Input_Mode;                               // 0x05C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnHoveredButton(class URadiobutton_C* Button, class UMaterial* FontMaterial, class UTexture2D* Icon);
		void InitButton(class URadiobutton_C* Button, const class FText& ButtonText, const struct FKey& ButtonCalloutKey, class UTexture2D* IconTexture);
		void CheckForFrontendHUD(bool* IsFrontend);
		void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_622_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_653_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void BndEvt__SingleButton_K2Node_ComponentBoundEvent_680_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
		void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature();
		void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature();
		void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature();
		void BndEvt__SingleButton_K2Node_ComponentBoundEvent_0_OnHovered__DelegateSignature();
		void BndEvt__SingleButton_K2Node_ComponentBoundEvent_1_OnUnhovered__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void OnEscapeRequested();
		void Press_Accept_or_Single_Button();
		void Press_Decline_Button();
		void ChangeText(const class FText& Title, const class FText& Body);
		void Construct();
		void OnOutroAnimationDone(bool bWasScreenClosed);
		void OnClosedScreen();
		void OnOpenedScreen();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_GenericDialog(int EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
