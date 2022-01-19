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
	 * ScriptStruct PlayerPromptFormattedMessage.PlayerPromptFormattedMessage
	 * Size -> 0x0038
	 */
	struct FPlayerPromptFormattedMessage
	{
	public:
		class FText                                                MessageText_2_C5F8019C42FEF0D114F2138EF55390E1;          // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      DisplayTime_5_3FA073AB45BECE79687FF89DCD903548;          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AcceptActionBindingName_16_361EE65B46BA08B2B234EF90B853377F; // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RejectActionBindingName_15_FF1DB070490C7C18A5D423A30E4E473E; // 0x0024(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SendReplyOnAccept_19_ED5AA5BA436E12C1339DAAA05A15EB42;   // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NRI[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       PromptSound_11_40F68354431350C04FBF4C83D8588453;         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
