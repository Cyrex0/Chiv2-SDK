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
	 * 		Name   -> Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.UpdateSubclass
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Subclass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSubclassInfo_C::UpdateSubclass(class UClass* Subclass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.UpdateSubclass");
		
		ULoadoutSubclassInfo_C_UpdateSubclass_Params params {};
		params.Subclass = Subclass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateSubclassPerk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutSubclassInfo_C::CreateSubclassPerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateSubclassPerk");
		
		ULoadoutSubclassInfo_C_CreateSubclassPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateAbilityPerk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutSubclassInfo_C::CreateAbilityPerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateAbilityPerk");
		
		ULoadoutSubclassInfo_C_CreateAbilityPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateVunerabilityPerk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutSubclassInfo_C::CreateVunerabilityPerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.CreateVunerabilityPerk");
		
		ULoadoutSubclassInfo_C_CreateVunerabilityPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ULoadoutSubclassInfo_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.OnInitialized");
		
		ULoadoutSubclassInfo_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.ExecuteUbergraph_LoadoutSubclassInfo
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadoutSubclassInfo_C::ExecuteUbergraph_LoadoutSubclassInfo(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.ExecuteUbergraph_LoadoutSubclassInfo");
		
		ULoadoutSubclassInfo_C_ExecuteUbergraph_LoadoutSubclassInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.OnPlayButtonClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ULoadoutSubclassInfo_C::OnPlayButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadoutSubclassInfo.LoadoutSubclassInfo_C.OnPlayButtonClicked__DelegateSignature");
		
		ULoadoutSubclassInfo_C_OnPlayButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ULoadoutSubclassInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadoutSubclassInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadoutSubclassInfo.LoadoutSubclassInfo_C");
		return ptr;
	}

}


