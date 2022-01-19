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
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.IsIconSetByStyle
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bReturnValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeedEntry_C::IsIconSetByStyle(bool* bReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.IsIconSetByStyle");
		
		UKillFeedEntry_C_IsIconSetByStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bReturnValue != nullptr)
			*bReturnValue = params.bReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.GetStyleViaType
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FKillFeedStyle                              Style                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeedEntry_C::GetStyleViaType(struct FKillFeedStyle* Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.GetStyleViaType");
		
		UKillFeedEntry_C_GetStyleViaType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Style != nullptr)
			*Style = params.Style;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.ApplyModifiers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeedEntry_C::ApplyModifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.ApplyModifiers");
		
		UKillFeedEntry_C_ApplyModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.ApplyTextColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKillFeedStyle                              Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeedEntry_C::ApplyTextColor(const struct FKillFeedStyle& Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.ApplyTextColor");
		
		UKillFeedEntry_C_ApplyTextColor_Params params {};
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.ApplyTextStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeedEntry_C::ApplyTextStyle(class UTextBlock* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.ApplyTextStyle");
		
		UKillFeedEntry_C_ApplyTextStyle_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.ApplyStyle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FKillFeedStyle                              Style                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeedEntry_C::ApplyStyle(const struct FKillFeedStyle& Style)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.ApplyStyle");
		
		UKillFeedEntry_C_ApplyStyle_Params params {};
		params.Style = Style;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.SetState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeedEntry_C::SetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.SetState");
		
		UKillFeedEntry_C_SetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKillFeedEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.PreConstruct");
		
		UKillFeedEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.SetupKillFeedEntry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLPlayerState*                             Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AInventoryItem*                              KillingBlowWeapon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeedEntry_C::SetupKillFeedEntry(class ATBLPlayerState* Killer, class ATBLPlayerState* Victim, class AInventoryItem* KillingBlowWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.SetupKillFeedEntry");
		
		UKillFeedEntry_C_SetupKillFeedEntry_Params params {};
		params.Killer = Killer;
		params.Victim = Victim;
		params.KillingBlowWeapon = KillingBlowWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.RemoveEntry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeedEntry_C::RemoveEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.RemoveEntry");
		
		UKillFeedEntry_C_RemoveEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.BeginRemove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeedEntry_C::BeginRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.BeginRemove");
		
		UKillFeedEntry_C_BeginRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UKillFeedEntry_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1");
		
		UKillFeedEntry_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UKillFeedEntry_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2");
		
		UKillFeedEntry_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.SetIconTexture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeedEntry_C::SetIconTexture(class UTexture* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.SetIconTexture");
		
		UKillFeedEntry_C_SetIconTexture_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.DeathByWeapon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeedEntry_C::DeathByWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.DeathByWeapon");
		
		UKillFeedEntry_C_DeathByWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.UpdateIconTexture
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeedEntry_C::UpdateIconTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.UpdateIconTexture");
		
		UKillFeedEntry_C_UpdateIconTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.AnimateIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeedEntry_C::AnimateIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.AnimateIn");
		
		UKillFeedEntry_C_AnimateIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.SetPlayerNames
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UKillFeedEntry_C::SetPlayerNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.SetPlayerNames");
		
		UKillFeedEntry_C_SetPlayerNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function KillFeedEntry.KillFeedEntry_C.ExecuteUbergraph_KillFeedEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKillFeedEntry_C::ExecuteUbergraph_KillFeedEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KillFeedEntry.KillFeedEntry_C.ExecuteUbergraph_KillFeedEntry");
		
		UKillFeedEntry_C_ExecuteUbergraph_KillFeedEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UKillFeedEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillFeedEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KillFeedEntry.KillFeedEntry_C");
		return ptr;
	}

}


