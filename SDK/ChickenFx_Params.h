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
	 * Function ChickenFx.ChickenFx_C.RemoveBurningParticleSystem
	 */
	struct UChickenFx_C_RemoveBurningParticleSystem_Params
	{
	};

	/**
	 * Function ChickenFx.ChickenFx_C.OnKilled
	 */
	struct UChickenFx_C_OnKilled_Params
	{
	public:
		struct FDeathDamageTakenEvent                              bpp__DamageEvent__pf__const;                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function ChickenFx.ChickenFx_C.OnDamageTaken
	 */
	struct UChickenFx_C_OnDamageTaken_Params
	{
	public:
		struct FDamageTakenEvent                                   bpp__DamageEvent__pf__const;                             // 0x0000(0x0148)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function ChickenFx.ChickenFx_C.GetAkComponent
	 */
	struct UChickenFx_C_GetAkComponent_Params
	{
	public:
		class UAkComponent*                                        ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function ChickenFx.ChickenFx_C.AddBurningParticleSystem
	 */
	struct UChickenFx_C_AddBurningParticleSystem_Params
	{
	public:
		class AActor*                                              bpp__InActor__pf;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
