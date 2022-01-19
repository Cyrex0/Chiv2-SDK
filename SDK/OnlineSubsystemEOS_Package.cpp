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
	 * 		Name   -> PredefindFunction UEOSArtifactSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSArtifactSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.EOSArtifactSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEOSSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.EOSSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNetConnectionEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetConnectionEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.NetConnectionEOS");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNetDriverEOS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetDriverEOS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OnlineSubsystemEOS.NetDriverEOS");
		return ptr;
	}

}


