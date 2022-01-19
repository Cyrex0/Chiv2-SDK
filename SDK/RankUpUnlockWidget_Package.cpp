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
	 * 		Name   -> Function RankUpUnlockWidget.RankUpUnlockWidget_C.StartUnlockMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             Unlocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void URankUpUnlockWidget_C::StartUnlockMessage(const struct FPrimaryAssetId& Unlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankUpUnlockWidget.RankUpUnlockWidget_C.StartUnlockMessage");
		
		URankUpUnlockWidget_C_StartUnlockMessage_Params params {};
		params.Unlocked = Unlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankUpUnlockWidget.RankUpUnlockWidget_C.ExecuteUbergraph_RankUpUnlockWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankUpUnlockWidget_C::ExecuteUbergraph_RankUpUnlockWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankUpUnlockWidget.RankUpUnlockWidget_C.ExecuteUbergraph_RankUpUnlockWidget");
		
		URankUpUnlockWidget_C_ExecuteUbergraph_RankUpUnlockWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URankUpUnlockWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankUpUnlockWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankUpUnlockWidget.RankUpUnlockWidget_C");
		return ptr;
	}

}


