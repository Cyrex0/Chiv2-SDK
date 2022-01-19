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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class RuntimeAssetCache.RuntimeAssetCacheBuilder_ObjectBase
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class URuntimeAssetCacheBuilder_ObjectBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_X2E8[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        AssetVersion;                                            // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGCR[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AssetName;                                               // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KS0K[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		void SaveNewAssetToCache(class UObject* NewAsset);
		void OnAssetCacheMiss();
		void GetFromCacheAsyncComplete(int Handle, const struct FVoidPtrParam& DataPtr);
		void GetFromCacheAsync(const class FScriptDelegate& OnComplete);
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeAssetCache.RuntimeAssetCacheBPHooks
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URuntimeAssetCacheBPHooks : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_WaitAsynchronousCompletion(int Handle);
		bool STATIC_PollAsynchronousCompletion(int Handle);
		struct FVoidPtrParam STATIC_GetSynchronous();
		int STATIC_GetCacheSize(const class FName& Bucket);
		struct FVoidPtrParam STATIC_GetAsynchronousResults(int Handle);
		int STATIC_GetAsynchronous(const class FScriptDelegate& CompletionDelegate);
		bool STATIC_ClearCache(const class FName& Bucket);
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeAssetCache.ExampleTextureCacheBuilder
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UExampleTextureCacheBuilder : public URuntimeAssetCacheBuilder_ObjectBase
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0080(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RuntimeAssetCache.RuntimeAssetCacheBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URuntimeAssetCacheBuilder : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
