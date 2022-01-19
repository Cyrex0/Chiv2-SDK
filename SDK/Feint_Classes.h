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
	 * BlueprintGeneratedClass Feint.Feint_C
	 * Size -> 0x000A (FullSize[0x0172] - InheritedSize[0x0168])
	 */
	class UFeint_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       HoldCompleted;                                           // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DoHeavyAttack;                                           // 0x0171(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CanAttackBeHeavy(bool* Output);
		void CrosshairAborted(bool IsStateEnd);
		void CrosshairCompleted();
		void CrosshairInitiated();
		void CrosshairProgress();
		void OnAssemble_Feint();
		void EventEndAnimation();
		void StartHoldAttack();
		void StartHolding();
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void EventTick(float DeltaSeconds);
		void ExecuteUbergraph_Feint(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
