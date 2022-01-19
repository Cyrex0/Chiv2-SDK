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
	 * BlueprintGeneratedClass I_TimesEnemyRecentlyBlockedMe.I_TimesEnemyRecentlyBlockedMe_C
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UI_TimesEnemyRecentlyBlockedMe_C : public UUtilityAI_InputAxis
	{
	public:
		float CalculateValue(const struct FUtilityAI_Context& C);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
