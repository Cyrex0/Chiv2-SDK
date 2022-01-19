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
	 * ScriptStruct CrosshairDamageEvent.CrosshairDamageEvent
	 * Size -> 0x0028
	 */
	struct FCrosshairDamageEvent_FCrosshairDamageEvent
	{
	public:
		float                                                      TimeStarted_4_FB36D88245A3279F33877FB03677C46A;          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damage_2_6E32706741F8911725DDDAA4F3D3DDA4;               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DamageType_7_4029902849D09D6E36078DBFF69397D1;           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ActorName_10_42AFBBFF45E9A42BE7356189621F52F2;           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TBL_EFaction                                               Faction_13_7679FF4B496ABE9726CBBF9A967EB53C;             // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C2FE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
