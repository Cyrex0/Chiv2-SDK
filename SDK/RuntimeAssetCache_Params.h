#pragma once

/**
 * Name: chiv2
 * Version: 123456
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.SaveNewAssetToCache
	 */
	struct URuntimeAssetCacheBuilder_ObjectBase_SaveNewAssetToCache_Params
	{
	public:
		class UObject*                                             NewAsset;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.OnAssetCacheMiss
	 */
	struct URuntimeAssetCacheBuilder_ObjectBase_OnAssetCacheMiss_Params
	{
	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsyncComplete
	 */
	struct URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsyncComplete_Params
	{
	public:
		int                                                        Handle;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVoidPtrParam                                       DataPtr;                                                 // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase.GetFromCacheAsync
	 */
	struct URuntimeAssetCacheBuilder_ObjectBase_GetFromCacheAsync_Params
	{
	public:
		class FScriptDelegate                                      OnComplete;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.WaitAsynchronousCompletion
	 */
	struct URuntimeAssetCacheBPHooks_WaitAsynchronousCompletion_Params
	{
	public:
		int                                                        Handle;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.PollAsynchronousCompletion
	 */
	struct URuntimeAssetCacheBPHooks_PollAsynchronousCompletion_Params
	{
	public:
		int                                                        Handle;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetSynchronous
	 */
	struct URuntimeAssetCacheBPHooks_GetSynchronous_Params
	{
	public:
		struct FVoidPtrParam                                       ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetCacheSize
	 */
	struct URuntimeAssetCacheBPHooks_GetCacheSize_Params
	{
	public:
		class FName                                                Bucket;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronousResults
	 */
	struct URuntimeAssetCacheBPHooks_GetAsynchronousResults_Params
	{
	public:
		int                                                        Handle;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVoidPtrParam                                       ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.GetAsynchronous
	 */
	struct URuntimeAssetCacheBPHooks_GetAsynchronous_Params
	{
	public:
		class FScriptDelegate                                      CompletionDelegate;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int                                                        ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function RuntimeAssetCache.RuntimeAssetCacheBPHooks.ClearCache
	 */
	struct URuntimeAssetCacheBPHooks_ClearCache_Params
	{
	public:
		class FName                                                Bucket;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
