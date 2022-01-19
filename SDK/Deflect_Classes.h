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
	 * BlueprintGeneratedClass Deflect.Deflect_C
	 * Size -> 0x000B (FullSize[0x017B] - InheritedSize[0x0170])
	 */
	class UDeflect_C : public UBaseCrowdControlState_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ISEarlyout;                                              // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowDashJab;                                            // 0x0179(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowParries;                                            // 0x017A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnAssemble_Deflect();
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void EarlyOut();
		void DashJabOut();
		void AllowParry();
		void TryStartAttack();
		void ExecuteUbergraph_Deflect(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
