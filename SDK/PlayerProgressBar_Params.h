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
	 * Function PlayerProgressBar.PlayerProgressBar_C.Update All
	 */
	struct UPlayerProgressBar_C_Update_All_Params
	{
	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.Construct
	 */
	struct UPlayerProgressBar_C_Construct_Params
	{
	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.Update Title
	 */
	struct UPlayerProgressBar_C_Update_Title_Params
	{
	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.SetName
	 */
	struct UPlayerProgressBar_C_SetName_Params
	{
	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.OpenStoreMenu
	 */
	struct UPlayerProgressBar_C_OpenStoreMenu_Params
	{
	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.CurrencyClicked
	 */
	struct UPlayerProgressBar_C_CurrencyClicked_Params
	{
	public:
		class UStatefulButton_C*                                   Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.OnStatsLogin
	 */
	struct UPlayerProgressBar_C_OnStatsLogin_Params
	{
	public:
		bool                                                       bIsLoaded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.OnStatsUpdated
	 */
	struct UPlayerProgressBar_C_OnStatsUpdated_Params
	{
	public:
		struct FTBLOnlineStats                                     OnlineStats;                                             // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.OnlineStatsLevelUp
	 */
	struct UPlayerProgressBar_C_OnlineStatsLevelUp_Params
	{
	public:
		TArray<struct FLevelUpResult>                              LevelUpEvents;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.OnRefreshProfileDisplayName
	 */
	struct UPlayerProgressBar_C_OnRefreshProfileDisplayName_Params
	{
	public:
		class FString                                              ProfileName;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.ExecuteUbergraph_PlayerProgressBar
	 */
	struct UPlayerProgressBar_C_ExecuteUbergraph_PlayerProgressBar_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.OpenStore__DelegateSignature
	 */
	struct UPlayerProgressBar_C_OpenStore__DelegateSignature_Params
	{
	};

	/**
	 * Function PlayerProgressBar.PlayerProgressBar_C.RankUpComplete__DelegateSignature
	 */
	struct UPlayerProgressBar_C_RankUpComplete__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
