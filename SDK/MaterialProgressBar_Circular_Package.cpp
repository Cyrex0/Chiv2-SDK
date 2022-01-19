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
	 * 		Name   -> Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialProgressBar_Circular_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.PreConstruct");
		
		UMaterialProgressBar_Circular_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMaterialProgressBar_Circular_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.Construct");
		
		UMaterialProgressBar_Circular_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateProgress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaterialProgressBar_Circular_C::UpdateProgress(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateProgress");
		
		UMaterialProgressBar_Circular_C_UpdateProgress_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateKeybind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      KeyBind                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMaterialProgressBar_Circular_C::UpdateKeybind(const class FString& KeyBind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateKeybind");
		
		UMaterialProgressBar_Circular_C_UpdateKeybind_Params params {};
		params.KeyBind = KeyBind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateKeybindVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialProgressBar_Circular_C::UpdateKeybindVisibility(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateKeybindVisibility");
		
		UMaterialProgressBar_Circular_C_UpdateKeybindVisibility_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateBackgroundFillVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialProgressBar_Circular_C::UpdateBackgroundFillVisibility(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateBackgroundFillVisibility");
		
		UMaterialProgressBar_Circular_C_UpdateBackgroundFillVisibility_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateBackgroundVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialProgressBar_Circular_C::UpdateBackgroundVisibility(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateBackgroundVisibility");
		
		UMaterialProgressBar_Circular_C_UpdateBackgroundVisibility_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateProgressBarVisibility
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMaterialProgressBar_Circular_C::UpdateProgressBarVisibility(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.UpdateProgressBarVisibility");
		
		UMaterialProgressBar_Circular_C_UpdateProgressBarVisibility_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.ExecuteUbergraph_MaterialProgressBar_Circular
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMaterialProgressBar_Circular_C::ExecuteUbergraph_MaterialProgressBar_Circular(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MaterialProgressBar_Circular.MaterialProgressBar_Circular_C.ExecuteUbergraph_MaterialProgressBar_Circular");
		
		UMaterialProgressBar_Circular_C_ExecuteUbergraph_MaterialProgressBar_Circular_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMaterialProgressBar_Circular_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialProgressBar_Circular_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MaterialProgressBar_Circular.MaterialProgressBar_Circular_C");
		return ptr;
	}

}


