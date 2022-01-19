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
	 * BlueprintGeneratedClass BPI_RankUpMessage.BPI_RankUpMessage_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_RankUpMessage_C : public UInterface
	{
	public:
		void StartUnlockMessage(const struct FPrimaryAssetId& Unlocked);
		void StartRankMessage(const struct FRankUpMessage& RankMessage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
