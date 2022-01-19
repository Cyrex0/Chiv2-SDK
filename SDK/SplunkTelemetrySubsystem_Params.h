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
	 * Function SplunkTelemetrySubsystem.BPTelemetrySource.SetStringField
	 */
	struct UBPTelemetrySource_SetStringField_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SplunkTelemetrySubsystem.BPTelemetrySource.SetNumberField
	 */
	struct UBPTelemetrySource_SetNumberField_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SplunkTelemetrySubsystem.BPTelemetrySource.Reset_BP
	 */
	struct UBPTelemetrySource_Reset_BP_Params
	{
	};

	/**
	 * Function SplunkTelemetrySubsystem.BPTelemetrySource.OnTakeSample_BP
	 */
	struct UBPTelemetrySource_OnTakeSample_BP_Params
	{
	};

	/**
	 * Function SplunkTelemetrySubsystem.BPTelemetrySource.GetKeyName
	 */
	struct UBPTelemetrySource_GetKeyName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SplunkTelemetrySubsystem.BPTelemetrySource.GenerateReportJSON_BP
	 */
	struct UBPTelemetrySource_GenerateReportJSON_BP_Params
	{
	};

	/**
	 * Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldDestroy
	 */
	struct USplunkTelemetrySubsystem_OnWorldDestroy_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldCreation
	 */
	struct USplunkTelemetrySubsystem_OnWorldCreation_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
