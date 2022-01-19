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
	 * Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
	 * Size -> 0x0008 (FullSize[0x0110] - InheritedSize[0x0108])
	 */
	class UEasyAntiCheatNetComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_IPC6[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		void ServerMessage(TArray<unsigned char> Message);
		void ClientMessage(TArray<unsigned char> Message);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
