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
	 * BlueprintGeneratedClass Weapon_LanceMounted.Weapon_LanceMounted_C
	 * Size -> 0x0008 (FullSize[0x1130] - InheritedSize[0x1128])
	 */
	class AWeapon_LanceMounted_C : public AWeapon_Lance_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1128(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnMeleeSuccess(class ATBLCharacter* DamagedCharacter);
		void OnWasParried(class ATBLCharacter* ParryingCharacter);
		void ExecuteUbergraph_Weapon_LanceMounted(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
