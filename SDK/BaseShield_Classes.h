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
	 * BlueprintGeneratedClass BaseShield.BaseShield_C
	 * Size -> 0x0088 (FullSize[0x10F8] - InheritedSize[0x1070])
	 */
	class ABaseShield_C : public ABaseInventoryItem_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1070(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       ShieldCollision;                                         // 0x1078(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TBL_EFaction                                               WorldFaction;                                            // 0x1080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TSX9[0x7];                                   // 0x1081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  WorldMasonMaterial;                                      // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  WorldAgathaMaterial;                                     // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       ImpactSound;                                             // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       DamagedSound;                                            // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       DestroyedSound;                                          // 0x10A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ShieldType_EShieldType                                     ShieldType;                                              // 0x10B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2KVG[0x7];                                   // 0x10B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         WorldMasonStaticMesh;                                    // 0x10B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         WorldAgathaStaticMesh;                                   // 0x10C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              CustomizationShield[0x28];                               // 0x10C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UCTShield*                                           CustomizationAssetShield;                                // 0x10F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ApplyHeraldry();
		void GetCustomizationShield(class UCTShield** AsCTShield);
		bool ShouldCustomizePlacedInWorldItem(class ATBLCharacter* OwningCharacter);
		class UPrimitiveComponent* GetShieldCollision();
		void UserConstructionScript();
		void OnLoaded_93186E5C4C953E77222454BE85A78163(class UObject* Loaded);
		void DamageShield(TBL_EInventoryItemDamagedState DamageState);
		void OnInitialize();
		void OnAddedToInventoryChanged_Event_1(class AInventoryItem* Item, bool IsAddedToInventory);
		void ExecuteUbergraph_BaseShield(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
