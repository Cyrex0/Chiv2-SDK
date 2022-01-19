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
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.Get Visibility of HUD marker container
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UForwardSpawnContainer_C::Get_Visibility_of_HUD_marker_container()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.Get Visibility of HUD marker container");
		
		UForwardSpawnContainer_C_Get_Visibility_of_HUD_marker_container_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UForwardSpawnContainer_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.GetVisibility_1");
		
		UForwardSpawnContainer_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UForwardSpawnContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.Construct");
		
		UForwardSpawnContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Started Wave Hover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  Wave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnContainer_C::Notify_Started_Wave_Hover(class ASpawnWave* Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Started Wave Hover");
		
		UForwardSpawnContainer_C_Notify_Started_Wave_Hover_Params params {};
		params.Wave = Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Ended Wave Hover
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  Wave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnContainer_C::Notify_Ended_Wave_Hover(class ASpawnWave* Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.Notify Ended Wave Hover");
		
		UForwardSpawnContainer_C_Notify_Ended_Wave_Hover_Params params {};
		params.Wave = Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnJoinableSpawnWavesUpdated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnContainer_C::OnJoinableSpawnWavesUpdated_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnJoinableSpawnWavesUpdated_Event_1");
		
		UForwardSpawnContainer_C_OnJoinableSpawnWavesUpdated_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnPromptPlayerMessageRequest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                MessageTag                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                MessageId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnContainer_C::OnPromptPlayerMessageRequest(const struct FGameplayTag& MessageTag, int MessageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.OnPromptPlayerMessageRequest");
		
		UForwardSpawnContainer_C_OnPromptPlayerMessageRequest_Params params {};
		params.MessageTag = MessageTag;
		params.MessageId = MessageId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.ResetIsShowingPrompt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnContainer_C::ResetIsShowingPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.ResetIsShowingPrompt");
		
		UForwardSpawnContainer_C_ResetIsShowingPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.CancelPrompt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                MessageId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnContainer_C::CancelPrompt(int MessageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.CancelPrompt");
		
		UForwardSpawnContainer_C_CancelPrompt_Params params {};
		params.MessageId = MessageId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.ExecuteUbergraph_ForwardSpawnContainer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnContainer_C::ExecuteUbergraph_ForwardSpawnContainer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.ExecuteUbergraph_ForwardSpawnContainer");
		
		UForwardSpawnContainer_C_ExecuteUbergraph_ForwardSpawnContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Ended Wave Hover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  Wave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnContainer_C::On_Ended_Wave_Hover__DelegateSignature(class ASpawnWave* Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Ended Wave Hover__DelegateSignature");
		
		UForwardSpawnContainer_C_On_Ended_Wave_Hover__DelegateSignature_Params params {};
		params.Wave = Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Started Wave Hover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  Wave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnContainer_C::On_Started_Wave_Hover__DelegateSignature(class ASpawnWave* Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnContainer.ForwardSpawnContainer_C.On Started Wave Hover__DelegateSignature");
		
		UForwardSpawnContainer_C_On_Started_Wave_Hover__DelegateSignature_Params params {};
		params.Wave = Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UForwardSpawnContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForwardSpawnContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ForwardSpawnContainer.ForwardSpawnContainer_C");
		return ptr;
	}

}


