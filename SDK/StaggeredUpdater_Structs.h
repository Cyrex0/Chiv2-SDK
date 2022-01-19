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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum StaggeredUpdater.EStaggeredUpdateCategory
	 */
	enum class StaggeredUpdater_EStaggeredUpdateCategory : uint8_t
	{
		EStaggeredUpdateCategory__Widget              = 0,
		EStaggeredUpdateCategory__HUDWidget           = 1,
		EStaggeredUpdateCategory__CheapHUDWidget      = 2,
		EStaggeredUpdateCategory__HudContainerWidget  = 3,
		EStaggeredUpdateCategory__AkComponentLow      = 4,
		EStaggeredUpdateCategory__AkComponentNormal   = 5,
		EStaggeredUpdateCategory__AkComponentHigh     = 6,
		EStaggeredUpdateCategory__AkReflectorOrPortal = 7,
		EStaggeredUpdateCategory__UtilityAI           = 8,
		EStaggeredUpdateCategory__UtilityAIAbilities  = 9,
		EStaggeredUpdateCategory__MiscCosmetic        = 10,
		EStaggeredUpdateCategory__MAX                 = 11
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
