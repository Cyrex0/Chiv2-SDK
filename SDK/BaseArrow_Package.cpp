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
	 * 		Name   -> Function BaseArrow.BaseArrow_C.OnRep_StartTimestamp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::OnRep_StartTimestamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.OnRep_StartTimestamp");
		
		ABaseArrow_C_OnRep_StartTimestamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.PlaySoundOnLocalFakeClient
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAkAudioEvent*                               Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABaseArrow_C::PlaySoundOnLocalFakeClient(class UAkAudioEvent* Sound, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.PlaySoundOnLocalFakeClient");
		
		ABaseArrow_C_PlaySoundOnLocalFakeClient_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.UserConstructionScript");
		
		ABaseArrow_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.Disable glint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::Disable_glint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.Disable glint");
		
		ABaseArrow_C_Disable_glint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.Enable glint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::Enable_glint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.Enable glint");
		
		ABaseArrow_C_Enable_glint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.EnableProjectileTailParticle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::EnableProjectileTailParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.EnableProjectileTailParticle");
		
		ABaseArrow_C_EnableProjectileTailParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.DisableProjectileTailParticle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::DisableProjectileTailParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.DisableProjectileTailParticle");
		
		ABaseArrow_C_DisableProjectileTailParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.ProjectileMovementStarted_BaseArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::ProjectileMovementStarted_BaseArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.ProjectileMovementStarted_BaseArrow");
		
		ABaseArrow_C_ProjectileMovementStarted_BaseArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.ProjectileMovementStopped_BaseArrow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::ProjectileMovementStopped_BaseArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.ProjectileMovementStopped_BaseArrow");
		
		ABaseArrow_C_ProjectileMovementStopped_BaseArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.BaseArrow_AssignProjectileEvents
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::BaseArrow_AssignProjectileEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.BaseArrow_AssignProjectileEvents");
		
		ABaseArrow_C_BaseArrow_AssignProjectileEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.ParticleTimerEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaseArrow_C::ParticleTimerEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.ParticleTimerEvent");
		
		ABaseArrow_C_ParticleTimerEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BaseArrow.BaseArrow_C.ExecuteUbergraph_BaseArrow
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseArrow_C::ExecuteUbergraph_BaseArrow(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseArrow.BaseArrow_C.ExecuteUbergraph_BaseArrow");
		
		ABaseArrow_C_ExecuteUbergraph_BaseArrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABaseArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseArrow.BaseArrow_C");
		return ptr;
	}

}


