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
	 * Enum ImGui.EImGuiDPIScaleMethod
	 */
	enum class ImGui_EImGuiDPIScaleMethod : uint8_t
	{
		EImGuiDPIScaleMethod__ImGui                    = 0,
		EImGuiDPIScaleMethod__Slate                    = 1,
		EImGuiDPIScaleMethod__EImGuiDPIScaleMethod_MAX = 2
	};

	/**
	 * Enum ImGui.EImGuiCanvasSizeType
	 */
	enum class ImGui_EImGuiCanvasSizeType : uint8_t
	{
		EImGuiCanvasSizeType__Custom                   = 0,
		EImGuiCanvasSizeType__Desktop                  = 1,
		EImGuiCanvasSizeType__Viewport                 = 2,
		EImGuiCanvasSizeType__EImGuiCanvasSizeType_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ImGui.ImGuiKeyInfo
	 * Size -> 0x0020
	 */
	struct FImGuiKeyInfo
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SlateCore_ECheckBoxState                                   Shift;                                                   // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SlateCore_ECheckBoxState                                   Ctrl;                                                    // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SlateCore_ECheckBoxState                                   Alt;                                                     // 0x001A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		SlateCore_ECheckBoxState                                   Cmd;                                                     // 0x001B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MQN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ImGui.ImGuiCanvasSizeInfo
	 * Size -> 0x0010
	 */
	struct FImGuiCanvasSizeInfo
	{
	public:
		ImGui_EImGuiCanvasSizeType                                 SizeType;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFLE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        Width;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Height;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExtendToViewport;                                       // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9T9V[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ImGui.ImGuiDPIScaleInfo
	 * Size -> 0x0098
	 */
	struct FImGuiDPIScaleInfo
	{
	public:
		ImGui_EImGuiDPIScaleMethod                                 ScalingMethod;                                           // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LX4E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRuntimeFloatCurve                                  DPICurve;                                                // 0x0008(0x0088) Edit, Config, Protected, NativeAccessSpecifierProtected
		bool                                                       bScaleWithCurve;                                         // 0x0090(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J6ZT[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
