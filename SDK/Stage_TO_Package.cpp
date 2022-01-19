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
	 * 		Name   -> Function Stage_TO.Stage_TO_C.CommitNewObjectiveText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::CommitNewObjectiveText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.CommitNewObjectiveText");
		
		UStage_TO_C_CommitNewObjectiveText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.On Player Selected Spectator Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOnPlayerSelectedSpectatorMode                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStage_TO_C::On_Player_Selected_Spectator_Mode(bool bOnPlayerSelectedSpectatorMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.On Player Selected Spectator Mode");
		
		UStage_TO_C_On_Player_Selected_Spectator_Mode_Params params {};
		params.bOnPlayerSelectedSpectatorMode = bOnPlayerSelectedSpectatorMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.ResizeFFAObjectiveWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFFAObjectiveWidget_Leader_C*                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TO_C::ResizeFFAObjectiveWidget(class UFFAObjectiveWidget_Leader_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.ResizeFFAObjectiveWidget");
		
		UStage_TO_C_ResizeFFAObjectiveWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.UpdateListOrder
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::UpdateListOrder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.UpdateListOrder");
		
		UStage_TO_C_UpdateListOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.Get_MaxScoreText_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UStage_TO_C::Get_MaxScoreText_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.Get_MaxScoreText_Text_1");
		
		UStage_TO_C_Get_MaxScoreText_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.Get_StageTimeRemaining_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UStage_TO_C::Get_StageTimeRemaining_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.Get_StageTimeRemaining_Text_1");
		
		UStage_TO_C_Get_StageTimeRemaining_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.SetScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Agatha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Mason                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        TopScoreText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        BottomScoreText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStage_TO_C::SetScore(float Agatha, float Mason, const class FText& TopScoreText, const class FText& BottomScoreText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.SetScore");
		
		UStage_TO_C_SetScore_Params params {};
		params.Agatha = Agatha;
		params.Mason = Mason;
		params.TopScoreText = TopScoreText;
		params.BottomScoreText = BottomScoreText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.Apply Progress Updates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::Apply_Progress_Updates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.Apply Progress Updates");
		
		UStage_TO_C_Apply_Progress_Updates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.OnPossessedPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TO_C::OnPossessedPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.OnPossessedPawn");
		
		UStage_TO_C_OnPossessedPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.UpdateObjectiveContextMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::UpdateObjectiveContextMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.UpdateObjectiveContextMessage");
		
		UStage_TO_C_UpdateObjectiveContextMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.OnNewObjectiveContextMessage_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FObjectiveContextMessage                    ObjectiveContextMessage                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStage_TO_C::OnNewObjectiveContextMessage_Event_1(const struct FObjectiveContextMessage& ObjectiveContextMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.OnNewObjectiveContextMessage_Event_1");
		
		UStage_TO_C_OnNewObjectiveContextMessage_Event_1_Params params {};
		params.ObjectiveContextMessage = ObjectiveContextMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.OnBonusTimeAdded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BonusTimeSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TO_C::OnBonusTimeAdded(float BonusTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.OnBonusTimeAdded");
		
		UStage_TO_C_OnBonusTimeAdded_Params params {};
		params.BonusTimeSeconds = BonusTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.StageEnded
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::StageEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.StageEnded");
		
		UStage_TO_C_StageEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.StageStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::StageStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.StageStarted");
		
		UStage_TO_C_StageStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.OnTeamChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLTeam*                                    NewTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TO_C::OnTeamChanged(class ATBLTeam* NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.OnTeamChanged");
		
		UStage_TO_C_OnTeamChanged_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.SetAttackingDefendingstate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::SetAttackingDefendingstate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.SetAttackingDefendingstate");
		
		UStage_TO_C_SetAttackingDefendingstate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.Current Stage Changed_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Previous_Stage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     New_Stage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TO_C::Current_Stage_Changed_Event_1(class UObject* Previous_Stage, class UObject* New_Stage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.Current Stage Changed_Event_1");
		
		UStage_TO_C_Current_Stage_Changed_Event_1_Params params {};
		params.Previous_Stage = Previous_Stage;
		params.New_Stage = New_Stage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UStage_TO_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.Construct");
		
		UStage_TO_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.Objective Complete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::Objective_Complete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.Objective Complete");
		
		UStage_TO_C_Objective_Complete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.Objective Failed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::Objective_Failed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.Objective Failed");
		
		UStage_TO_C_Objective_Failed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.Set Bottom Progress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Score_Text                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStage_TO_C::Set_Bottom_Progress(float Progress, const class FText& Score_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.Set Bottom Progress");
		
		UStage_TO_C_Set_Bottom_Progress_Params params {};
		params.Progress = Progress;
		params.Score_Text = Score_Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.New Objective
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::New_Objective()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.New Objective");
		
		UStage_TO_C_New_Objective_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.TutorialWaveArenaReset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UStage_TO_C::TutorialWaveArenaReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.TutorialWaveArenaReset");
		
		UStage_TO_C_TutorialWaveArenaReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.Set Top Progress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Score_Text                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStage_TO_C::Set_Top_Progress(float Progress, const class FText& Score_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.Set Top Progress");
		
		UStage_TO_C_Set_Top_Progress_Params params {};
		params.Progress = Progress;
		params.Score_Text = Score_Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.TutorialSetWaveMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStage_TO_C::TutorialSetWaveMode(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.TutorialSetWaveMode");
		
		UStage_TO_C_TutorialSetWaveMode_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.UpdateWaveCount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NumberLeft                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                NumberTotal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TO_C::UpdateWaveCount(int NumberLeft, int NumberTotal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.UpdateWaveCount");
		
		UStage_TO_C_UpdateWaveCount_Params params {};
		params.NumberLeft = NumberLeft;
		params.NumberTotal = NumberTotal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.UpdateTimeLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeUntilNextWave                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TO_C::UpdateTimeLeft(float TimeUntilNextWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.UpdateTimeLeft");
		
		UStage_TO_C_UpdateTimeLeft_Params params {};
		params.TimeUntilNextWave = TimeUntilNextWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.UpdateWaveText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStage_TO_C::UpdateWaveText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.UpdateWaveText");
		
		UStage_TO_C_UpdateWaveText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.OnWaveCompleted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        WaveCompleteText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        NextWaveText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UStage_TO_C::OnWaveCompleted(const class FText& WaveCompleteText, const class FText& NextWaveText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.OnWaveCompleted");
		
		UStage_TO_C_OnWaveCompleted_Params params {};
		params.WaveCompleteText = WaveCompleteText;
		params.NextWaveText = NextWaveText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Stage_TO.Stage_TO_C.ExecuteUbergraph_Stage_TO
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStage_TO_C::ExecuteUbergraph_Stage_TO(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stage_TO.Stage_TO_C.ExecuteUbergraph_Stage_TO");
		
		UStage_TO_C_ExecuteUbergraph_Stage_TO_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UStage_TO_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStage_TO_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Stage_TO.Stage_TO_C");
		return ptr;
	}

}


