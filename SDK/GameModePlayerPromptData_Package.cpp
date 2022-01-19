/**
 * Name: chiv2
 * Version: 123456
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModePlayerPromptData.GameModePlayerPromptData_C.GetPlayerPromptDataFromMessageTag
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                MessageTag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerPromptFormattedMessage               MessageStruct                                              (Parm, OutParm)
	 */
	void UGameModePlayerPromptData_C::STATIC_GetPlayerPromptDataFromMessageTag(const struct FGameplayTag& MessageTag, class UObject* __WorldContext, bool* Found, struct FPlayerPromptFormattedMessage* MessageStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModePlayerPromptData.GameModePlayerPromptData_C.GetPlayerPromptDataFromMessageTag");
		
		UGameModePlayerPromptData_C_GetPlayerPromptDataFromMessageTag_Params params {};
		params.MessageTag = MessageTag;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
		if (MessageStruct != nullptr)
			*MessageStruct = params.MessageStruct;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameModePlayerPromptData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameModePlayerPromptData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameModePlayerPromptData.GameModePlayerPromptData_C");
		return ptr;
	}

}


