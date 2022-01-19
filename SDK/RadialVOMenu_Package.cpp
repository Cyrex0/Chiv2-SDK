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
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.IsCharacterCarried
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Carried                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadialVOMenu_C::IsCharacterCarried(bool* Carried)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.IsCharacterCarried");
		
		URadialVOMenu_C_IsCharacterCarried_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Carried != nullptr)
			*Carried = params.Carried;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.Update Controller Movement Allowance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IngoreMovements                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadialVOMenu_C::Update_Controller_Movement_Allowance(bool IngoreMovements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.Update Controller Movement Allowance");
		
		URadialVOMenu_C_Update_Controller_Movement_Allowance_Params params {};
		params.IngoreMovements = IngoreMovements;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.TogglePage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		RadialVOMenuPageEnum_ERadialVOMenuPageEnum         Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		RadialVOMenuPageEnum_ERadialVOMenuPageEnum         Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::TogglePage(RadialVOMenuPageEnum_ERadialVOMenuPageEnum Selection, RadialVOMenuPageEnum_ERadialVOMenuPageEnum* Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.TogglePage");
		
		URadialVOMenu_C_TogglePage_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.UpdateNumKeyOrder
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceDefaultOrder                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SwapOrder                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadialVOMenu_C::UpdateNumKeyOrder(bool ForceDefaultOrder, bool SwapOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.UpdateNumKeyOrder");
		
		URadialVOMenu_C_UpdateNumKeyOrder_Params params {};
		params.ForceDefaultOrder = ForceDefaultOrder;
		params.SwapOrder = SwapOrder;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.OnNumDown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::OnNumDown(int Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.OnNumDown");
		
		URadialVOMenu_C_OnNumDown_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.OnKeyDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply URadialVOMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.OnKeyDown");
		
		URadialVOMenu_C_OnKeyDown_Params params {};
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
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.ResetUnusedButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                StartingIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::ResetUnusedButtons(int StartingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.ResetUnusedButtons");
		
		URadialVOMenu_C_ResetUnusedButtons_Params params {};
		params.StartingIndex = StartingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.PopulateRadialButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::PopulateRadialButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.PopulateRadialButtons");
		
		URadialVOMenu_C_PopulateRadialButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.ShouldOverrideIsFocusable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool URadialVOMenu_C::ShouldOverrideIsFocusable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.ShouldOverrideIsFocusable");
		
		URadialVOMenu_C_ShouldOverrideIsFocusable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.ShouldShowMouseCursorOnInputCapture
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	bool URadialVOMenu_C::ShouldShowMouseCursorOnInputCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.ShouldShowMouseCursorOnInputCapture");
		
		URadialVOMenu_C_ShouldShowMouseCursorOnInputCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.SetOverlayColorAndOpacity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOverlay*                                    Overlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FColor                                      Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Opacity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UImage*                                      EmoteImage                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::SetOverlayColorAndOpacity(class UOverlay* Overlay, const struct FColor& Color, float Opacity, class UImage** EmoteImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.SetOverlayColorAndOpacity");
		
		URadialVOMenu_C_SetOverlayColorAndOpacity_Params params {};
		params.Overlay = Overlay;
		params.Color = Color;
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EmoteImage != nullptr)
			*EmoteImage = params.EmoteImage;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.BindActionInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Consume                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              Callback                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
	 */
	void URadialVOMenu_C::BindActionInput(const class FName& ActionName, bool Consume, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.BindActionInput");
		
		URadialVOMenu_C_BindActionInput_Params params {};
		params.ActionName = ActionName;
		params.Consume = Consume;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.IsCharacterDowned
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Downed                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadialVOMenu_C::IsCharacterDowned(bool* Downed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.IsCharacterDowned");
		
		URadialVOMenu_C_IsCharacterDowned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Downed != nullptr)
			*Downed = params.Downed;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.SetEquippedPersonality
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::SetEquippedPersonality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.SetEquippedPersonality");
		
		URadialVOMenu_C_SetEquippedPersonality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.GetFirstHeldChicken
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AInventory_Chicken_C*                        Chicken                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::GetFirstHeldChicken(class AInventory_Chicken_C** Chicken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.GetFirstHeldChicken");
		
		URadialVOMenu_C_GetFirstHeldChicken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chicken != nullptr)
			*Chicken = params.Chicken;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.GetCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::GetCharacter(class ATBLCharacter** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.GetCharacter");
		
		URadialVOMenu_C_GetCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.GetPersonalityEmotes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FPersonalityEmoteTableRow>           Output                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::GetPersonalityEmotes(TArray<struct FPersonalityEmoteTableRow>* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.GetPersonalityEmotes");
		
		URadialVOMenu_C_GetPersonalityEmotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.SetTextAndColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUIRadialEmoteStruct                        RadialEmote                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadialVOMenu_C::SetTextAndColor(const struct FUIRadialEmoteStruct& RadialEmote, const class FText& Text, bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.SetTextAndColor");
		
		URadialVOMenu_C_SetTextAndColor_Params params {};
		params.RadialEmote = RadialEmote;
		params.Text = Text;
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.UpdateRadialButtonText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		RadialVOMenuPageEnum_ERadialVOMenuPageEnum         NewPage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::UpdateRadialButtonText(RadialVOMenuPageEnum_ERadialVOMenuPageEnum NewPage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.UpdateRadialButtonText");
		
		URadialVOMenu_C_UpdateRadialButtonText_Params params {};
		params.NewPage = NewPage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.ShowRadialMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		RadialVOMenuPageEnum_ERadialVOMenuPageEnum         VOMenuPage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::ShowRadialMenu(RadialVOMenuPageEnum_ERadialVOMenuPageEnum VOMenuPage, const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.ShowRadialMenu");
		
		URadialVOMenu_C_ShowRadialMenu_Params params {};
		params.VOMenuPage = VOMenuPage;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.HideRadialMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SkipPlayingEmote                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadialVOMenu_C::HideRadialMenu(bool SkipPlayingEmote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.HideRadialMenu");
		
		URadialVOMenu_C_HideRadialMenu_Params params {};
		params.SkipPlayingEmote = SkipPlayingEmote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.SetupRadialImageStruct
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::SetupRadialImageStruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.SetupRadialImageStruct");
		
		URadialVOMenu_C_SetupRadialImageStruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.PlayEmote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                EmoteIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::PlayEmote(int EmoteIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.PlayEmote");
		
		URadialVOMenu_C_PlayEmote_Params params {};
		params.EmoteIndex = EmoteIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.PlayCurrentEmote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::PlayCurrentEmote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.PlayCurrentEmote");
		
		URadialVOMenu_C_PlayCurrentEmote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.OnToggleEmoteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::OnToggleEmoteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.OnToggleEmoteMenu");
		
		URadialVOMenu_C_OnToggleEmoteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.BindToggleEmoteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::BindToggleEmoteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.BindToggleEmoteMenu");
		
		URadialVOMenu_C_BindToggleEmoteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.UnbindTOggleEmoteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::UnbindTOggleEmoteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.UnbindTOggleEmoteMenu");
		
		URadialVOMenu_C_UnbindTOggleEmoteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.OpenAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::OpenAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.OpenAnimation");
		
		URadialVOMenu_C_OpenAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.CloseAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::CloseAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.CloseAnimation");
		
		URadialVOMenu_C_CloseAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadialVOMenu_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.PreConstruct");
		
		URadialVOMenu_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.Tick");
		
		URadialVOMenu_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.GenerateEmoteLists
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::GenerateEmoteLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.GenerateEmoteLists");
		
		URadialVOMenu_C_GenerateEmoteLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.OnReverToggleEmoteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::OnReverToggleEmoteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.OnReverToggleEmoteMenu");
		
		URadialVOMenu_C_OnReverToggleEmoteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.OnPossessedPawn_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.OnPossessedPawn_Event_1");
		
		URadialVOMenu_C_OnPossessedPawn_Event_1_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.OnKilled_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathDamageTakenEvent                      Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void URadialVOMenu_C::OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.OnKilled_Event_1");
		
		URadialVOMenu_C_OnKilled_Event_1_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.HideRadialMenuNoEmote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::HideRadialMenuNoEmote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.HideRadialMenuNoEmote");
		
		URadialVOMenu_C_HideRadialMenuNoEmote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.HideRadialEmotePlayEmote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::HideRadialEmotePlayEmote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.HideRadialEmotePlayEmote");
		
		URadialVOMenu_C_HideRadialEmotePlayEmote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URadialVOMenu_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.OnInitialized");
		
		URadialVOMenu_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.StartQuickUseTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsGamepadKey                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URadialVOMenu_C::StartQuickUseTimer(bool IsGamepadKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.StartQuickUseTimer");
		
		URadialVOMenu_C_StartQuickUseTimer_Params params {};
		params.IsGamepadKey = IsGamepadKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.Not used
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::Not_used()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.Not used");
		
		URadialVOMenu_C_Not_used_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void URadialVOMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.Construct");
		
		URadialVOMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.BindNumberKeys
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::BindNumberKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.BindNumberKeys");
		
		URadialVOMenu_C_BindNumberKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.1Key
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::_1Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.1Key");
		
		URadialVOMenu_C__1Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.2Key
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::_2Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.2Key");
		
		URadialVOMenu_C__2Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.3Key
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::_3Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.3Key");
		
		URadialVOMenu_C__3Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.4Key
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::_4Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.4Key");
		
		URadialVOMenu_C__4Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.5Key
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::_5Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.5Key");
		
		URadialVOMenu_C__5Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.6Key
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::_6Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.6Key");
		
		URadialVOMenu_C__6Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.7Key
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::_7Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.7Key");
		
		URadialVOMenu_C__7Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.8Key
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::_8Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.8Key");
		
		URadialVOMenu_C__8Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.UnBindNumberKeys
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::UnBindNumberKeys()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.UnBindNumberKeys");
		
		URadialVOMenu_C_UnBindNumberKeys_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.ProcessNumKey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::ProcessNumKey(int Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.ProcessNumKey");
		
		URadialVOMenu_C_ProcessNumKey_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.FadeAndCloseRadialVo_Internal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::FadeAndCloseRadialVo_Internal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.FadeAndCloseRadialVo_Internal");
		
		URadialVOMenu_C_FadeAndCloseRadialVo_Internal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.CollapseRadialVO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::CollapseRadialVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.CollapseRadialVO");
		
		URadialVOMenu_C_CollapseRadialVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.AutoHideTimerStarted
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::AutoHideTimerStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.AutoHideTimerStarted");
		
		URadialVOMenu_C_AutoHideTimerStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.CustomEvent_1");
		
		URadialVOMenu_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.InputModeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EGamepadInputMode                              GamepadInputMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::InputModeChanged(TBL_EGamepadInputMode GamepadInputMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.InputModeChanged");
		
		URadialVOMenu_C_InputModeChanged_Params params {};
		params.GamepadInputMode = GamepadInputMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.UnlockSprint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::UnlockSprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.UnlockSprint");
		
		URadialVOMenu_C_UnlockSprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.OnFadeOutAnimationFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void URadialVOMenu_C::OnFadeOutAnimationFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.OnFadeOutAnimationFinished");
		
		URadialVOMenu_C_OnFadeOutAnimationFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function RadialVOMenu.RadialVOMenu_C.ExecuteUbergraph_RadialVOMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URadialVOMenu_C::ExecuteUbergraph_RadialVOMenu(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RadialVOMenu.RadialVOMenu_C.ExecuteUbergraph_RadialVOMenu");
		
		URadialVOMenu_C_ExecuteUbergraph_RadialVOMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URadialVOMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialVOMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RadialVOMenu.RadialVOMenu_C");
		return ptr;
	}

}


