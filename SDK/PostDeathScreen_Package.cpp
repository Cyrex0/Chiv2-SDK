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
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.SendCommendForgiveToServer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerController*                        PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EnemyKiller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TeamKiller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ATBLPlayerState*                             Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::SendCommendForgiveToServer(class ATBLPlayerController* PlayerController, bool EnemyKiller, bool TeamKiller, class ATBLPlayerState* Killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.SendCommendForgiveToServer");
		
		UPostDeathScreen_C_SendCommendForgiveToServer_Params params {};
		params.PlayerController = PlayerController;
		params.EnemyKiller = EnemyKiller;
		params.TeamKiller = TeamKiller;
		params.Killer = Killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.UpdatePlayerPrompt
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnemyKill                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsTeamKill                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ATBLPlayerState*                             Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::UpdatePlayerPrompt(bool IsEnemyKill, bool IsTeamKill, class ATBLPlayerState* Killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.UpdatePlayerPrompt");
		
		UPostDeathScreen_C_UpdatePlayerPrompt_Params params {};
		params.IsEnemyKill = IsEnemyKill;
		params.IsTeamKill = IsTeamKill;
		params.Killer = Killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.UpdatePlatformIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPostDeathScreen_C::UpdatePlatformIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.UpdatePlatformIcon");
		
		UPostDeathScreen_C_UpdatePlatformIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByAttackTypeText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::UpdateKilledByAttackTypeText(bool bShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByAttackTypeText");
		
		UPostDeathScreen_C_UpdateKilledByAttackTypeText_Params params {};
		params.bShouldShow = bShouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::UpdateKilledByWeaponTypeIcon(bool bShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeIcon");
		
		UPostDeathScreen_C_UpdateKilledByWeaponTypeIcon_Params params {};
		params.bShouldShow = bShouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByDamageText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldShow                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::UpdateKilledByDamageText(bool bShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByDamageText");
		
		UPostDeathScreen_C_UpdateKilledByDamageText_Params params {};
		params.bShouldShow = bShouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPostDeathScreen_C::UpdateKilledByWeaponTypeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.UpdateKilledByWeaponTypeText");
		
		UPostDeathScreen_C_UpdateKilledByWeaponTypeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.GetShouldShowKilledByWeapon
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShouldShow                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::GetShouldShowKilledByWeapon(bool* bShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.GetShouldShowKilledByWeapon");
		
		UPostDeathScreen_C_GetShouldShowKilledByWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldShow != nullptr)
			*bShouldShow = params.bShouldShow;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.GetAbilityNameText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AbilityName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        AbilityNameText                                            (Parm, OutParm)
	 * 		bool                                               bIsFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::GetAbilityNameText(const class FName& AbilityName, class FText* AbilityNameText, bool* bIsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.GetAbilityNameText");
		
		UPostDeathScreen_C_GetAbilityNameText_Params params {};
		params.AbilityName = AbilityName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AbilityNameText != nullptr)
			*AbilityNameText = params.AbilityNameText;
		if (bIsFound != nullptr)
			*bIsFound = params.bIsFound;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.SetCommendVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Play_Fade_Out                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::SetCommendVisibility(bool Enabled, bool Play_Fade_Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.SetCommendVisibility");
		
		UPostDeathScreen_C_SetCommendVisibility_Params params {};
		params.Enabled = Enabled;
		params.Play_Fade_Out = Play_Fade_Out;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.CanCommendPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathRecapEntry                            DeathRecapEntry                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Can_Commend                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Can_Forgive                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::CanCommendPlayer(const struct FDeathRecapEntry& DeathRecapEntry, bool* Can_Commend, bool* Can_Forgive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.CanCommendPlayer");
		
		UPostDeathScreen_C_CanCommendPlayer_Params params {};
		params.DeathRecapEntry = DeathRecapEntry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Can_Commend != nullptr)
			*Can_Commend = params.Can_Commend;
		if (Can_Forgive != nullptr)
			*Can_Forgive = params.Can_Forgive;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.GetSecondsToDeploy
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Seconds_as_text                                            (Parm, OutParm)
	 * 		int                                                Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::GetSecondsToDeploy(class FText* Seconds_as_text, int* Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.GetSecondsToDeploy");
		
		UPostDeathScreen_C_GetSecondsToDeploy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Seconds_as_text != nullptr)
			*Seconds_as_text = params.Seconds_as_text;
		if (Seconds != nullptr)
			*Seconds = params.Seconds;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.GetTotalScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::GetTotalScore(int* Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.GetTotalScore");
		
		UPostDeathScreen_C_GetTotalScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Score != nullptr)
			*Score = params.Score;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.GetObjectiveScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Score                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::GetObjectiveScore(int* Score)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.GetObjectiveScore");
		
		UPostDeathScreen_C_GetObjectiveScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Score != nullptr)
			*Score = params.Score;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.GetRevives
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Revives                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::GetRevives(int* Revives)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.GetRevives");
		
		UPostDeathScreen_C_GetRevives_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Revives != nullptr)
			*Revives = params.Revives;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.GetWidgetSize
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Size2D                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::GetWidgetSize(class UWidget* Widget, struct FVector2D* Size2D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.GetWidgetSize");
		
		UPostDeathScreen_C_GetWidgetSize_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Size2D != nullptr)
			*Size2D = params.Size2D;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.SetKillerColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::SetKillerColor(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.SetKillerColor");
		
		UPostDeathScreen_C_SetKillerColor_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.Get Name From Killer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerController*                        my_TBLPC                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name_Text                                                  (Parm, OutParm)
	 * 		bool                                               KillerExists                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::Get_Name_From_Killer(class ATBLPlayerController* my_TBLPC, class FText* Name_Text, bool* KillerExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.Get Name From Killer");
		
		UPostDeathScreen_C_Get_Name_From_Killer_Params params {};
		params.my_TBLPC = my_TBLPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name_Text != nullptr)
			*Name_Text = params.Name_Text;
		if (KillerExists != nullptr)
			*KillerExists = params.KillerExists;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.Get Name Text From Maybe Player State
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name_Text                                                  (Parm, OutParm)
	 */
	void UPostDeathScreen_C::Get_Name_Text_From_Maybe_Player_State(class UObject* Object, class FText* Name_Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.Get Name Text From Maybe Player State");
		
		UPostDeathScreen_C_Get_Name_Text_From_Maybe_Player_State_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name_Text != nullptr)
			*Name_Text = params.Name_Text;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.InitializeAndShow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseWaveTimer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::InitializeAndShow(bool UseWaveTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.InitializeAndShow");
		
		UPostDeathScreen_C_InitializeAndShow_Params params {};
		params.UseWaveTimer = UseWaveTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.Hide
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::Hide(bool Instant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.Hide");
		
		UPostDeathScreen_C_Hide_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPostDeathScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.Construct");
		
		UPostDeathScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.HandlePlayerSelectedSpectatorMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPlayerSpectator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::HandlePlayerSelectedSpectatorMode(bool IsPlayerSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.HandlePlayerSelectedSpectatorMode");
		
		UPostDeathScreen_C_HandlePlayerSelectedSpectatorMode_Params params {};
		params.IsPlayerSpectator = IsPlayerSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.Show
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPostDeathScreen_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.Show");
		
		UPostDeathScreen_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.SwitchToWaveTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::SwitchToWaveTimer(bool Instant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.SwitchToWaveTimer");
		
		UPostDeathScreen_C_SwitchToWaveTimer_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.SetSpawnWave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::SetSpawnWave(class ASpawnWave* SpawnWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.SetSpawnWave");
		
		UPostDeathScreen_C_SetSpawnWave_Params params {};
		params.SpawnWave = SpawnWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.Tick");
		
		UPostDeathScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bJoinWaveSuccess                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::OnReceivedSpawnWaveJoinResponse_Event_1(class ASpawnWave* SpawnWave, bool bJoinWaveSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.OnReceivedSpawnWaveJoinResponse_Event_1");
		
		UPostDeathScreen_C_OnReceivedSpawnWaveJoinResponse_Event_1_Params params {};
		params.SpawnWave = SpawnWave;
		params.bJoinWaveSuccess = bJoinWaveSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.CommendPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPostDeathScreen_C::CommendPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.CommendPlayer");
		
		UPostDeathScreen_C_CommendPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPostDeathScreen_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.CustomEvent_1");
		
		UPostDeathScreen_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.EnableBottomBar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPostDeathScreen_C::EnableBottomBar(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.EnableBottomBar");
		
		UPostDeathScreen_C_EnableBottomBar_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.WidgetAnimationEvt_FadeOutKilledByStats_K2Node_WidgetAnimationEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UPostDeathScreen_C::WidgetAnimationEvt_FadeOutKilledByStats_K2Node_WidgetAnimationEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.WidgetAnimationEvt_FadeOutKilledByStats_K2Node_WidgetAnimationEvent_3");
		
		UPostDeathScreen_C_WidgetAnimationEvt_FadeOutKilledByStats_K2Node_WidgetAnimationEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.HandlePlayerKillScored
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDeathEvent                                 DeathEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPostDeathScreen_C::HandlePlayerKillScored(const struct FDeathEvent& DeathEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.HandlePlayerKillScored");
		
		UPostDeathScreen_C_HandlePlayerKillScored_Params params {};
		params.DeathEvent = DeathEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPostDeathScreen_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.OnInitialized");
		
		UPostDeathScreen_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function PostDeathScreen.PostDeathScreen_C.ExecuteUbergraph_PostDeathScreen
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPostDeathScreen_C::ExecuteUbergraph_PostDeathScreen(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PostDeathScreen.PostDeathScreen_C.ExecuteUbergraph_PostDeathScreen");
		
		UPostDeathScreen_C_ExecuteUbergraph_PostDeathScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPostDeathScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPostDeathScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PostDeathScreen.PostDeathScreen_C");
		return ptr;
	}

}


