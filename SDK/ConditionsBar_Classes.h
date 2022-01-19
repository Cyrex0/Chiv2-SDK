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
	 * WidgetBlueprintGeneratedClass ConditionsBar.ConditionsBar_C
	 * Size -> 0x00A8 (FullSize[0x02F0] - InheritedSize[0x0248])
	 */
	class UConditionsBar_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UConditionsBarEntry_C*                               Condition1;                                              // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UConditionsBarEntry_C*                               Condition2;                                              // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UConditionsBarEntry_C*                               Condition3;                                              // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UConditionsBarEntry_C*                               Condition4;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UConditionsBarEntry_C*                               Condition5;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UConditionsBarEntry_C*                               Condition6;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UConditionsBarEntry_C*                               Condition7;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<TBL_EConditionType, class UConditionsBarEntry_C*>     ConditionList;                                           // 0x0288(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       HasActiveCondition;                                      // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JFLC[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             IsShowingCondition;                                      // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetFreeConditionsWidget(bool* Success, class UConditionsBarEntry_C** Widget);
		void RemoveCondition(TBL_EConditionType RemovedCondition);
		void AddCondition(TBL_EConditionType NewCondition);
		void GetConditionWidgets(TArray<class UConditionsBarEntry_C*>* Array);
		void ClearConditionsBar();
		void Construct();
		void OnApplyCondition_Event_1(class AActor* Actor, TBL_EConditionType Condition);
		void OnRemoveCondition_Event_1(class AActor* Actor, TBL_EConditionType Condition);
		void OnPossessedPawn_Event_1(class APawn* NewPawn);
		void OnClientPossessedPawn_Event_1(class APawn* NewPawn);
		void BindOnUpdatedEvents(class UConditionsComponent* Comp);
		void ExecuteUbergraph_ConditionsBar(int EntryPoint);
		void IsShowingCondition__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
