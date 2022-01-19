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
	 * BlueprintGeneratedClass MS_ParrySuccess.MS_ParrySuccess_C
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UMS_ParrySuccess_C : public UMovementInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVelocityCurveMovement*                              VelocityCurveMovement_416_N48_ExecuteUbergraph_MS_ParrySuccess_RefProperty; // 0x00B0(0x0008) ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMovementSequence*                                   MS_ParrySuccess_ExecuteUbergraph_MS_ParrySuccess_RefProperty; // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnAssemble_MS_ParrySuccess();
		void ExecuteUbergraph_MS_ParrySuccess(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
