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
	 * ScriptStruct AnalyticsCore.AnalyticsEvent
	 * Size -> 0x0018
	 */
	struct FAnalyticsEvent
	{
	public:
		struct FDateTime                                           EventTime;                                               // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BuildCL;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Random;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLogged;                                                 // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VYW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnalyticsCore.AnalyticsEvent_Client
	 * Size -> 0x0010 (FullSize[0x0028] - InheritedSize[0x0018])
	 */
	struct FAnalyticsEvent_Client : public FAnalyticsEvent
	{
	public:
		class FString                                              NetId;                                                   // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnalyticsCore.TimeUUID
	 * Size -> 0x0008
	 */
	struct FTimeUUID
	{
	public:
		unsigned char                                              UnknownData_EEIH[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct AnalyticsCore.NetAnalyticsEventAttribute
	 * Size -> 0x0020
	 */
	struct FNetAnalyticsEventAttribute
	{
	public:
		class FString                                              AttrName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AttrValue;                                               // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct AnalyticsCore.EmbeddedProperty
	 * Size -> 0x0060
	 */
	struct FEmbeddedProperty
	{
	public:
		unsigned char                                              Property[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: FieldPathProperty
		class FString                                              EmbeddedName;                                            // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmbeddedQualifiedName;                                   // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EmbeddedPropertyOffset;                                  // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QD63[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              EmbeddedPropertyChain[0x10];                             // 0x004C(0x0010) UNKNOWN PROPERTY: ArrayProperty

	};

	/**
	 * ScriptStruct AnalyticsCore.AnalyticsEventType
	 * Size -> 0x0038
	 */
	struct FAnalyticsEventType
	{
	public:
		unsigned char                                              UnknownData_TD9L[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
