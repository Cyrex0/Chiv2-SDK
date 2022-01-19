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
	 * BlueprintGeneratedClass CarryableFoodComp.CarryableFoodComp_C
	 * Size -> 0x001A (FullSize[0x0122] - InheritedSize[0x0108])
	 */
	class UCarryableFoodComp_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AInventoryItem*                                      OwningItem;                                              // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealAmount;                                              // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HealSpeed;                                               // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ConsumeItemOnUse;                                        // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TBL_EHealingSource                                         HealingSource;                                           // 0x0121(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SendHealAnalyticsEvents();
		void ReceiveBeginPlay();
		void OnBattleCryTriggered_Event_1();
		void OnAnimNotifyWeaponDetach_Event_1(class UTBLCharacterAnimInstance* AnimBP);
		void ExecuteUbergraph_CarryableFoodComp(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
