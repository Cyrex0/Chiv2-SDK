/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInfluence_EnemyMeleeThreat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInfluence_EnemyMeleeThreat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Influence_EnemyMeleeThreat.Influence_EnemyMeleeThreat_C");
		return ptr;
	}

}


