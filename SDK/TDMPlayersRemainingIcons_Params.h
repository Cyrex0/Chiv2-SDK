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
	 * Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.GetOrderedPlayerIconArray
	 */
	struct UTDMPlayersRemainingIcons_C_GetOrderedPlayerIconArray_Params
	{
	public:
		TArray<class UPlayerIconWidget_C*>                         Children;                                                // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

	};

	/**
	 * Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.PreConstruct
	 */
	struct UTDMPlayersRemainingIcons_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.UpdateNumberOfPlayersRemaining
	 */
	struct UTDMPlayersRemainingIcons_C_UpdateNumberOfPlayersRemaining_Params
	{
	public:
		int                                                        PlayersRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.SetMaxNumberPlayers
	 */
	struct UTDMPlayersRemainingIcons_C_SetMaxNumberPlayers_Params
	{
	public:
		int                                                        NewMax;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.ExecuteUbergraph_TDMPlayersRemainingIcons
	 */
	struct UTDMPlayersRemainingIcons_C_ExecuteUbergraph_TDMPlayersRemainingIcons_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
