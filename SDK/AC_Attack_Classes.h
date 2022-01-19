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
	 * BlueprintGeneratedClass AC_Attack.AC_Attack_C
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAC_Attack_C : public UUtilityAI_Action
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FCombatAiAttackParams                               Attack_Params;                                           // 0x0048(0x0018) Edit, BlueprintVisible
		struct FTimerHandle                                        Timeout_handle;                                          // 0x0060(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void PerformAction(const struct FUtilityAI_Context& C);
		void Combat_State_Begin(class AActor* Actor, const class FName& State, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
		void Timeout();
		void CompleteAction(const struct FUtilityAI_Context& C);
		void ExecuteUbergraph_AC_Attack(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
