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
	 * Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartUnlockMessage
	 */
	struct UBPI_RankUpMessage_C_StartUnlockMessage_Params
	{
	public:
		struct FPrimaryAssetId                                     Unlocked;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartRankMessage
	 */
	struct UBPI_RankUpMessage_C_StartRankMessage_Params
	{
	public:
		struct FRankUpMessage                                      RankMessage;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
