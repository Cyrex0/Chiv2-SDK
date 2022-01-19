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
	 * 		Name   -> Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASmokePot_WorldEffect_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.ReceiveBeginPlay");
		
		ASmokePot_WorldEffect_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.OnTimeout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASmokePot_WorldEffect_C::OnTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.OnTimeout");
		
		ASmokePot_WorldEffect_C_OnTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.ExecuteUbergraph_SmokePot_WorldEffect
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASmokePot_WorldEffect_C::ExecuteUbergraph_SmokePot_WorldEffect(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SmokePot_WorldEffect.SmokePot_WorldEffect_C.ExecuteUbergraph_SmokePot_WorldEffect");
		
		ASmokePot_WorldEffect_C_ExecuteUbergraph_SmokePot_WorldEffect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ASmokePot_WorldEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASmokePot_WorldEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SmokePot_WorldEffect.SmokePot_WorldEffect_C");
		return ptr;
	}

}


