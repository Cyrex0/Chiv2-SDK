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
	 * BlueprintGeneratedClass Carryable_Trumpet.Carryable_Trumpet_C
	 * Size -> 0x000F (FullSize[0x10F0] - InheritedSize[0x10E1])
	 */
	class ACarryable_Trumpet_C : public ABaseCarryable_Offhand_C
	{
	public:
		unsigned char                                              UnknownData_6P7E[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnInitialize();
		void OnUse(class AInventoryItem* Item);
		void ExecuteUbergraph_Carryable_Trumpet(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
