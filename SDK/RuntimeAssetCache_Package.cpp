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
	 * 		Offset -> 0x035918E0
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.SaveNewAssetToCache
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     NewAsset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeAssetCacheBuilder_ObjectBase::SaveNewAssetToCache(class UObject* NewAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.SaveNewAssetToCache");
		
		URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Params params {};
		params.NewAsset = NewAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0170ED50
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.OnAssetCacheMiss
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent)
	 */
	void URuntimeAssetCacheBuilder_ObjectBase::OnAssetCacheMiss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.OnAssetCacheMiss");
		
		URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x035916F0
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsyncComplete
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		int                                                Handle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVoidPtrParam                               DataPtr                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URuntimeAssetCacheBuilder_ObjectBase::GetFromCacheAsyncComplete(int Handle, const struct FVoidPtrParam& DataPtr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsyncComplete");
		
		URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Params params {};
		params.Handle = Handle;
		params.DataPtr = DataPtr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x03591640
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsync
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnComplete                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void URuntimeAssetCacheBuilder_ObjectBase::GetFromCacheAsync(const class FScriptDelegate& OnComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsync");
		
		URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Params params {};
		params.OnComplete = OnComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URuntimeAssetCacheBuilder_ObjectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URuntimeAssetCacheBuilder_ObjectBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x03591960
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.WaitAsynchronousCompletion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int                                                Handle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URuntimeAssetCacheBPHooks::STATIC_WaitAsynchronousCompletion(int Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.WaitAsynchronousCompletion");
		
		URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x03591860
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.PollAsynchronousCompletion
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int                                                Handle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URuntimeAssetCacheBPHooks::STATIC_PollAsynchronousCompletion(int Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.PollAsynchronousCompletion");
		
		URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x035917C0
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetSynchronous
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	struct FVoidPtrParam URuntimeAssetCacheBPHooks::STATIC_GetSynchronous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetSynchronous");
		
		URuntimeAssetCacheBPHooks_GetSynchronous_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x035915C0
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetCacheSize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Bucket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int URuntimeAssetCacheBPHooks::STATIC_GetCacheSize(const class FName& Bucket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetCacheSize");
		
		URuntimeAssetCacheBPHooks_GetCacheSize_Params params {};
		params.Bucket = Bucket;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x03591530
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronousResults
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int                                                Handle                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVoidPtrParam URuntimeAssetCacheBPHooks::STATIC_GetAsynchronousResults(int Handle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronousResults");
		
		URuntimeAssetCacheBPHooks_GetAsynchronousResults_Params params {};
		params.Handle = Handle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x03591420
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronous
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              CompletionDelegate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int URuntimeAssetCacheBPHooks::STATIC_GetAsynchronous(const class FScriptDelegate& CompletionDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronous");
		
		URuntimeAssetCacheBPHooks_GetAsynchronous_Params params {};
		params.CompletionDelegate = CompletionDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x035913A0
	 * 		Name   -> Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.ClearCache
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Bucket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool URuntimeAssetCacheBPHooks::STATIC_ClearCache(const class FName& Bucket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.ClearCache");
		
		URuntimeAssetCacheBPHooks_ClearCache_Params params {};
		params.Bucket = Bucket;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URuntimeAssetCacheBPHooks.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URuntimeAssetCacheBPHooks::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeAssetCache.RuntimeAssetCacheBPHooks");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UExampleTextureCacheBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExampleTextureCacheBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeAssetCache.ExampleTextureCacheBuilder");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction URuntimeAssetCacheBuilder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URuntimeAssetCacheBuilder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RuntimeAssetCache.RuntimeAssetCacheBuilder");
		return ptr;
	}

}


