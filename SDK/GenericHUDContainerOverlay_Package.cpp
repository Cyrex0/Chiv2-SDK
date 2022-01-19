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
	 * 		Name   -> Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.AddSubwidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDContainerSubWidget*                      SubWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericHUDContainerOverlay_C::AddSubwidget(class UHUDContainerSubWidget* SubWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.AddSubwidget");
		
		UGenericHUDContainerOverlay_C_AddSubwidget_Params params {};
		params.SubWidget = SubWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.RemoveSubwidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDContainerSubWidget*                      SubWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericHUDContainerOverlay_C::RemoveSubwidget(class UHUDContainerSubWidget* SubWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.RemoveSubwidget");
		
		UGenericHUDContainerOverlay_C_RemoveSubwidget_Params params {};
		params.SubWidget = SubWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.ExecuteUbergraph_GenericHUDContainerOverlay
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGenericHUDContainerOverlay_C::ExecuteUbergraph_GenericHUDContainerOverlay(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GenericHUDContainerOverlay.GenericHUDContainerOverlay_C.ExecuteUbergraph_GenericHUDContainerOverlay");
		
		UGenericHUDContainerOverlay_C_ExecuteUbergraph_GenericHUDContainerOverlay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGenericHUDContainerOverlay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericHUDContainerOverlay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GenericHUDContainerOverlay.GenericHUDContainerOverlay_C");
		return ptr;
	}

}


