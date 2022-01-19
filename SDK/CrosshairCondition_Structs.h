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
	 * ScriptStruct CrosshairCondition.CrosshairCondition
	 * Size -> 0x0030
	 */
	struct FCrosshairCondition
	{
	public:
		class FName                                                Tag_2_E0032FD24A019EA4896DE6B368612546;                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Keybinding_5_32B4C80842DB21DE408AFB914A869F69;           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HintText_8_9FA6245D4EC02E7778067198E7AEDA0B;             // 0x0018(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
