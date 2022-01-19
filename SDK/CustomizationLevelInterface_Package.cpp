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
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.ManuallySetCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UCameraComponent*                            TargetCameraComp                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_CustomizationCameras_C*                  CameraBlueprint                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLevelInterface_C::ManuallySetCamera(class UCameraComponent* TargetCameraComp, const class FName& Camera, class ABP_CustomizationCameras_C* CameraBlueprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.ManuallySetCamera");
		
		UCustomizationLevelInterface_C_ManuallySetCamera_Params params {};
		params.TargetCameraComp = TargetCameraComp;
		params.Camera = Camera;
		params.CameraBlueprint = CameraBlueprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCustomizationCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EAudioClassType                                Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATBLCharacter*                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLevelInterface_C::GetCustomizationCharacter(TBL_EAudioClassType Class, class ATBLCharacter** Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCustomizationCharacter");
		
		UCustomizationLevelInterface_C_GetCustomizationCharacter_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCurrentFaction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLevelInterface_C::GetCurrentFaction(TBL_EFaction* Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCurrentFaction");
		
		UCustomizationLevelInterface_C_GetCurrentFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Faction != nullptr)
			*Faction = params.Faction;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptRotate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLevelInterface_C::AttemptRotate(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptRotate");
		
		UCustomizationLevelInterface_C_AttemptRotate_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptZoom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationLevelInterface_C::AttemptZoom(bool In)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptZoom");
		
		UCustomizationLevelInterface_C_AttemptZoom_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.CustomizationCategoryChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CategoryName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLevelInterface_C::CustomizationCategoryChanged(const class FName& CategoryName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.CustomizationCategoryChanged");
		
		UCustomizationLevelInterface_C_CustomizationCategoryChanged_Params params {};
		params.CategoryName = CategoryName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetSpecatorPawnSpawnLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void UCustomizationLevelInterface_C::GetSpecatorPawnSpawnLocation(struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetSpecatorPawnSpawnLocation");
		
		UCustomizationLevelInterface_C_GetSpecatorPawnSpawnLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialDeSpawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCustomizationLevelInterface_C::RequestTutorialDeSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialDeSpawn");
		
		UCustomizationLevelInterface_C_RequestTutorialDeSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialSpawn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCustomizationLevelInterface_C::RequestTutorialSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialSpawn");
		
		UCustomizationLevelInterface_C_RequestTutorialSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetClass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EAudioClassType                                Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLevelInterface_C::SetClass(TBL_EAudioClassType Class)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetClass");
		
		UCustomizationLevelInterface_C_SetClass_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.EquipWeapon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Weapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EAudioClassType                                Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLevelInterface_C::EquipWeapon(class UClass* Weapon, TBL_EAudioClassType Class, TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.EquipWeapon");
		
		UCustomizationLevelInterface_C_EquipWeapon_Params params {};
		params.Weapon = Weapon;
		params.Class = Class;
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptFocus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCustomizationLevelInterface_C::AttemptFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptFocus");
		
		UCustomizationLevelInterface_C_AttemptFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCustomizationLevelInterface_C::AttemptTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptTurn");
		
		UCustomizationLevelInterface_C_AttemptTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptBattlecry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCustomizationLevelInterface_C::AttemptBattlecry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptBattlecry");
		
		UCustomizationLevelInterface_C_AttemptBattlecry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetFaction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLevelInterface_C::SetFaction(TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetFaction");
		
		UCustomizationLevelInterface_C_SetFaction_Params params {};
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CustomizationLevelInterface.CustomizationLevelInterface_C.ApplyAssets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FCustomizationEntry>                 Assts                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TBL_EAudioClassType                                Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TBL_EFaction                                       Faction                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomizationLevelInterface_C::ApplyAssets(TArray<struct FCustomizationEntry> Assts, TBL_EAudioClassType Class, TBL_EFaction Faction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomizationLevelInterface.CustomizationLevelInterface_C.ApplyAssets");
		
		UCustomizationLevelInterface_C_ApplyAssets_Params params {};
		params.Assts = Assts;
		params.Class = Class;
		params.Faction = Faction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCustomizationLevelInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomizationLevelInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CustomizationLevelInterface.CustomizationLevelInterface_C");
		return ptr;
	}

}


