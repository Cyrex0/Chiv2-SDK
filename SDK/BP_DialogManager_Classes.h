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
	 * WidgetBlueprintGeneratedClass BP_DialogManager.BP_DialogManager_C
	 * Size -> 0x0010 (FullSize[0x0460] - InheritedSize[0x0450])
	 */
	class UBP_DialogManager_C : public UTBLDialogManager
	{
	public:
		class UOverlay*                                            DialogOverlay;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OverrideDialog;                                          // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UTBLDialogWidget* OnCreateExitDialog(const class FText& Title, const class FText& Body);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		class UTBLDialogWidget* OnCreateCancelWorkingDialog(const class FText& Title, const class FText& Body);
		class UTBLDialogWidget* OnCreateNoButtonsWorkingDialog(const class FText& Title, const class FText& Body);
		class UTBLDialogWidget* OnCreateNoButtonsDialog(const class FText& Title, const class FText& Body);
		class UTBLDialogWidget* OnCreateOkCancelDialog(const class FText& Title, const class FText& Body);
		class UTBLDialogWidget* OnCreateOkDialog(const class FText& Title, const class FText& Body);
		class UTBLDialogWidget* OnCreateYesNoDialog(const class FText& Title, const class FText& Body);
		void PushDialog(class UTBLDialogWidget* Dialog, int DialogPriority);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
