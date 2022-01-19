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
	 * 		Name   -> Function CrossbowAttack.CrossbowAttack_C.OnAssemble_CrossbowAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UCrossbowAttack_C::OnAssemble_CrossbowAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossbowAttack.CrossbowAttack_C.OnAssemble_CrossbowAttack");
		
		UCrossbowAttack_C_OnAssemble_CrossbowAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function CrossbowAttack.CrossbowAttack_C.ExecuteUbergraph_CrossbowAttack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCrossbowAttack_C::ExecuteUbergraph_CrossbowAttack(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrossbowAttack.CrossbowAttack_C.ExecuteUbergraph_CrossbowAttack");
		
		UCrossbowAttack_C_ExecuteUbergraph_CrossbowAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCrossbowAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrossbowAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrossbowAttack.CrossbowAttack_C");
		return ptr;
	}

}


