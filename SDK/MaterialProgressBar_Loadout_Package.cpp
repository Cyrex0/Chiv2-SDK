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
	 * 		Name   -> Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialProgressBar_Loadout_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.PreConstruct");
		
		UMaterialProgressBar_Loadout_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMaterialProgressBar_Loadout_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.Construct");
		
		UMaterialProgressBar_Loadout_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaterialProgressBar_Loadout_C::UpdateProgress(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgress");
		
		UMaterialProgressBar_Loadout_C_UpdateProgress_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundFillVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialProgressBar_Loadout_C::UpdateBackgroundFillVisibility(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundFillVisibility");
		
		UMaterialProgressBar_Loadout_C_UpdateBackgroundFillVisibility_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialProgressBar_Loadout_C::UpdateBackgroundVisibility(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateBackgroundVisibility");
		
		UMaterialProgressBar_Loadout_C_UpdateBackgroundVisibility_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgressBarVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialProgressBar_Loadout_C::UpdateProgressBarVisibility(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateProgressBarVisibility");
		
		UMaterialProgressBar_Loadout_C_UpdateProgressBarVisibility_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateColor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaterialProgressBar_Loadout_C::UpdateColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.UpdateColor");
		
		UMaterialProgressBar_Loadout_C_UpdateColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.ExecuteUbergraph_MaterialProgressBar_Loadout
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaterialProgressBar_Loadout_C::ExecuteUbergraph_MaterialProgressBar_Loadout(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C.ExecuteUbergraph_MaterialProgressBar_Loadout");
		
		UMaterialProgressBar_Loadout_C_ExecuteUbergraph_MaterialProgressBar_Loadout_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialProgressBar_Loadout_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialProgressBar_Loadout_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MaterialProgressBar_Loadout.MaterialProgressBar_Loadout_C");
		return ptr;
	}

}


