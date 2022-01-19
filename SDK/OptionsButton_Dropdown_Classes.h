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
	 * WidgetBlueprintGeneratedClass OptionsButton_Dropdown.OptionsButton_Dropdown_C
	 * Size -> 0x0088 (FullSize[0x02D0] - InheritedSize[0x0248])
	 */
	class UOptionsButton_Dropdown_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ComboBoxBorder;                                          // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         MenuAnchor_1;                                            // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOptionsDropDownEntry_C*                             OptionsDropDownEntry;                                    // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDropDownComboBoxWidget_C*                           OptionsDropDownList;                                     // 0x0270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        Options__default_;                                       // 0x0278(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		int                                                        Selected_option_index__default_;                         // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AFOF[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Selected_option_changed;                                 // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              DropDownBoxClass;                                        // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            ComboBoxMID;                                             // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDropdownOpened;                                        // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDropdownClosed;                                        // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		class UWidget* OnGetMenuContent_1();
		void Construct();
		void BndEvt__OptionsDropDownEntry_K2Node_ComponentBoundEvent_94_OnClicked__DelegateSignature(class UStatefulButton_C* Button);
		void CloseDropDownList();
		void OpenDropDownList();
		void BndEvt__MenuAnchor_0_K2Node_ComponentBoundEvent_151_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
		void Clear_Options();
		void UpdateOptions(TArray<class FText> Options);
		void SetSelectedOption(int TextIndex);
		void OnSelectionChanged_Event_1(const class FText& Text, int Index);
		void GamepadClick();
		void On_Preview_Mouse_Button_Down(const struct FPointerEvent& MouseEvent);
		void OnInitialized();
		void ExecuteUbergraph_OptionsButton_Dropdown(int EntryPoint);
		void OnDropdownClosed__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown);
		void OnDropdownOpened__DelegateSignature(class UOptionsButton_Dropdown_C* Dropdown);
		void Selected_option_changed__DelegateSignature(int Index, const class FText& Option_text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
