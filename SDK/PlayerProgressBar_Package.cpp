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
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.Update All
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProgressBar_C::Update_All()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.Update All");
		
		UPlayerProgressBar_C_Update_All_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayerProgressBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.Construct");
		
		UPlayerProgressBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.Update Title
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProgressBar_C::Update_Title()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.Update Title");
		
		UPlayerProgressBar_C_Update_Title_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.SetName
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProgressBar_C::SetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.SetName");
		
		UPlayerProgressBar_C_SetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.OpenStoreMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProgressBar_C::OpenStoreMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.OpenStoreMenu");
		
		UPlayerProgressBar_C_OpenStoreMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.CurrencyClicked
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UStatefulButton_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProgressBar_C::CurrencyClicked(class UStatefulButton_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.CurrencyClicked");
		
		UPlayerProgressBar_C_CurrencyClicked_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.OnStatsLogin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLoaded                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerProgressBar_C::OnStatsLogin(bool bIsLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.OnStatsLogin");
		
		UPlayerProgressBar_C_OnStatsLogin_Params params {};
		params.bIsLoaded = bIsLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.OnStatsUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTBLOnlineStats                             OnlineStats                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerProgressBar_C::OnStatsUpdated(const struct FTBLOnlineStats& OnlineStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.OnStatsUpdated");
		
		UPlayerProgressBar_C_OnStatsUpdated_Params params {};
		params.OnlineStats = OnlineStats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.OnlineStatsLevelUp
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLevelUpResult>                      LevelUpEvents                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UPlayerProgressBar_C::OnlineStatsLevelUp(TArray<struct FLevelUpResult> LevelUpEvents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.OnlineStatsLevelUp");
		
		UPlayerProgressBar_C_OnlineStatsLevelUp_Params params {};
		params.LevelUpEvents = LevelUpEvents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.OnRefreshProfileDisplayName
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ProfileName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerProgressBar_C::OnRefreshProfileDisplayName(const class FString& ProfileName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.OnRefreshProfileDisplayName");
		
		UPlayerProgressBar_C_OnRefreshProfileDisplayName_Params params {};
		params.ProfileName = ProfileName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.ExecuteUbergraph_PlayerProgressBar
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerProgressBar_C::ExecuteUbergraph_PlayerProgressBar(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.ExecuteUbergraph_PlayerProgressBar");
		
		UPlayerProgressBar_C_ExecuteUbergraph_PlayerProgressBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.OpenStore__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProgressBar_C::OpenStore__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.OpenStore__DelegateSignature");
		
		UPlayerProgressBar_C_OpenStore__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PlayerProgressBar.PlayerProgressBar_C.RankUpComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerProgressBar_C::RankUpComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerProgressBar.PlayerProgressBar_C.RankUpComplete__DelegateSignature");
		
		UPlayerProgressBar_C_RankUpComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayerProgressBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerProgressBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerProgressBar.PlayerProgressBar_C");
		return ptr;
	}

}


