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
	 * BlueprintGeneratedClass Weapon_DaneAxe.Weapon_DaneAxe_C
	 * Size -> 0x0008 (FullSize[0x1130] - InheritedSize[0x1128])
	 */
	class AWeapon_DaneAxe_C : public AWeapon_BaseTwoHanded_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1128(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnInitialize();
		void ExecuteUbergraph_Weapon_DaneAxe(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
