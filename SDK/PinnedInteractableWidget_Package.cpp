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
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.GetFadeOutAnimTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float UPinnedInteractableWidget_C::GetFadeOutAnimTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.GetFadeOutAnimTime");
		
		UPinnedInteractableWidget_C_GetFadeOutAnimTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.HighlightActor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPinnedInteractableWidget_C::HighlightActor(class AActor* Actor, bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.HighlightActor");
		
		UPinnedInteractableWidget_C_HighlightActor_Params params {};
		params.Actor = Actor;
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.CanFadeOut
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UPinnedInteractableWidget_C::CanFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.CanFadeOut");
		
		UPinnedInteractableWidget_C_CanFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetInteractionDescription
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractableComponent*                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::SetInteractionDescription(class UInteractableComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetInteractionDescription");
		
		UPinnedInteractableWidget_C_SetInteractionDescription_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::SetProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.SetProgress");
		
		UPinnedInteractableWidget_C_SetProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.Tick");
		
		UPinnedInteractableWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::OnUse(class APawn* Pawn, class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUse");
		
		UPinnedInteractableWidget_C_OnUse_Params params {};
		params.Pawn = Pawn;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.Use Released
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              UseTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::Use_Released(class APawn* Pawn, float UseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.Use Released");
		
		UPinnedInteractableWidget_C_Use_Released_Params params {};
		params.Pawn = Pawn;
		params.UseTime = UseTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::OnInteractableLostFocus_Event_1(class APawn* Pawn, class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus_Event_1");
		
		UPinnedInteractableWidget_C_OnInteractableLostFocus_Event_1_Params params {};
		params.Pawn = Pawn;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseHeldInitiated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::OnUseHeldInitiated_Event_1(class APawn* Pawn, class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseHeldInitiated_Event_1");
		
		UPinnedInteractableWidget_C_OnUseHeldInitiated_Event_1_Params params {};
		params.Pawn = Pawn;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableEnabled_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPinnedInteractableWidget_C::OnInteractableEnabled_Event_1(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableEnabled_Event_1");
		
		UPinnedInteractableWidget_C_OnInteractableEnabled_Event_1_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::OnAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationStarted");
		
		UPinnedInteractableWidget_C_OnAnimationStarted_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnAnimationFinished");
		
		UPinnedInteractableWidget_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractbleFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::OnInteractbleFocus(class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractbleFocus");
		
		UPinnedInteractableWidget_C_OnInteractbleFocus_Params params {};
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::OnInteractableLostFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInteractableLostFocus");
		
		UPinnedInteractableWidget_C_OnInteractableLostFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.On Assigned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInteractableComponent*                      Interactable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::On_Assigned(class AActor* Actor, class UInteractableComponent* Interactable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.On Assigned");
		
		UPinnedInteractableWidget_C_On_Assigned_Params params {};
		params.Actor = Actor;
		params.Interactable = Interactable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.InitializeHealthBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractableComponent*                      Comp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::InitializeHealthBar(class UInteractableComponent* Comp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.InitializeHealthBar");
		
		UPinnedInteractableWidget_C_InitializeHealthBar_Params params {};
		params.Comp = Comp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeIn");
		
		UPinnedInteractableWidget_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOut");
		
		UPinnedInteractableWidget_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_1");
		
		UPinnedInteractableWidget_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOutUsableOverlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::FadeOutUsableOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeOutUsableOverlay");
		
		UPinnedInteractableWidget_C_FadeOutUsableOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_2");
		
		UPinnedInteractableWidget_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeInUsableOverlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::FadeInUsableOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.FadeInUsableOverlay");
		
		UPinnedInteractableWidget_C_FadeInUsableOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.CustomEvent_3");
		
		UPinnedInteractableWidget_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1");
		
		UPinnedInteractableWidget_C_WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2");
		
		UPinnedInteractableWidget_C_WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPinnedInteractableWidget_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnInitialized");
		
		UPinnedInteractableWidget_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnPossessedPawn_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnPossessedPawn_Event_1");
		
		UPinnedInteractableWidget_C_OnPossessedPawn_Event_1_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnKilled_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UPinnedInteractableWidget_C::OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnKilled_Event_1");
		
		UPinnedInteractableWidget_C_OnKilled_Event_1_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseableActorFocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UInteractableComponent*                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::OnUseableActorFocused(class UInteractableComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.OnUseableActorFocused");
		
		UPinnedInteractableWidget_C_OnUseableActorFocused_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PinnedInteractableWidget.PinnedInteractableWidget_C.ExecuteUbergraph_PinnedInteractableWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPinnedInteractableWidget_C::ExecuteUbergraph_PinnedInteractableWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PinnedInteractableWidget.PinnedInteractableWidget_C.ExecuteUbergraph_PinnedInteractableWidget");
		
		UPinnedInteractableWidget_C_ExecuteUbergraph_PinnedInteractableWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPinnedInteractableWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPinnedInteractableWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PinnedInteractableWidget.PinnedInteractableWidget_C");
		return ptr;
	}

}


