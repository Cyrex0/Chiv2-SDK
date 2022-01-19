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
	 * 		Offset -> 0x00BEF670
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAnalyticsBlueprintLibrary::STATIC_StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes");
		
		UAnalyticsBlueprintLibrary_StartSessionWithAttributes_Params params {};
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEF640
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UAnalyticsBlueprintLibrary::STATIC_StartSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession");
		
		UAnalyticsBlueprintLibrary_StartSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEF5B0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UserId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_SetUserId(const class FString& UserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId");
		
		UAnalyticsBlueprintLibrary_SetUserId_Params params {};
		params.UserId = UserId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEF520
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SessionId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_SetSessionId(const class FString& SessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId");
		
		UAnalyticsBlueprintLibrary_SetSessionId_Params params {};
		params.SessionId = SessionId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEF490
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Location                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_SetLocation(const class FString& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation");
		
		UAnalyticsBlueprintLibrary_SetLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEF400
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Gender                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_SetGender(const class FString& Gender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender");
		
		UAnalyticsBlueprintLibrary_SetGender_Params params {};
		params.Gender = Gender;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEF370
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      BuildInfo                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_SetBuildInfo(const class FString& BuildInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo");
		
		UAnalyticsBlueprintLibrary_SetBuildInfo_Params params {};
		params.BuildInfo = BuildInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEF300
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int                                                Age                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_SetAge(int Age)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge");
		
		UAnalyticsBlueprintLibrary_SetAge_Params params {};
		params.Age = Age;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEF1A0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                ItemQuantity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleItemPurchaseWithAttributes(const class FString& ItemId, int ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordSimpleItemPurchaseWithAttributes_Params params {};
		params.ItemId = ItemId;
		params.ItemQuantity = ItemQuantity;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEF0D0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                ItemQuantity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleItemPurchase(const class FString& ItemId, int ItemQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase");
		
		UAnalyticsBlueprintLibrary_RecordSimpleItemPurchase_Params params {};
		params.ItemId = ItemId;
		params.ItemQuantity = ItemQuantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEEF70
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleCurrencyPurchaseWithAttributes(const class FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchaseWithAttributes_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEEEA0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordSimpleCurrencyPurchase(const class FString& GameCurrencyType, int GameCurrencyAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase");
		
		UAnalyticsBlueprintLibrary_RecordSimpleCurrencyPurchase_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEECF0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ProgressType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              ProgressNames                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordProgressWithFullHierarchyAndAttributes(const class FString& ProgressType, TArray<class FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes");
		
		UAnalyticsBlueprintLibrary_RecordProgressWithFullHierarchyAndAttributes_Params params {};
		params.ProgressType = ProgressType;
		params.ProgressNames = ProgressNames;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEEB80
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ProgressType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProgressName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordProgressWithAttributes(const class FString& ProgressType, const class FString& ProgressName, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordProgressWithAttributes_Params params {};
		params.ProgressType = ProgressType;
		params.ProgressName = ProgressName;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEEAA0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ProgressType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProgressName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordProgress(const class FString& ProgressType, const class FString& ProgressName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress");
		
		UAnalyticsBlueprintLibrary_RecordProgress_Params params {};
		params.ProgressType = ProgressType;
		params.ProgressName = ProgressName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEE940
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Currency                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                PerItemCost                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                ItemQuantity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordItemPurchase(const class FString& ItemId, const class FString& Currency, int PerItemCost, int ItemQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase");
		
		UAnalyticsBlueprintLibrary_RecordItemPurchase_Params params {};
		params.ItemId = ItemId;
		params.Currency = Currency;
		params.PerItemCost = PerItemCost;
		params.ItemQuantity = ItemQuantity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEE820
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordEventWithAttributes(const class FString& EventName, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordEventWithAttributes_Params params {};
		params.EventName = EventName;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEE6F0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeValue                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordEventWithAttribute(const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute");
		
		UAnalyticsBlueprintLibrary_RecordEventWithAttribute_Params params {};
		params.EventName = EventName;
		params.AttributeName = AttributeName;
		params.AttributeValue = AttributeValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEE660
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordEvent(const class FString& EventName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent");
		
		UAnalyticsBlueprintLibrary_RecordEvent_Params params {};
		params.EventName = EventName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEE540
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordErrorWithAttributes(const class FString& Error, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordErrorWithAttributes_Params params {};
		params.Error = Error;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEE4B0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordError(const class FString& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError");
		
		UAnalyticsBlueprintLibrary_RecordError_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEE300
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RealCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RealMoneyCost                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PaymentProvider                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordCurrencyPurchase(const class FString& GameCurrencyType, int GameCurrencyAmount, const class FString& RealCurrencyType, float RealMoneyCost, const class FString& PaymentProvider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase");
		
		UAnalyticsBlueprintLibrary_RecordCurrencyPurchase_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		params.RealCurrencyType = RealCurrencyType;
		params.RealMoneyCost = RealMoneyCost;
		params.PaymentProvider = PaymentProvider;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEE1A0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FAnalyticsEventAttr>                 Attributes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordCurrencyGivenWithAttributes(const class FString& GameCurrencyType, int GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes");
		
		UAnalyticsBlueprintLibrary_RecordCurrencyGivenWithAttributes_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		params.Attributes = Attributes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEE0D0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      GameCurrencyType                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int                                                GameCurrencyAmount                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_RecordCurrencyGiven(const class FString& GameCurrencyType, int GameCurrencyAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven");
		
		UAnalyticsBlueprintLibrary_RecordCurrencyGiven_Params params {};
		params.GameCurrencyType = GameCurrencyType;
		params.GameCurrencyAmount = GameCurrencyAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEDF60
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      AttributeName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttributeValue                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAnalyticsEventAttr UAnalyticsBlueprintLibrary::STATIC_MakeEventAttribute(const class FString& AttributeName, const class FString& AttributeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute");
		
		UAnalyticsBlueprintLibrary_MakeEventAttribute_Params params {};
		params.AttributeName = AttributeName;
		params.AttributeValue = AttributeValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEDEE0
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UAnalyticsBlueprintLibrary::STATIC_GetUserId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId");
		
		UAnalyticsBlueprintLibrary_GetUserId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEDE60
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class FString UAnalyticsBlueprintLibrary::STATIC_GetSessionId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId");
		
		UAnalyticsBlueprintLibrary_GetSessionId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEDE40
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_FlushEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents");
		
		UAnalyticsBlueprintLibrary_FlushEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00BEDE20
	 * 		Name   -> Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnalyticsBlueprintLibrary::STATIC_EndSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession");
		
		UAnalyticsBlueprintLibrary_EndSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UAnalyticsBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnalyticsBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary");
		return ptr;
	}

}


