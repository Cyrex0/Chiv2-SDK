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
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATwAkAmbientVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATwAkAmbientVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwAkAmbientVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATwAkEmitterArrayActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATwAkEmitterArrayActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwAkEmitterArrayActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0101D790
	 * 		Name   -> Function TwAudio.TwAkEmitterArrayComponent.PostEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAkAudioEvent*                               Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwAkEmitterArrayComponent::PostEvent(class UAkAudioEvent* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkEmitterArrayComponent.PostEvent");
		
		UTwAkEmitterArrayComponent_PostEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0101D6B0
	 * 		Name   -> Function TwAudio.TwAkEmitterArrayComponent.EnableVoice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTwAkEmitterArrayComponent::EnableVoice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkEmitterArrayComponent.EnableVoice");
		
		UTwAkEmitterArrayComponent_EnableVoice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0101D690
	 * 		Name   -> Function TwAudio.TwAkEmitterArrayComponent.DisableVoice
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTwAkEmitterArrayComponent::DisableVoice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkEmitterArrayComponent.DisableVoice");
		
		UTwAkEmitterArrayComponent_DisableVoice_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTwAkEmitterArrayComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwAkEmitterArrayComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwAkEmitterArrayComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATwAkReverbVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATwAkReverbVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwAkReverbVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATwRTPCTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATwRTPCTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwRTPCTrigger");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0101D6D0
	 * 		Name   -> Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      A1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      A2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwAkSplineProximityEffectsComponent::EndOverlap(class AActor* A1, class AActor* A2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap");
		
		UTwAkSplineProximityEffectsComponent_EndOverlap_Params params {};
		params.A1 = A1;
		params.A2 = A2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0101D5D0
	 * 		Name   -> Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      A1                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      A2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTwAkSplineProximityEffectsComponent::BeginOverlap(class AActor* A1, class AActor* A2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap");
		
		UTwAkSplineProximityEffectsComponent_BeginOverlap_Params params {};
		params.A1 = A1;
		params.A2 = A2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTwAkSplineProximityEffectsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwAkSplineProximityEffectsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwAkSplineProximityEffectsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATwAmbienceMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATwAmbienceMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwAmbienceMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTwAnimNotify_PostAkEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwAnimNotify_PostAkEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwAnimNotify_PostAkEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UTwSoundShapeLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTwSoundShapeLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwSoundShapeLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATwSplineEmitterBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATwSplineEmitterBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TwAudio.TwSplineEmitterBase");
		return ptr;
	}

}


