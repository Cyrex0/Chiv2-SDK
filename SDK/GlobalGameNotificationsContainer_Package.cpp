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
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.CanShowHint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanShowHint                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGlobalGameNotificationsContainer_C::CanShowHint(bool* CanShowHint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.CanShowHint");
		
		UGlobalGameNotificationsContainer_C_CanShowHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanShowHint != nullptr)
			*CanShowHint = params.CanShowHint;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.GetRandomHint
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EHintType                                      Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHintInputType                                 Hint_Input_Type                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        RandomKey                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::GetRandomHint(TBL_EHintType Category, TBL_EHintInputType Hint_Input_Type, class FName* RandomKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.GetRandomHint");
		
		UGlobalGameNotificationsContainer_C_GetRandomHint_Params params {};
		params.Category = Category;
		params.Hint_Input_Type = Hint_Input_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomKey != nullptr)
			*RandomKey = params.RandomKey;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessLevelUpEvent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLevelUpResult                              LevelUpResult                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGlobalGameNotificationsContainer_C::ProcessLevelUpEvent(const struct FLevelUpResult& LevelUpResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessLevelUpEvent");
		
		UGlobalGameNotificationsContainer_C_ProcessLevelUpEvent_Params params {};
		params.LevelUpResult = LevelUpResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnLoaded_0C2677EC44803511BE7821B9553BFDBE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnLoaded_0C2677EC44803511BE7821B9553BFDBE(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnLoaded_0C2677EC44803511BE7821B9553BFDBE");
		
		UGlobalGameNotificationsContainer_C_OnLoaded_0C2677EC44803511BE7821B9553BFDBE_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RecievedInvite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InviteeId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      InviteeName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::RecievedInvite(const class FString& InviteeId, const class FString& InviteeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RecievedInvite");
		
		UGlobalGameNotificationsContainer_C_RecievedInvite_Params params {};
		params.InviteeId = InviteeId;
		params.InviteeName = InviteeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessRankUpMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRankUpMessage                              Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::ProcessRankUpMessage(const struct FRankUpMessage& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ProcessRankUpMessage");
		
		UGlobalGameNotificationsContainer_C_ProcessRankUpMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnPartyInviteReceived(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteReceived");
		
		UGlobalGameNotificationsContainer_C_OnPartyInviteReceived_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnReceivedGlobalGameNotification_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGlobalGameNotificationCategory                Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FName                                        Subcategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnReceivedGlobalGameNotification_Event_1(TBL_EGlobalGameNotificationCategory Category, const class FText& Title, const class FText& Body, const class FName& Subcategory, class UObject* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnReceivedGlobalGameNotification_Event_1");
		
		UGlobalGameNotificationsContainer_C_OnReceivedGlobalGameNotification_Event_1_Params params {};
		params.Category = Category;
		params.Title = Title;
		params.Body = Body;
		params.Subcategory = Subcategory;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.AsyncLoadInventoryItem
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLevelUpResult                              LevelUpResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGlobalGameNotificationsContainer_C::AsyncLoadInventoryItem(const struct FLevelUpResult& LevelUpResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.AsyncLoadInventoryItem");
		
		UGlobalGameNotificationsContainer_C_AsyncLoadInventoryItem_Params params {};
		params.LevelUpResult = LevelUpResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.SendLoadedRankUpMessages
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalGameNotificationsContainer_C::SendLoadedRankUpMessages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.SendLoadedRankUpMessages");
		
		UGlobalGameNotificationsContainer_C_SendLoadedRankUpMessages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnMessagedFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalGameNotificationsContainer_C::OnMessagedFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnMessagedFinished");
		
		UGlobalGameNotificationsContainer_C_OnMessagedFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Level Up Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLevelUpResult>                      LevelUpEvents                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::On_Level_Up_Event(TArray<struct FLevelUpResult> LevelUpEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Level Up Event");
		
		UGlobalGameNotificationsContainer_C_On_Level_Up_Event_Params params {};
		params.LevelUpEvents = LevelUpEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberJoin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnPartyMemberJoin(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberJoin");
		
		UGlobalGameNotificationsContainer_C_OnPartyMemberJoin_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnPartyMemberLeft(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberLeft");
		
		UGlobalGameNotificationsContainer_C_OnPartyMemberLeft_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberRemoved
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnPartyMemberRemoved(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyMemberRemoved");
		
		UGlobalGameNotificationsContainer_C_OnPartyMemberRemoved_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyLeaderChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      DisplayName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnPartyLeaderChanged(const class FString& UserId, const class FString& DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyLeaderChanged");
		
		UGlobalGameNotificationsContainer_C_OnPartyLeaderChanged_Params params {};
		params.UserId = UserId;
		params.DisplayName = DisplayName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyDisbanded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalGameNotificationsContainer_C::OnPartyDisbanded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyDisbanded");
		
		UGlobalGameNotificationsContainer_C_OnPartyDisbanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestRandomHint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HintChance                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHintType                                      HintCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHintInputType                                 Hint_Input_Type                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::RequestRandomHint(float HintChance, TBL_EHintType HintCategory, TBL_EHintInputType Hint_Input_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestRandomHint");
		
		UGlobalGameNotificationsContainer_C_RequestRandomHint_Params params {};
		params.HintChance = HintChance;
		params.HintCategory = HintCategory;
		params.Hint_Input_Type = Hint_Input_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.HintCooldownFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalGameNotificationsContainer_C::HintCooldownFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.HintCooldownFinished");
		
		UGlobalGameNotificationsContainer_C_HintCooldownFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnTitleBroadcastReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnTitleBroadcastReceived(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnTitleBroadcastReceived");
		
		UGlobalGameNotificationsContainer_C_OnTitleBroadcastReceived_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGlobalGameNotificationsContainer_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnInitialized");
		
		UGlobalGameNotificationsContainer_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPlayerStateReplicated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPlayerStateReplicated_Event_1");
		
		UGlobalGameNotificationsContainer_C_OnPlayerStateReplicated_Event_1_Params params {};
		params.PlayerState = PlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.VotingStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UVotingInstance*                             VotingInstance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::VotingStarted(class UVotingInstance* VotingInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.VotingStarted");
		
		UGlobalGameNotificationsContainer_C_VotingStarted_Params params {};
		params.VotingInstance = VotingInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteResponseReceived
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SenderName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnPartyInviteResponseReceived(const class FString& UserId, const class FString& SenderName, unsigned char Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnPartyInviteResponseReceived");
		
		UGlobalGameNotificationsContainer_C_OnPartyInviteResponseReceived_Params params {};
		params.UserId = UserId;
		params.SenderName = SenderName;
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGlobalGameNotificationsContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.Construct");
		
		UGlobalGameNotificationsContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestSpecificHint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        HintKey                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::RequestSpecificHint(const class FName& HintKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.RequestSpecificHint");
		
		UGlobalGameNotificationsContainer_C_RequestSpecificHint_Params params {};
		params.HintKey = HintKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnCreatePartyResult
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      PartyId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::OnCreatePartyResult(bool Result, const class FString& PartyId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.OnCreatePartyResult");
		
		UGlobalGameNotificationsContainer_C_OnCreatePartyResult_Params params {};
		params.Result = Result;
		params.PartyId = PartyId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ClearInvites
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalGameNotificationsContainer_C::ClearInvites()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ClearInvites");
		
		UGlobalGameNotificationsContainer_C_ClearInvites_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ExecuteUbergraph_GlobalGameNotificationsContainer
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::ExecuteUbergraph_GlobalGameNotificationsContainer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.ExecuteUbergraph_GlobalGameNotificationsContainer");
		
		UGlobalGameNotificationsContainer_C_ExecuteUbergraph_GlobalGameNotificationsContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Ended Wave Hover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  Wave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::On_Ended_Wave_Hover__DelegateSignature(class ASpawnWave* Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Ended Wave Hover__DelegateSignature");
		
		UGlobalGameNotificationsContainer_C_On_Ended_Wave_Hover__DelegateSignature_Params params {};
		params.Wave = Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Started Wave Hover__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  Wave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalGameNotificationsContainer_C::On_Started_Wave_Hover__DelegateSignature(class ASpawnWave* Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C.On Started Wave Hover__DelegateSignature");
		
		UGlobalGameNotificationsContainer_C_On_Started_Wave_Hover__DelegateSignature_Params params {};
		params.Wave = Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGlobalGameNotificationsContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalGameNotificationsContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C");
		return ptr;
	}

}


