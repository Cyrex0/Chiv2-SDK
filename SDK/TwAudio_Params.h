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
	 * Function TwAudio.TwAkEmitterArrayComponent.PostEvent
	 */
	struct UTwAkEmitterArrayComponent_PostEvent_Params
	{
	public:
		class UAkAudioEvent*                                       Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function TwAudio.TwAkEmitterArrayComponent.EnableVoice
	 */
	struct UTwAkEmitterArrayComponent_EnableVoice_Params
	{
	};

	/**
	 * Function TwAudio.TwAkEmitterArrayComponent.DisableVoice
	 */
	struct UTwAkEmitterArrayComponent_DisableVoice_Params
	{
	};

	/**
	 * Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap
	 */
	struct UTwAkSplineProximityEffectsComponent_EndOverlap_Params
	{
	public:
		class AActor*                                              A1;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              A2;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap
	 */
	struct UTwAkSplineProximityEffectsComponent_BeginOverlap_Params
	{
	public:
		class AActor*                                              A1;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              A2;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
