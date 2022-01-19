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
	 * BlueprintGeneratedClass Sprint.Sprint_C
	 * Size -> 0x000B (FullSize[0x0173] - InheritedSize[0x0168])
	 */
	class USprint_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       CanSprintAttack;                                         // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanSprintShove;                                          // 0x0171(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanFullSprint;                                           // 0x0172(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EnableFullSprintCrosshair(bool Enable);
		void EnableSprintShoveCrosshair(bool Enable);
		void EnableSprintCrosshair(bool Enable);
		void EnableSprintAttackCrosshair(bool Enable);
		void OnAssemble_Sprint();
		void EventTick(float DeltaSeconds);
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void EventEndState(const class FName& NextState, bool bStartAttack);
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void ExecuteUbergraph_Sprint(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
