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
	 * BlueprintGeneratedClass BowMeleeAttack.BowMeleeAttack_C
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UBowMeleeAttack_C : public UAssemblyInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0028(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnAssemble_BowMeleeAttack();
		void ExecuteUbergraph_BowMeleeAttack(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
