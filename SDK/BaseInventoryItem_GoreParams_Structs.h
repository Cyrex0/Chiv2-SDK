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
	 * ScriptStruct BaseInventoryItem_GoreParams.BaseInventoryItem_GoreParams
	 * Size -> 0x0008
	 */
	struct FBaseInventoryItem_GoreParams
	{
	public:
		float                                                      RangedRagdollImpulse_2_31C05BA344025D457840FF92A6CE12F0; // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TBL_ELimbGoreAction                                        LimbGoreAction_7_F1A74B6A4B1D15C0AF31148AE8DF4DAB;       // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TBL_EHeadGoreAction                                        HeadGoreAction_8_C6FAF3DD47A267A897F9C181D5BB2815;       // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TBL_EHelmetRemovalPolicy                                   HelmetRemovalPolicy_11_2D766BBA4EF5F1A89DC80D9ADBC46D4A; // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3ZU[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
