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
	 * ScriptStruct sWeaponStat.sWeaponStat
	 * Size -> 0x000C
	 */
	struct FsWeaponStat
	{
	public:
		class FName                                                Stat_9_AC56F7704697E2C87FB05C98490886FB;                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		eWeaponStat_EeWeaponStat                                   Value_8_95AE888B43591B7DE5E9C5A0C97F8AEE;                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGZ6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
