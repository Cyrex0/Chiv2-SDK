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
	 * ScriptStruct GameModeMessageArray.GameModeMessageArray
	 * Size -> 0x0010
	 */
	struct FGameModeMessageArray
	{
	public:
		TArray<struct FGameModeMessageTable>                       GameModeMessageRowArray_4_A006C4F24DEA90009E9569A1B61B3129; // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
