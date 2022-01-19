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
	 * 		Name   -> Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.Get_Image_0_Brush_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateBrush UProgressionRewardItemWidget_C::Get_Image_0_Brush_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.Get_Image_0_Brush_1");
		
		UProgressionRewardItemWidget_C_Get_Image_0_Brush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UProgressionRewardItemWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.Construct");
		
		UProgressionRewardItemWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.ExecuteUbergraph_ProgressionRewardItemWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProgressionRewardItemWidget_C::ExecuteUbergraph_ProgressionRewardItemWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProgressionRewardItemWidget.ProgressionRewardItemWidget_C.ExecuteUbergraph_ProgressionRewardItemWidget");
		
		UProgressionRewardItemWidget_C_ExecuteUbergraph_ProgressionRewardItemWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UProgressionRewardItemWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProgressionRewardItemWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ProgressionRewardItemWidget.ProgressionRewardItemWidget_C");
		return ptr;
	}

}


