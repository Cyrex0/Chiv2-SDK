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
	 * BlueprintGeneratedClass Use.Use_C
	 * Size -> 0x0009 (FullSize[0x0171] - InheritedSize[0x0168])
	 */
	class UUse_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       UseItemTriggered;                                        // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnAssemble_Use();
		void EventEndAnimation();
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void TriggerUseItem();
		void ExecuteUbergraph_Use(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
