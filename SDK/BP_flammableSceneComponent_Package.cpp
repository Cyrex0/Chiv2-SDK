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
	 * 		Name   -> Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.CreateSpawnLocators
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_flammableSceneComponent_C::CreateSpawnLocators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.CreateSpawnLocators");
		
		UBP_flammableSceneComponent_C_CreateSpawnLocators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_flammableSceneComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.ReceiveBeginPlay");
		
		UBP_flammableSceneComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.CreateLocators
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBP_flammableSceneComponent_C::CreateLocators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.CreateLocators");
		
		UBP_flammableSceneComponent_C_CreateLocators_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.ExecuteUbergraph_BP_flammableSceneComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_flammableSceneComponent_C::ExecuteUbergraph_BP_flammableSceneComponent(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.ExecuteUbergraph_BP_flammableSceneComponent");
		
		UBP_flammableSceneComponent_C_ExecuteUbergraph_BP_flammableSceneComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.LocatorsCreated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBP_flammableSceneComponent_C*               Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_flammableSceneComponent_C::LocatorsCreated__DelegateSignature(class UBP_flammableSceneComponent_C* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_flammableSceneComponent.BP_flammableSceneComponent_C.LocatorsCreated__DelegateSignature");
		
		UBP_flammableSceneComponent_C_LocatorsCreated__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBP_flammableSceneComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_flammableSceneComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_flammableSceneComponent.BP_flammableSceneComponent_C");
		return ptr;
	}

}


