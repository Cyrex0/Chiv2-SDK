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
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPC
	 */
	struct UFunctionLibrary_UI_C_IsProvidedPlatformPC_Params
	{
	public:
		TBL_EHardwarePlatform                                      Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformXBox
	 */
	struct UFunctionLibrary_UI_C_IsProvidedPlatformXBox_Params
	{
	public:
		TBL_EHardwarePlatform                                      Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformPlayStation
	 */
	struct UFunctionLibrary_UI_C_IsProvidedPlatformPlayStation_Params
	{
	public:
		TBL_EHardwarePlatform                                      Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.AreProvidedPlatformsSimilar
	 */
	struct UFunctionLibrary_UI_C_AreProvidedPlatformsSimilar_Params
	{
	public:
		TBL_EHardwarePlatform                                      OwningPlayerHardwarePlatform;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHardwarePlatform                                      TargetPlayerHardwarePlatform;                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Similar;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollWithVelocity
	 */
	struct UFunctionLibrary_UI_C_ScrollWithVelocity_Params
	{
	public:
		class UScrollBox*                                          ScrollBox;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Velocity;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.ScrollBy
	 */
	struct UFunctionLibrary_UI_C_ScrollBy_Params
	{
	public:
		class UScrollBox*                                          ScrollBox;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScrollOffsetDelta;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetCustomizationHeadCategories
	 */
	struct UFunctionLibrary_UI_C_GetCustomizationHeadCategories_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        Categories;                                              // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
		TArray<class FText>                                        CategoryTexts;                                           // 0x0018(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsProvidedPlatformConsole
	 */
	struct UFunctionLibrary_UI_C_IsProvidedPlatformConsole_Params
	{
	public:
		TBL_EHardwarePlatform                                      Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _;                                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.UpdatePlayerPlatformIcon
	 */
	struct UFunctionLibrary_UI_C_UpdatePlayerPlatformIcon_Params
	{
	public:
		TBL_EHardwarePlatform                                      OwningPlayerHardwarePlatform;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EHardwarePlatform                                      TargetPlayerHardwarePlatform;                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             PlatformIconContainer;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              PlatformIconImage;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsInParty
	 */
	struct UFunctionLibrary_UI_C_IsInParty_Params
	{
	public:
		class ATBLPlayerState*                                     Player1;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLPlayerState*                                     Player2;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAllyColours
	 */
	struct UFunctionLibrary_UI_C_GetAllyColours_Params
	{
	public:
		bool                                                       IsInParty;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFriend;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateColor                                         SlateColor;                                              // 0x0010(0x0028)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Group Text from Group Id
	 */
	struct UFunctionLibrary_UI_C_Get_Group_Text_from_Group_Id_Params
	{
	public:
		class FName                                                Group_Id;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Weapon_Group_Text;                                       // 0x0010(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetSelectedbuttonColor
	 */
	struct UFunctionLibrary_UI_C_GetSelectedbuttonColor_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NewParam;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformConsole
	 */
	struct UFunctionLibrary_UI_C_IsPlatformConsole_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _;                                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.IsPlatformPC
	 */
	struct UFunctionLibrary_UI_C_IsPlatformPC_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _;                                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.OnlineStatToText
	 */
	struct UFunctionLibrary_UI_C_OnlineStatToText_Params
	{
	public:
		TBL_EOnlineStat                                            Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.CreateRankUpMessageFromLevelUp
	 */
	struct UFunctionLibrary_UI_C_CreateRankUpMessageFromLevelUp_Params
	{
	public:
		struct FLevelUpResult                                      LevelUpResult;                                           // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRankUpMessage                                      RankUpMessage;                                           // 0x0060(0x0018)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpClassIconFromOnlineStat
	 */
	struct UFunctionLibrary_UI_C_GetRankUpClassIconFromOnlineStat_Params
	{
	public:
		TBL_EOnlineStat                                            Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpItemFromOnlineStat
	 */
	struct UFunctionLibrary_UI_C_GetRankUpItemFromOnlineStat_Params
	{
	public:
		TBL_EOnlineStat                                            Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.SetGamepadButtonText
	 */
	struct UFunctionLibrary_UI_C_SetGamepadButtonText_Params
	{
	public:
		class URadiobutton_C*                                      Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToColor
	 */
	struct UFunctionLibrary_UI_C_ItemRarityToColor_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAsset;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TBL_ETBLRarity                                             Rarity;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateColor                                         SlateColor;                                              // 0x0020(0x0028)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetPlayersName
	 */
	struct UFunctionLibrary_UI_C_GetPlayersName_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Name;                                                    // 0x0010(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetRankUpMessageTypeFromOnlineStat
	 */
	struct UFunctionLibrary_UI_C_GetRankUpMessageTypeFromOnlineStat_Params
	{
	public:
		TBL_EOnlineStat                                            Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		RankUpMessageType_ERankUpMessageType                       RankUpMessageType;                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.ItemRarityToText
	 */
	struct UFunctionLibrary_UI_C_ItemRarityToText_Params
	{
	public:
		struct FPrimaryAssetId                                     PrimaryAsset;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TBL_ETBLRarity                                             Rarity;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                _;                                                       // 0x0020(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound
	 */
	struct UFunctionLibrary_UI_C_PlayUxSound_Params
	{
	public:
		class UAkAudioEvent*                                       SoundEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayDataTableSound
	 */
	struct UFunctionLibrary_UI_C_PlayDataTableSound_Params
	{
	public:
		struct FDataTableRowHandle                                 RowHandle;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.ShouldDisableWidget
	 */
	struct UFunctionLibrary_UI_C_ShouldDisableWidget_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.ConvertTimeToText
	 */
	struct UFunctionLibrary_UI_C_ConvertTimeToText_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                SecondsText;                                             // 0x0010(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromClass
	 */
	struct UFunctionLibrary_UI_C_GetLocalizedTextFromClass_Params
	{
	public:
		TBL_EAudioClassType                                        Class;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetLocalizedTextFromFaction
	 */
	struct UFunctionLibrary_UI_C_GetLocalizedTextFromFaction_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.LimitTextCharacters
	 */
	struct UFunctionLibrary_UI_C_LimitTextCharacters_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int                                                        Limit;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColorText
	 */
	struct UFunctionLibrary_UI_C_GetTeamColorText_Params
	{
	public:
		ObjMarkerTeam_EObjMarkerTeam                               Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementTitle
	 */
	struct UFunctionLibrary_UI_C_GetAchievementTitle_Params
	{
	public:
		struct FAchievementProgress                                Achievement;                                             // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0048(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAchievementDescription
	 */
	struct UFunctionLibrary_UI_C_GetAchievementDescription_Params
	{
	public:
		struct FAchievementProgress                                Achievement;                                             // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0048(0x0018)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.ClearAllInputHints
	 */
	struct UFunctionLibrary_UI_C_ClearAllInputHints_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.AddInputHint
	 */
	struct UFunctionLibrary_UI_C_AddInputHint_Params
	{
	public:
		class FString                                              Keybinding;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                Tag;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                HintText;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Enable;                                                  // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AddToTop;                                                // 0x0031(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetTeamColor
	 */
	struct UFunctionLibrary_UI_C_GetTeamColor_Params
	{
	public:
		ObjMarkerTeam_EObjMarkerTeam                               Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.Has Child Of Type
	 */
	struct UFunctionLibrary_UI_C_Has_Child_Of_Type_Params
	{
	public:
		class UPanelWidget*                                        Parent;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.Request Account Details
	 */
	struct UFunctionLibrary_UI_C_Request_Account_Details_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.PlayUxSound (Generic)
	 */
	struct UFunctionLibrary_UI_C_PlayUxSound__Generic__Params
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetAttackingDefendingFaction
	 */
	struct UFunctionLibrary_UI_C_GetAttackingDefendingFaction_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               AttackingFaction;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               DefendingFaction;                                        // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.Get Icon from Wave
	 */
	struct UFunctionLibrary_UI_C_Get_Icon_from_Wave_Params
	{
	public:
		class ASpawnWave*                                          Wave;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateBrush                                         Brush;                                                   // 0x0010(0x0088)  (Parm, OutParm)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.GetObjectiveStyleEnum
	 */
	struct UFunctionLibrary_UI_C_GetObjectiveStyleEnum_Params
	{
	public:
		struct FGameplayTag                                        NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ObjectiveMessageStyleType_EObjectiveMessageStyleType       ObjectiveMessageStyleType;                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.AnimationExitTimeFromArray
	 */
	struct UFunctionLibrary_UI_C_AnimationExitTimeFromArray_Params
	{
	public:
		TArray<class UImage*>                                      Images;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UAnimatingButton*>                            AnimatingButton;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FunctionLibrary_UI.FunctionLibrary_UI_C.animationExitTime
	 */
	struct UFunctionLibrary_UI_C_animationExitTime_Params
	{
	public:
		class UImage*                                              Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
