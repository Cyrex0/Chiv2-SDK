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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OnlineSubsystemPlayFab.EPlayFabMatchmakingState
	 */
	enum class OnlineSubsystemPlayFab_EPlayFabMatchmakingState : uint8_t
	{
		EPlayFabMatchmakingState__Inactive                     = 0,
		EPlayFabMatchmakingState__WaitingForQos                = 1,
		EPlayFabMatchmakingState__WaitingForTicket             = 2,
		EPlayFabMatchmakingState__PollingForMatch              = 3,
		EPlayFabMatchmakingState__PollingForGameServer         = 4,
		EPlayFabMatchmakingState__PollingBackfill              = 5,
		EPlayFabMatchmakingState__Invalid                      = 6,
		EPlayFabMatchmakingState__EPlayFabMatchmakingState_MAX = 7
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
