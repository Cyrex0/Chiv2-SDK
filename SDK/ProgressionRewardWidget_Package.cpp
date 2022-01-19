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
	 * 		Name   -> Function ProgressionRewardWidget.ProgressionRewardWidget_C.GetSpacers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USpacer*                                     Spacer1                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USpacer*                                     Spacer2                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USpacer*                                     Spacer3                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgressionRewardWidget_C::GetSpacers(class USpacer** Spacer1, class USpacer** Spacer2, class USpacer** Spacer3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgressionRewardWidget.ProgressionRewardWidget_C.GetSpacers");
		
		UProgressionRewardWidget_C_GetSpacers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Spacer1 != nullptr)
			*Spacer1 = params.Spacer1;
		if (Spacer2 != nullptr)
			*Spacer2 = params.Spacer2;
		if (Spacer3 != nullptr)
			*Spacer3 = params.Spacer3;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProgressionRewardWidget.ProgressionRewardWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UProgressionRewardWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgressionRewardWidget.ProgressionRewardWidget_C.PreConstruct");
		
		UProgressionRewardWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProgressionRewardWidget.ProgressionRewardWidget_C.Initialize Widget With Rewards
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVirtualGoodReward>                  VirtualGoodRewards                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UProgressionRewardWidget_C::Initialize_Widget_With_Rewards(class ATBLPlayerState* PlayerState, TArray<struct FVirtualGoodReward> VirtualGoodRewards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgressionRewardWidget.ProgressionRewardWidget_C.Initialize Widget With Rewards");
		
		UProgressionRewardWidget_C_Initialize_Widget_With_Rewards_Params params {};
		params.PlayerState = PlayerState;
		params.VirtualGoodRewards = VirtualGoodRewards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProgressionRewardWidget.ProgressionRewardWidget_C.SetHorizontalAlignment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		SlateCore_EHorizontalAlignment                     HorizontalAlignment                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgressionRewardWidget_C::SetHorizontalAlignment(SlateCore_EHorizontalAlignment HorizontalAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgressionRewardWidget.ProgressionRewardWidget_C.SetHorizontalAlignment");
		
		UProgressionRewardWidget_C_SetHorizontalAlignment_Params params {};
		params.HorizontalAlignment = HorizontalAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProgressionRewardWidget.ProgressionRewardWidget_C.ExecuteUbergraph_ProgressionRewardWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgressionRewardWidget_C::ExecuteUbergraph_ProgressionRewardWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgressionRewardWidget.ProgressionRewardWidget_C.ExecuteUbergraph_ProgressionRewardWidget");
		
		UProgressionRewardWidget_C_ExecuteUbergraph_ProgressionRewardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UProgressionRewardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressionRewardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgressionRewardWidget.ProgressionRewardWidget_C");
		return ptr;
	}

}


