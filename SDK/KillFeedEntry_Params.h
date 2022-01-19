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
	 * Function KillFeedEntry.KillFeedEntry_C.IsIconSetByStyle
	 */
	struct UKillFeedEntry_C_IsIconSetByStyle_Params
	{
	public:
		bool                                                       bReturnValue;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.GetStyleViaType
	 */
	struct UKillFeedEntry_C_GetStyleViaType_Params
	{
	public:
		struct FKillFeedStyle                                      Style;                                                   // 0x0000(0x0078)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.ApplyModifiers
	 */
	struct UKillFeedEntry_C_ApplyModifiers_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.ApplyTextColor
	 */
	struct UKillFeedEntry_C_ApplyTextColor_Params
	{
	public:
		struct FKillFeedStyle                                      Style;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.ApplyTextStyle
	 */
	struct UKillFeedEntry_C_ApplyTextStyle_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.ApplyStyle
	 */
	struct UKillFeedEntry_C_ApplyStyle_Params
	{
	public:
		struct FKillFeedStyle                                      Style;                                                   // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.SetState
	 */
	struct UKillFeedEntry_C_SetState_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.PreConstruct
	 */
	struct UKillFeedEntry_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.SetupKillFeedEntry
	 */
	struct UKillFeedEntry_C_SetupKillFeedEntry_Params
	{
	public:
		class ATBLPlayerState*                                     Killer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLPlayerState*                                     Victim;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AInventoryItem*                                      KillingBlowWeapon;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.RemoveEntry
	 */
	struct UKillFeedEntry_C_RemoveEntry_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.BeginRemove
	 */
	struct UKillFeedEntry_C_BeginRemove_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UKillFeedEntry_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2
	 */
	struct UKillFeedEntry_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.SetIconTexture
	 */
	struct UKillFeedEntry_C_SetIconTexture_Params
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.DeathByWeapon
	 */
	struct UKillFeedEntry_C_DeathByWeapon_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.UpdateIconTexture
	 */
	struct UKillFeedEntry_C_UpdateIconTexture_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.AnimateIn
	 */
	struct UKillFeedEntry_C_AnimateIn_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.SetPlayerNames
	 */
	struct UKillFeedEntry_C_SetPlayerNames_Params
	{
	};

	/**
	 * Function KillFeedEntry.KillFeedEntry_C.ExecuteUbergraph_KillFeedEntry
	 */
	struct UKillFeedEntry_C_ExecuteUbergraph_KillFeedEntry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
