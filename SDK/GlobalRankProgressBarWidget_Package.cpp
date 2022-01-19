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
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.GetStartingRatio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UProgressBar*                                Bar                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalRankProgressBarWidget_C::GetStartingRatio(class UProgressBar* Bar, int Index, float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.GetStartingRatio");
		
		UGlobalRankProgressBarWidget_C_GetStartingRatio_Params params {};
		params.Bar = Bar;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.SetLevelData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalRankProgressBarWidget_C::SetLevelData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.SetLevelData");
		
		UGlobalRankProgressBarWidget_C_SetLevelData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalRankProgressBarWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Tick");
		
		UGlobalRankProgressBarWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsStatValueChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EOnlineStat                                    Stat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalRankProgressBarWidget_C::OnlineStatsStatValueChanged(TBL_EOnlineStat Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsStatValueChanged");
		
		UGlobalRankProgressBarWidget_C_OnlineStatsStatValueChanged_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Start Animating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalRankProgressBarWidget_C::Start_Animating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Start Animating");
		
		UGlobalRankProgressBarWidget_C_Start_Animating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.On Progress Bar Filled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalRankProgressBarWidget_C::On_Progress_Bar_Filled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.On Progress Bar Filled");
		
		UGlobalRankProgressBarWidget_C_On_Progress_Bar_Filled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Inital Values
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalRankProgressBarWidget_C::Set_Inital_Values()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Inital Values");
		
		UGlobalRankProgressBarWidget_C_Set_Inital_Values_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Data
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalRankProgressBarWidget_C::Set_Data()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Set Data");
		
		UGlobalRankProgressBarWidget_C_Set_Data_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsLogin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLoaded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGlobalRankProgressBarWidget_C::OnStatsLogin(bool bIsLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsLogin");
		
		UGlobalRankProgressBarWidget_C_OnStatsLogin_Params params {};
		params.bIsLoaded = bIsLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTBLOnlineStats                             OnlineStats                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGlobalRankProgressBarWidget_C::OnStatsUpdated(const struct FTBLOnlineStats& OnlineStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnStatsUpdated");
		
		UGlobalRankProgressBarWidget_C_OnStatsUpdated_Params params {};
		params.OnlineStats = OnlineStats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Bind Delegates
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalRankProgressBarWidget_C::Bind_Delegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.Bind Delegates");
		
		UGlobalRankProgressBarWidget_C_Bind_Delegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsOriginalValueChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EOnlineStat                                    Stat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalRankProgressBarWidget_C::OnlineStatsOriginalValueChanged(TBL_EOnlineStat Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnlineStatsOriginalValueChanged");
		
		UGlobalRankProgressBarWidget_C_OnlineStatsOriginalValueChanged_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGlobalRankProgressBarWidget_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnInitialized");
		
		UGlobalRankProgressBarWidget_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.ExecuteUbergraph_GlobalRankProgressBarWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGlobalRankProgressBarWidget_C::ExecuteUbergraph_GlobalRankProgressBarWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.ExecuteUbergraph_GlobalRankProgressBarWidget");
		
		UGlobalRankProgressBarWidget_C_ExecuteUbergraph_GlobalRankProgressBarWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnProgressCompleted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalRankProgressBarWidget_C::OnProgressCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnProgressCompleted__DelegateSignature");
		
		UGlobalRankProgressBarWidget_C_OnProgressCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnLeveledUp__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UGlobalRankProgressBarWidget_C::OnLeveledUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C.OnLeveledUp__DelegateSignature");
		
		UGlobalRankProgressBarWidget_C_OnLeveledUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGlobalRankProgressBarWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGlobalRankProgressBarWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GlobalRankProgressBarWidget.GlobalRankProgressBarWidget_C");
		return ptr;
	}

}


