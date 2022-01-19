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
	 * BlueprintGeneratedClass Revive.Revive_C
	 * Size -> 0x0010 (FullSize[0x0178] - InheritedSize[0x0168])
	 */
	class URevive_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ATBLCharacter*                                       DownedCharacter;                                         // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_Revive();
		void EventEndAnimation();
		void StartRevive(class ATBLCharacter* DownedCharacter);
		void Revive();
		void EventEndState(const class FName& NextState, bool bStartAttack);
		void ExecuteUbergraph_Revive(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
