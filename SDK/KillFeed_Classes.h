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
	 * WidgetBlueprintGeneratedClass KillFeed.KillFeed_C
	 * Size -> 0x0074 (FullSize[0x02BC] - InheritedSize[0x0248])
	 */
	class UKillFeed_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKillFeedEntry_C*                                    KillFeedEntry_C_1;                                       // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKillFeedEntry_C*                                    MockupKillFeedEntry;                                     // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKillFeedEntry_C*                                    MockupKillFeedEntry_1;                                   // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKillFeedEntry_C*                                    MockupKillFeedEntry_2;                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKillFeedEntry_C*                                    MockupKillFeedEntry_3;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKillFeedEntry_C*                                    MockupKillFeedEntry_4;                                   // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKillFeedEntry_C*                                    MockupKillFeedEntry_5;                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKillFeedEntry_C*                                    MockupKillFeedEntry_6;                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_1;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       NewVar_1;                                                // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UX5W[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UKillFeedEntry_C*>                            KillFeedEntries;                                         // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		int                                                        MaxEntries;                                              // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        HardCapEntries;                                          // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeToShowEntries;                                       // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsFallDeath(const struct FDeathEvent& DeathEvent, bool* IsFallDeath);
		void ShouldDisplayObjectiveMessage(bool* Display);
		void ShouldDisplayDeathEvent(const struct FDeathEvent& DeathEvent, bool* Display);
		void IsSiegeWeapon(class AInventoryItem* Weapon, bool* IsWeapon);
		void GetKillFeedModifiers(const struct FDeathEvent& DeathEvent, TArray<KillfeedModifiers_EKillfeedModifiers>* Modifiers);
		void IsMyDeath(const struct FDeathEvent& DeathEvent, bool* IsMyDeath);
		void IsMyKill(const struct FDeathEvent& DeathEvent, bool* IsMyKill);
		void IsTeamKill(const struct FDeathEvent& DeathEvent, bool* TeamKill);
		void GetKilledFaction(const struct FDeathEvent& DeathEvent, TBL_EFaction* Faction);
		void GetKillFeedType(const struct FDeathEvent& DeathEvent, KillfeedEntryType_EKillfeedEntryType* NewParam);
		void IsSuicide(const struct FDeathEvent& DeathEvent, bool* IsSuicide);
		void Construct();
		void GameModeMessageReceived_Event_1(const struct FGameModeMessage& Message);
		void CheckForCleanup();
		void OnPlayerKilled_Event_1(const struct FDeathEvent& DeathEvent);
		void ExecuteUbergraph_KillFeed(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
