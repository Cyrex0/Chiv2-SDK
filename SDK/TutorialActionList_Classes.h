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
	 * WidgetBlueprintGeneratedClass TutorialActionList.TutorialActionList_C
	 * Size -> 0x001C (FullSize[0x0264] - InheritedSize[0x0248])
	 */
	class UTutorialActionList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTutorialActionEntry_C*                              TutorialActionEntry;                                     // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_680;                                         // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int                                                        NumActiveEntries;                                        // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetActionEntry(class UTutorialActionEntry_C** Action_Entry);
		void EntryFailed(const class FText& EntryText);
		void ResetEntries();
		void GetPercentTasksDone(float* ProgressPercent);
		void ClearEntries();
		void UpdateEntryCount(const class FString& EntryText, int NewCount);
		void AddEntry(const class FString& EntryText, const class FString& ControllerEntryText, const class FString& EntryKeyboardCallout, const class FString& EntryControllerCallout, const class FText& EntryDesc, int EntryCount);
		void Construct();
		void ExecuteUbergraph_TutorialActionList(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
