﻿#pragma once

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
	 * Enum MediaUtils.EMediaPlayerOptionBooleanOverride
	 */
	enum class MediaUtils_EMediaPlayerOptionBooleanOverride : uint8_t
	{
		EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting                 = 0,
		EMediaPlayerOptionBooleanOverride__Enabled                               = 1,
		EMediaPlayerOptionBooleanOverride__Disabled                              = 2,
		EMediaPlayerOptionBooleanOverride__EMediaPlayerOptionBooleanOverride_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MediaUtils.MediaPlayerTrackOptions
	 * Size -> 0x001C
	 */
	struct FMediaPlayerTrackOptions
	{
	public:
		int                                                        Audio;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Caption;                                                 // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MetaData;                                                // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Script;                                                  // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Subtitle;                                                // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Text;                                                    // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Video;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct MediaUtils.MediaPlayerOptions
	 * Size -> 0x0030
	 */
	struct FMediaPlayerOptions
	{
	public:
		struct FMediaPlayerTrackOptions                            Tracks;                                                  // 0x0000(0x001C) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1SX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           SeekTime;                                                // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MediaUtils_EMediaPlayerOptionBooleanOverride               PlayOnOpen;                                              // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		MediaUtils_EMediaPlayerOptionBooleanOverride               Loop;                                                    // 0x0029(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDKY[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
