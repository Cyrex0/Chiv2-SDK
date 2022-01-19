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
	 * Function CharacterDeathCam.CharacterDeathcam_C.ThirdPersonDeathCam
	 */
	struct UCharacterDeathcam_C_ThirdPersonDeathCam_Params
	{
	};

	/**
	 * Function CharacterDeathCam.CharacterDeathcam_C.StopAllDeathCamFX
	 */
	struct UCharacterDeathcam_C_StopAllDeathCamFX_Params
	{
	};

	/**
	 * Function CharacterDeathCam.CharacterDeathcam_C.OnSetThirdPersonDeathCamera
	 */
	struct UCharacterDeathcam_C_OnSetThirdPersonDeathCamera_Params
	{
	};

	/**
	 * Function CharacterDeathCam.CharacterDeathcam_C.OnSetRagdollPhysics
	 */
	struct UCharacterDeathcam_C_OnSetRagdollPhysics_Params
	{
	};

	/**
	 * Function CharacterDeathCam.CharacterDeathcam_C.OnSetFirstPersonDeathCamera
	 */
	struct UCharacterDeathcam_C_OnSetFirstPersonDeathCamera_Params
	{
	};

	/**
	 * Function CharacterDeathCam.CharacterDeathcam_C.OnPossessed
	 */
	struct UCharacterDeathcam_C_OnPossessed_Params
	{
	public:
		class AController*                                         bpp__Controller__pf;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterDeathCam.CharacterDeathcam_C.OnKilled
	 */
	struct UCharacterDeathcam_C_OnKilled_Params
	{
	public:
		struct FDeathDamageTakenEvent                              bpp__DamageEvent__pf__const;                             // 0x0000(0x0160)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterDeathCam.CharacterDeathcam_C.OnAssemble_CharacterDeathcam
	 */
	struct UCharacterDeathcam_C_OnAssemble_CharacterDeathcam_Params
	{
	};

	/**
	 * Function CharacterDeathCam.CharacterDeathcam_C.GetPlayerCameraManager
	 */
	struct UCharacterDeathcam_C_GetPlayerCameraManager_Params
	{
	public:
		class UObject*                                             bpp__Player__pf;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATBLPlayerCameraManager*                             bpp__Camera__pf;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function CharacterDeathCam.CharacterDeathcam_C.FirstPersonDeathCam
	 */
	struct UCharacterDeathcam_C_FirstPersonDeathCam_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
