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
	 * BlueprintGeneratedClass BaseCharacter.BaseCharacter_C
	 * Size -> 0x00A8 (FullSize[0x1688] - InheritedSize[0x15E0])
	 */
	class ABaseCharacter_C : public ATBLCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x15E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCarryablePlayerComponent*                           CarryablePlayer;                                         // 0x15E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHudMarkerDisplayComponent*                          HudMarkerDisplay;                                        // 0x15F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParryComponent*                                     Parry;                                                   // 0x15F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFxComponent*                                        Fx;                                                      // 0x1600(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParryComponent*                                     TracerParry;                                             // 0x1608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPhysicsAsset*                                       Server_Physics_Asset;                                    // 0x1610(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FAltWeightsState>                            AltWeightsStates_1;                                      // 0x1618(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      MudValue;                                                // 0x1628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZZXU[0x4];                                   // 0x162C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AInventoryItem*                                      CarryableItem;                                           // 0x1630(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBeingHeld;                                             // 0x1638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasThrown;                                               // 0x1639(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WVO4[0x2];                                   // 0x163A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            LastCarryRotation;                                       // 0x163C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ATBLCharacter*                                       ParentCharacter;                                         // 0x1648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseRelativeCarryRotation;                               // 0x1650(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M3FZ[0x3];                                   // 0x1651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RelativeCarryRotation;                                   // 0x1654(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AddGameplayRules;                                        // 0x1660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E8IT[0x3];                                   // 0x1661(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnGameTime;                                           // 0x1664(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCustomized_animBP;                                     // 0x1668(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FsSubclassPerk>                              SubclassPerks;                                           // 0x1678(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		void DisableOutOfCombatPostProcess(bool bEnabled, class APlayerController* PlayerController);
		void ToggleOutOfCombatPostProcess(bool bEnabled);
		void SetGameTimeOnMeshComponents(TArray<class UMeshComponent*>* MeshComponents);
		void UserConstructionScript();
		void Customize_bot();
		void InitAltWeightsState();
		void Set_master_pose();
		void OnCustomized();
		void SetSpawnTime_Material_Parameter();
		void TEMP_Customize(TBL_EFaction Faction);
		void OnInitializeAltWeightsState();
		void K2_OnBecomeViewTarget(class APlayerController* PC);
		void K2_OnEndViewTarget(class APlayerController* PC);
		void OnApplyCondition_Event(class AActor* Actor, TBL_EConditionType Condition);
		void OnRemoveCondition_Event(class AActor* Actor, TBL_EConditionType Condition);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BaseCharacter(int EntryPoint);
		void OnCustomized_animBP__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
