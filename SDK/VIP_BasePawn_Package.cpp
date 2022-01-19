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
	 * 		Name   -> Function VIP_BasePawn.VIP_BasePawn_C.SetupVariantMorphTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        MeshName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                MorphTargetVariants                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		bool                                               bInvertValues                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AVIP_BasePawn_C::SetupVariantMorphTarget(const class FName& MeshName, TArray<class FName>* MorphTargetVariants, bool bInvertValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VIP_BasePawn.VIP_BasePawn_C.SetupVariantMorphTarget");
		
		AVIP_BasePawn_C_SetupVariantMorphTarget_Params params {};
		params.MeshName = MeshName;
		params.bInvertValues = bInvertValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MorphTargetVariants != nullptr)
			*MorphTargetVariants = params.MorphTargetVariants;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VIP_BasePawn.VIP_BasePawn_C.GetHatMorphTargetVariants
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class FName>                                MorphTargetsArray                                          (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AVIP_BasePawn_C::GetHatMorphTargetVariants(TArray<class FName>* MorphTargetsArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VIP_BasePawn.VIP_BasePawn_C.GetHatMorphTargetVariants");
		
		AVIP_BasePawn_C_GetHatMorphTargetVariants_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MorphTargetsArray != nullptr)
			*MorphTargetsArray = params.MorphTargetsArray;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VIP_BasePawn.VIP_BasePawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AVIP_BasePawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VIP_BasePawn.VIP_BasePawn_C.ReceiveBeginPlay");
		
		AVIP_BasePawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VIP_BasePawn.VIP_BasePawn_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		Engine_EEndPlayReason                              EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVIP_BasePawn_C::ReceiveEndPlay(Engine_EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VIP_BasePawn.VIP_BasePawn_C.ReceiveEndPlay");
		
		AVIP_BasePawn_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function VIP_BasePawn.VIP_BasePawn_C.ExecuteUbergraph_VIP_BasePawn
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AVIP_BasePawn_C::ExecuteUbergraph_VIP_BasePawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VIP_BasePawn.VIP_BasePawn_C.ExecuteUbergraph_VIP_BasePawn");
		
		AVIP_BasePawn_C_ExecuteUbergraph_VIP_BasePawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AVIP_BasePawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVIP_BasePawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass VIP_BasePawn.VIP_BasePawn_C");
		return ptr;
	}

}


