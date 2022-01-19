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
	 * 		Name   -> Function RankupUnlockContainer.RankupUnlockContainer_C.StartRankMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRankUpMessage                              RankMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void URankupUnlockContainer_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankupUnlockContainer.RankupUnlockContainer_C.StartRankMessage");
		
		URankupUnlockContainer_C_StartRankMessage_Params params {};
		params.RankMessage = RankMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankupUnlockContainer.RankupUnlockContainer_C.StartUnlockMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             Unlocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void URankupUnlockContainer_C::StartUnlockMessage(const struct FPrimaryAssetId& Unlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankupUnlockContainer.RankupUnlockContainer_C.StartUnlockMessage");
		
		URankupUnlockContainer_C_StartUnlockMessage_Params params {};
		params.Unlocked = Unlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankupUnlockContainer.RankupUnlockContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URankupUnlockContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankupUnlockContainer.RankupUnlockContainer_C.Construct");
		
		URankupUnlockContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankupUnlockContainer.RankupUnlockContainer_C.AddWidgetToList
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     NewWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankupUnlockContainer_C::AddWidgetToList(class UWidget* NewWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankupUnlockContainer.RankupUnlockContainer_C.AddWidgetToList");
		
		URankupUnlockContainer_C_AddWidgetToList_Params params {};
		params.NewWidget = NewWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankupUnlockContainer.RankupUnlockContainer_C.ExecuteUbergraph_RankupUnlockContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankupUnlockContainer_C::ExecuteUbergraph_RankupUnlockContainer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankupUnlockContainer.RankupUnlockContainer_C.ExecuteUbergraph_RankupUnlockContainer");
		
		URankupUnlockContainer_C_ExecuteUbergraph_RankupUnlockContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URankupUnlockContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankupUnlockContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankupUnlockContainer.RankupUnlockContainer_C");
		return ptr;
	}

}


