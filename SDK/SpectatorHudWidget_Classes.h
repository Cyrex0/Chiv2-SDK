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
	 * WidgetBlueprintGeneratedClass SpectatorHudWidget.SpectatorHudWidget_C
	 * Size -> 0x0060 (FullSize[0x02A8] - InheritedSize[0x0248])
	 */
	class USpectatorHudWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_456;                                         // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_1;                                       // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpectatorControlsInfoWidget_C*                      SpectatorControlsInfoWidget;                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class ATBLPlayerState*>                             Team0PlayerStateArray;                                   // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class ATBLPlayerState*>                             Team1PlayerStateArray;                                   // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class USpectatorPlayerStatusEntry_C*>               team1players;                                            // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class APlayerState*                                        LastFollowPlayerState;                                   // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateFollowingPlayer();
		void CleanupPlayerState(int TeamIndex, TArray<class ATBLPlayerState*>* PlayerStateArray);
		void UpdateTeam(TBL_EFaction Faction, class UVerticalBox* VerticleBox, TArray<class ATBLPlayerState*>* PlayerStates, bool isTeam1);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnClientPossessedPawn_Event_1(class APawn* NewPawn);
		void ShowSpectatingStateWidgets();
		void ShowWaitingToSpawnSpectatingWidgets();
		void HideAllWIdgets();
		void OnPossessedPawn_Event_1(class APawn* NewPawn);
		void OnPossessedPawn(class APawn* NewPawn);
		void OnPlayerSelectedSpectatorMode(bool IsPlayerSpectator);
		void ExecuteUbergraph_SpectatorHudWidget(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
