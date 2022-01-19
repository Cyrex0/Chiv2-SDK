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
	 * 		Name   -> PredefindFunction UACLStatsDumpCommandlet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UACLStatsDumpCommandlet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimBoneCompressionCodec_ACLBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimBoneCompressionCodec_ACL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACL");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimBoneCompressionCodec_ACLCustom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLCustom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimBoneCompressionCodec_ACLSafe.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimBoneCompressionCodec_ACLSafe::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimCurveCompressionCodec_ACL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCurveCompressionCodec_ACL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ACLPlugin.AnimCurveCompressionCodec_ACL");
		return ptr;
	}

}


