/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTelemetrySource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelemetrySource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SplunkTelemetrySubsystem.TelemetrySource");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BD4370
	 * 		Name   -> Function SplunkTelemetrySubsystem.BPTelemetrySource.SetStringField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPTelemetrySource::SetStringField(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplunkTelemetrySubsystem.BPTelemetrySource.SetStringField");
		
		UBPTelemetrySource_SetStringField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BD4240
	 * 		Name   -> Function SplunkTelemetrySubsystem.BPTelemetrySource.SetNumberField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPTelemetrySource::SetNumberField(const class FString& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplunkTelemetrySubsystem.BPTelemetrySource.SetNumberField");
		
		UBPTelemetrySource_SetNumberField_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SplunkTelemetrySubsystem.BPTelemetrySource.Reset_BP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPTelemetrySource::Reset_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplunkTelemetrySubsystem.BPTelemetrySource.Reset_BP");
		
		UBPTelemetrySource_Reset_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SplunkTelemetrySubsystem.BPTelemetrySource.OnTakeSample_BP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPTelemetrySource::OnTakeSample_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplunkTelemetrySubsystem.BPTelemetrySource.OnTakeSample_BP");
		
		UBPTelemetrySource_OnTakeSample_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SplunkTelemetrySubsystem.BPTelemetrySource.GetKeyName
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class FString UBPTelemetrySource::GetKeyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplunkTelemetrySubsystem.BPTelemetrySource.GetKeyName");
		
		UBPTelemetrySource_GetKeyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SplunkTelemetrySubsystem.BPTelemetrySource.GenerateReportJSON_BP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPTelemetrySource::GenerateReportJSON_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplunkTelemetrySubsystem.BPTelemetrySource.GenerateReportJSON_BP");
		
		UBPTelemetrySource_GenerateReportJSON_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPTelemetrySource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPTelemetrySource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SplunkTelemetrySubsystem.BPTelemetrySource");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMultiplayerTelemetrySource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiplayerTelemetrySource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SplunkTelemetrySubsystem.MultiplayerTelemetrySource");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URAMTelemetrySource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URAMTelemetrySource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SplunkTelemetrySubsystem.RAMTelemetrySource");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BD41C0
	 * 		Name   -> Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldDestroy
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplunkTelemetrySubsystem::OnWorldDestroy(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldDestroy");
		
		USplunkTelemetrySubsystem_OnWorldDestroy_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BD4140
	 * 		Name   -> Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldCreation
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USplunkTelemetrySubsystem::OnWorldCreation(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SplunkTelemetrySubsystem.SplunkTelemetrySubsystem.OnWorldCreation");
		
		USplunkTelemetrySubsystem_OnWorldCreation_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USplunkTelemetrySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplunkTelemetrySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SplunkTelemetrySubsystem.SplunkTelemetrySubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USplunkTelemetrySubsystemSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USplunkTelemetrySubsystemSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SplunkTelemetrySubsystem.SplunkTelemetrySubsystemSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUnitTelemetrySource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnitTelemetrySource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SplunkTelemetrySubsystem.UnitTelemetrySource");
		return ptr;
	}

}


