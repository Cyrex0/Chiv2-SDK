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
	 * BlueprintGeneratedClass Carryable_Bandage.Carryable_Bandage_C
	 * Size -> 0x0038 (FullSize[0x1119] - InheritedSize[0x10E1])
	 */
	class ACarryable_Bandage_C : public ABaseCarryable_Offhand_C
	{
	public:
		unsigned char                                              UnknownData_9QUC[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Hint;                                                    // 0x10F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              LastOwner;                                               // 0x10F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Uses;                                                    // 0x1100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealAmount;                                              // 0x1104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealSpeed;                                               // 0x1108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SMWK[0x4];                                   // 0x110C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         HealCurve;                                               // 0x1110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EHealingSource                                         HealingSource;                                           // 0x1118(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SendHealAnalyticsEvent();
		bool CanUseItem();
		void OnUse(class AInventoryItem* Item);
		void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_BlockingHitSignature__DelegateSignature(const struct FHitResult& HitResult);
		void OnInitialize();
		void ExecuteUbergraph_Carryable_Bandage(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
