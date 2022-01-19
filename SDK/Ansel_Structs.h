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
	 * Enum Ansel.EUIControlEffectTarget
	 */
	enum class Ansel_EUIControlEffectTarget : uint8_t
	{
		Bloom                      = 0,
		DepthOfField               = 1,
		ChromaticAberration        = 2,
		MotionBlur                 = 3,
		EUIControlEffectTarget_MAX = 4
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
