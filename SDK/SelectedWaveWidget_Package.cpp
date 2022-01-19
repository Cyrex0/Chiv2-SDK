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
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.Get seconds to deploy
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Seconds_as_text                                            (Parm, OutParm)
	 * 		int                                                Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectedWaveWidget_C::Get_seconds_to_deploy(class FText* Seconds_as_text, int* Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.Get seconds to deploy");
		
		USelectedWaveWidget_C_Get_seconds_to_deploy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Seconds_as_text != nullptr)
			*Seconds_as_text = params.Seconds_as_text;
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USelectedWaveWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.Construct");
		
		USelectedWaveWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.Set Spawn Wave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  In_Spawn_Wave                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectedWaveWidget_C::Set_Spawn_Wave(class ASpawnWave* In_Spawn_Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.Set Spawn Wave");
		
		USelectedWaveWidget_C_Set_Spawn_Wave_Params params {};
		params.In_Spawn_Wave = In_Spawn_Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.ShowWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USelectedWaveWidget_C::ShowWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.ShowWidget");
		
		USelectedWaveWidget_C_ShowWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.HideWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USelectedWaveWidget_C::HideWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.HideWidget");
		
		USelectedWaveWidget_C_HideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.InvalidateCache
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USelectedWaveWidget_C::InvalidateCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.InvalidateCache");
		
		USelectedWaveWidget_C_InvalidateCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USelectedWaveWidget_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1");
		
		USelectedWaveWidget_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USelectedWaveWidget_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2");
		
		USelectedWaveWidget_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.UpdateVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USelectedWaveWidget_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.UpdateVisibility");
		
		USelectedWaveWidget_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.Current Stage Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Previous_Stage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     New_Stage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectedWaveWidget_C::Current_Stage_Changed(class UObject* Previous_Stage, class UObject* New_Stage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.Current Stage Changed");
		
		USelectedWaveWidget_C_Current_Stage_Changed_Params params {};
		params.Previous_Stage = Previous_Stage;
		params.New_Stage = New_Stage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.Client Tickets Changed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USelectedWaveWidget_C::Client_Tickets_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.Client Tickets Changed");
		
		USelectedWaveWidget_C_Client_Tickets_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectedWaveWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.Tick");
		
		USelectedWaveWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.HandlePlayerSelectedSpectatorMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPlayerSpectator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectedWaveWidget_C::HandlePlayerSelectedSpectatorMode(bool IsPlayerSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.HandlePlayerSelectedSpectatorMode");
		
		USelectedWaveWidget_C_HandlePlayerSelectedSpectatorMode_Params params {};
		params.IsPlayerSpectator = IsPlayerSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.ExecuteUbergraph_SelectedWaveWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectedWaveWidget_C::ExecuteUbergraph_SelectedWaveWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.ExecuteUbergraph_SelectedWaveWidget");
		
		USelectedWaveWidget_C_ExecuteUbergraph_SelectedWaveWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.ChangeLoadout__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void USelectedWaveWidget_C::ChangeLoadout__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.ChangeLoadout__DelegateSignature");
		
		USelectedWaveWidget_C_ChangeLoadout__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.Clicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  Wave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USelectedWaveWidget_C::Clicked__DelegateSignature(class ASpawnWave* Wave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.Clicked__DelegateSignature");
		
		USelectedWaveWidget_C_Clicked__DelegateSignature_Params params {};
		params.Wave = Wave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SelectedWaveWidget.SelectedWaveWidget_C.Hovered__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USelectedWaveWidget_C::Hovered__DelegateSignature(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SelectedWaveWidget.SelectedWaveWidget_C.Hovered__DelegateSignature");
		
		USelectedWaveWidget_C_Hovered__DelegateSignature_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USelectedWaveWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelectedWaveWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SelectedWaveWidget.SelectedWaveWidget_C");
		return ptr;
	}

}


