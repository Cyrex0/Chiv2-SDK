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
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.Construct
	 */
	struct UFactionVideoOverlay_C_Construct_Params
	{
	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.OnEndReached
	 */
	struct UFactionVideoOverlay_C_OnEndReached_Params
	{
	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.InitialFadeInComplete
	 */
	struct UFactionVideoOverlay_C_InitialFadeInComplete_Params
	{
	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.FailedPlayMovie
	 */
	struct UFactionVideoOverlay_C_FailedPlayMovie_Params
	{
	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.MovieLoaded
	 */
	struct UFactionVideoOverlay_C_MovieLoaded_Params
	{
	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.StartMovie
	 */
	struct UFactionVideoOverlay_C_StartMovie_Params
	{
	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.FindSoundComponent
	 */
	struct UFactionVideoOverlay_C_FindSoundComponent_Params
	{
	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.Destruct
	 */
	struct UFactionVideoOverlay_C_Destruct_Params
	{
	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.Tick
	 */
	struct UFactionVideoOverlay_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.ExecuteUbergraph_FactionVideoOverlay
	 */
	struct UFactionVideoOverlay_C_ExecuteUbergraph_FactionVideoOverlay_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FactionVideoOverlay.FactionVideoOverlay_C.VideoCompleted__DelegateSignature
	 */
	struct UFactionVideoOverlay_C_VideoCompleted__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
