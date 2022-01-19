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
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.HideWidget
	 */
	struct USiegeEngineHUD_C_HideWidget_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateHUD
	 */
	struct USiegeEngineHUD_C_UpdateHUD_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateSiegeState
	 */
	struct USiegeEngineHUD_C_UpdateSiegeState_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.ShowWidget
	 */
	struct USiegeEngineHUD_C_ShowWidget_Params
	{
	public:
		class ASiegeEngine*                                        Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.AddDelegates
	 */
	struct USiegeEngineHUD_C_AddDelegates_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.RemoveDelegates
	 */
	struct USiegeEngineHUD_C_RemoveDelegates_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeOutOfProgressBar
	 */
	struct USiegeEngineHUD_C_StartFadeOutOfProgressBar_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.StartFadeInOfProgressBar
	 */
	struct USiegeEngineHUD_C_StartFadeInOfProgressBar_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.PreConstruct
	 */
	struct USiegeEngineHUD_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.OnInitialized
	 */
	struct USiegeEngineHUD_C_OnInitialized_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.OnInputModeChanged
	 */
	struct USiegeEngineHUD_C_OnInputModeChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.UpdateKeybind
	 */
	struct USiegeEngineHUD_C_UpdateKeybind_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.Tick
	 */
	struct USiegeEngineHUD_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_LoadedAmmo
	 */
	struct USiegeEngineHUD_C_Catapult_LoadedAmmo_Params
	{
	public:
		class AInventoryItem*                                      LoadedAmmo;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_ReadyToFire
	 */
	struct USiegeEngineHUD_C_Catapult_ReadyToFire_Params
	{
	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.Catapult_CombatStateChanged
	 */
	struct USiegeEngineHUD_C_Catapult_CombatStateChanged_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                PreviousState;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAttackInfo                                         EventAttackInfo;                                         // 0x0018(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UCombatState*                                        CombatState;                                             // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.Ballista_CombatStateChanged
	 */
	struct USiegeEngineHUD_C_Ballista_CombatStateChanged_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                PreviousState;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAttackInfo                                         EventAttackInfo;                                         // 0x0018(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UCombatState*                                        CombatState;                                             // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.BatteringRam_CombatStateChanged
	 */
	struct USiegeEngineHUD_C_BatteringRam_CombatStateChanged_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                PreviousState;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                NewState;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAttackInfo                                         EventAttackInfo;                                         // 0x0018(0x0108)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class UCombatState*                                        CombatState;                                             // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function SiegeEngineHUD.SiegeEngineHUD_C.ExecuteUbergraph_SiegeEngineHUD
	 */
	struct USiegeEngineHUD_C_ExecuteUbergraph_SiegeEngineHUD_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
