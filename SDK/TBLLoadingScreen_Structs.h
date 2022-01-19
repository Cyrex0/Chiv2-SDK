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
	 * ScriptStruct TBLLoadingScreen.MapSpecificLoadingScreenConfigData
	 * Size -> 0x0068
	 */
	struct FMapSpecificLoadingScreenConfigData
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Texture;                                                 // 0x0010(0x0018) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHT4[0x40];                                  // 0x0028(0x0040) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct TBLLoadingScreen.MapSpecificStageEntries
	 * Size -> 0x0030
	 */
	struct FMapSpecificStageEntries
	{
	public:
		class FText                                                StageName;                                               // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                StageDescription;                                        // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
