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
	 * 		Name   -> Function HUDMarkerContainer.HUDMarkerContainer_C.AddSubwidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDContainerSubWidget*                      SubWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDMarkerContainer_C::AddSubwidget(class UHUDContainerSubWidget* SubWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDMarkerContainer.HUDMarkerContainer_C.AddSubwidget");
		
		UHUDMarkerContainer_C_AddSubwidget_Params params {};
		params.SubWidget = SubWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDMarkerContainer.HUDMarkerContainer_C.RemoveSubwidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDContainerSubWidget*                      SubWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDMarkerContainer_C::RemoveSubwidget(class UHUDContainerSubWidget* SubWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDMarkerContainer.HUDMarkerContainer_C.RemoveSubwidget");
		
		UHUDMarkerContainer_C_RemoveSubwidget_Params params {};
		params.SubWidget = SubWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetInitFromPool
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDContainerSubWidget*                      SubWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDMarkerContainer_C::SubwidgetInitFromPool(class UHUDContainerSubWidget* SubWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetInitFromPool");
		
		UHUDMarkerContainer_C_SubwidgetInitFromPool_Params params {};
		params.SubWidget = SubWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetReturnToPool
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDContainerSubWidget*                      SubWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDMarkerContainer_C::SubwidgetReturnToPool(class UHUDContainerSubWidget* SubWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetReturnToPool");
		
		UHUDMarkerContainer_C_SubwidgetReturnToPool_Params params {};
		params.SubWidget = SubWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function HUDMarkerContainer.HUDMarkerContainer_C.ExecuteUbergraph_HUDMarkerContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDMarkerContainer_C::ExecuteUbergraph_HUDMarkerContainer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDMarkerContainer.HUDMarkerContainer_C.ExecuteUbergraph_HUDMarkerContainer");
		
		UHUDMarkerContainer_C_ExecuteUbergraph_HUDMarkerContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHUDMarkerContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDMarkerContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDMarkerContainer.HUDMarkerContainer_C");
		return ptr;
	}

}


