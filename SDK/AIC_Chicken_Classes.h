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
	 * BlueprintGeneratedClass AIC_Chicken.AIC_Chicken_C
	 * Size -> 0x0010 (FullSize[0x0370] - InheritedSize[0x0360])
	 */
	class AAIC_Chicken_C : public AAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPawnSensingComponent*                               PawnSensing;                                             // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume);
		void Heard_a_chicken_panic(const struct FVector& Location);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_AIC_Chicken(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
