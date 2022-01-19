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
	 * ScriptStruct ST_SparseGrid.ST_Int2D
	 * Size -> 0x0008
	 */
	struct FST_Int2D
	{
	public:
		int                                                        X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ST_SparseGrid.ST_SparseGridCellTile
	 * Size -> 0x0010
	 */
	struct FST_SparseGridCellTile
	{
	public:
		struct FST_Int2D                                           Start;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FST_Int2D                                           End;                                                     // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
