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
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPC
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EHardwarePlatform                              Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFunctionLibrary_UI_C::STATIC_IsProvidedPlatformPC(TBL_EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPC");
		
		UFunctionLibrary_UI_C_IsProvidedPlatformPC_Params params {};
		params.Platform = Platform;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformXBox
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EHardwarePlatform                              Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFunctionLibrary_UI_C::STATIC_IsProvidedPlatformXBox(TBL_EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformXBox");
		
		UFunctionLibrary_UI_C_IsProvidedPlatformXBox_Params params {};
		params.Platform = Platform;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPlayStation
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EHardwarePlatform                              Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFunctionLibrary_UI_C::STATIC_IsProvidedPlatformPlayStation(TBL_EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPlayStation");
		
		UFunctionLibrary_UI_C_IsProvidedPlatformPlayStation_Params params {};
		params.Platform = Platform;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.AreProvidedPlatformsSimilar
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EHardwarePlatform                              OwningPlayerHardwarePlatform                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHardwarePlatform                              TargetPlayerHardwarePlatform                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Similar                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFunctionLibrary_UI_C::STATIC_AreProvidedPlatformsSimilar(TBL_EHardwarePlatform OwningPlayerHardwarePlatform, TBL_EHardwarePlatform TargetPlayerHardwarePlatform, class UObject* __WorldContext, bool* Similar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.AreProvidedPlatformsSimilar");
		
		UFunctionLibrary_UI_C_AreProvidedPlatformsSimilar_Params params {};
		params.OwningPlayerHardwarePlatform = OwningPlayerHardwarePlatform;
		params.TargetPlayerHardwarePlatform = TargetPlayerHardwarePlatform;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Similar != nullptr)
			*Similar = params.Similar;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollWithVelocity
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_ScrollWithVelocity(class UScrollBox* ScrollBox, float Velocity, float DeltaTime, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollWithVelocity");
		
		UFunctionLibrary_UI_C_ScrollWithVelocity_Params params {};
		params.ScrollBox = ScrollBox;
		params.Velocity = Velocity;
		params.DeltaTime = DeltaTime;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollBy
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UScrollBox*                                  ScrollBox                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScrollOffsetDelta                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_ScrollBy(class UScrollBox* ScrollBox, float ScrollOffsetDelta, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollBy");
		
		UFunctionLibrary_UI_C_ScrollBy_Params params {};
		params.ScrollBox = ScrollBox;
		params.ScrollOffsetDelta = ScrollOffsetDelta;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetCustomizationHeadCategories
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                Categories                                                 (Parm, OutParm, HasGetValueTypeHash)
	 * 		TArray<class FText>                                CategoryTexts                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetCustomizationHeadCategories(class UObject* __WorldContext, TArray<class FName>* Categories, TArray<class FText>* CategoryTexts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetCustomizationHeadCategories");
		
		UFunctionLibrary_UI_C_GetCustomizationHeadCategories_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Categories != nullptr)
			*Categories = params.Categories;
		if (CategoryTexts != nullptr)
			*CategoryTexts = params.CategoryTexts;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformConsole
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EHardwarePlatform                              Platform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFunctionLibrary_UI_C::STATIC_IsProvidedPlatformConsole(TBL_EHardwarePlatform Platform, class UObject* __WorldContext, bool* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformConsole");
		
		UFunctionLibrary_UI_C_IsProvidedPlatformConsole_Params params {};
		params.Platform = Platform;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.UpdatePlayerPlatformIcon
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EHardwarePlatform                              OwningPlayerHardwarePlatform                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EHardwarePlatform                              TargetPlayerHardwarePlatform                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     PlatformIconContainer                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      PlatformIconImage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_UpdatePlayerPlatformIcon(TBL_EHardwarePlatform OwningPlayerHardwarePlatform, TBL_EHardwarePlatform TargetPlayerHardwarePlatform, class UWidget* PlatformIconContainer, class UImage* PlatformIconImage, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.UpdatePlayerPlatformIcon");
		
		UFunctionLibrary_UI_C_UpdatePlayerPlatformIcon_Params params {};
		params.OwningPlayerHardwarePlatform = OwningPlayerHardwarePlatform;
		params.TargetPlayerHardwarePlatform = TargetPlayerHardwarePlatform;
		params.PlatformIconContainer = PlatformIconContainer;
		params.PlatformIconImage = PlatformIconImage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsInParty
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             Player1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLPlayerState*                             Player2                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFunctionLibrary_UI_C::STATIC_IsInParty(class ATBLPlayerState* Player1, class ATBLPlayerState* Player2, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsInParty");
		
		UFunctionLibrary_UI_C_IsInParty_Params params {};
		params.Player1 = Player1;
		params.Player2 = Player2;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAllyColours
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInParty                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFriend                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetAllyColours(bool IsInParty, bool IsFriend, class UObject* __WorldContext, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAllyColours");
		
		UFunctionLibrary_UI_C_GetAllyColours_Params params {};
		params.IsInParty = IsInParty;
		params.IsFriend = IsFriend;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Group Text from Group Id
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Group_Id                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Weapon_Group_Text                                          (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_Get_Group_Text_from_Group_Id(const class FName& Group_Id, class UObject* __WorldContext, class FText* Weapon_Group_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Group Text from Group Id");
		
		UFunctionLibrary_UI_C_Get_Group_Text_from_Group_Id_Params params {};
		params.Group_Id = Group_Id;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weapon_Group_Text != nullptr)
			*Weapon_Group_Text = params.Weapon_Group_Text;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetSelectedbuttonColor
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetSelectedbuttonColor(class UObject* __WorldContext, struct FLinearColor* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetSelectedbuttonColor");
		
		UFunctionLibrary_UI_C_GetSelectedbuttonColor_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformConsole
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFunctionLibrary_UI_C::STATIC_IsPlatformConsole(class UObject* __WorldContext, bool* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformConsole");
		
		UFunctionLibrary_UI_C_IsPlatformConsole_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformPC
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFunctionLibrary_UI_C::STATIC_IsPlatformPC(class UObject* __WorldContext, bool* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformPC");
		
		UFunctionLibrary_UI_C_IsPlatformPC_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.OnlineStatToText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EOnlineStat                                    Stat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_OnlineStatToText(TBL_EOnlineStat Stat, class UObject* __WorldContext, class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.OnlineStatToText");
		
		UFunctionLibrary_UI_C_OnlineStatToText_Params params {};
		params.Stat = Stat;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.CreateRankUpMessageFromLevelUp
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLevelUpResult                              LevelUpResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRankUpMessage                              RankUpMessage                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_CreateRankUpMessageFromLevelUp(const struct FLevelUpResult& LevelUpResult, class UObject* __WorldContext, struct FRankUpMessage* RankUpMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.CreateRankUpMessageFromLevelUp");
		
		UFunctionLibrary_UI_C_CreateRankUpMessageFromLevelUp_Params params {};
		params.LevelUpResult = LevelUpResult;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RankUpMessage != nullptr)
			*RankUpMessage = params.RankUpMessage;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpClassIconFromOnlineStat
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EOnlineStat                                    Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetRankUpClassIconFromOnlineStat(TBL_EOnlineStat Selection, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpClassIconFromOnlineStat");
		
		UFunctionLibrary_UI_C_GetRankUpClassIconFromOnlineStat_Params params {};
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpItemFromOnlineStat
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EOnlineStat                                    Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetRankUpItemFromOnlineStat(TBL_EOnlineStat Selection, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpItemFromOnlineStat");
		
		UFunctionLibrary_UI_C_GetRankUpItemFromOnlineStat_Params params {};
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.SetGamepadButtonText
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class URadiobutton_C*                              Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_SetGamepadButtonText(class URadiobutton_C* Button, const class FText& Text, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.SetGamepadButtonText");
		
		UFunctionLibrary_UI_C_SetGamepadButtonText_Params params {};
		params.Button = Button;
		params.Text = Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToColor
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             PrimaryAsset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_ETBLRarity                                     Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 SlateColor                                                 (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_ItemRarityToColor(const struct FPrimaryAssetId& PrimaryAsset, TBL_ETBLRarity Rarity, class UObject* __WorldContext, struct FSlateColor* SlateColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToColor");
		
		UFunctionLibrary_UI_C_ItemRarityToColor_Params params {};
		params.PrimaryAsset = PrimaryAsset;
		params.Rarity = Rarity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SlateColor != nullptr)
			*SlateColor = params.SlateColor;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetPlayersName
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetPlayersName(class AController* Controller, class UObject* __WorldContext, class FText* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetPlayersName");
		
		UFunctionLibrary_UI_C_GetPlayersName_Params params {};
		params.Controller = Controller;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpMessageTypeFromOnlineStat
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TBL_EOnlineStat                                    Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		RankUpMessageType_ERankUpMessageType               RankUpMessageType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetRankUpMessageTypeFromOnlineStat(TBL_EOnlineStat Selection, class UObject* __WorldContext, RankUpMessageType_ERankUpMessageType* RankUpMessageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpMessageTypeFromOnlineStat");
		
		UFunctionLibrary_UI_C_GetRankUpMessageTypeFromOnlineStat_Params params {};
		params.Selection = Selection;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RankUpMessageType != nullptr)
			*RankUpMessageType = params.RankUpMessageType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FPrimaryAssetId                             PrimaryAsset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_ETBLRarity                                     Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        _                                                          (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_ItemRarityToText(const struct FPrimaryAssetId& PrimaryAsset, TBL_ETBLRarity Rarity, class UObject* __WorldContext, class FText* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToText");
		
		UFunctionLibrary_UI_C_ItemRarityToText_Params params {};
		params.PrimaryAsset = PrimaryAsset;
		params.Rarity = Rarity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               SoundEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_PlayUxSound(class UAkAudioEvent* SoundEvent, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound");
		
		UFunctionLibrary_UI_C_PlayUxSound_Params params {};
		params.SoundEvent = SoundEvent;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayDataTableSound
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDataTableRowHandle                         RowHandle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_PlayDataTableSound(const struct FDataTableRowHandle& RowHandle, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayDataTableSound");
		
		UFunctionLibrary_UI_C_PlayDataTableSound_Params params {};
		params.RowHandle = RowHandle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.ShouldDisableWidget
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_ShouldDisableWidget(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ShouldDisableWidget");
		
		UFunctionLibrary_UI_C_ShouldDisableWidget_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.ConvertTimeToText
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        SecondsText                                                (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_ConvertTimeToText(float Seconds, class UObject* __WorldContext, class FText* SecondsText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ConvertTimeToText");
		
		UFunctionLibrary_UI_C_ConvertTimeToText_Params params {};
		params.Seconds = Seconds;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SecondsText != nullptr)
			*SecondsText = params.SecondsText;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromClass
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EAudioClassType                                Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UFunctionLibrary_UI_C::STATIC_GetLocalizedTextFromClass(TBL_EAudioClassType Class, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromClass");
		
		UFunctionLibrary_UI_C_GetLocalizedTextFromClass_Params params {};
		params.Class = Class;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromFaction
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UFunctionLibrary_UI_C::STATIC_GetLocalizedTextFromFaction(TBL_EFaction Faction, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromFaction");
		
		UFunctionLibrary_UI_C_GetLocalizedTextFromFaction_Params params {};
		params.Faction = Faction;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.LimitTextCharacters
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int                                                Limit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UFunctionLibrary_UI_C::STATIC_LimitTextCharacters(const class FString& String, int Limit, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.LimitTextCharacters");
		
		UFunctionLibrary_UI_C_LimitTextCharacters_Params params {};
		params.String = String;
		params.Limit = Limit;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColorText
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ObjMarkerTeam_EObjMarkerTeam                       Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UFunctionLibrary_UI_C::STATIC_GetTeamColorText(ObjMarkerTeam_EObjMarkerTeam Index, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColorText");
		
		UFunctionLibrary_UI_C_GetTeamColorText_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementTitle
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FAchievementProgress                        Achievement                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetAchievementTitle(const struct FAchievementProgress& Achievement, class ATBLPlayerState* PlayerState, class UObject* __WorldContext, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementTitle");
		
		UFunctionLibrary_UI_C_GetAchievementTitle_Params params {};
		params.Achievement = Achievement;
		params.PlayerState = PlayerState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementDescription
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FAchievementProgress                        Achievement                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class ATBLPlayerState*                             PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetAchievementDescription(const struct FAchievementProgress& Achievement, class ATBLPlayerState* PlayerState, class UObject* __WorldContext, class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementDescription");
		
		UFunctionLibrary_UI_C_GetAchievementDescription_Params params {};
		params.Achievement = Achievement;
		params.PlayerState = PlayerState;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.ClearAllInputHints
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_ClearAllInputHints(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.ClearAllInputHints");
		
		UFunctionLibrary_UI_C_ClearAllInputHints_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.AddInputHint
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Keybinding                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        HintText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AddToTop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_AddInputHint(const class FString& Keybinding, const class FName& Tag, const class FText& HintText, bool Enable, bool AddToTop, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.AddInputHint");
		
		UFunctionLibrary_UI_C_AddInputHint_Params params {};
		params.Keybinding = Keybinding;
		params.Tag = Tag;
		params.HintText = HintText;
		params.Enable = Enable;
		params.AddToTop = AddToTop;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColor
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ObjMarkerTeam_EObjMarkerTeam                       Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor UFunctionLibrary_UI_C::STATIC_GetTeamColor(ObjMarkerTeam_EObjMarkerTeam Index, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColor");
		
		UFunctionLibrary_UI_C_GetTeamColor_Params params {};
		params.Index = Index;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.Has Child Of Type
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UPanelWidget*                                Parent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFunctionLibrary_UI_C::STATIC_Has_Child_Of_Type(class UPanelWidget* Parent, class UClass* Class, class UObject* __WorldContext, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.Has Child Of Type");
		
		UFunctionLibrary_UI_C_Has_Child_Of_Type_Params params {};
		params.Parent = Parent;
		params.Class = Class;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.Request Account Details
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_Request_Account_Details(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.Request Account Details");
		
		UFunctionLibrary_UI_C_Request_Account_Details_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound (Generic)
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_PlayUxSound__Generic_(const class FName& EventName, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound (Generic)");
		
		UFunctionLibrary_UI_C_PlayUxSound__Generic__Params params {};
		params.EventName = EventName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAttackingDefendingFaction
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       AttackingFaction                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       DefendingFaction                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetAttackingDefendingFaction(class UObject* __WorldContext, TBL_EFaction* AttackingFaction, TBL_EFaction* DefendingFaction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAttackingDefendingFaction");
		
		UFunctionLibrary_UI_C_GetAttackingDefendingFaction_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackingFaction != nullptr)
			*AttackingFaction = params.AttackingFaction;
		if (DefendingFaction != nullptr)
			*DefendingFaction = params.DefendingFaction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Icon from Wave
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  Wave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 Brush                                                      (Parm, OutParm)
	 */
	void UFunctionLibrary_UI_C::STATIC_Get_Icon_from_Wave(class ASpawnWave* Wave, class UObject* __WorldContext, struct FSlateBrush* Brush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Icon from Wave");
		
		UFunctionLibrary_UI_C_Get_Icon_from_Wave_Params params {};
		params.Wave = Wave;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetObjectiveStyleEnum
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FGameplayTag                                NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ObjectiveMessageStyleType_EObjectiveMessageStyleType ObjectiveMessageStyleType                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_GetObjectiveStyleEnum(const struct FGameplayTag& NewParam, class UObject* __WorldContext, ObjectiveMessageStyleType_EObjectiveMessageStyleType* ObjectiveMessageStyleType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetObjectiveStyleEnum");
		
		UFunctionLibrary_UI_C_GetObjectiveStyleEnum_Params params {};
		params.NewParam = NewParam;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ObjectiveMessageStyleType != nullptr)
			*ObjectiveMessageStyleType = params.ObjectiveMessageStyleType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.AnimationExitTimeFromArray
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UImage*>                              Images                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UAnimatingButton*>                    AnimatingButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_AnimationExitTimeFromArray(TArray<class UImage*>* Images, float Value, TArray<class UAnimatingButton*>* AnimatingButton, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.AnimationExitTimeFromArray");
		
		UFunctionLibrary_UI_C_AnimationExitTimeFromArray_Params params {};
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Images != nullptr)
			*Images = params.Images;
		if (AnimatingButton != nullptr)
			*AnimatingButton = params.AnimatingButton;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function FunctionLibrary_UI.FunctionLibrary_UI_C.animationExitTime
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UImage*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFunctionLibrary_UI_C::STATIC_animationExitTime(class UImage* Target, float Value, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FunctionLibrary_UI.FunctionLibrary_UI_C.animationExitTime");
		
		UFunctionLibrary_UI_C_animationExitTime_Params params {};
		params.Target = Target;
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFunctionLibrary_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunctionLibrary_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FunctionLibrary_UI.FunctionLibrary_UI_C");
		return ptr;
	}

}


