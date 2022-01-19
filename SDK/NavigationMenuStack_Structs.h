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
	 * ScriptStruct NavigationMenuStack.NavigationMenuStack
	 * Size -> 0x0030
	 */
	struct FNavigationMenuStack
	{
	public:
		class UObject*                                             CurrentMenu_24_6865E6324EF4FD5ACC71CCAD02C1B28D;         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Parent_25_D887C5C04D152E2683E12A9986FFBF86;              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     Menus_26_1B4C800C470F8E5D0D23FDB0B8E8778D;               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTBLScreenWidget*                                    Screen_32_29E0A33147B951B42AE63D8C1E55E70D;              // 0x0020(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             FrontendNavigationWidget_40_A3831EF04E70C54EA92DBFB14E5E93EB; // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
