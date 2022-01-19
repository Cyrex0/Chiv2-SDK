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
	 * ScriptStruct WidgetHudTypePair.WidgetHudTypePair
	 * Size -> 0x0010
	 */
	struct FWidgetHudTypePair
	{
	public:
		class UClass*                                              Widget_7_DD1D4F9448E6118F22ACD1A92B1271AD;               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		HUDComponentType_EHUDComponentType                         HUDType_6_875957214BBFD37B286B528C45569E9E;              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PG7P[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
