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
	 * BlueprintGeneratedClass Windup.Windup_C
	 * Size -> 0x0008 (FullSize[0x0170] - InheritedSize[0x0168])
	 */
	class UWindup_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		bool CanJump();
		float GetDrawStrengthModifier();
		bool CanBeCancelled(bool bIsCancelIntoParry);
		void OnAssemble_Windup();
		void EventEndAnimation();
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void ExecuteUbergraph_Windup(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
