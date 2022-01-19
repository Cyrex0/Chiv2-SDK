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
	 * BlueprintGeneratedClass LM_TdmEvents.LM_TdmEvents_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULM_TdmEvents_C : public UTBLLocalMessageGameplayEvent
	{
	public:
		void OnMessageReceived(class APlayerController* Receiver, int Data, class APlayerState* PlayerStateA, class APlayerState* PlayerStateB, class UObject* Object);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
