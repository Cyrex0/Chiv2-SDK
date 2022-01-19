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
	 * ScriptStruct sSubclassPerk.sSubclassPerk
	 * Size -> 0x0028
	 */
	struct FsSubclassPerk
	{
	public:
		class FText                                                Perk_3_963D613E42C10758BA57A4A5D14DCA46;                 // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int                                                        Value_5_D2CA4A3F4F17EEFC90D5B6B031B374C8;                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9BAK[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon_8_88ACA56749376E7C0E9712BEC6DCE510;                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
