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
	 * BlueprintGeneratedClass Carryable_GoreHead.Carryable_GoreHead_C
	 * Size -> 0x006B (FullSize[0x114C] - InheritedSize[0x10E1])
	 */
	class ACarryable_GoreHead_C : public ABaseCarryable_Offhand_C
	{
	public:
		unsigned char                                              UnknownData_GPCC[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                NoGoreHeadMesh;                                          // 0x10F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_Gore_Artery_m;                                         // 0x10F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Helmet;                                                  // 0x1100(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Hair;                                                    // 0x1108(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Beard;                                                   // 0x1110(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head;                                                    // 0x1118(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ATBLCharacter*                                       DeadCharacter;                                           // 0x1120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGoreHeadParams                                     ReplicatedGoreHeadParams;                                // 0x1128(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, NoDestructor
		class ATBLCharacter*                                       ReplicatedDeadCharacter;                                 // 0x1138(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Impulse;                                                 // 0x1140(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_Impulse();
		void SetNoGoreHeadMesh();
		bool ShouldUseNoGore();
		void PostReplication();
		void OnRep_ReplicatedGoreHeadParams();
		void OnRep_ReplicatedDeadCharacter();
		class USkeletalMeshComponent* GetSkeletalMesh();
		void ApplyCustomization();
		void InitializeGoreHead(class ATBLCharacter* Character, const struct FGoreHeadParams& Params, const struct FVector& Impulse);
		void ApplyImpulseToGoreHead(const struct FVector& Impulse);
		void OnInitialize();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Carryable_GoreHead(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
