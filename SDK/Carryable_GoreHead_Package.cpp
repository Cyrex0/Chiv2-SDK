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
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_Impulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACarryable_GoreHead_C::OnRep_Impulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_Impulse");
		
		ACarryable_GoreHead_C_OnRep_Impulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.SetNoGoreHeadMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACarryable_GoreHead_C::SetNoGoreHeadMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.SetNoGoreHeadMesh");
		
		ACarryable_GoreHead_C_SetNoGoreHeadMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.ShouldUseNoGore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ACarryable_GoreHead_C::ShouldUseNoGore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.ShouldUseNoGore");
		
		ACarryable_GoreHead_C_ShouldUseNoGore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.PostReplication
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACarryable_GoreHead_C::PostReplication()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.PostReplication");
		
		ACarryable_GoreHead_C_PostReplication_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedGoreHeadParams
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACarryable_GoreHead_C::OnRep_ReplicatedGoreHeadParams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedGoreHeadParams");
		
		ACarryable_GoreHead_C_OnRep_ReplicatedGoreHeadParams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedDeadCharacter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACarryable_GoreHead_C::OnRep_ReplicatedDeadCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.OnRep_ReplicatedDeadCharacter");
		
		ACarryable_GoreHead_C_OnRep_ReplicatedDeadCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.GetSkeletalMesh
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class USkeletalMeshComponent* ACarryable_GoreHead_C::GetSkeletalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.GetSkeletalMesh");
		
		ACarryable_GoreHead_C_GetSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyCustomization
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACarryable_GoreHead_C::ApplyCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyCustomization");
		
		ACarryable_GoreHead_C_ApplyCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.InitializeGoreHead
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ATBLCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGoreHeadParams                             Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACarryable_GoreHead_C::InitializeGoreHead(class ATBLCharacter* Character, const struct FGoreHeadParams& Params, const struct FVector& Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.InitializeGoreHead");
		
		ACarryable_GoreHead_C_InitializeGoreHead_Params params {};
		params.Character = Character;
		params.Params = Params;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyImpulseToGoreHead
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACarryable_GoreHead_C::ApplyImpulseToGoreHead(const struct FVector& Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.ApplyImpulseToGoreHead");
		
		ACarryable_GoreHead_C_ApplyImpulseToGoreHead_Params params {};
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.OnInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACarryable_GoreHead_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.OnInitialize");
		
		ACarryable_GoreHead_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACarryable_GoreHead_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.ReceiveBeginPlay");
		
		ACarryable_GoreHead_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function Carryable_GoreHead.Carryable_GoreHead_C.ExecuteUbergraph_Carryable_GoreHead
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACarryable_GoreHead_C::ExecuteUbergraph_Carryable_GoreHead(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carryable_GoreHead.Carryable_GoreHead_C.ExecuteUbergraph_Carryable_GoreHead");
		
		ACarryable_GoreHead_C_ExecuteUbergraph_Carryable_GoreHead_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ACarryable_GoreHead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACarryable_GoreHead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Carryable_GoreHead.Carryable_GoreHead_C");
		return ptr;
	}

}


