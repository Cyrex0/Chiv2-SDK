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
	 * ScriptStruct sWeaponStatsAll.sWeaponStatsAll
	 * Size -> 0x0024
	 */
	struct FsWeaponStatsAll
	{
	public:
		struct FsWeaponStat                                        Damage_13_BBF675CD4BB8D44C68D6688C56EFF35B;              // 0x0000(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FsWeaponStat                                        Speed_17_6CEDF11049E0C5889669CE855008ED89;               // 0x000C(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FsWeaponStat                                        Reach_16_8AAA6687458087431E5C7A8C6737DA68;               // 0x0018(0x000C) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
