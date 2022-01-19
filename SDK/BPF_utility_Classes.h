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
	 * BlueprintGeneratedClass BPF_utility.BPF_utility_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_utility_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetVectorProgressBetweenPointAToPointB(const struct FVector& In_Vector, const struct FVector& PointA, const struct FVector& PointB, class UObject* __WorldContext, float* Progress);
		void STATIC_ClampFloat__Max_(float Value, float Max, class UObject* __WorldContext, float* _);
		void STATIC_ClampFloat__Min_(float Value, float Min, class UObject* __WorldContext, float* _);
		void STATIC_Random_Vector_In_Range_From_Stream(const struct FVector& Min, const struct FVector& Max, const struct FRandomStream& Stream, class UObject* __WorldContext, struct FVector* Return_Value);
		void STATIC_Set_Cull_Distance(class UPrimitiveComponent* PrimitiveComponent, float DistanceMultiplier, class UObject* __WorldContext);
		void STATIC_Composite_Component_Bounds(TArray<class USceneComponent*>* Components, class UBoxComponent* Group_Bounds_Component, class AActor* Owning_Actor, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
