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
	 * BlueprintGeneratedClass BaseWeapon.BaseWeapon_C
	 * Size -> 0x00A0 (FullSize[0x1110] - InheritedSize[0x1070])
	 */
	class ABaseWeapon_C : public ABaseInventoryItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1070(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FsWeaponParticleSet                                 ParticleSet;                                             // 0x1078(0x0040) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		TArray<struct FsWeaponPerk>                                WeaponPerks;                                             // 0x10B8(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FsWeaponStatsAll                                    WeaponStats__UI_;                                        // 0x10C8(0x0024) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		PlayerSubClasses_EPlayerSubClasses                         WeaponPlayerSubClass;                                    // 0x10EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GJGR[0x3];                                   // 0x10ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraAnim*                                         EquipCameraAnim;                                         // 0x10F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VisualizationEnabled;                                    // 0x10F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UL2Y[0x3];                                   // 0x10F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Offset;                                                  // 0x10FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PrevLoc;                                                 // 0x1100(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PrevLength;                                              // 0x110C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnInitialize();
		void ExecuteUbergraph_BaseWeapon(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
