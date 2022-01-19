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
	 * BlueprintGeneratedClass KnockdownGround.KnockdownGround_C
	 * Size -> 0x000D (FullSize[0x017D] - InheritedSize[0x0170])
	 */
	class UKnockdownGround_C : public UBaseKnockdown_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MinimumTime;                                             // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanGetUp;                                                // 0x017C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void HitDirectionToGetUpDirection(class FName* Direction);
		bool OverrideCrowdControlEvent(TBL_ECrowdControlCombatState CombatState, TBL_ECrowdControlVariant Variant);
		void OnAssemble_KnockdownGround();
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void OnMovementInput(const class FName& Direction);
		void EventEndState(const class FName& NextState, bool bStartAttack);
		void MinimumTimeEnded();
		void OnJumpPressed();
		void ExecuteUbergraph_KnockdownGround(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
