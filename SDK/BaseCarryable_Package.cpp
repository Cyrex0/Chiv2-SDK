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
	 * 		Name   -> Function BaseCarryable.BaseCarryable_C.EvaluateImpact
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DistanceTravelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseCarryable_C::EvaluateImpact(float DistanceTravelled, int* Index, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable.BaseCarryable_C.EvaluateImpact");
		
		ABaseCarryable_C_EvaluateImpact_Params params {};
		params.DistanceTravelled = DistanceTravelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable.BaseCarryable_C.OnCustomImpact
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FProjectileHitParams                        ProjectileHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABaseCarryable_C::OnCustomImpact(int Index, const struct FProjectileHitParams& ProjectileHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable.BaseCarryable_C.OnCustomImpact");
		
		ABaseCarryable_C_OnCustomImpact_Params params {};
		params.Index = Index;
		params.ProjectileHit = ProjectileHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitWorld_Event_BaseCarryable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileHitParams                        ProjectileHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABaseCarryable_C::BaseProjectileBlockingHitWorld_Event_BaseCarryable(const struct FProjectileHitParams& ProjectileHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitWorld_Event_BaseCarryable");
		
		ABaseCarryable_C_BaseProjectileBlockingHitWorld_Event_BaseCarryable_Params params {};
		params.ProjectileHit = ProjectileHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitNonWorld_Event_BaseCarryable
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FProjectileHitParams                        ProjectileHit                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABaseCarryable_C::BaseProjectileBlockingHitNonWorld_Event_BaseCarryable(const struct FProjectileHitParams& ProjectileHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable.BaseCarryable_C.BaseProjectileBlockingHitNonWorld_Event_BaseCarryable");
		
		ABaseCarryable_C_BaseProjectileBlockingHitNonWorld_Event_BaseCarryable_Params params {};
		params.ProjectileHit = ProjectileHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable.BaseCarryable_C.OnInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABaseCarryable_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable.BaseCarryable_C.OnInitialize");
		
		ABaseCarryable_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseCarryable.BaseCarryable_C.ExecuteUbergraph_BaseCarryable
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseCarryable_C::ExecuteUbergraph_BaseCarryable(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseCarryable.BaseCarryable_C.ExecuteUbergraph_BaseCarryable");
		
		ABaseCarryable_C_ExecuteUbergraph_BaseCarryable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABaseCarryable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseCarryable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseCarryable.BaseCarryable_C");
		return ptr;
	}

}


