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
	 * BlueprintGeneratedClass Carryable_Bread_05.Carryable_Bread_05_C
	 * Size -> 0x000F (FullSize[0x10F0] - InheritedSize[0x10E1])
	 */
	class ACarryable_Bread_05_C : public ABaseCarryable_Offhand_C
	{
	public:
		unsigned char                                              UnknownData_AZ3U[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCarryableFoodComp_C*                                CarryableFoodComp;                                       // 0x10E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
