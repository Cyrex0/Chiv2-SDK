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
	 * 		Name   -> Function OnlineConfig.OnlineConfig_C.IsRanged
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TBL_EInventoryType                                 InventoryItemType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Return_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnlineConfig_C::IsRanged(TBL_EInventoryType InventoryItemType, bool* Return_Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineConfig.OnlineConfig_C.IsRanged");
		
		UOnlineConfig_C_IsRanged_Params params {};
		params.InventoryItemType = InventoryItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return_Value != nullptr)
			*Return_Value = params.Return_Value;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function OnlineConfig.OnlineConfig_C.EventGetAchievementCategory
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FAchievementProgress                        InAchievement                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class FText                                        Category                                                   (Parm, OutParm)
	 * 		class FText                                        Subcategory                                                (Parm, OutParm)
	 * 		int                                                DisplayPriority                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnlineConfig_C::EventGetAchievementCategory(const struct FAchievementProgress& InAchievement, class FText* Category, class FText* Subcategory, int* DisplayPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineConfig.OnlineConfig_C.EventGetAchievementCategory");
		
		UOnlineConfig_C_EventGetAchievementCategory_Params params {};
		params.InAchievement = InAchievement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Category != nullptr)
			*Category = params.Category;
		if (Subcategory != nullptr)
			*Subcategory = params.Subcategory;
		if (DisplayPriority != nullptr)
			*DisplayPriority = params.DisplayPriority;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOnlineConfig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineConfig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OnlineConfig.OnlineConfig_C");
		return ptr;
	}

}


