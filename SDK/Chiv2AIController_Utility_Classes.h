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
	 * BlueprintGeneratedClass Chiv2AIController_Utility.Chiv2AIController_Utility_C
	 * Size -> 0x0008 (FullSize[0x0908] - InheritedSize[0x0900])
	 */
	class AChiv2AIController_Utility_C : public ATBLAICombatController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0900(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceivePossess(class APawn* PossessedPawn);
		void ExecuteUbergraph_Chiv2AIController_Utility(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
