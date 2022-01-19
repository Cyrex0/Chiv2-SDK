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
	 * 		Name   -> Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.SetMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstance*                           Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Visualization_BaseDeployable_C::SetMaterial(class UMaterialInstance* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.SetMaterial");
		
		ABP_Visualization_BaseDeployable_C_SetMaterial_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.Set Can be Placed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InCanBePlaced                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Visualization_BaseDeployable_C::Set_Can_be_Placed(bool InCanBePlaced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.Set Can be Placed");
		
		ABP_Visualization_BaseDeployable_C_Set_Can_be_Placed_Params params {};
		params.InCanBePlaced = InCanBePlaced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Visualization_BaseDeployable_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.UserConstructionScript");
		
		ABP_Visualization_BaseDeployable_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Visualization_BaseDeployable_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ReceiveBeginPlay");
		
		ABP_Visualization_BaseDeployable_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ExecuteUbergraph_BP_Visualization_BaseDeployable
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Visualization_BaseDeployable_C::ExecuteUbergraph_BP_Visualization_BaseDeployable(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C.ExecuteUbergraph_BP_Visualization_BaseDeployable");
		
		ABP_Visualization_BaseDeployable_C_ExecuteUbergraph_BP_Visualization_BaseDeployable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_Visualization_BaseDeployable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Visualization_BaseDeployable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Visualization_BaseDeployable.BP_Visualization_BaseDeployable_C");
		return ptr;
	}

}


