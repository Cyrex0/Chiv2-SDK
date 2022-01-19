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
	 * BlueprintGeneratedClass FunctionLibrary_Breakables.FunctionLibrary_Breakables_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFunctionLibrary_Breakables_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_AwardScoreOnDamage(const struct FDamageTakenEvent& DamageEvent, class UTBLGameScoringComponent* ScoringComponent, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
