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
	 * Class ST_SparseGrid.ST_SGComponent
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UST_SGComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_YDOM[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ST_SparseGrid.ST_SGStatics
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UST_SGStatics : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_K2_GetComponents_Sphere(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, float SphereRadius, bool bDrawDebug);
		void STATIC_K2_GetComponents_RotatedBox(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, const struct FRotator& BoxRotation, const struct FVector& BoxExtents, bool bDrawDebug);
		void STATIC_K2_GetComponents_Cone(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, float ConeLength, float ConeHalfAngleRadians, const struct FVector& Axis, bool bDrawDebug);
		void STATIC_K2_GetComponents_Capsule(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, const struct FVector& CapsuleAxis, float CapsuleRadius, float CapsuleHalfHeight, bool bDrawDebug);
		void STATIC_K2_GetComponents_Box(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, const struct FVector& BoxExtents, bool bDrawDebug);
		struct FST_Int2D STATIC_K2_ConvertToInt2D(int CellID, class UST_SparseGrid* Grid);
		int STATIC_K2_ConvertToCellID(const struct FST_Int2D& XY, class UST_SparseGrid* Grid);
		struct FVector2D STATIC_Int2DToVector(const struct FST_Int2D& InInt2D);
		void STATIC_GetComponentsOwners_Typed(TArray<class UST_SGComponent*> GridComponents, TArray<class AActor*>* Actors, class UClass* ActorClass);
		void STATIC_GetComponentsOwners(TArray<class UST_SGComponent*> GridComponents, TArray<class AActor*>* Actors);
		static UClass* StaticClass();
	};

	/**
	 * Class ST_SparseGrid.ST_SparseGrid
	 * Size -> 0x0078 (FullSize[0x0180] - InheritedSize[0x0108])
	 */
	class UST_SparseGrid : public UActorComponent
	{
	public:
		struct FST_Int2D                                           GridOrigin;                                              // 0x0108(0x0008) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		int                                                        NumCellsX;                                               // 0x0110(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        NumCellsY;                                               // 0x0114(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        CellSize;                                                // 0x0118(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        RegisterAllocSize;                                       // 0x011C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        RegisterAllocShrinkMultiplier;                           // 0x0120(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        CellAllocSize;                                           // 0x0124(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        CellAllocShrinkMultiplier;                               // 0x0128(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XUVG[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UST_SGComponent*>                             GridComponents;                                          // 0x0130(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TZ7H[0x40];                                  // 0x0140(0x0040) MISSED OFFSET (PADDING)

	public:
		int K2_WorldToCell(const struct FVector2D& InWorldXY);
		void K2_GetTileComponents(const struct FST_SparseGridCellTile& Tile, TArray<class UST_SGComponent*>* Components);
		struct FST_Int2D K2_GetGridMax();
		void K2_GetCellComponents(int CellID, TArray<class UST_SGComponent*>* Components);
		float K2_GetCellBoundsRadius();
		struct FST_SparseGridCellTile GetSearchTile(const struct FVector2D& WorldSearchOrigin, const struct FVector2D& WorldSearchExtents, bool bClampGridEdge);
		TArray<class UST_SGComponent*> GetGridComponents();
		class UST_SparseGrid* STATIC_Get(class UObject* WorldContextObject);
		void ForceRebuild();
		static UClass* StaticClass();
	};

	/**
	 * Class ST_SparseGrid.ST_SparseGridData
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UST_SparseGridData : public UAssetUserData
	{
	public:
		class UClass*                                              GridClass;                                               // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FST_Int2D                                           GridOrigin;                                              // 0x0030(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		int                                                        NumCellsX;                                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        NumCellsY;                                               // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        CellSize;                                                // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        RegisterAllocSize;                                       // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        CellAllocSize;                                           // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        RegisterAllocShrinkMultiplier;                           // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        CellAllocShrinkMultiplier;                               // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LW7N[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
