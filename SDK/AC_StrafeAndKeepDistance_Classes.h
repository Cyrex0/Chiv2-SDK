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
	 * BlueprintGeneratedClass AC_StrafeAndKeepDistance.AC_StrafeAndKeepDistance_C
	 * Size -> 0x000A (FullSize[0x004A] - InheritedSize[0x0040])
	 */
	class UAC_StrafeAndKeepDistance_C : public UUtilityAI_Action
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TBL_EAiCombatDistance                                      Distance;                                                // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EAiCombatStrafing                                      Strafing;                                                // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PerformAction(const struct FUtilityAI_Context& C);
		void ExecuteUbergraph_AC_StrafeAndKeepDistance(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
