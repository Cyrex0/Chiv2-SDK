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
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetRejectInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        RejectInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::SetRejectInput(const class FName& RejectInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetRejectInput");
		
		UForwardSpawnWidget_C_SetRejectInput_Params params {};
		params.RejectInput = RejectInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetAcceptInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AcceptInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::SetAcceptInput(const class FName& AcceptInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetAcceptInput");
		
		UForwardSpawnWidget_C_SetAcceptInput_Params params {};
		params.AcceptInput = AcceptInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetInputVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForwardSpawnWidget_C::SetInputVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetInputVisibility");
		
		UForwardSpawnWidget_C_SetInputVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Playing State
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		WaveWidgetPlayingState_EWaveWidgetPlayingState     New_Playing_State                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Changed_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForwardSpawnWidget_C::Set_Playing_State(WaveWidgetPlayingState_EWaveWidgetPlayingState New_Playing_State, bool* Changed_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Playing State");
		
		UForwardSpawnWidget_C_Set_Playing_State_Params params {};
		params.New_Playing_State = New_Playing_State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Changed_ != nullptr)
			*Changed_ = params.Changed_;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get seconds to deploy
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        SecondsText                                                (Parm, OutParm)
	 */
	void UForwardSpawnWidget_C::Get_seconds_to_deploy(int* Seconds, class FText* SecondsText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get seconds to deploy");
		
		UForwardSpawnWidget_C_Get_seconds_to_deploy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
		if (SecondsText != nullptr)
			*SecondsText = params.SecondsText;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.ApplyStateStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::ApplyStateStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.ApplyStateStyle");
		
		UForwardSpawnWidget_C_ApplyStateStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinOverlay_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UForwardSpawnWidget_C::Get_JoinOverlay_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinOverlay_Visibility_1");
		
		UForwardSpawnWidget_C_Get_JoinOverlay_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinedOverlay_Visibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UForwardSpawnWidget_C::Get_JoinedOverlay_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Get_JoinedOverlay_Visibility_1");
		
		UForwardSpawnWidget_C_Get_JoinedOverlay_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.GetVisibility_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	UMG_ESlateVisibility UForwardSpawnWidget_C::GetVisibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.GetVisibility_1");
		
		UForwardSpawnWidget_C_GetVisibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Construct");
		
		UForwardSpawnWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Spawn Wave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  In_Spawn_Wave                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::Set_Spawn_Wave(class ASpawnWave* In_Spawn_Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Set Spawn Wave");
		
		UForwardSpawnWidget_C_Set_Spawn_Wave_Params params {};
		params.In_Spawn_Wave = In_Spawn_Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UForwardSpawnWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForwardSpawnWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.PreConstruct");
		
		UForwardSpawnWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Tick");
		
		UForwardSpawnWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnAssignedToActor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::K2_OnAssignedToActor(class AActor* Actor, class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnAssignedToActor");
		
		UForwardSpawnWidget_C_K2_OnAssignedToActor_Params params {};
		params.Actor = Actor;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnReturnedToPool
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::K2_OnReturnedToPool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.K2_OnReturnedToPool");
		
		UForwardSpawnWidget_C_K2_OnReturnedToPool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Handle Accept
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::Handle_Accept()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Handle Accept");
		
		UForwardSpawnWidget_C_Handle_Accept_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start hide timer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::Start_hide_timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start hide timer");
		
		UForwardSpawnWidget_C_Start_hide_timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::Fade_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade In");
		
		UForwardSpawnWidget_C_Fade_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade Out
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::Fade_Out()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Fade Out");
		
		UForwardSpawnWidget_C_Fade_Out_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start fade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::Start_fade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Start fade");
		
		UForwardSpawnWidget_C_Start_fade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Cinematic Mode Changed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		CinematicBarsMode_ECinematicBarsMode               New_mode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::Cinematic_Mode_Changed(CinematicBarsMode_ECinematicBarsMode New_mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Cinematic Mode Changed");
		
		UForwardSpawnWidget_C_Cinematic_Mode_Changed_Params params {};
		params.New_mode = New_mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::OnAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationStarted");
		
		UForwardSpawnWidget_C_OnAnimationStarted_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnAnimationFinished");
		
		UForwardSpawnWidget_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.WidgetAnimationEvt_JoinedAnimation_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::WidgetAnimationEvt_JoinedAnimation_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.WidgetAnimationEvt_JoinedAnimation_K2Node_WidgetAnimationEvent_1");
		
		UForwardSpawnWidget_C_WidgetAnimationEvt_JoinedAnimation_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetPromptMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPlayerPromptFormattedMessage               Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                MessageId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::SetPromptMessage(const struct FPlayerPromptFormattedMessage& Message, int MessageId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.SetPromptMessage");
		
		UForwardSpawnWidget_C_SetPromptMessage_Params params {};
		params.Message = Message;
		params.MessageId = MessageId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.PromptFadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::PromptFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.PromptFadeOut");
		
		UForwardSpawnWidget_C_PromptFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleReject
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::HandleReject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleReject");
		
		UForwardSpawnWidget_C_HandleReject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleNoLongerOutOfCombat
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::HandleNoLongerOutOfCombat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.HandleNoLongerOutOfCombat");
		
		UForwardSpawnWidget_C_HandleNoLongerOutOfCombat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnClientPossessedPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::OnClientPossessedPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnClientPossessedPawn");
		
		UForwardSpawnWidget_C_OnClientPossessedPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnRemoveCondition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EConditionType                                 Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::OnRemoveCondition(class AActor* Actor, TBL_EConditionType Condition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.OnRemoveCondition");
		
		UForwardSpawnWidget_C_OnRemoveCondition_Params params {};
		params.Actor = Actor;
		params.Condition = Condition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.EnableInputs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::EnableInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.EnableInputs");
		
		UForwardSpawnWidget_C_EnableInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.DisableInputs
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::DisableInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.DisableInputs");
		
		UForwardSpawnWidget_C_DisableInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Accept Key pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::Accept_Key_pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Accept Key pressed");
		
		UForwardSpawnWidget_C_Accept_Key_pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Reject Input Pressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForwardSpawnWidget_C::Reject_Input_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Reject Input Pressed");
		
		UForwardSpawnWidget_C_Reject_Input_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.InputModeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::InputModeChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.InputModeChanged");
		
		UForwardSpawnWidget_C_InputModeChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.ExecuteUbergraph_ForwardSpawnWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::ExecuteUbergraph_ForwardSpawnWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.ExecuteUbergraph_ForwardSpawnWidget");
		
		UForwardSpawnWidget_C_ExecuteUbergraph_ForwardSpawnWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Clicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  Wave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UForwardSpawnWidget_C::Clicked__DelegateSignature(class ASpawnWave* Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Clicked__DelegateSignature");
		
		UForwardSpawnWidget_C_Clicked__DelegateSignature_Params params {};
		params.Wave = Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ForwardSpawnWidget.ForwardSpawnWidget_C.Hovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForwardSpawnWidget_C::Hovered__DelegateSignature(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForwardSpawnWidget.ForwardSpawnWidget_C.Hovered__DelegateSignature");
		
		UForwardSpawnWidget_C_Hovered__DelegateSignature_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UForwardSpawnWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForwardSpawnWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ForwardSpawnWidget.ForwardSpawnWidget_C");
		return ptr;
	}

}


