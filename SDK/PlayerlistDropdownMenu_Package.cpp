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
	 * 		Name   -> Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnGenerateRow_2
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDropDownListItem*                           DropDownItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UWidget* UPlayerlistDropdownMenu_C::OnGenerateRow_2(class UDropDownListItem* DropDownItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnGenerateRow_2");
		
		UPlayerlistDropdownMenu_C_OnGenerateRow_2_Params params {};
		params.DropDownItem = DropDownItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.AddText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerlistDropdownMenu_C::AddText(const class FText& Text, int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.AddText");
		
		UPlayerlistDropdownMenu_C_AddText_Params params {};
		params.Text = Text;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.RemoveAllItems
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerlistDropdownMenu_C::RemoveAllItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.RemoveAllItems");
		
		UPlayerlistDropdownMenu_C_RemoveAllItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnDropDownClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOptionsDropDownEntry_C*                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerlistDropdownMenu_C::OnDropDownClicked(class UOptionsDropDownEntry_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnDropDownClicked");
		
		UPlayerlistDropdownMenu_C_OnDropDownClicked_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnMouseButtonDownEvent_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerlistDropdownMenu_C::OnMouseButtonDownEvent_Event_1(const class FText& Text, int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnMouseButtonDownEvent_Event_1");
		
		UPlayerlistDropdownMenu_C_OnMouseButtonDownEvent_Event_1_Params params {};
		params.Text = Text;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.UpdatePlayername
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerlistDropdownMenu_C::UpdatePlayername(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.UpdatePlayername");
		
		UPlayerlistDropdownMenu_C_UpdatePlayername_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayerlistDropdownMenu_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnInitialized");
		
		UPlayerlistDropdownMenu_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.ExecuteUbergraph_PlayerlistDropdownMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerlistDropdownMenu_C::ExecuteUbergraph_PlayerlistDropdownMenu(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.ExecuteUbergraph_PlayerlistDropdownMenu");
		
		UPlayerlistDropdownMenu_C_ExecuteUbergraph_PlayerlistDropdownMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerlistDropdownMenu_C::OnSelectionChanged__DelegateSignature(const class FText& Text, int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerlistDropdownMenu.PlayerlistDropdownMenu_C.OnSelectionChanged__DelegateSignature");
		
		UPlayerlistDropdownMenu_C_OnSelectionChanged__DelegateSignature_Params params {};
		params.Text = Text;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerlistDropdownMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerlistDropdownMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerlistDropdownMenu.PlayerlistDropdownMenu_C");
		return ptr;
	}

}


