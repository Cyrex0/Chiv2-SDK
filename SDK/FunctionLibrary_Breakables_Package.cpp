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
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_Breakables.FunctionLibrary_Breakables_C.AwardScoreOnDamage
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           DamageEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	 * 		class UTBLGameScoringComponent*                    ScoringComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_Breakables_C::STATIC_AwardScoreOnDamage(const struct FDamageTakenEvent& DamageEvent, class UTBLGameScoringComponent* ScoringComponent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_Breakables.FunctionLibrary_Breakables_C.AwardScoreOnDamage");
		
		UFunctionLibrary_Breakables_C_AwardScoreOnDamage_Params params {};
		params.DamageEvent = DamageEvent;
		params.ScoringComponent = ScoringComponent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFunctionLibrary_Breakables_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunctionLibrary_Breakables_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibrary_Breakables.FunctionLibrary_Breakables_C");
		return ptr;
	}

}


