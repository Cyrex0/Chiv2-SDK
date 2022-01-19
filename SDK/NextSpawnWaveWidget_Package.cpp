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
	 * 		Name   -> Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNextSpawnWaveWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.Construct");
		
		UNextSpawnWaveWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.NextSpawnWaveReplicated_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpawnWave*                                  SpawnWave                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNextSpawnWaveWidget_C::NextSpawnWaveReplicated_Event_1(class ASpawnWave* SpawnWave)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.NextSpawnWaveReplicated_Event_1");
		
		UNextSpawnWaveWidget_C_NextSpawnWaveReplicated_Event_1_Params params {};
		params.SpawnWave = SpawnWave;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x01A3BCC0
	 * 		Name   -> Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.ExecuteUbergraph_NextSpawnWaveWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNextSpawnWaveWidget_C::ExecuteUbergraph_NextSpawnWaveWidget(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.ExecuteUbergraph_NextSpawnWaveWidget");
		
		UNextSpawnWaveWidget_C_ExecuteUbergraph_NextSpawnWaveWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNextSpawnWaveWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNextSpawnWaveWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NextSpawnWaveWidget.NextSpawnWaveWidget_C");
		return ptr;
	}

}


