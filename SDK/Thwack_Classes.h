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
	 * BlueprintGeneratedClass Thwack.CombatStateBlueprint_0_C
	 * Size -> 0x0020 (FullSize[0x0188] - InheritedSize[0x0168])
	 */
	class UCombatStateBlueprint_0_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MinStateTimePercentage;                                  // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinComboTime;                                            // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinParryFromShoveTime;                                   // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinJabShoveSpecialTime;                                  // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinAttackFromShoveTime;                                  // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanAttack;                                               // 0x0184(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanParryFromShove;                                       // 0x0185(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanJabShoveSpecial;                                      // 0x0186(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanAttackFromShove;                                      // 0x0187(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetTimeToClearQueue(float* Time);
		TBL_EAttackTransition GetAttackTransition();
		void OnAssemble_CombatStateBlueprint_1();
		void EventEndAnimation();
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void EnableCombo();
		void TryStartAttack();
		void EnableParryFromShove();
		void EnableJabShoveSpecial();
		void EnableAttackFromShove();
		void AllowParry();
		void ExecuteUbergraph_CombatStateBlueprint_1(int EntryPoint);
		static UClass* StaticClass();
	};

	/**
	 * BlueprintGeneratedClass Thwack.Thwack_C
	 * Size -> 0x002E (FullSize[0x0196] - InheritedSize[0x0168])
	 */
	class UThwack_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MinStateTimePercentage;                                  // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinComboTime;                                            // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinComboAfterJabWasBlockedTime;                          // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinParryFromShoveTime;                                   // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinParryFromShoveAfterParryBreakTime;                    // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinJabShoveSpecialTime;                                  // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinAttackFromShoveTime;                                  // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinAttackFromShoveAfterParryBreakTime;                   // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanAttack;                                               // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanParryFromShove;                                       // 0x0191(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanJabShoveSpecial;                                      // 0x0192(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanAttackFromShove;                                      // 0x0193(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasJabBlocked;                                           // 0x0194(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanAttackAfterJabWasBlocked;                             // 0x0195(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetTimeToClearQueue(float* Time);
		TBL_EAttackTransition GetAttackTransition();
		void OnAssemble_CombatStateBlueprint_1();
		void EventEndAnimation();
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void EnableCombo();
		void TryStartAttack();
		void EnableParryFromShove();
		void EnableJabShoveSpecial();
		void EnableAttackFromShove();
		void AllowParry();
		void EventWasParried(class ATBLCharacter* ParryingCharacter);
		void EnableComboAfterJabWasBlocked();
		void ExecuteUbergraph_Thwack(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
