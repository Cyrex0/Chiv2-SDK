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
	 * BlueprintGeneratedClass ProjectedWoundComponent.ProjectedWoundComponent_C
	 * Size -> 0x0074 (FullSize[0x017C] - InheritedSize[0x0108])
	 */
	class UProjectedWoundComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              MeshReference;                                           // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0118(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class UTexture*                                            WoundTexture;                                            // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            WoundNormalTexture;                                      // 0x0130(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FTransform>                                  RefPoseLocalBoneTransforms;                              // 0x0138(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FVector>                                     Locations;                                               // 0x0148(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FVector>                                     Directions;                                              // 0x0158(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<float>                                              Rotations;                                               // 0x0168(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		int                                                        MaxWounds;                                               // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TransformDirectionByRefBoneTransform(const class FName& InSocketName, const struct FVector& Location, struct FVector* MeshLocalSpaceDirection);
		void TransformLocationByRefBoneTransform(const class FName& InSocketName, const struct FVector& Location, struct FVector* MeshLocalSpaceLocation);
		void GetRefBoneTransform(class USkeletalMeshComponent* MeshReference, const class FName& BoneName, struct FTransform* MeshLocalSpaceTransform);
		void GetMesh(class USkeletalMeshComponent** MeshReference);
		void CalculateRefTransforms();
		void ReceiveBeginPlay();
		void TakeHit(const struct FVector& Location, const struct FVector& Direction, float WoundRadius, float Rotation, const class FName& BoneName);
		void ExecuteUbergraph_ProjectedWoundComponent(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
