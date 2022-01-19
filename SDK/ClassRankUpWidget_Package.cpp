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
	 * 		Name   -> Function ClassRankUpWidget.ClassRankUpWidget_C.OnLoaded_BCDCF48A44C07F102861D792F4D507D0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClassRankUpWidget_C::OnLoaded_BCDCF48A44C07F102861D792F4D507D0(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassRankUpWidget.ClassRankUpWidget_C.OnLoaded_BCDCF48A44C07F102861D792F4D507D0");
		
		UClassRankUpWidget_C_OnLoaded_BCDCF48A44C07F102861D792F4D507D0_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ClassRankUpWidget.ClassRankUpWidget_C.StartRankMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRankUpMessage                              RankMessage                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void UClassRankUpWidget_C::StartRankMessage(const struct FRankUpMessage& RankMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassRankUpWidget.ClassRankUpWidget_C.StartRankMessage");
		
		UClassRankUpWidget_C_StartRankMessage_Params params {};
		params.RankMessage = RankMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function ClassRankUpWidget.ClassRankUpWidget_C.ExecuteUbergraph_ClassRankUpWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClassRankUpWidget_C::ExecuteUbergraph_ClassRankUpWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClassRankUpWidget.ClassRankUpWidget_C.ExecuteUbergraph_ClassRankUpWidget");
		
		UClassRankUpWidget_C_ExecuteUbergraph_ClassRankUpWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UClassRankUpWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClassRankUpWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ClassRankUpWidget.ClassRankUpWidget_C");
		return ptr;
	}

}


