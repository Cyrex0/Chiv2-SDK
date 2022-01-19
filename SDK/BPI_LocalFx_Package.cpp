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
	 * 		Name   -> Function BPI_LocalFx.BPI_LocalFx_C.RemoveLocalFx
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             bpp__Particle__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                bpp__Intensity__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPI_LocalFx_C::RemoveLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_LocalFx.BPI_LocalFx_C.RemoveLocalFx");
		
		UBPI_LocalFx_C_RemoveLocalFx_Params params {};
		params.bpp__Particle__pf = bpp__Particle__pf;
		params.bpp__Intensity__pf = bpp__Intensity__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPI_LocalFx.BPI_LocalFx_C.CanAddLocalFx
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bpp__x__pfT                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPI_LocalFx_C::CanAddLocalFx(bool* bpp__x__pfT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_LocalFx.BPI_LocalFx_C.CanAddLocalFx");
		
		UBPI_LocalFx_C_CanAddLocalFx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__x__pfT != nullptr)
			*bpp__x__pfT = params.bpp__x__pfT;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPI_LocalFx.BPI_LocalFx_C.AddLocalFx
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             bpp__Particle__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                bpp__Intensity__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPI_LocalFx_C::AddLocalFx(class UParticleSystem* bpp__Particle__pf, int bpp__Intensity__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_LocalFx.BPI_LocalFx_C.AddLocalFx");
		
		UBPI_LocalFx_C_AddLocalFx_Params params {};
		params.bpp__Particle__pf = bpp__Particle__pf;
		params.bpp__Intensity__pf = bpp__Intensity__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_LocalFx_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_LocalFx_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BPI_LocalFx.BPI_LocalFx_C");
		return ptr;
	}

}


