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
	 * Class ImGui.ImGuiInputHandler
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UImGuiInputHandler : public UObject
	{
	public:
		unsigned char                                              UnknownData_YPS4[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ImGui.ImGuiSettings
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UImGuiSettings : public UObject
	{
	public:
		struct FSoftClassPath                                      ImGuiInputHandlerClass;                                  // 0x0028(0x0018) Edit, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShareKeyboardInput;                                     // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShareGamepadInput;                                      // 0x0041(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bShareMouseInput;                                        // 0x0042(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseSoftwareCursor;                                      // 0x0043(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D2T0[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FImGuiKeyInfo                                       ToggleInput;                                             // 0x0048(0x0020) Edit, Config, Protected, NativeAccessSpecifierProtected
		struct FImGuiCanvasSizeInfo                                CanvasSize;                                              // 0x0068(0x0010) Edit, Config, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FImGuiDPIScaleInfo                                  DPIScale;                                                // 0x0078(0x0098) Edit, Config, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
