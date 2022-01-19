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
	 * BlueprintGeneratedClass FunctionLibrary_UI.FunctionLibrary_UI_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFunctionLibrary_UI_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_IsProvidedPlatformPC(TBL_EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result);
		void STATIC_IsProvidedPlatformXBox(TBL_EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result);
		void STATIC_IsProvidedPlatformPlayStation(TBL_EHardwarePlatform Platform, class UObject* __WorldContext, bool* Result);
		void STATIC_AreProvidedPlatformsSimilar(TBL_EHardwarePlatform OwningPlayerHardwarePlatform, TBL_EHardwarePlatform TargetPlayerHardwarePlatform, class UObject* __WorldContext, bool* Similar);
		void STATIC_ScrollWithVelocity(class UScrollBox* ScrollBox, float Velocity, float DeltaTime, class UObject* __WorldContext);
		void STATIC_ScrollBy(class UScrollBox* ScrollBox, float ScrollOffsetDelta, class UObject* __WorldContext);
		void STATIC_GetCustomizationHeadCategories(class UObject* __WorldContext, TArray<class FName>* Categories, TArray<class FText>* CategoryTexts);
		void STATIC_IsProvidedPlatformConsole(TBL_EHardwarePlatform Platform, class UObject* __WorldContext, bool* _);
		void STATIC_UpdatePlayerPlatformIcon(TBL_EHardwarePlatform OwningPlayerHardwarePlatform, TBL_EHardwarePlatform TargetPlayerHardwarePlatform, class UWidget* PlatformIconContainer, class UImage* PlatformIconImage, class UObject* __WorldContext);
		bool STATIC_IsInParty(class ATBLPlayerState* Player1, class ATBLPlayerState* Player2, class UObject* __WorldContext);
		void STATIC_GetAllyColours(bool IsInParty, bool IsFriend, class UObject* __WorldContext, struct FSlateColor* SlateColor);
		void STATIC_Get_Group_Text_from_Group_Id(const class FName& Group_Id, class UObject* __WorldContext, class FText* Weapon_Group_Text);
		void STATIC_GetSelectedbuttonColor(class UObject* __WorldContext, struct FLinearColor* NewParam);
		void STATIC_IsPlatformConsole(class UObject* __WorldContext, bool* _);
		void STATIC_IsPlatformPC(class UObject* __WorldContext, bool* _);
		void STATIC_OnlineStatToText(TBL_EOnlineStat Stat, class UObject* __WorldContext, class FText* Text);
		void STATIC_CreateRankUpMessageFromLevelUp(const struct FLevelUpResult& LevelUpResult, class UObject* __WorldContext, struct FRankUpMessage* RankUpMessage);
		void STATIC_GetRankUpClassIconFromOnlineStat(TBL_EOnlineStat Selection, class UObject* __WorldContext);
		void STATIC_GetRankUpItemFromOnlineStat(TBL_EOnlineStat Selection, class UObject* __WorldContext);
		void STATIC_SetGamepadButtonText(class URadiobutton_C* Button, const class FText& Text, class UObject* __WorldContext);
		void STATIC_ItemRarityToColor(const struct FPrimaryAssetId& PrimaryAsset, TBL_ETBLRarity Rarity, class UObject* __WorldContext, struct FSlateColor* SlateColor);
		void STATIC_GetPlayersName(class AController* Controller, class UObject* __WorldContext, class FText* Name);
		void STATIC_GetRankUpMessageTypeFromOnlineStat(TBL_EOnlineStat Selection, class UObject* __WorldContext, RankUpMessageType_ERankUpMessageType* RankUpMessageType);
		void STATIC_ItemRarityToText(const struct FPrimaryAssetId& PrimaryAsset, TBL_ETBLRarity Rarity, class UObject* __WorldContext, class FText* _);
		void STATIC_PlayUxSound(class UAkAudioEvent* SoundEvent, class UObject* __WorldContext);
		void STATIC_PlayDataTableSound(const struct FDataTableRowHandle& RowHandle, class UObject* __WorldContext);
		void STATIC_ShouldDisableWidget(class UObject* __WorldContext);
		void STATIC_ConvertTimeToText(float Seconds, class UObject* __WorldContext, class FText* SecondsText);
		class FText STATIC_GetLocalizedTextFromClass(TBL_EAudioClassType Class, class UObject* __WorldContext);
		class FText STATIC_GetLocalizedTextFromFaction(TBL_EFaction Faction, class UObject* __WorldContext);
		class FString STATIC_LimitTextCharacters(const class FString& String, int Limit, class UObject* __WorldContext);
		struct FLinearColor STATIC_GetTeamColorText(ObjMarkerTeam_EObjMarkerTeam Index, class UObject* __WorldContext);
		void STATIC_GetAchievementTitle(const struct FAchievementProgress& Achievement, class ATBLPlayerState* PlayerState, class UObject* __WorldContext, class FText* Result);
		void STATIC_GetAchievementDescription(const struct FAchievementProgress& Achievement, class ATBLPlayerState* PlayerState, class UObject* __WorldContext, class FText* Result);
		void STATIC_ClearAllInputHints(class UObject* __WorldContext);
		void STATIC_AddInputHint(const class FString& Keybinding, const class FName& Tag, const class FText& HintText, bool Enable, bool AddToTop, class UObject* __WorldContext);
		struct FLinearColor STATIC_GetTeamColor(ObjMarkerTeam_EObjMarkerTeam Index, class UObject* __WorldContext);
		void STATIC_Has_Child_Of_Type(class UPanelWidget* Parent, class UClass* Class, class UObject* __WorldContext, bool* Result);
		void STATIC_Request_Account_Details(class UObject* __WorldContext);
		void STATIC_PlayUxSound__Generic_(const class FName& EventName, class UObject* __WorldContext);
		void STATIC_GetAttackingDefendingFaction(class UObject* __WorldContext, TBL_EFaction* AttackingFaction, TBL_EFaction* DefendingFaction);
		void STATIC_Get_Icon_from_Wave(class ASpawnWave* Wave, class UObject* __WorldContext, struct FSlateBrush* Brush);
		void STATIC_GetObjectiveStyleEnum(const struct FGameplayTag& NewParam, class UObject* __WorldContext, ObjectiveMessageStyleType_EObjectiveMessageStyleType* ObjectiveMessageStyleType);
		void STATIC_AnimationExitTimeFromArray(TArray<class UImage*>* Images, float Value, TArray<class UAnimatingButton*>* AnimatingButton, class UObject* __WorldContext);
		void STATIC_animationExitTime(class UImage* Target, float Value, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
