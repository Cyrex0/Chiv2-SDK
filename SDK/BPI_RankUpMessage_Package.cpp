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
	 * 		Name   -> Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartUnlockMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             Unlocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_RankUpMessage_C::StartUnlockMessage(const struct FPrimaryAssetId& Unlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartUnlockMessage");
		
		UBPI_RankUpMessage_C_StartUnlockMessage_Params params {};
		params.Unlocked = Unlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartRankMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRankUpMessage                              RankMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_RankUpMessage_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_RankUpMessage.BPI_RankUpMessage_C.StartRankMessage");
		
		UBPI_RankUpMessage_C_StartRankMessage_Params params {};
		params.RankMessage = RankMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPI_RankUpMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_RankUpMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_RankUpMessage.BPI_RankUpMessage_C");
		return ptr;
	}

}


