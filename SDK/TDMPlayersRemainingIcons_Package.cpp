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
	 * 		Name   -> Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.GetOrderedPlayerIconArray
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UPlayerIconWidget_C*>                 Children                                                   (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UTDMPlayersRemainingIcons_C::GetOrderedPlayerIconArray(TArray<class UPlayerIconWidget_C*>* Children)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.GetOrderedPlayerIconArray");
		
		UTDMPlayersRemainingIcons_C_GetOrderedPlayerIconArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Children != nullptr)
			*Children = params.Children;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTDMPlayersRemainingIcons_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.PreConstruct");
		
		UTDMPlayersRemainingIcons_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.UpdateNumberOfPlayersRemaining
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                PlayersRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTDMPlayersRemainingIcons_C::UpdateNumberOfPlayersRemaining(int PlayersRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.UpdateNumberOfPlayersRemaining");
		
		UTDMPlayersRemainingIcons_C_UpdateNumberOfPlayersRemaining_Params params {};
		params.PlayersRemaining = PlayersRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.SetMaxNumberPlayers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                NewMax                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTDMPlayersRemainingIcons_C::SetMaxNumberPlayers(int NewMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.SetMaxNumberPlayers");
		
		UTDMPlayersRemainingIcons_C_SetMaxNumberPlayers_Params params {};
		params.NewMax = NewMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.ExecuteUbergraph_TDMPlayersRemainingIcons
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTDMPlayersRemainingIcons_C::ExecuteUbergraph_TDMPlayersRemainingIcons(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C.ExecuteUbergraph_TDMPlayersRemainingIcons");
		
		UTDMPlayersRemainingIcons_C_ExecuteUbergraph_TDMPlayersRemainingIcons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTDMPlayersRemainingIcons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTDMPlayersRemainingIcons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TDMPlayersRemainingIcons.TDMPlayersRemainingIcons_C");
		return ptr;
	}

}


