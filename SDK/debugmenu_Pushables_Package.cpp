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
	 * 		Name   -> Function debugmenu_Pushables.debugmenu_Pushables_C.SortPushables
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              PushableActors                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              SortedPushableActors                                       (Parm, OutParm, HasGetValueTypeHash)
	 */
	void Udebugmenu_Pushables_C::SortPushables(TArray<class AActor*>* PushableActors, TArray<class AActor*>* SortedPushableActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function debugmenu_Pushables.debugmenu_Pushables_C.SortPushables");
		
		Udebugmenu_Pushables_C_SortPushables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PushableActors != nullptr)
			*PushableActors = params.PushableActors;
		if (SortedPushableActors != nullptr)
			*SortedPushableActors = params.SortedPushableActors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function debugmenu_Pushables.debugmenu_Pushables_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void Udebugmenu_Pushables_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function debugmenu_Pushables.debugmenu_Pushables_C.Construct");
		
		Udebugmenu_Pushables_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function debugmenu_Pushables.debugmenu_Pushables_C.ExecuteUbergraph_debugmenu_Pushables
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void Udebugmenu_Pushables_C::ExecuteUbergraph_debugmenu_Pushables(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function debugmenu_Pushables.debugmenu_Pushables_C.ExecuteUbergraph_debugmenu_Pushables");
		
		Udebugmenu_Pushables_C_ExecuteUbergraph_debugmenu_Pushables_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction Udebugmenu_Pushables_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Udebugmenu_Pushables_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass debugmenu_Pushables.debugmenu_Pushables_C");
		return ptr;
	}

}


