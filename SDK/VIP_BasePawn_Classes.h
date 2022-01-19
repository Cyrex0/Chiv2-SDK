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
	 * BlueprintGeneratedClass VIP_BasePawn.VIP_BasePawn_C
	 * Size -> 0x0038 (FullSize[0x16C0] - InheritedSize[0x1688])
	 */
	class AVIP_BasePawn_C : public ABaseCharacter_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1688(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMesh*                                       Helmet;                                                  // 0x1690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       Hair;                                                    // 0x1698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       Head;                                                    // 0x16A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       Beard;                                                   // 0x16A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       Torso;                                                   // 0x16B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USkeletalMesh*                                       Leg;                                                     // 0x16B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetupVariantMorphTarget(const class FName& MeshName, TArray<class FName>* MorphTargetVariants, bool bInvertValues);
		void GetHatMorphTargetVariants(TArray<class FName>* MorphTargetsArray);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(Engine_EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_VIP_BasePawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
