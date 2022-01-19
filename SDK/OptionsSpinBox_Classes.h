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
	 * WidgetBlueprintGeneratedClass OptionsSpinBox.OptionsSpinBox_C
	 * Size -> 0x0038 (FullSize[0x0280] - InheritedSize[0x0248])
	 */
	class UOptionsSpinBox_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEditableTextBox*                                    EditableTextBox_1;                                       // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                Text;                                                    // 0x0258(0x0018) Edit, BlueprintVisible
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0270(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_34_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, SlateCore_ETextCommit CommitMethod);
		void SetText(const class FText& InText);
		void ExecuteUbergraph_OptionsSpinBox(int EntryPoint);
		void OnTextCommitted__DelegateSignature(const class FText& Text);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
