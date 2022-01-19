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
	 * BlueprintGeneratedClass FrontendTBLPlayerController.FrontendTBLPlayerController_C
	 * Size -> 0x0008 (FullSize[0x1240] - InheritedSize[0x1238])
	 */
	class AFrontendTBLPlayerController_C : public ATBLPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1238(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		struct FTransform GetSpectatorPawnSpawnTransform();
		void ExecuteUbergraph_FrontendTBLPlayerController(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
