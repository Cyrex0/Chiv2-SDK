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
	 * Function GameModePlayerPromptData.GameModePlayerPromptData_C.GetPlayerPromptDataFromMessageTag
	 */
	struct UGameModePlayerPromptData_C_GetPlayerPromptDataFromMessageTag_Params
	{
	public:
		struct FGameplayTag                                        MessageTag;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Found;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FPlayerPromptFormattedMessage                       MessageStruct;                                           // 0x0018(0x0038)  (Parm, OutParm)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
