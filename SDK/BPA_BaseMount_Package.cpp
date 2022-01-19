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
	 * 		Offset -> 0x00E97270
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.UpdateFootStepSounds
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaSeconds__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bpp__bHidden__pf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::UpdateFootStepSounds(float bpp__DeltaSeconds__pf, bool bpp__bHidden__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.UpdateFootStepSounds");
		
		UBPA_BaseMount_C_UpdateFootStepSounds_Params params {};
		params.bpp__DeltaSeconds__pf = bpp__DeltaSeconds__pf;
		params.bpp__bHidden__pf = bpp__bHidden__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E971F0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.UpdateBPFootsteps
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              bpp__footstepsxdeltaxseconds__pfTT                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::UpdateBPFootsteps(float bpp__footstepsxdeltaxseconds__pfTT)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.UpdateBPFootsteps");
		
		UBPA_BaseMount_C_UpdateBPFootsteps_Params params {};
		params.bpp__footstepsxdeltaxseconds__pfTT = bpp__footstepsxdeltaxseconds__pfTT;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E97170
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.ExecuteUbergraph_BPA_BaseMount_3
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                bpp__EntryPoint__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::ExecuteUbergraph_BPA_BaseMount_3(int bpp__EntryPoint__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.ExecuteUbergraph_BPA_BaseMount_3");
		
		UBPA_BaseMount_C_ExecuteUbergraph_BPA_BaseMount_3_Params params {};
		params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E970E0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EventOnWantsToGallop
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		bool                                               bpp__bWantsToGallop__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::EventOnWantsToGallop(bool bpp__bWantsToGallop__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EventOnWantsToGallop");
		
		UBPA_BaseMount_C_EventOnWantsToGallop_Params params {};
		params.bpp__bWantsToGallop__pf = bpp__bWantsToGallop__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E97050
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EventOnStartDismount
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class FName                                        bpp__Direction__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::EventOnStartDismount(const class FName& bpp__Direction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EventOnStartDismount");
		
		UBPA_BaseMount_C_EventOnStartDismount_Params params {};
		params.bpp__Direction__pf = bpp__Direction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E96F80
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EventOnMovementStateChanged
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class FName                                        bpp__InMovementState__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__InPreviousMovementState__pf                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::EventOnMovementStateChanged(const class FName& bpp__InMovementState__pf, const class FName& bpp__InPreviousMovementState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EventOnMovementStateChanged");
		
		UBPA_BaseMount_C_EventOnMovementStateChanged_Params params {};
		params.bpp__InMovementState__pf = bpp__InMovementState__pf;
		params.bpp__InPreviousMovementState__pf = bpp__InPreviousMovementState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E96EF0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EventOnMounted
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class FName                                        bpp__Direction__pf                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::EventOnMounted(const class FName& bpp__Direction__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EventOnMounted");
		
		UBPA_BaseMount_C_EventOnMounted_Params params {};
		params.bpp__Direction__pf = bpp__Direction__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E96E20
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EventOnInterrupt
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAnimDamageParams                           bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::EventOnInterrupt(const struct FAnimDamageParams& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EventOnInterrupt");
		
		UBPA_BaseMount_C_EventOnInterrupt_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E96B10
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EventOnCombatStateChanged
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		class AActor*                                      bpp__Actor__pf                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__PreviousState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        bpp__NewState__pf                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAttackInfo                                 bpp__EventAttackInfo__pf__const                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		class UCombatState*                                bpp__InCombatState__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::EventOnCombatStateChanged(class AActor* bpp__Actor__pf, const class FName& bpp__PreviousState__pf, const class FName& bpp__NewState__pf, const struct FAttackInfo& bpp__EventAttackInfo__pf__const, class UCombatState* bpp__InCombatState__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EventOnCombatStateChanged");
		
		UBPA_BaseMount_C_EventOnCombatStateChanged_Params params {};
		params.bpp__Actor__pf = bpp__Actor__pf;
		params.bpp__PreviousState__pf = bpp__PreviousState__pf;
		params.bpp__NewState__pf = bpp__NewState__pf;
		params.bpp__EventAttackInfo__pf__const = bpp__EventAttackInfo__pf__const;
		params.bpp__InCombatState__pf = bpp__InCombatState__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E96A40
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EventDamageNoInterrupt
	 * 		Flags  -> (Native, Event, Public, HasOutParms)
	 * Parameters:
	 * 		struct FAnimDamageParams                           bpp__DamageEvent__pf__const                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::EventDamageNoInterrupt(const struct FAnimDamageParams& bpp__DamageEvent__pf__const)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EventDamageNoInterrupt");
		
		UBPA_BaseMount_C_EventDamageNoInterrupt_Params params {};
		params.bpp__DamageEvent__pf__const = bpp__DamageEvent__pf__const;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FBB0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FBF0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E92290
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F4D0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FC30
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FA90
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F9B0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F8B0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F8F0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FAB0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FC50
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F8D0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_AB7BC3C1457A520DDBA69084D90DD32F
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_AB7BC3C1457A520DDBA69084D90DD32F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_AB7BC3C1457A520DDBA69084D90DD32F");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_AB7BC3C1457A520DDBA69084D90DD32F_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FAD0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FA10
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FA70
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FC70
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FAF0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F890
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F990
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F590
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_CD30800C449D28C526BDE5A3AD625727
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_CD30800C449D28C526BDE5A3AD625727()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_CD30800C449D28C526BDE5A3AD625727");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_CD30800C449D28C526BDE5A3AD625727_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8F9F0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E8FA50
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA
	 * 		Flags  -> (Native, Public)
	 */
	void UBPA_BaseMount_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA");
		
		UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E969C0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaTimeX__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.BlueprintUpdateAnimation");
		
		UBPA_BaseMount_C_BlueprintUpdateAnimation_Params params {};
		params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E91CF0
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.BlueprintBeginPlay
	 * 		Flags  -> (Native, Event, Public)
	 */
	void UBPA_BaseMount_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.BlueprintBeginPlay");
		
		UBPA_BaseMount_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E92170
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_hitDamage_End
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UBPA_BaseMount_C::AnimNotify_hitDamage_End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_hitDamage_End");
		
		UBPA_BaseMount_C_AnimNotify_hitDamage_End_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00E96920
	 * 		Name   -> Function BPA_BaseMount.BPA_BaseMount_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBPA_BaseMount_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPA_BaseMount.BPA_BaseMount_C.AnimGraph");
		
		UBPA_BaseMount_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AnimGraph__pf != nullptr)
			*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBPA_BaseMount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPA_BaseMount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BPA_BaseMount.BPA_BaseMount_C");
		return ptr;
	}

}


