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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RuntimeAssetCache.VoidPtrParam
	 * Size -> 0x0010
	 */
	struct FVoidPtrParam
	{
	public:
		unsigned char                                              UnknownData_UTF8[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
