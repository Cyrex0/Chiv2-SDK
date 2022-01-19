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
	 * 		Name   -> Function QuickplayFilter.QuickplayFilter_C.Update Selected Queue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UQuickplayFilterButton_C*                    Filter_Button                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilter_C::Update_Selected_Queue(class UQuickplayFilterButton_C* Filter_Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilter.QuickplayFilter_C.Update Selected Queue");
		
		UQuickplayFilter_C_Update_Selected_Queue_Params params {};
		params.Filter_Button = Filter_Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilter.QuickplayFilter_C.UpdateVisibleButtons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                SelectedCount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilter_C::UpdateVisibleButtons(int* SelectedCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilter.QuickplayFilter_C.UpdateVisibleButtons");
		
		UQuickplayFilter_C_UpdateVisibleButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectedCount != nullptr)
			*SelectedCount = params.SelectedCount;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilter.QuickplayFilter_C.Get Selected Queues
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMatchmakingQueue>                   Queues                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UQuickplayFilter_C::Get_Selected_Queues(TArray<struct FMatchmakingQueue>* Queues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilter.QuickplayFilter_C.Get Selected Queues");
		
		UQuickplayFilter_C_Get_Selected_Queues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Queues != nullptr)
			*Queues = params.Queues;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilter.QuickplayFilter_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UQuickplayFilter_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilter.QuickplayFilter_C.OnInitialized");
		
		UQuickplayFilter_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilter.QuickplayFilter_C.OnMatchmakingQueueStatisticsChanged_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        QueueName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilter_C::OnMatchmakingQueueStatisticsChanged_Event_1(const class FName& QueueName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilter.QuickplayFilter_C.OnMatchmakingQueueStatisticsChanged_Event_1");
		
		UQuickplayFilter_C_OnMatchmakingQueueStatisticsChanged_Event_1_Params params {};
		params.QueueName = QueueName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilter.QuickplayFilter_C.On Queues Updated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQuickplayFilter_C::On_Queues_Updated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilter.QuickplayFilter_C.On Queues Updated");
		
		UQuickplayFilter_C_On_Queues_Updated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilter.QuickplayFilter_C.OnMatchMakingChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsMatchmaking                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuickplayFilter_C::OnMatchMakingChanged(bool bIsMatchmaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilter.QuickplayFilter_C.OnMatchMakingChanged");
		
		UQuickplayFilter_C_OnMatchMakingChanged_Params params {};
		params.bIsMatchmaking = bIsMatchmaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilter.QuickplayFilter_C.OnFilterSelectionChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UQuickplayFilterButton_C*                    QuickplayFilterButton                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilter_C::OnFilterSelectionChange(class UQuickplayFilterButton_C* QuickplayFilterButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilter.QuickplayFilter_C.OnFilterSelectionChange");
		
		UQuickplayFilter_C_OnFilterSelectionChange_Params params {};
		params.QuickplayFilterButton = QuickplayFilterButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function QuickplayFilter.QuickplayFilter_C.ExecuteUbergraph_QuickplayFilter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuickplayFilter_C::ExecuteUbergraph_QuickplayFilter(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuickplayFilter.QuickplayFilter_C.ExecuteUbergraph_QuickplayFilter");
		
		UQuickplayFilter_C_ExecuteUbergraph_QuickplayFilter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UQuickplayFilter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickplayFilter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuickplayFilter.QuickplayFilter_C");
		return ptr;
	}

}


