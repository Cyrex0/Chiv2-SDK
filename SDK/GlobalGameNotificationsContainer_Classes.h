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
	 * WidgetBlueprintGeneratedClass GlobalGameNotificationsContainer.GlobalGameNotificationsContainer_C
	 * Size -> 0x00B0 (FullSize[0x02F8] - InheritedSize[0x0248])
	 */
	class UGlobalGameNotificationsContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UForwardSpawnContainer_C*                            ForwardSpawnContainer;                                   // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGlobalGameNotification_C*                           GlobalGameNotification;                                  // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHintNotificationWidget_C*                           HintNotificationWidget;                                  // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        NotificationsList;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPartyInviteNotificationWidget_C*                    PartyInviteNotificationWidget;                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVotekickWidget_C*                                   VotekickWidget;                                          // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWeaponRankUpWidget_C*                               WeaponRankUpWidget;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             On_Started_Wave_Hover;                                   // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Ended_Wave_Hover;                                     // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FLevelUpResult>                              PendingAsyncLoadLevelUps;                                // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsWidgetActive;                                          // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3OU4[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLevelUpResult>                              LevelUpsToProcess;                                       // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                ShownHintKey;                                            // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        HintCooldownHandle;                                      // 0x02D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          HintTable;                                               // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        IgnoreList;                                              // 0x02E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void CanShowHint(bool* CanShowHint);
		void GetRandomHint(TBL_EHintType Category, TBL_EHintInputType Hint_Input_Type, class FName* RandomKey);
		void ProcessLevelUpEvent(const struct FLevelUpResult& LevelUpResult);
		void OnLoaded_0C2677EC44803511BE7821B9553BFDBE(class UClass* Loaded);
		void RecievedInvite(const class FString& InviteeId, const class FString& InviteeName);
		void ProcessRankUpMessage(const struct FRankUpMessage& Message);
		void OnPartyInviteReceived(const class FString& UserId, const class FString& DisplayName);
		void OnReceivedGlobalGameNotification_Event_1(TBL_EGlobalGameNotificationCategory Category, const class FText& Title, const class FText& Body, const class FName& Subcategory, class UObject* Data);
		void AsyncLoadInventoryItem(const struct FLevelUpResult& LevelUpResult);
		void SendLoadedRankUpMessages();
		void OnMessagedFinished();
		void On_Level_Up_Event(TArray<struct FLevelUpResult> LevelUpEvents);
		void OnPartyMemberJoin(const class FString& UserId, const class FString& DisplayName);
		void OnPartyMemberLeft(const class FString& UserId, const class FString& DisplayName);
		void OnPartyMemberRemoved(const class FString& UserId, const class FString& DisplayName);
		void OnPartyLeaderChanged(const class FString& UserId, const class FString& DisplayName);
		void OnPartyDisbanded();
		void RequestRandomHint(float HintChance, TBL_EHintType HintCategory, TBL_EHintInputType Hint_Input_Type);
		void HintCooldownFinished();
		void OnTitleBroadcastReceived(const class FString& Message);
		void OnInitialized();
		void OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState);
		void VotingStarted(class UVotingInstance* VotingInstance);
		void OnPartyInviteResponseReceived(const class FString& UserId, const class FString& SenderName, unsigned char Response);
		void Construct();
		void RequestSpecificHint(const class FName& HintKey);
		void OnCreatePartyResult(bool Result, const class FString& PartyId);
		void ClearInvites();
		void ExecuteUbergraph_GlobalGameNotificationsContainer(int EntryPoint);
		void On_Ended_Wave_Hover__DelegateSignature(class ASpawnWave* Wave);
		void On_Started_Wave_Hover__DelegateSignature(class ASpawnWave* Wave);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
