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
	 * Function GameModeMessageComponentInterface.GameModeMessageComponentInterface_C.Interface_QueueGameModeMessages
	 */
	struct UGameModeMessageComponentInterface_C_Interface_QueueGameModeMessages_Params
	{
	public:
		TArray<struct FGameModeMessageTable>                       Messages;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
