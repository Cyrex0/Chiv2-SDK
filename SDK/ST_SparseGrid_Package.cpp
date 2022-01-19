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
	 * 		Name   -> PredefindFunction UST_SGComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UST_SGComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ST_SparseGrid.ST_SGComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEF5F0
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Sphere
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UST_SGComponent*>                     GridComponents                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SphereRadius                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawDebug                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UST_SGStatics::STATIC_K2_GetComponents_Sphere(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, float SphereRadius, bool bDrawDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Sphere");
		
		UST_SGStatics_K2_GetComponents_Sphere_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;
		params.SphereRadius = SphereRadius;
		params.bDrawDebug = bDrawDebug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GridComponents != nullptr)
			*GridComponents = params.GridComponents;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEF3E0
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_RotatedBox
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UST_SGComponent*>                     GridComponents                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    BoxRotation                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BoxExtents                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawDebug                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UST_SGStatics::STATIC_K2_GetComponents_RotatedBox(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, const struct FRotator& BoxRotation, const struct FVector& BoxExtents, bool bDrawDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_RotatedBox");
		
		UST_SGStatics_K2_GetComponents_RotatedBox_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;
		params.BoxRotation = BoxRotation;
		params.BoxExtents = BoxExtents;
		params.bDrawDebug = bDrawDebug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GridComponents != nullptr)
			*GridComponents = params.GridComponents;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEF1A0
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Cone
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UST_SGComponent*>                     GridComponents                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ConeLength                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ConeHalfAngleRadians                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Axis                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawDebug                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UST_SGStatics::STATIC_K2_GetComponents_Cone(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, float ConeLength, float ConeHalfAngleRadians, const struct FVector& Axis, bool bDrawDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Cone");
		
		UST_SGStatics_K2_GetComponents_Cone_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;
		params.ConeLength = ConeLength;
		params.ConeHalfAngleRadians = ConeHalfAngleRadians;
		params.Axis = Axis;
		params.bDrawDebug = bDrawDebug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GridComponents != nullptr)
			*GridComponents = params.GridComponents;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEEF60
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Capsule
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UST_SGComponent*>                     GridComponents                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CapsuleAxis                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CapsuleRadius                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CapsuleHalfHeight                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawDebug                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UST_SGStatics::STATIC_K2_GetComponents_Capsule(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, const struct FVector& CapsuleAxis, float CapsuleRadius, float CapsuleHalfHeight, bool bDrawDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Capsule");
		
		UST_SGStatics_K2_GetComponents_Capsule_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;
		params.CapsuleAxis = CapsuleAxis;
		params.CapsuleRadius = CapsuleRadius;
		params.CapsuleHalfHeight = CapsuleHalfHeight;
		params.bDrawDebug = bDrawDebug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GridComponents != nullptr)
			*GridComponents = params.GridComponents;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEED80
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Box
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UST_SGComponent*>                     GridComponents                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BoxExtents                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDrawDebug                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UST_SGStatics::STATIC_K2_GetComponents_Box(class UObject* WorldContextObject, TArray<class UST_SGComponent*>* GridComponents, const struct FVector& WorldLocation, const struct FVector& BoxExtents, bool bDrawDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.K2_GetComponents_Box");
		
		UST_SGStatics_K2_GetComponents_Box_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.WorldLocation = WorldLocation;
		params.BoxExtents = BoxExtents;
		params.bDrawDebug = bDrawDebug;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GridComponents != nullptr)
			*GridComponents = params.GridComponents;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEEBB0
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.K2_ConvertToInt2D
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int                                                CellID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UST_SparseGrid*                              Grid                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FST_Int2D UST_SGStatics::STATIC_K2_ConvertToInt2D(int CellID, class UST_SparseGrid* Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.K2_ConvertToInt2D");
		
		UST_SGStatics_K2_ConvertToInt2D_Params params {};
		params.CellID = CellID;
		params.Grid = Grid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEEAE0
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.K2_ConvertToCellID
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FST_Int2D                                   XY                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UST_SparseGrid*                              Grid                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int UST_SGStatics::STATIC_K2_ConvertToCellID(const struct FST_Int2D& XY, class UST_SparseGrid* Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.K2_ConvertToCellID");
		
		UST_SGStatics_K2_ConvertToCellID_Params params {};
		params.XY = XY;
		params.Grid = Grid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEEA40
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.Int2DToVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FST_Int2D                                   InInt2D                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UST_SGStatics::STATIC_Int2DToVector(const struct FST_Int2D& InInt2D)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.Int2DToVector");
		
		UST_SGStatics_Int2DToVector_Params params {};
		params.InInt2D = InInt2D;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEE720
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.GetComponentsOwners_Typed
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UST_SGComponent*>                     GridComponents                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UST_SGStatics::STATIC_GetComponentsOwners_Typed(TArray<class UST_SGComponent*> GridComponents, TArray<class AActor*>* Actors, class UClass* ActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.GetComponentsOwners_Typed");
		
		UST_SGStatics_GetComponentsOwners_Typed_Params params {};
		params.GridComponents = GridComponents;
		params.ActorClass = ActorClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEE610
	 * 		Name   -> Function ST_SparseGrid.ST_SGStatics.GetComponentsOwners
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UST_SGComponent*>                     GridComponents                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UST_SGStatics::STATIC_GetComponentsOwners(TArray<class UST_SGComponent*> GridComponents, TArray<class AActor*>* Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SGStatics.GetComponentsOwners");
		
		UST_SGStatics_GetComponentsOwners_Params params {};
		params.GridComponents = GridComponents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actors != nullptr)
			*Actors = params.Actors;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UST_SGStatics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UST_SGStatics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ST_SparseGrid.ST_SGStatics");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEF920
	 * 		Name   -> Function ST_SparseGrid.ST_SparseGrid.K2_WorldToCell
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   InWorldXY                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int UST_SparseGrid::K2_WorldToCell(const struct FVector2D& InWorldXY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SparseGrid.K2_WorldToCell");
		
		UST_SparseGrid_K2_WorldToCell_Params params {};
		params.InWorldXY = InWorldXY;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEF810
	 * 		Name   -> Function ST_SparseGrid.ST_SparseGrid.K2_GetTileComponents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FST_SparseGridCellTile                      Tile                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UST_SGComponent*>                     Components                                                 (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UST_SparseGrid::K2_GetTileComponents(const struct FST_SparseGridCellTile& Tile, TArray<class UST_SGComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SparseGrid.K2_GetTileComponents");
		
		UST_SparseGrid_K2_GetTileComponents_Params params {};
		params.Tile = Tile;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEF7C0
	 * 		Name   -> Function ST_SparseGrid.ST_SparseGrid.K2_GetGridMax
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FST_Int2D UST_SparseGrid::K2_GetGridMax()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SparseGrid.K2_GetGridMax");
		
		UST_SparseGrid_K2_GetGridMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEECA0
	 * 		Name   -> Function ST_SparseGrid.ST_SparseGrid.K2_GetCellComponents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int                                                CellID                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UST_SGComponent*>                     Components                                                 (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UST_SparseGrid::K2_GetCellComponents(int CellID, TArray<class UST_SGComponent*>* Components)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SparseGrid.K2_GetCellComponents");
		
		UST_SparseGrid_K2_GetCellComponents_Params params {};
		params.CellID = CellID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Components != nullptr)
			*Components = params.Components;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEEC70
	 * 		Name   -> Function ST_SparseGrid.ST_SparseGrid.K2_GetCellBoundsRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UST_SparseGrid::K2_GetCellBoundsRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SparseGrid.K2_GetCellBoundsRadius");
		
		UST_SparseGrid_K2_GetCellBoundsRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEE900
	 * 		Name   -> Function ST_SparseGrid.ST_SparseGrid.GetSearchTile
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector2D                                   WorldSearchOrigin                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   WorldSearchExtents                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bClampGridEdge                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FST_SparseGridCellTile UST_SparseGrid::GetSearchTile(const struct FVector2D& WorldSearchOrigin, const struct FVector2D& WorldSearchExtents, bool bClampGridEdge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SparseGrid.GetSearchTile");
		
		UST_SparseGrid_GetSearchTile_Params params {};
		params.WorldSearchOrigin = WorldSearchOrigin;
		params.WorldSearchExtents = WorldSearchExtents;
		params.bClampGridEdge = bClampGridEdge;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEE870
	 * 		Name   -> Function ST_SparseGrid.ST_SparseGrid.GetGridComponents
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UST_SGComponent*> UST_SparseGrid::GetGridComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SparseGrid.GetGridComponents");
		
		UST_SparseGrid_GetGridComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEE590
	 * 		Name   -> Function ST_SparseGrid.ST_SparseGrid.Get
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UST_SparseGrid* UST_SparseGrid::STATIC_Get(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SparseGrid.Get");
		
		UST_SparseGrid_Get_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00AEE570
	 * 		Name   -> Function ST_SparseGrid.ST_SparseGrid.ForceRebuild
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UST_SparseGrid::ForceRebuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ST_SparseGrid.ST_SparseGrid.ForceRebuild");
		
		UST_SparseGrid_ForceRebuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UST_SparseGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UST_SparseGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ST_SparseGrid.ST_SparseGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UST_SparseGridData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UST_SparseGridData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ST_SparseGrid.ST_SparseGridData");
		return ptr;
	}

}


