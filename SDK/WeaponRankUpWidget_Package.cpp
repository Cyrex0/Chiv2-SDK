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
	 * 		Name   -> Function WeaponRankUpWidget.WeaponRankUpWidget_C.SetIcon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponRankUpWidget_C::SetIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRankUpWidget.WeaponRankUpWidget_C.SetIcon");
		
		UWeaponRankUpWidget_C_SetIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponRankUpWidget.WeaponRankUpWidget_C.StartRankMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRankUpMessage                              RankMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponRankUpWidget_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRankUpWidget.WeaponRankUpWidget_C.StartRankMessage");
		
		UWeaponRankUpWidget_C_StartRankMessage_Params params {};
		params.RankMessage = RankMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function WeaponRankUpWidget.WeaponRankUpWidget_C.ExecuteUbergraph_WeaponRankUpWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponRankUpWidget_C::ExecuteUbergraph_WeaponRankUpWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponRankUpWidget.WeaponRankUpWidget_C.ExecuteUbergraph_WeaponRankUpWidget");
		
		UWeaponRankUpWidget_C_ExecuteUbergraph_WeaponRankUpWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UWeaponRankUpWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponRankUpWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponRankUpWidget.WeaponRankUpWidget_C");
		return ptr;
	}

}


