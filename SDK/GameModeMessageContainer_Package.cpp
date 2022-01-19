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
	 * 		Name   -> Function GameModeMessageContainer.GameModeMessageContainer_C.GetRankUpMessageTypeFromOnlineStat
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EOnlineStat                                    OnlineStat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		RankUpMessageType_ERankUpMessageType               RankUpMessageType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageContainer_C::GetRankUpMessageTypeFromOnlineStat(TBL_EOnlineStat OnlineStat, RankUpMessageType_ERankUpMessageType* RankUpMessageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageContainer.GameModeMessageContainer_C.GetRankUpMessageTypeFromOnlineStat");
		
		UGameModeMessageContainer_C_GetRankUpMessageTypeFromOnlineStat_Params params {};
		params.OnlineStat = OnlineStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RankUpMessageType != nullptr)
			*RankUpMessageType = params.RankUpMessageType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageContainer.GameModeMessageContainer_C.CanShowMessage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Show                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGameModeMessageContainer_C::CanShowMessage(bool* Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageContainer.GameModeMessageContainer_C.CanShowMessage");
		
		UGameModeMessageContainer_C_CanShowMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Show != nullptr)
			*Show = params.Show;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageContainer.GameModeMessageContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGameModeMessageContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageContainer.GameModeMessageContainer_C.Construct");
		
		UGameModeMessageContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageContainer.GameModeMessageContainer_C.GameModeMessageReceived_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameModeMessage                            Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGameModeMessageContainer_C::GameModeMessageReceived_Event_1(const struct FGameModeMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageContainer.GameModeMessageContainer_C.GameModeMessageReceived_Event_1");
		
		UGameModeMessageContainer_C_GameModeMessageReceived_Event_1_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageContainer.GameModeMessageContainer_C.ShowMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameModeMessage                            Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameModeMessageContainer_C::ShowMessage(const struct FGameModeMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageContainer.GameModeMessageContainer_C.ShowMessage");
		
		UGameModeMessageContainer_C_ShowMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageContainer.GameModeMessageContainer_C.BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UGameModeMessageContainer_C::BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageContainer.GameModeMessageContainer_C.BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature");
		
		UGameModeMessageContainer_C_BndEvt__GameModeMessageWidget_K2Node_ComponentBoundEvent_2_AnimationOutComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageContainer.GameModeMessageContainer_C.OnCinematicStateChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                PreviousStateTag                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UCinematicState*                             PreviousState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGameplayTag                                NewStateTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UCinematicState*                             NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageContainer_C::OnCinematicStateChanged_Event_1(const struct FGameplayTag& PreviousStateTag, class UCinematicState* PreviousState, const struct FGameplayTag& NewStateTag, class UCinematicState* NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageContainer.GameModeMessageContainer_C.OnCinematicStateChanged_Event_1");
		
		UGameModeMessageContainer_C_OnCinematicStateChanged_Event_1_Params params {};
		params.PreviousStateTag = PreviousStateTag;
		params.PreviousState = PreviousState;
		params.NewStateTag = NewStateTag;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageContainer.GameModeMessageContainer_C.ProcessNewMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameModeMessage                            GameModeMessage                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameModeMessageContainer_C::ProcessNewMessage(const struct FGameModeMessage& GameModeMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageContainer.GameModeMessageContainer_C.ProcessNewMessage");
		
		UGameModeMessageContainer_C_ProcessNewMessage_Params params {};
		params.GameModeMessage = GameModeMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameModeMessageContainer.GameModeMessageContainer_C.ExecuteUbergraph_GameModeMessageContainer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameModeMessageContainer_C::ExecuteUbergraph_GameModeMessageContainer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameModeMessageContainer.GameModeMessageContainer_C.ExecuteUbergraph_GameModeMessageContainer");
		
		UGameModeMessageContainer_C_ExecuteUbergraph_GameModeMessageContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameModeMessageContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameModeMessageContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameModeMessageContainer.GameModeMessageContainer_C");
		return ptr;
	}

}


