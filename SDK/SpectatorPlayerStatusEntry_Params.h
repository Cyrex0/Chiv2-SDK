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
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.UpdateHealth
	 */
	struct USpectatorPlayerStatusEntry_C_UpdateHealth_Params
	{
	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupValidPlayerEntry
	 */
	struct USpectatorPlayerStatusEntry_C_SetupValidPlayerEntry_Params
	{
	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetupBlankPlayerEntry
	 */
	struct USpectatorPlayerStatusEntry_C_SetupBlankPlayerEntry_Params
	{
	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.SetPlayerStatusText
	 */
	struct USpectatorPlayerStatusEntry_C_SetPlayerStatusText_Params
	{
	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.IsLocalPlayer
	 */
	struct USpectatorPlayerStatusEntry_C_IsLocalPlayer_Params
	{
	public:
		bool                                                       IsLocalPlayer;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Player State
	 */
	struct USpectatorPlayerStatusEntry_C_Update_Player_State_Params
	{
	public:
		class ATBLPlayerState*                                     In_State;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.HasValidPlayerState
	 */
	struct USpectatorPlayerStatusEntry_C_HasValidPlayerState_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Update Class Image
	 */
	struct USpectatorPlayerStatusEntry_C_Update_Class_Image_Params
	{
	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Tick
	 */
	struct USpectatorPlayerStatusEntry_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.Construct
	 */
	struct USpectatorPlayerStatusEntry_C_Construct_Params
	{
	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.flip
	 */
	struct USpectatorPlayerStatusEntry_C_flip_Params
	{
	};

	/**
	 * Function SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C.ExecuteUbergraph_SpectatorPlayerStatusEntry
	 */
	struct USpectatorPlayerStatusEntry_C_ExecuteUbergraph_SpectatorPlayerStatusEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
