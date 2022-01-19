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
	 * BlueprintGeneratedClass HitSuccess.CombatStateBlueprint_0_C
	 * Size -> 0x000A (FullSize[0x0172] - InheritedSize[0x0168])
	 */
	class UCombatStateBlueprint_0_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CanCombo;                                                // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanSpecial;                                             // 0x0171(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnAssemble_CombatStateBlueprint_1();
		void EventEndAnimation();
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void SetCanCombo();
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void SetCanSpecial();
		void TryStartAttack();
		void AllowParry();
		void ExecuteUbergraph_CombatStateBlueprint_1(int EntryPoint);
		static UClass* StaticClass();
	};

	/**
	 * BlueprintGeneratedClass HitSuccess.HitSuccess_C
	 * Size -> 0x000A (FullSize[0x0172] - InheritedSize[0x0168])
	 */
	class UHitSuccess_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CanCombo;                                                // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCanSpecial;                                             // 0x0171(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnAssemble_CombatStateBlueprint_1();
		void EventEndAnimation();
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void SetCanCombo();
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void SetCanSpecial();
		void TryStartAttack();
		void AllowParry();
		void ExecuteUbergraph_HitSuccess(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
