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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RigVM.ERigVMParameterType
	 */
	enum class RigVM_ERigVMParameterType : uint8_t
	{
		ERigVMParameterType__Input                   = 0,
		ERigVMParameterType__Output                  = 1,
		ERigVMParameterType__Invalid                 = 2,
		ERigVMParameterType__ERigVMParameterType_MAX = 3
	};

	/**
	 * Enum RigVM.ERigVMOpCode
	 */
	enum class RigVM_ERigVMOpCode : uint8_t
	{
		ERigVMOpCode__Execute_0_Operands  = 0,
		ERigVMOpCode__Execute_1_Operands  = 1,
		ERigVMOpCode__Execute_2_Operands  = 2,
		ERigVMOpCode__Execute_3_Operands  = 3,
		ERigVMOpCode__Execute_4_Operands  = 4,
		ERigVMOpCode__Execute_5_Operands  = 5,
		ERigVMOpCode__Execute_6_Operands  = 6,
		ERigVMOpCode__Execute_7_Operands  = 7,
		ERigVMOpCode__Execute_8_Operands  = 8,
		ERigVMOpCode__Execute_9_Operands  = 9,
		ERigVMOpCode__Execute_10_Operands = 10,
		ERigVMOpCode__Execute_11_Operands = 11,
		ERigVMOpCode__Execute_12_Operands = 12,
		ERigVMOpCode__Execute_13_Operands = 13,
		ERigVMOpCode__Execute_14_Operands = 14,
		ERigVMOpCode__Execute_15_Operands = 15,
		ERigVMOpCode__Execute_16_Operands = 16,
		ERigVMOpCode__Execute_17_Operands = 17,
		ERigVMOpCode__Execute_18_Operands = 18,
		ERigVMOpCode__Execute_19_Operands = 19,
		ERigVMOpCode__Execute_20_Operands = 20,
		ERigVMOpCode__Execute_21_Operands = 21,
		ERigVMOpCode__Execute_22_Operands = 22,
		ERigVMOpCode__Execute_23_Operands = 23,
		ERigVMOpCode__Execute_24_Operands = 24,
		ERigVMOpCode__Execute_25_Operands = 25,
		ERigVMOpCode__Execute_26_Operands = 26,
		ERigVMOpCode__Execute_27_Operands = 27,
		ERigVMOpCode__Execute_28_Operands = 28,
		ERigVMOpCode__Execute_29_Operands = 29,
		ERigVMOpCode__Execute_30_Operands = 30,
		ERigVMOpCode__Execute_31_Operands = 31,
		ERigVMOpCode__Execute_32_Operands = 32,
		ERigVMOpCode__Execute_33_Operands = 33,
		ERigVMOpCode__Execute_34_Operands = 34,
		ERigVMOpCode__Execute_35_Operands = 35,
		ERigVMOpCode__Execute_36_Operands = 36,
		ERigVMOpCode__Execute_37_Operands = 37,
		ERigVMOpCode__Execute_38_Operands = 38,
		ERigVMOpCode__Execute_39_Operands = 39,
		ERigVMOpCode__Execute_40_Operands = 40,
		ERigVMOpCode__Execute_41_Operands = 41,
		ERigVMOpCode__Execute_42_Operands = 42,
		ERigVMOpCode__Execute_43_Operands = 43,
		ERigVMOpCode__Execute_44_Operands = 44,
		ERigVMOpCode__Execute_45_Operands = 45,
		ERigVMOpCode__Execute_46_Operands = 46,
		ERigVMOpCode__Execute_47_Operands = 47,
		ERigVMOpCode__Execute_48_Operands = 48,
		ERigVMOpCode__Execute_49_Operands = 49,
		ERigVMOpCode__Execute_50_Operands = 50,
		ERigVMOpCode__Execute_51_Operands = 51,
		ERigVMOpCode__Execute_52_Operands = 52,
		ERigVMOpCode__Execute_53_Operands = 53,
		ERigVMOpCode__Execute_54_Operands = 54,
		ERigVMOpCode__Execute_55_Operands = 55,
		ERigVMOpCode__Execute_56_Operands = 56,
		ERigVMOpCode__Execute_57_Operands = 57,
		ERigVMOpCode__Execute_58_Operands = 58,
		ERigVMOpCode__Execute_59_Operands = 59,
		ERigVMOpCode__Execute_60_Operands = 60,
		ERigVMOpCode__Execute_61_Operands = 61,
		ERigVMOpCode__Execute_62_Operands = 62,
		ERigVMOpCode__Execute_63_Operands = 63,
		ERigVMOpCode__Execute_64_Operands = 64,
		ERigVMOpCode__Zero                = 65,
		ERigVMOpCode__BoolFalse           = 66,
		ERigVMOpCode__BoolTrue            = 67,
		ERigVMOpCode__Copy                = 68,
		ERigVMOpCode__Increment           = 69,
		ERigVMOpCode__Decrement           = 70,
		ERigVMOpCode__Equals              = 71,
		ERigVMOpCode__NotEquals           = 72,
		ERigVMOpCode__JumpAbsolute        = 73,
		ERigVMOpCode__JumpForward         = 74,
		ERigVMOpCode__JumpBackward        = 75,
		ERigVMOpCode__JumpAbsoluteIf      = 76,
		ERigVMOpCode__JumpForwardIf       = 77,
		ERigVMOpCode__JumpBackwardIf      = 78,
		ERigVMOpCode__ChangeType          = 79,
		ERigVMOpCode__Exit                = 80,
		ERigVMOpCode__Invalid             = 81,
		ERigVMOpCode__ERigVMOpCode_MAX    = 82
	};

	/**
	 * Enum RigVM.ERigVMRegisterType
	 */
	enum class RigVM_ERigVMRegisterType : uint8_t
	{
		ERigVMRegisterType__Plain                  = 0,
		ERigVMRegisterType__String                 = 1,
		ERigVMRegisterType__Name                   = 2,
		ERigVMRegisterType__Struct                 = 3,
		ERigVMRegisterType__Invalid                = 4,
		ERigVMRegisterType__ERigVMRegisterType_MAX = 5
	};

	/**
	 * Enum RigVM.ERigVMMemoryType
	 */
	enum class RigVM_ERigVMMemoryType : uint8_t
	{
		ERigVMMemoryType__Work                 = 0,
		ERigVMMemoryType__Literal              = 1,
		ERigVMMemoryType__Invalid              = 2,
		ERigVMMemoryType__ERigVMMemoryType_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RigVM.RigVMRegister
	 * Size -> 0x0024
	 */
	struct FRigVMRegister
	{
	public:
		RigVM_ERigVMRegisterType                                   Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTB9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ByteIndex;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ElementSize;                                             // 0x0008(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   ElementCount;                                            // 0x000A(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   SliceIndex;                                              // 0x000C(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   SliceCount;                                              // 0x000E(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AlignmentBytes;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7YL[0x1];                                   // 0x0011(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   TrailingBytes;                                           // 0x0012(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Name;                                                    // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ScriptStructIndex;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsArray;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Q0I[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct RigVM.RigVMRegisterOffset
	 * Size -> 0x0038
	 */
	struct FRigVMRegisterOffset
	{
	public:
		TArray<int>                                                Segments;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		RigVM_ERigVMRegisterType                                   Type;                                                    // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WZV2[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CPPType;                                                 // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_45MQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptStruct*                                       ScriptStruct;                                            // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ScriptStructPath;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   ElementSize;                                             // 0x0030(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AR0X[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct RigVM.RigVMByteCode
	 * Size -> 0x0010
	 */
	struct FRigVMByteCode
	{
	public:
		TArray<unsigned char>                                      ByteCode;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct RigVM.RigVMInstruction
	 * Size -> 0x0010
	 */
	struct FRigVMInstruction
	{
	public:
		RigVM_ERigVMOpCode                                         OpCode;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MAZV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   ByteCodeIndex;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct RigVM.RigVMParameter
	 * Size -> 0x0030
	 */
	struct FRigVMParameter
	{
	public:
		RigVM_ERigVMParameterType                                  Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_58H2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        RegisterIndex;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              CPPType;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScriptStruct*                                       ScriptStruct;                                            // 0x0020(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ScriptStructPath;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct RigVM.RigVMInstructionArray
	 * Size -> 0x0010
	 */
	struct FRigVMInstructionArray
	{
	public:
		TArray<struct FRigVMInstruction>                           Instructions;                                            // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct RigVM.RigVMMemoryContainer
	 * Size -> 0x00A0
	 */
	struct FRigVMMemoryContainer
	{
	public:
		bool                                                       bUseNameMap;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		RigVM_ERigVMMemoryType                                     MemoryType;                                              // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T0M4[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigVMRegister>                              Registers;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FRigVMRegisterOffset>                        RegisterOffsets;                                         // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      Data;                                                    // 0x0028(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UScriptStruct*>                               ScriptStructs;                                           // 0x0038(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, int>                                     NameMap;                                                 // 0x0048(0x0050) Transient, NativeAccessSpecifierPrivate
		bool                                                       bEncounteredErrorDuringLoad;                             // 0x0098(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3FMD[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct RigVM.RigVMExecuteContext
	 * Size -> 0x0010
	 */
	struct FRigVMExecuteContext
	{
	public:
		unsigned char                                              UnknownData_N094[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct RigVM.RigVMStruct
	 * Size -> 0x0008
	 */
	struct FRigVMStruct
	{
	public:
		unsigned char                                              UnknownData_MXK4[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct RigVM.RigVMOperand
	 * Size -> 0x0006
	 */
	struct FRigVMOperand
	{
	public:
		RigVM_ERigVMMemoryType                                     MemoryType;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BLPX[0x1];                                   // 0x0001(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint16_t                                                   RegisterIndex;                                           // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   RegisterOffset;                                          // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct RigVM.RigVMMemoryStatistics
	 * Size -> 0x000C
	 */
	struct FRigVMMemoryStatistics
	{
	public:
		uint32_t                                                   RegisterCount;                                           // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DataBytes;                                               // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalBytes;                                              // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct RigVM.RigVMByteCodeStatistics
	 * Size -> 0x0008
	 */
	struct FRigVMByteCodeStatistics
	{
	public:
		uint32_t                                                   InstructionCount;                                        // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DataBytes;                                               // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct RigVM.RigVMStatistics
	 * Size -> 0x002C
	 */
	struct FRigVMStatistics
	{
	public:
		uint32_t                                                   BytesForCDO;                                             // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   BytesPerInstance;                                        // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigVMMemoryStatistics                              LiteralMemory;                                           // 0x0008(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigVMMemoryStatistics                              WorkMemory;                                              // 0x0014(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		uint32_t                                                   BytesForCaching;                                         // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigVMByteCodeStatistics                            ByteCode;                                                // 0x0024(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
