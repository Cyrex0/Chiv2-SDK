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
	 * WidgetBlueprintGeneratedClass InputHintsWidget.InputHintsWidget_C
	 * Size -> 0x0038 (FullSize[0x0280] - InheritedSize[0x0248])
	 */
	class UInputHintsWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        CombatConditionsList;                                    // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_1;                                       // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FCrosshairCondition>                         CrosshairConditions;                                     // 0x0260(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UCrosshairConditonText_C*>                    CrosshairConditionWidgets;                               // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash

	public:
		void FindCrosshairConditionWidget(const class FString& InActionName, bool* Found, class UCrosshairConditonText_C** Widget, int* Index);
		void FindCrosshairCondition(const class FName& Tag, bool* bFound, int* ArrayIndex);
		void UpdateCrosshairConditionWidgets();
		void InitCrosshairConditionWidgets();
		void EnableCombatConditions(const class FString& Keybinding, const class FName& Tag, const class FText& HintText, bool Enable, bool AddToTop);
		void ClearAllHints();
		void OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent);
		void Construct();
		void ExecuteUbergraph_InputHintsWidget(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
