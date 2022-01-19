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
	 * BlueprintGeneratedClass BPF_Stats.BPF_Stats_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_Stats_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetMaxHealth(class AActor* Actor, class UObject* __WorldContext, float* Health);
		void STATIC_IsAlive(class AActor* Actor, class UObject* __WorldContext, bool* IsAlive);
		void STATIC_GetHealthPercent(class AActor* Actor, class UObject* __WorldContext, float* Percent);
		void STATIC_GetHealth(class AActor* Actor, class UObject* __WorldContext, float* Health);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
