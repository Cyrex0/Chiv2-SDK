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
	 * BlueprintGeneratedClass Carried.Carried_C
	 * Size -> 0x0008 (FullSize[0x0170] - InheritedSize[0x0168])
	 */
	class UCarried_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnAssemble_Carried();
		void ExecuteUbergraph_Carried(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
