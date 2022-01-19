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
	 * BlueprintGeneratedClass Carryable_Character.Carryable_Character_C
	 * Size -> 0x0017 (FullSize[0x10F8] - InheritedSize[0x10E1])
	 */
	class ACarryable_Character_C : public ABaseCarryable_2hLoot_C
	{
	public:
		unsigned char                                              UnknownData_JHGA[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class ATBLCharacter*                                       Character;                                               // 0x10F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool CanPickup(class APawn* Pawn);
		void OnInitialize();
		void ExecuteUbergraph_Carryable_Character(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
