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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GameServerQueryPlugin.GameServerQueryHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameServerQueryHandler : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameServerQueryPlugin.GameServerA2SQueryHandler
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UGameServerA2SQueryHandler : public UGameServerQueryHandler
	{
	public:
		unsigned char                                              UnknownData_046L[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameServerQueryPlugin.GameServerQuery
	 * Size -> 0x0130 (FullSize[0x0388] - InheritedSize[0x0258])
	 */
	class AGameServerQuery : public AActor
	{
	public:
		unsigned char                                              UnknownData_C1P8[0x100];                                 // 0x0258(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              QueryIpAddress;                                          // 0x0358(0x0010) ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        QueryPort;                                               // 0x0368(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        PingPort;                                                // 0x036C(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        QueryThreadWaitTimeMilliseconds;                         // 0x0370(0x0004) ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E63R[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGameServerQueryHandler*>                     QueryHandlers;                                           // 0x0378(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
