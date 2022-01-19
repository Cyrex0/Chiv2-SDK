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
	 * BlueprintGeneratedClass AC_FeintAttack.AC_FeintAttack_C
	 * Size -> 0x0088 (FullSize[0x00C8] - InheritedSize[0x0040])
	 */
	class UAC_FeintAttack_C : public UUtilityAI_Action
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        AttackList;                                              // 0x0048(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FTimerHandle                                        Timeout_handle;                                          // 0x0058(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              FeintList[0x50];                                         // 0x0060(0x0050) UNKNOWN PROPERTY: SetProperty
		class FName                                                Attack;                                                  // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FeintAttack;                                             // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATBLAICombatController*                              Controller;                                              // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PickFeintAttack(const class FName& Attack, class FName* Feint);
		void PerformAction(const struct FUtilityAI_Context& C);
		void Combat_State_Begin(class AActor* Actor, const class FName& State, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
		void Timeout();
		void CompleteAction(const struct FUtilityAI_Context& C);
		void OnFeintQueued();
		void ResetAction();
		void ExecuteUbergraph_AC_FeintAttack(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
