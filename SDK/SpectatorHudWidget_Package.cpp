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
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateFollowingPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHudWidget_C::UpdateFollowingPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateFollowingPlayer");
		
		USpectatorHudWidget_C_UpdateFollowingPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.CleanupPlayerState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                TeamIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ATBLPlayerState*>                     PlayerStateArray                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void USpectatorHudWidget_C::CleanupPlayerState(int TeamIndex, TArray<class ATBLPlayerState*>* PlayerStateArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.CleanupPlayerState");
		
		USpectatorHudWidget_C_CleanupPlayerState_Params params {};
		params.TeamIndex = TeamIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerStateArray != nullptr)
			*PlayerStateArray = params.PlayerStateArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateTeam
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UVerticalBox*                                VerticleBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class ATBLPlayerState*>                     PlayerStates                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               isTeam1                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHudWidget_C::UpdateTeam(TBL_EFaction Faction, class UVerticalBox* VerticleBox, TArray<class ATBLPlayerState*>* PlayerStates, bool isTeam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.UpdateTeam");
		
		USpectatorHudWidget_C_UpdateTeam_Params params {};
		params.Faction = Faction;
		params.VerticleBox = VerticleBox;
		params.isTeam1 = isTeam1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerStates != nullptr)
			*PlayerStates = params.PlayerStates;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpectatorHudWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.Construct");
		
		USpectatorHudWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorHudWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.Tick");
		
		USpectatorHudWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.OnClientPossessedPawn_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorHudWidget_C::OnClientPossessedPawn_Event_1(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.OnClientPossessedPawn_Event_1");
		
		USpectatorHudWidget_C_OnClientPossessedPawn_Event_1_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.ShowSpectatingStateWidgets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHudWidget_C::ShowSpectatingStateWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.ShowSpectatingStateWidgets");
		
		USpectatorHudWidget_C_ShowSpectatingStateWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.ShowWaitingToSpawnSpectatingWidgets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHudWidget_C::ShowWaitingToSpawnSpectatingWidgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.ShowWaitingToSpawnSpectatingWidgets");
		
		USpectatorHudWidget_C_ShowWaitingToSpawnSpectatingWidgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.HideAllWIdgets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorHudWidget_C::HideAllWIdgets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.HideAllWIdgets");
		
		USpectatorHudWidget_C_HideAllWIdgets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorHudWidget_C::OnPossessedPawn_Event_1(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn_Event_1");
		
		USpectatorHudWidget_C_OnPossessedPawn_Event_1_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorHudWidget_C::OnPossessedPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.OnPossessedPawn");
		
		USpectatorHudWidget_C_OnPossessedPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.OnPlayerSelectedSpectatorMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPlayerSpectator                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorHudWidget_C::OnPlayerSelectedSpectatorMode(bool IsPlayerSpectator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.OnPlayerSelectedSpectatorMode");
		
		USpectatorHudWidget_C_OnPlayerSelectedSpectatorMode_Params params {};
		params.IsPlayerSpectator = IsPlayerSpectator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorHudWidget.SpectatorHudWidget_C.ExecuteUbergraph_SpectatorHudWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorHudWidget_C::ExecuteUbergraph_SpectatorHudWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorHudWidget.SpectatorHudWidget_C.ExecuteUbergraph_SpectatorHudWidget");
		
		USpectatorHudWidget_C_ExecuteUbergraph_SpectatorHudWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpectatorHudWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectatorHudWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpectatorHudWidget.SpectatorHudWidget_C");
		return ptr;
	}

}


