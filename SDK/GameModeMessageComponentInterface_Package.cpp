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
	 * 		Name   -> Function GameModeMessageComponentInterface.GameModeMessageComponentInterface_C.Interface_QueueGameModeMessages
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FGameModeMessageTable>               Messages                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UGameModeMessageComponentInterface_C::Interface_QueueGameModeMessages(TArray<struct FGameModeMessageTable> Messages)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageComponentInterface.GameModeMessageComponentInterface_C.Interface_QueueGameModeMessages");
		
		UGameModeMessageComponentInterface_C_Interface_QueueGameModeMessages_Params params {};
		params.Messages = Messages;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameModeMessageComponentInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameModeMessageComponentInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameModeMessageComponentInterface.GameModeMessageComponentInterface_C");
		return ptr;
	}

}


