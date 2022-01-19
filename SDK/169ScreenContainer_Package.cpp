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
	 * 		Name   -> Function 169ScreenContainer.169ScreenContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void U169ScreenContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 169ScreenContainer.169ScreenContainer_C.Construct");
		
		U169ScreenContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function 169ScreenContainer.169ScreenContainer_C.SetScaling
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		SlateCore_EVerticalAlignment                       ScaleBox_Vertical                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SlateCore_EHorizontalAlignment                     ScaleBox_Horizontal                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SlateCore_EVerticalAlignment                       SizeBox_Vertical                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		SlateCore_EHorizontalAlignment                     SizeBoxHorizontal                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U169ScreenContainer_C::SetScaling(SlateCore_EVerticalAlignment ScaleBox_Vertical, SlateCore_EHorizontalAlignment ScaleBox_Horizontal, SlateCore_EVerticalAlignment SizeBox_Vertical, SlateCore_EHorizontalAlignment SizeBoxHorizontal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 169ScreenContainer.169ScreenContainer_C.SetScaling");
		
		U169ScreenContainer_C_SetScaling_Params params {};
		params.ScaleBox_Vertical = ScaleBox_Vertical;
		params.ScaleBox_Horizontal = ScaleBox_Horizontal;
		params.SizeBox_Vertical = SizeBox_Vertical;
		params.SizeBoxHorizontal = SizeBoxHorizontal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function 169ScreenContainer.169ScreenContainer_C.ExecuteUbergraph_169ScreenContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void U169ScreenContainer_C::ExecuteUbergraph_169ScreenContainer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function 169ScreenContainer.169ScreenContainer_C.ExecuteUbergraph_169ScreenContainer");
		
		U169ScreenContainer_C_ExecuteUbergraph_169ScreenContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction U169ScreenContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* U169ScreenContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass 169ScreenContainer.169ScreenContainer_C");
		return ptr;
	}

}


