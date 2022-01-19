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
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayername
	 */
	struct UFFAObjectiveWidget_Leader_C_UpdatePlayername_Params
	{
	public:
		class FString                                              InString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.SetupWidth
	 */
	struct UFFAObjectiveWidget_Leader_C_SetupWidth_Params
	{
	public:
		float                                                      ExtraWith;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.CompareAgaintsPlayerState
	 */
	struct UFFAObjectiveWidget_Leader_C_CompareAgaintsPlayerState_Params
	{
	public:
		class ATBLPlayerState*                                     TestPlayerState;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdateKillsCounter
	 */
	struct UFFAObjectiveWidget_Leader_C_UpdateKillsCounter_Params
	{
	public:
		int                                                        Kills;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.GetLocalPlayerState
	 */
	struct UFFAObjectiveWidget_Leader_C_GetLocalPlayerState_Params
	{
	public:
		class ATBLPlayerState*                                     AsTBLPlayer_State;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.UpdatePlayerState
	 */
	struct UFFAObjectiveWidget_Leader_C_UpdatePlayerState_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.PreConstruct
	 */
	struct UFFAObjectiveWidget_Leader_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.Construct
	 */
	struct UFFAObjectiveWidget_Leader_C_Construct_Params
	{
	};

	/**
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.OnPlayerStateKillsUpdated_Event_1
	 */
	struct UFFAObjectiveWidget_Leader_C_OnPlayerStateKillsUpdated_Event_1_Params
	{
	public:
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        Kills;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FFAObjectiveWidget_Leader.FFAObjectiveWidget_Leader_C.ExecuteUbergraph_FFAObjectiveWidget_Leader
	 */
	struct UFFAObjectiveWidget_Leader_C_ExecuteUbergraph_FFAObjectiveWidget_Leader_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
