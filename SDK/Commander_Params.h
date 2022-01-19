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
	 * Function Commander.Commander_C.UserConstructionScript
	 */
	struct ACommander_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function Commander.Commander_C.PlayCommanderMessages
	 */
	struct ACommander_C_PlayCommanderMessages_Params
	{
	public:
		TArray<struct FGameModeMessageTable>                       Message;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function Commander.Commander_C.ExecuteUbergraph_Commander
	 */
	struct ACommander_C_ExecuteUbergraph_Commander_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
