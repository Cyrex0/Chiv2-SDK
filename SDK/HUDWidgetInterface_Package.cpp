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
	 * 		Name   -> Function HUDWidgetInterface.HUDWidgetInterface_C.Set Owning HUD Component
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHUDComponent_C*                             New_Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDWidgetInterface_C::Set_Owning_HUD_Component(class UHUDComponent_C* New_Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDWidgetInterface.HUDWidgetInterface_C.Set Owning HUD Component");
		
		UHUDWidgetInterface_C_Set_Owning_HUD_Component_Params params {};
		params.New_Owner = New_Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UHUDWidgetInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDWidgetInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HUDWidgetInterface.HUDWidgetInterface_C");
		return ptr;
	}

}


