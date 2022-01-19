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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GameModePlayerPromptData.GameModePlayerPromptData_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameModePlayerPromptData_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetPlayerPromptDataFromMessageTag(const struct FGameplayTag& MessageTag, class UObject* __WorldContext, bool* Found, struct FPlayerPromptFormattedMessage* MessageStruct);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
