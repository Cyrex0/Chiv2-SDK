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
	 * 		Name   -> Function RankUpWidgetBase.RankUpWidgetBase_C.StartUnlockMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             Unlocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void URankUpWidgetBase_C::StartUnlockMessage(const struct FPrimaryAssetId& Unlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankUpWidgetBase.RankUpWidgetBase_C.StartUnlockMessage");
		
		URankUpWidgetBase_C_StartUnlockMessage_Params params {};
		params.Unlocked = Unlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankUpWidgetBase.RankUpWidgetBase_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URankUpWidgetBase_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankUpWidgetBase.RankUpWidgetBase_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1");
		
		URankUpWidgetBase_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankUpWidgetBase.RankUpWidgetBase_C.StartRankMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRankUpMessage                              RankMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void URankUpWidgetBase_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankUpWidgetBase.RankUpWidgetBase_C.StartRankMessage");
		
		URankUpWidgetBase_C_StartRankMessage_Params params {};
		params.RankMessage = RankMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankUpWidgetBase.RankUpWidgetBase_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URankUpWidgetBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankUpWidgetBase.RankUpWidgetBase_C.Construct");
		
		URankUpWidgetBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankUpWidgetBase.RankUpWidgetBase_C.ExecuteUbergraph_RankUpWidgetBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URankUpWidgetBase_C::ExecuteUbergraph_RankUpWidgetBase(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankUpWidgetBase.RankUpWidgetBase_C.ExecuteUbergraph_RankUpWidgetBase");
		
		URankUpWidgetBase_C_ExecuteUbergraph_RankUpWidgetBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RankUpWidgetBase.RankUpWidgetBase_C.MessageFinished__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void URankUpWidgetBase_C::MessageFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RankUpWidgetBase.RankUpWidgetBase_C.MessageFinished__DelegateSignature");
		
		URankUpWidgetBase_C_MessageFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URankUpWidgetBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URankUpWidgetBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RankUpWidgetBase.RankUpWidgetBase_C");
		return ptr;
	}

}


