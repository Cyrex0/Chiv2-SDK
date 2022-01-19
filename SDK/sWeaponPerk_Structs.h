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
	 * ScriptStruct sWeaponPerk.sWeaponPerk
	 * Size -> 0x0038
	 */
	struct FsWeaponPerk
	{
	public:
		class UTexture2D*                                          PerkIcon_9_88EA648C41CB12EEF106248CC8AB147B;             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                PerkText_3_694B5DF24BB51B0B3929DEB7984102A6;             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                PerkSubText_8_7390F84947FE1A829E6BA1AF47C8DC35;          // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
