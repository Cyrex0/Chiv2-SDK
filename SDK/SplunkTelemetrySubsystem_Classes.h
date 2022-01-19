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
	 * Class SplunkTelemetrySubsystem.TelemetrySource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTelemetrySource : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SplunkTelemetrySubsystem.BPTelemetrySource
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UBPTelemetrySource : public UTelemetrySource
	{
	public:
		unsigned char                                              UnknownData_RCUS[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetStringField(const class FString& Key, const class FString& Value);
		void SetNumberField(const class FString& Key, float Value);
		void Reset_BP();
		void OnTakeSample_BP();
		class FString GetKeyName();
		void GenerateReportJSON_BP();
		static UClass* StaticClass();
	};

	/**
	 * Class SplunkTelemetrySubsystem.MultiplayerTelemetrySource
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMultiplayerTelemetrySource : public UTelemetrySource
	{
	public:
		TArray<float>                                              PlayerCountSamples;                                      // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DWAI[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SplunkTelemetrySubsystem.RAMTelemetrySource
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class URAMTelemetrySource : public UTelemetrySource
	{
	public:
		TArray<float>                                              RAMSamples;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<float>                                              VirtRAMSamples;                                          // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SplunkTelemetrySubsystem.SplunkTelemetrySubsystem
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class USplunkTelemetrySubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_3K4D[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTelemetrySource*>                            TelemetrySources;                                        // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnWorldDestroy(class UWorld* World);
		void OnWorldCreation(class UWorld* World);
		static UClass* StaticClass();
	};

	/**
	 * Class SplunkTelemetrySubsystem.SplunkTelemetrySubsystemSettings
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class USplunkTelemetrySubsystemSettings : public UDeveloperSettings
	{
	public:
		class FString                                              SplunkURL;                                               // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SplunkToken;                                             // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      MapsToProfile;                                           // 0x0058(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SampleRate;                                              // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDQU[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      TelemetrySources;                                        // 0x0070(0x0010) Edit, ZeroConstructor, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SplunkTelemetrySubsystem.UnitTelemetrySource
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UUnitTelemetrySource : public UTelemetrySource
	{
	public:
		TArray<float>                                              CPUSamples;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<float>                                              GTSamples;                                               // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<float>                                              RTSamples;                                               // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<float>                                              GPUSamples;                                              // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
