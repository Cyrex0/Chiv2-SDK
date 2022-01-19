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
	 * Function CinematicBars.CinematicBars_C.Handle requests changed
	 */
	struct UCinematicBars_C_Handle_requests_changed_Params
	{
	};

	/**
	 * Function CinematicBars.CinematicBars_C.FadeIn
	 */
	struct UCinematicBars_C_FadeIn_Params
	{
	};

	/**
	 * Function CinematicBars.CinematicBars_C.FadeOut
	 */
	struct UCinematicBars_C_FadeOut_Params
	{
	};

	/**
	 * Function CinematicBars.CinematicBars_C.Add bar requester
	 */
	struct UCinematicBars_C_Add_bar_requester_Params
	{
	public:
		CinematicBarsMode_ECinematicBarsMode                       Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Requester;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicBars.CinematicBars_C.Remove bar requester
	 */
	struct UCinematicBars_C_Remove_bar_requester_Params
	{
	public:
		class UObject*                                             Requester;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicBars.CinematicBars_C.Update requests soon
	 */
	struct UCinematicBars_C_Update_requests_soon_Params
	{
	};

	/**
	 * Function CinematicBars.CinematicBars_C.Construct
	 */
	struct UCinematicBars_C_Construct_Params
	{
	};

	/**
	 * Function CinematicBars.CinematicBars_C.ExecuteUbergraph_CinematicBars
	 */
	struct UCinematicBars_C_ExecuteUbergraph_CinematicBars_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CinematicBars.CinematicBars_C.On Mode Changed__DelegateSignature
	 */
	struct UCinematicBars_C_On_Mode_Changed__DelegateSignature_Params
	{
	public:
		CinematicBarsMode_ECinematicBarsMode                       Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
