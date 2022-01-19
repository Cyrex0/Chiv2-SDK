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
	 * BlueprintGeneratedClass ChargeWeak.ChargeWeak_C
	 * Size -> 0x000C (FullSize[0x0180] - InheritedSize[0x0174])
	 */
	class UChargeWeak_C : public FCharge_UCharge_C
	{
	public:
		unsigned char                                              UnknownData_LUIY[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0178(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnAssemble_ChargeWeak();
		void ExecuteUbergraph_ChargeWeak(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
