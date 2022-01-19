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
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.UpdateScroll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameUpdatesTakeoverScreen_C::UpdateScroll(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.UpdateScroll");
		
		UGameUpdatesTakeoverScreen_C_UpdateScroll_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetFocusIfNeeded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UGameUpdatesTakeoverScreen_C::SetFocusIfNeeded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetFocusIfNeeded");
		
		UGameUpdatesTakeoverScreen_C_SetFocusIfNeeded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyUp
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UGameUpdatesTakeoverScreen_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyUp");
		
		UGameUpdatesTakeoverScreen_C_OnKeyUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UGameUpdatesTakeoverScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnKeyDown");
		
		UGameUpdatesTakeoverScreen_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnLoaded_440A3BAD453533B5A70B58879F504C48
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameUpdatesTakeoverScreen_C::OnLoaded_440A3BAD453533B5A70B58879F504C48(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.OnLoaded_440A3BAD453533B5A70B58879F504C48");
		
		UGameUpdatesTakeoverScreen_C_OnLoaded_440A3BAD453533B5A70B58879F504C48_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetupUpdateData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameUpdateData                             UpdateData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGameUpdatesTakeoverScreen_C::SetupUpdateData(const struct FGameUpdateData& UpdateData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.SetupUpdateData");
		
		UGameUpdatesTakeoverScreen_C_SetupUpdateData_Params params {};
		params.UpdateData = UpdateData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UClass*                                      ContentWidgetClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameUpdatesTakeoverScreen_C::Setup(const class FText& Title, class UClass* ContentWidgetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Setup");
		
		UGameUpdatesTakeoverScreen_C_Setup_Params params {};
		params.Title = Title;
		params.ContentWidgetClass = ContentWidgetClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameUpdatesTakeoverScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Tick");
		
		UGameUpdatesTakeoverScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGameUpdatesTakeoverScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.Construct");
		
		UGameUpdatesTakeoverScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameUpdatesTakeoverScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UGameUpdatesTakeoverScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.CloseScreen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGameUpdatesTakeoverScreen_C::CloseScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.CloseScreen");
		
		UGameUpdatesTakeoverScreen_C_CloseScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.ExecuteUbergraph_GameUpdatesTakeoverScreen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGameUpdatesTakeoverScreen_C::ExecuteUbergraph_GameUpdatesTakeoverScreen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C.ExecuteUbergraph_GameUpdatesTakeoverScreen");
		
		UGameUpdatesTakeoverScreen_C_ExecuteUbergraph_GameUpdatesTakeoverScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGameUpdatesTakeoverScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameUpdatesTakeoverScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameUpdatesTakeoverScreen.GameUpdatesTakeoverScreen_C");
		return ptr;
	}

}


