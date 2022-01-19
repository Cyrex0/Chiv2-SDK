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
	 * BlueprintGeneratedClass BPF_math.BPF_math_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_math_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_VectorMinimum(const struct FVector& A, const struct FVector& B, class UObject* __WorldContext, struct FVector* Min);
		void STATIC_VectorMaximum(const struct FVector& A, const struct FVector& B, class UObject* __WorldContext, struct FVector* Max);
		void STATIC_iDeltaTime(int A, class UObject* __WorldContext, float* A*Δt);
		void STATIC_vDeltaTime(const struct FVector& A, class UObject* __WorldContext, struct FVector* A*Δt);
		void STATIC_fDeltaTime(float A, class UObject* __WorldContext, float* A*Δt);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
