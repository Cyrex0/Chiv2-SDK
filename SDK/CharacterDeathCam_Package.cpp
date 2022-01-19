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
	 * 		Offset -> 0x00B74670
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.ThirdPersonDeathCam
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterDeathcam_C::ThirdPersonDeathCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.ThirdPersonDeathCam");
		
		UCharacterDeathcam_C_ThirdPersonDeathCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E91CF0
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.StopAllDeathCamFX
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterDeathcam_C::StopAllDeathCamFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.StopAllDeathCamFX");
		
		UCharacterDeathcam_C_StopAllDeathCamFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B74610
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.OnSetThirdPersonDeathCamera
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UCharacterDeathcam_C::OnSetThirdPersonDeathCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.OnSetThirdPersonDeathCamera");
		
		UCharacterDeathcam_C_OnSetThirdPersonDeathCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B74650
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.OnSetRagdollPhysics
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UCharacterDeathcam_C::OnSetRagdollPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.OnSetRagdollPhysics");
		
		UCharacterDeathcam_C_OnSetRagdollPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E92170
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.OnSetFirstPersonDeathCamera
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UCharacterDeathcam_C::OnSetFirstPersonDeathCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.OnSetFirstPersonDeathCamera");
		
		UCharacterDeathcam_C_OnSetFirstPersonDeathCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9B280
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.OnPossessed
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AController*                                 bpp__Controller__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterDeathcam_C::OnPossessed(class AController* bpp__Controller__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.OnPossessed");
		
		UCharacterDeathcam_C_OnPossessed_Params params {};
		params.bpp__Controller__pf = bpp__Controller__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9B1A0
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.OnKilled
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCharacterDeathcam_C::OnKilled(const struct FDeathDamageTakenEvent& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.OnKilled");
		
		UCharacterDeathcam_C_OnKilled_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F370
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.OnAssemble_CharacterDeathcam
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterDeathcam_C::OnAssemble_CharacterDeathcam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.OnAssemble_CharacterDeathcam");
		
		UCharacterDeathcam_C_OnAssemble_CharacterDeathcam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E9B0C0
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.GetPlayerCameraManager
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     bpp__Player__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATBLPlayerCameraManager*                     bpp__Camera__pf                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterDeathcam_C::GetPlayerCameraManager(class UObject* bpp__Player__pf, class ATBLPlayerCameraManager** bpp__Camera__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.GetPlayerCameraManager");
		
		UCharacterDeathcam_C_GetPlayerCameraManager_Params params {};
		params.bpp__Player__pf = bpp__Player__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__Camera__pf != nullptr)
			*bpp__Camera__pf = params.bpp__Camera__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00B74630
	 * 		Name   -> Function CharacterDeathCam.CharacterDeathcam_C.FirstPersonDeathCam
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UCharacterDeathcam_C::FirstPersonDeathCam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterDeathCam.CharacterDeathcam_C.FirstPersonDeathCam");
		
		UCharacterDeathcam_C_FirstPersonDeathCam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCharacterDeathcam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterDeathcam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass CharacterDeathCam.CharacterDeathcam_C");
		return ptr;
	}

}


