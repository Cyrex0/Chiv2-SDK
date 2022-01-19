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
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.ShowHeadDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShowHeadDetails                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CustomizationCameras_C::ShowHeadDetails(bool bShowHeadDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ShowHeadDetails");
		
		ABP_CustomizationCameras_C_ShowHeadDetails_Params params {};
		params.bShowHeadDetails = bShowHeadDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetZoomLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ABP_CustomizationCameras_C::GetZoomLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetZoomLocation");
		
		ABP_CustomizationCameras_C_GetZoomLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetRotLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ABP_CustomizationCameras_C::GetRotLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetRotLocation");
		
		ABP_CustomizationCameras_C_GetRotLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.RealignCameraRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraComponent*                            _Camera                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::RealignCameraRotation(class UCameraComponent* _Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.RealignCameraRotation");
		
		ABP_CustomizationCameras_C_RealignCameraRotation_Params params {};
		params._Camera = _Camera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCameraData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UCameraComponent*                            _Camera                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        _                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::GetCameraData(class UCameraComponent* _Camera, class FName* _)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCameraData");
		
		ABP_CustomizationCameras_C_GetCameraData_Params params {};
		params._Camera = _Camera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_ != nullptr)
			*_ = params._;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.CacheLights
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::CacheLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.CacheLights");
		
		ABP_CustomizationCameras_C_CacheLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      _                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UCameraComponent*                            CameraComp                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::GetCamera(const class FString& _, class UCameraComponent** CameraComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCamera");
		
		ABP_CustomizationCameras_C_GetCamera_Params params {};
		params._ = _;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraComp != nullptr)
			*CameraComp = params.CameraComp;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.UserConstructionScript");
		
		ABP_CustomizationCameras_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnFocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::OnFocused(const class FName& Camera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnFocused");
		
		ABP_CustomizationCameras_C_OnFocused_Params params {};
		params.Camera = Camera;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnfocused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::OnUnfocused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnfocused");
		
		ABP_CustomizationCameras_C_OnUnfocused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::FadeOut(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeOut");
		
		ABP_CustomizationCameras_C_FadeOut_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::FadeIn(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeIn");
		
		ABP_CustomizationCameras_C_FadeIn_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnCameraChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::OnCameraChange(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnCameraChange");
		
		ABP_CustomizationCameras_C_OnCameraChange_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnItemChange
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::OnItemChange(class UClass* Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnItemChange");
		
		ABP_CustomizationCameras_C_OnItemChange_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateBattlecry
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::ActivateBattlecry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateBattlecry");
		
		ABP_CustomizationCameras_C_ActivateBattlecry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::ActivateFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateFocus");
		
		ABP_CustomizationCameras_C_ActivateFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateTurn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::ActivateTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateTurn");
		
		ABP_CustomizationCameras_C_ActivateTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveBeginPlay");
		
		ABP_CustomizationCameras_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnequipItem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::OnUnequipItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnequipItem");
		
		ABP_CustomizationCameras_C_OnUnequipItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.DeactivateFocus
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::DeactivateFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.DeactivateFocus");
		
		ABP_CustomizationCameras_C_DeactivateFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.Zoom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CustomizationCameras_C::Zoom(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.Zoom");
		
		ABP_CustomizationCameras_C_Zoom_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.Rotate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::Rotate(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.Rotate");
		
		ABP_CustomizationCameras_C_Rotate_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.Reset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CustomizationCameras_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.Reset");
		
		ABP_CustomizationCameras_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveTick");
		
		ABP_CustomizationCameras_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function BP_CustomizationCameras.BP_CustomizationCameras_C.ExecuteUbergraph_BP_CustomizationCameras
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CustomizationCameras_C::ExecuteUbergraph_BP_CustomizationCameras(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CustomizationCameras.BP_CustomizationCameras_C.ExecuteUbergraph_BP_CustomizationCameras");
		
		ABP_CustomizationCameras_C_ExecuteUbergraph_BP_CustomizationCameras_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_CustomizationCameras_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CustomizationCameras_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomizationCameras.BP_CustomizationCameras_C");
		return ptr;
	}

}


