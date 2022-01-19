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
	 * BlueprintGeneratedClass ParryBreak.ParryBreak_C
	 * Size -> 0x0020 (FullSize[0x0190] - InheritedSize[0x0170])
	 */
	class UParryBreak_C : public UBaseCrowdControlState_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AInventoryItem*                                      ItemToEquip;                                             // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowDash;                                               // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowJab;                                                // 0x0181(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowCombos;                                             // 0x0182(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_56VT[0x1];                                   // 0x0183(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SoftRecoveryTime;                                        // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DashTime;                                                // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JabTime;                                                 // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanSwitchInventoryItems();
		void OnAssemble_ParryBreak();
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void ParryBreakStamina();
		void SoftRecovery();
		void DashOut();
		void TryStartAttack();
		void OnStartEquip(class AInventoryItem* Item);
		void PlayEquipTimer();
		void EventEndState(const class FName& NextState, bool bStartAttack);
		void JabOut();
		void ExecuteUbergraph_ParryBreak(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
