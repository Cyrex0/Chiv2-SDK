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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BPI_LocalFx.BPI_LocalFx_C.RemoveLocalFx
	 */
	struct UBPI_LocalFx_C_RemoveLocalFx_Params
	{
	public:
		class UParticleSystem*                                     bpp__Particle__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        bpp__Intensity__pf;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPI_LocalFx.BPI_LocalFx_C.CanAddLocalFx
	 */
	struct UBPI_LocalFx_C_CanAddLocalFx_Params
	{
	public:
		bool                                                       bpp__x__pfT;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPI_LocalFx.BPI_LocalFx_C.AddLocalFx
	 */
	struct UBPI_LocalFx_C_AddLocalFx_Params
	{
	public:
		class UParticleSystem*                                     bpp__Particle__pf;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        bpp__Intensity__pf;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
