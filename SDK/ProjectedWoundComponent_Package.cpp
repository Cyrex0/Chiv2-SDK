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
	 * 		Name   -> Function ProjectedWoundComponent.ProjectedWoundComponent_C.TransformDirectionByRefBoneTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MeshLocalSpaceDirection                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProjectedWoundComponent_C::TransformDirectionByRefBoneTransform(const class FName& InSocketName, const struct FVector& Location, struct FVector* MeshLocalSpaceDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectedWoundComponent.ProjectedWoundComponent_C.TransformDirectionByRefBoneTransform");
		
		UProjectedWoundComponent_C_TransformDirectionByRefBoneTransform_Params params {};
		params.InSocketName = InSocketName;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshLocalSpaceDirection != nullptr)
			*MeshLocalSpaceDirection = params.MeshLocalSpaceDirection;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProjectedWoundComponent.ProjectedWoundComponent_C.TransformLocationByRefBoneTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        InSocketName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MeshLocalSpaceLocation                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProjectedWoundComponent_C::TransformLocationByRefBoneTransform(const class FName& InSocketName, const struct FVector& Location, struct FVector* MeshLocalSpaceLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectedWoundComponent.ProjectedWoundComponent_C.TransformLocationByRefBoneTransform");
		
		UProjectedWoundComponent_C_TransformLocationByRefBoneTransform_Params params {};
		params.InSocketName = InSocketName;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshLocalSpaceLocation != nullptr)
			*MeshLocalSpaceLocation = params.MeshLocalSpaceLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProjectedWoundComponent.ProjectedWoundComponent_C.GetRefBoneTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshReference                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  MeshLocalSpaceTransform                                    (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UProjectedWoundComponent_C::GetRefBoneTransform(class USkeletalMeshComponent* MeshReference, const class FName& BoneName, struct FTransform* MeshLocalSpaceTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectedWoundComponent.ProjectedWoundComponent_C.GetRefBoneTransform");
		
		UProjectedWoundComponent_C_GetRefBoneTransform_Params params {};
		params.MeshReference = MeshReference;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshLocalSpaceTransform != nullptr)
			*MeshLocalSpaceTransform = params.MeshLocalSpaceTransform;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProjectedWoundComponent.ProjectedWoundComponent_C.GetMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshReference                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProjectedWoundComponent_C::GetMesh(class USkeletalMeshComponent** MeshReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectedWoundComponent.ProjectedWoundComponent_C.GetMesh");
		
		UProjectedWoundComponent_C_GetMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshReference != nullptr)
			*MeshReference = params.MeshReference;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProjectedWoundComponent.ProjectedWoundComponent_C.CalculateRefTransforms
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UProjectedWoundComponent_C::CalculateRefTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectedWoundComponent.ProjectedWoundComponent_C.CalculateRefTransforms");
		
		UProjectedWoundComponent_C_CalculateRefTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProjectedWoundComponent.ProjectedWoundComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UProjectedWoundComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectedWoundComponent.ProjectedWoundComponent_C.ReceiveBeginPlay");
		
		UProjectedWoundComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProjectedWoundComponent.ProjectedWoundComponent_C.TakeHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WoundRadius                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProjectedWoundComponent_C::TakeHit(const struct FVector& Location, const struct FVector& Direction, float WoundRadius, float Rotation, const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectedWoundComponent.ProjectedWoundComponent_C.TakeHit");
		
		UProjectedWoundComponent_C_TakeHit_Params params {};
		params.Location = Location;
		params.Direction = Direction;
		params.WoundRadius = WoundRadius;
		params.Rotation = Rotation;
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ProjectedWoundComponent.ProjectedWoundComponent_C.ExecuteUbergraph_ProjectedWoundComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UProjectedWoundComponent_C::ExecuteUbergraph_ProjectedWoundComponent(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectedWoundComponent.ProjectedWoundComponent_C.ExecuteUbergraph_ProjectedWoundComponent");
		
		UProjectedWoundComponent_C_ExecuteUbergraph_ProjectedWoundComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UProjectedWoundComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectedWoundComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjectedWoundComponent.ProjectedWoundComponent_C");
		return ptr;
	}

}


