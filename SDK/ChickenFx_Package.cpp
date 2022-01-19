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
	 * 		Offset -> 0x00E91CB0
	 * 		Name   -> Function ChickenFx.ChickenFx_C.RemoveBurningParticleSystem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UChickenFx_C::RemoveBurningParticleSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChickenFx.ChickenFx_C.RemoveBurningParticleSystem");
		
		UChickenFx_C_RemoveBurningParticleSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA6E10
	 * 		Name   -> Function ChickenFx.ChickenFx_C.OnKilled
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UChickenFx_C::OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChickenFx.ChickenFx_C.OnKilled");
		
		UChickenFx_C_OnKilled_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA6D60
	 * 		Name   -> Function ChickenFx.ChickenFx_C.OnDamageTaken
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDamageTakenEvent                           bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UChickenFx_C::OnDamageTaken(const struct FDamageTakenEvent& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChickenFx.ChickenFx_C.OnDamageTaken");
		
		UChickenFx_C_OnDamageTaken_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA6D30
	 * 		Name   -> Function ChickenFx.ChickenFx_C.GetAkComponent
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	class UAkComponent* UChickenFx_C::GetAkComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChickenFx.ChickenFx_C.GetAkComponent");
		
		UChickenFx_C_GetAkComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00EA5AD0
	 * 		Name   -> Function ChickenFx.ChickenFx_C.AddBurningParticleSystem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      bpp__InActor__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChickenFx_C::AddBurningParticleSystem(class AActor* bpp__InActor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChickenFx.ChickenFx_C.AddBurningParticleSystem");
		
		UChickenFx_C_AddBurningParticleSystem_Params params {};
		params.bpp__InActor__pf = bpp__InActor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UChickenFx_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChickenFx_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ChickenFx.ChickenFx_C");
		return ptr;
	}

}


