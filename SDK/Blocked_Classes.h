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
	 * BlueprintGeneratedClass Blocked.Blocked_C
	 * Size -> 0x000B (FullSize[0x017B] - InheritedSize[0x0170])
	 */
	class UBlocked_C : public UBaseCrowdControlState_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsSoftRecovery;                                          // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowCombos;                                             // 0x0179(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowParries;                                            // 0x017A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		TBL_EAttackTransition GetAttackTransition();
		void OnAssemble_Blocked();
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void AllowCombo();
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void AllowParry();
		void SoftRecovery();
		void TryStartAttack();
		void ExecuteUbergraph_Blocked(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
