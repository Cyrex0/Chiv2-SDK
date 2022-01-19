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
	 * 		Name   -> Function LookAtContainer.LookAtContainer_C.Update
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULookAtContainer_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LookAtContainer.LookAtContainer_C.Update");
		
		ULookAtContainer_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LookAtContainer.LookAtContainer_C.AddSubwidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDContainerSubWidget*                      SubWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULookAtContainer_C::AddSubwidget(class UHUDContainerSubWidget* SubWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LookAtContainer.LookAtContainer_C.AddSubwidget");
		
		ULookAtContainer_C_AddSubwidget_Params params {};
		params.SubWidget = SubWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LookAtContainer.LookAtContainer_C.RemoveSubwidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDContainerSubWidget*                      SubWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULookAtContainer_C::RemoveSubwidget(class UHUDContainerSubWidget* SubWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LookAtContainer.LookAtContainer_C.RemoveSubwidget");
		
		ULookAtContainer_C_RemoveSubwidget_Params params {};
		params.SubWidget = SubWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LookAtContainer.LookAtContainer_C.ExecuteUbergraph_LookAtContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULookAtContainer_C::ExecuteUbergraph_LookAtContainer(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LookAtContainer.LookAtContainer_C.ExecuteUbergraph_LookAtContainer");
		
		ULookAtContainer_C_ExecuteUbergraph_LookAtContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULookAtContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULookAtContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LookAtContainer.LookAtContainer_C");
		return ptr;
	}

}


