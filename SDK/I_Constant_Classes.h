﻿#pragma once

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
	 * BlueprintGeneratedClass I_Constant.I_Constant_C
	 * Size -> 0x0004 (FullSize[0x0034] - InheritedSize[0x0030])
	 */
	class UI_Constant_C : public UUtilityAI_InputAxis
	{
	public:
		float                                                      Value_To_Output;                                         // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float CalculateValue(const struct FUtilityAI_Context& C);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
