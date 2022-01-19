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
	 * 		Name   -> Function GoldInventoryWidget.GoldInventoryWidget_C.Update Gold
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGoldInventoryWidget_C::Update_Gold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoldInventoryWidget.GoldInventoryWidget_C.Update Gold");
		
		UGoldInventoryWidget_C_Update_Gold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GoldInventoryWidget.GoldInventoryWidget_C.Update Crowns
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGoldInventoryWidget_C::Update_Crowns()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoldInventoryWidget.GoldInventoryWidget_C.Update Crowns");
		
		UGoldInventoryWidget_C_Update_Crowns_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GoldInventoryWidget.GoldInventoryWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UGoldInventoryWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoldInventoryWidget.GoldInventoryWidget_C.Construct");
		
		UGoldInventoryWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GoldInventoryWidget.GoldInventoryWidget_C.OnLogin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLoaded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGoldInventoryWidget_C::OnLogin(bool bIsLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoldInventoryWidget.GoldInventoryWidget_C.OnLogin");
		
		UGoldInventoryWidget_C_OnLogin_Params params {};
		params.bIsLoaded = bIsLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GoldInventoryWidget.GoldInventoryWidget_C.OnCurrencyChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGoldInventoryWidget_C::OnCurrencyChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoldInventoryWidget.GoldInventoryWidget_C.OnCurrencyChanged");
		
		UGoldInventoryWidget_C_OnCurrencyChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GoldInventoryWidget.GoldInventoryWidget_C.OnPurchaseCompleted
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasPurchaseSuccessful                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FPrimaryAssetId>                     AssetIds                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UGoldInventoryWidget_C::OnPurchaseCompleted(bool WasPurchaseSuccessful, TArray<struct FPrimaryAssetId> AssetIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoldInventoryWidget.GoldInventoryWidget_C.OnPurchaseCompleted");
		
		UGoldInventoryWidget_C_OnPurchaseCompleted_Params params {};
		params.WasPurchaseSuccessful = WasPurchaseSuccessful;
		params.AssetIds = AssetIds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GoldInventoryWidget.GoldInventoryWidget_C.FadeInAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGoldInventoryWidget_C::FadeInAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoldInventoryWidget.GoldInventoryWidget_C.FadeInAnim");
		
		UGoldInventoryWidget_C_FadeInAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function GoldInventoryWidget.GoldInventoryWidget_C.ExecuteUbergraph_GoldInventoryWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGoldInventoryWidget_C::ExecuteUbergraph_GoldInventoryWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GoldInventoryWidget.GoldInventoryWidget_C.ExecuteUbergraph_GoldInventoryWidget");
		
		UGoldInventoryWidget_C_ExecuteUbergraph_GoldInventoryWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UGoldInventoryWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGoldInventoryWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GoldInventoryWidget.GoldInventoryWidget_C");
		return ptr;
	}

}


