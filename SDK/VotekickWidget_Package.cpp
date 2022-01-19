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
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.SubmitVote
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Vote                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsVoteSubmitted                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVotekickWidget_C::SubmitVote(const class FName& Vote, bool* IsVoteSubmitted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.SubmitVote");
		
		UVotekickWidget_C_SubmitVote_Params params {};
		params.Vote = Vote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVoteSubmitted != nullptr)
			*IsVoteSubmitted = params.IsVoteSubmitted;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.UpdateIdleTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::UpdateIdleTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.UpdateIdleTime");
		
		UVotekickWidget_C_UpdateIdleTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.UpdateTeamDamage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::UpdateTeamDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.UpdateTeamDamage");
		
		UVotekickWidget_C_UpdateTeamDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.UpdatePing
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::UpdatePing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.UpdatePing");
		
		UVotekickWidget_C_UpdatePing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.UpdateTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::UpdateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.UpdateTime");
		
		UVotekickWidget_C_UpdateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.UpdateReportingPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::UpdateReportingPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.UpdateReportingPlayer");
		
		UVotekickWidget_C_UpdateReportingPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.UpdateKickTarget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::UpdateKickTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.UpdateKickTarget");
		
		UVotekickWidget_C_UpdateKickTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.UpdateVotesNeeded
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::UpdateVotesNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.UpdateVotesNeeded");
		
		UVotekickWidget_C_UpdateVotesNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.UpdateVotingNumbers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::UpdateVotingNumbers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.UpdateVotingNumbers");
		
		UVotekickWidget_C_UpdateVotingNumbers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.UpdateWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::UpdateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.UpdateWidget");
		
		UVotekickWidget_C_UpdateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UVotekickWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.Construct");
		
		UVotekickWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVotekickWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.Tick");
		
		UVotekickWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.EnableWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UKickVotingInstance*                         KickVote                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVotekickWidget_C::EnableWidget(class UKickVotingInstance* KickVote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.EnableWidget");
		
		UVotekickWidget_C_EnableWidget_Params params {};
		params.KickVote = KickVote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.VoteFinished
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVotingResults                              VoteResults                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UVotekickWidget_C::VoteFinished(const struct FVotingResults& VoteResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.VoteFinished");
		
		UVotekickWidget_C_VoteFinished_Params params {};
		params.VoteResults = VoteResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.DisableWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::DisableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.DisableWidget");
		
		UVotekickWidget_C_DisableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.VoteEndDisableWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::VoteEndDisableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.VoteEndDisableWidget");
		
		UVotekickWidget_C_VoteEndDisableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.VoteNo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::VoteNo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.VoteNo");
		
		UVotekickWidget_C_VoteNo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.VoteYes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::VoteYes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.VoteYes");
		
		UVotekickWidget_C_VoteYes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.OnVotesReplicated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UVotekickWidget_C::OnVotesReplicated_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.OnVotesReplicated_Event_1");
		
		UVotekickWidget_C_OnVotesReplicated_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VotekickWidget.VotekickWidget_C.ExecuteUbergraph_VotekickWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UVotekickWidget_C::ExecuteUbergraph_VotekickWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VotekickWidget.VotekickWidget_C.ExecuteUbergraph_VotekickWidget");
		
		UVotekickWidget_C_ExecuteUbergraph_VotekickWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UVotekickWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVotekickWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass VotekickWidget.VotekickWidget_C");
		return ptr;
	}

}


