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
	 * BlueprintGeneratedClass BaseCarryable_Deployable.BaseCarryable_Deployable_C
	 * Size -> 0x00C3 (FullSize[0x11A4] - InheritedSize[0x10E1])
	 */
	class ABaseCarryable_Deployable_C : public ABaseCarryable_C
	{
	public:
		unsigned char                                              UnknownData_JIW1[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              DeployActor;                                             // 0x10F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Hint;                                                    // 0x10F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlacementOffset__forward_;                               // 0x1100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WJPR[0x4];                                   // 0x1104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastOwner;                                               // 0x1108(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              SoftClassDeplyActor[0x28];                               // 0x1110(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FRotator                                            RotationOffset;                                          // 0x1138(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UUPY[0x4];                                   // 0x1144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_Visualization_BaseDeployable_C*                  VisualizationActor;                                      // 0x1148(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              VisualizationActorClass;                                 // 0x1150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanBePlaced;                                             // 0x1158(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2TNL[0x7];                                   // 0x1159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x1160(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTimerHandle                                        UsingTimerHandle;                                        // 0x1190(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      ItemLifespan;                                            // 0x1198(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableEnemyDistanceLimit;                                // 0x119C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TBL_EFaction                                               OwningFaction;                                           // 0x119D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BITW[0x2];                                   // 0x119E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EnemyDistanceLimit;                                      // 0x11A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnVisualizationActorSpawned();
		void SetCanBePlaced(bool InCanBePlaced);
		bool CanUseItem();
		void GetSpawnTranform(struct FTransform* SpawnTransform, bool* IsValid);
		void IsInInventory(bool* Return_Value);
		void OnLoaded_3965E93E44194A1A35924595DEAB0846(class UClass* Loaded);
		void OnUse(class AInventoryItem* Item);
		void OnInventorySlotsUpdated_Event_1();
		void AsyncLoadDeployActor();
		void UpdateVisualization(float DeltaTime);
		void OnDestroyed_Event_1(class AActor* DestroyedActor);
		void SpawnVisualizationActor(const struct FTransform& SpawnTransform);
		void OnCombatStateChanged_Event_1(class AActor* Actor, const class FName& PreviousState, const class FName& NewState, const struct FAttackInfo& EventAttackInfo, class UCombatState* CombatState);
		void DestroyVisualizationActor();
		void OnInitialize();
		void OnAddedToInventoryChanged_Event_1(class AInventoryItem* Item, bool IsAddedToInventory);
		void OnStartUse(class AInventoryItem* Item);
		void UpdateSpawnTransform();
		void ExecuteUbergraph_BaseCarryable_Deployable(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
