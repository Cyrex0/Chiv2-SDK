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
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.UpdateHealth
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorPlayerStatusEntry_C::UpdateHealth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.UpdateHealth");
		
		USpectatorPlayerStatusEntry_C_UpdateHealth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupValidPlayerEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorPlayerStatusEntry_C::SetupValidPlayerEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupValidPlayerEntry");
		
		USpectatorPlayerStatusEntry_C_SetupValidPlayerEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupBlankPlayerEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorPlayerStatusEntry_C::SetupBlankPlayerEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupBlankPlayerEntry");
		
		USpectatorPlayerStatusEntry_C_SetupBlankPlayerEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetPlayerStatusText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorPlayerStatusEntry_C::SetPlayerStatusText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetPlayerStatusText");
		
		USpectatorPlayerStatusEntry_C_SetPlayerStatusText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.IsLocalPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsLocalPlayer                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorPlayerStatusEntry_C::IsLocalPlayer(bool* IsLocalPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.IsLocalPlayer");
		
		USpectatorPlayerStatusEntry_C_IsLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLocalPlayer != nullptr)
			*IsLocalPlayer = params.IsLocalPlayer;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Player State
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLPlayerState*                             In_State                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorPlayerStatusEntry_C::Update_Player_State(class ATBLPlayerState* In_State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Player State");
		
		USpectatorPlayerStatusEntry_C_Update_Player_State_Params params {};
		params.In_State = In_State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.HasValidPlayerState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpectatorPlayerStatusEntry_C::HasValidPlayerState(bool* Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.HasValidPlayerState");
		
		USpectatorPlayerStatusEntry_C_HasValidPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Class Image
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorPlayerStatusEntry_C::Update_Class_Image()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Class Image");
		
		USpectatorPlayerStatusEntry_C_Update_Class_Image_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorPlayerStatusEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Tick");
		
		USpectatorPlayerStatusEntry_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpectatorPlayerStatusEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Construct");
		
		USpectatorPlayerStatusEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.flip
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpectatorPlayerStatusEntry_C::flip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.flip");
		
		USpectatorPlayerStatusEntry_C_flip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.ExecuteUbergraph_SpectatorPlayerStatusEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpectatorPlayerStatusEntry_C::ExecuteUbergraph_SpectatorPlayerStatusEntry(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.ExecuteUbergraph_SpectatorPlayerStatusEntry");
		
		USpectatorPlayerStatusEntry_C_ExecuteUbergraph_SpectatorPlayerStatusEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction USpectatorPlayerStatusEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpectatorPlayerStatusEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C");
		return ptr;
	}

}


