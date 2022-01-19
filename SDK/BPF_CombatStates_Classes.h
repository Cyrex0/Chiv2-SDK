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
	 * BlueprintGeneratedClass BPF_CombatStates.BPF_CombatStates_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_CombatStates_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_IsUsingCrossbow(class AActor* Actor, class UObject* __WorldContext, bool* _);
		bool STATIC_IsCrowdControlState(const class FName& State, class UObject* __WorldContext);
		void STATIC_DoesAttackContainName(class UObject* Object, const class FString& Substring, class UObject* __WorldContext, bool* _);
		void STATIC_IsUninterruptableInRelease(class UAttackType* Attack_Type, class UObject* __WorldContext, bool* _);
		void STATIC_HorseInterpCategory(HorseInterpCategory_EHorseInterpCategory _, class UObject* __WorldContext, float* __);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
