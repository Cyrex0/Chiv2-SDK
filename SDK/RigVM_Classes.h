﻿#pragma once

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
	 * Class RigVM.RigVM
	 * Size -> 0x0218 (FullSize[0x0240] - InheritedSize[0x0028])
	 */
	class URigVM : public UObject
	{
	public:
		struct FRigVMMemoryContainer                               WorkMemory;                                              // 0x0028(0x00A0) NativeAccessSpecifierPublic
		struct FRigVMMemoryContainer                               LiteralMemory;                                           // 0x00C8(0x00A0) NativeAccessSpecifierPublic
		struct FRigVMByteCode                                      ByteCode;                                                // 0x0168(0x0010) NativeAccessSpecifierPublic
		struct FRigVMInstructionArray                              Instructions;                                            // 0x0178(0x0010) Transient, NativeAccessSpecifierPrivate
		TArray<class FName>                                        FunctionNames;                                           // 0x0188(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MVWW[0x10];                                  // 0x0198(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigVMParameter>                             Parameters;                                              // 0x01A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, int>                                     ParametersNameMap;                                       // 0x01B8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E7JP[0x38];                                  // 0x0208(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetParameterValueVector2D(const class FName& InParameterName, const struct FVector2D& InValue, int InArrayIndex);
		void SetParameterValueVector(const class FName& InParameterName, const struct FVector& InValue, int InArrayIndex);
		void SetParameterValueTransform(const class FName& InParameterName, const struct FTransform& InValue, int InArrayIndex);
		void SetParameterValueString(const class FName& InParameterName, const class FString& InValue, int InArrayIndex);
		void SetParameterValueQuat(const class FName& InParameterName, const struct FQuat& InValue, int InArrayIndex);
		void SetParameterValueName(const class FName& InParameterName, const class FName& InValue, int InArrayIndex);
		void SetParameterValueInt(const class FName& InParameterName, int InValue, int InArrayIndex);
		void SetParameterValueFloat(const class FName& InParameterName, float InValue, int InArrayIndex);
		void SetParameterValueBool(const class FName& InParameterName, bool InValue, int InArrayIndex);
		class FString GetRigVMFunctionName(int InFunctionIndex);
		struct FVector2D GetParameterValueVector2D(const class FName& InParameterName, int InArrayIndex);
		struct FVector GetParameterValueVector(const class FName& InParameterName, int InArrayIndex);
		struct FTransform GetParameterValueTransform(const class FName& InParameterName, int InArrayIndex);
		class FString GetParameterValueString(const class FName& InParameterName, int InArrayIndex);
		struct FQuat GetParameterValueQuat(const class FName& InParameterName, int InArrayIndex);
		class FName GetParameterValueName(const class FName& InParameterName, int InArrayIndex);
		int GetParameterValueInt(const class FName& InParameterName, int InArrayIndex);
		float GetParameterValueFloat(const class FName& InParameterName, int InArrayIndex);
		bool GetParameterValueBool(const class FName& InParameterName, int InArrayIndex);
		int GetParameterArraySize(const class FName& InParameterName);
		bool Execute();
		int AddRigVMFunction(class UScriptStruct* InRigVMStruct, const class FName& InMethodName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
