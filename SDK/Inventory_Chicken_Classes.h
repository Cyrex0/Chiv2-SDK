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
	 * BlueprintGeneratedClass Inventory_Chicken.Inventory_Chicken_C
	 * Size -> 0x000F (FullSize[0x10F0] - InheritedSize[0x10E1])
	 */
	class AInventory_Chicken_C : public ABaseCarryable_C
	{
	public:
		unsigned char                                              UnknownData_5TMM[0x7];                                   // 0x10E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x10E8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void BndEvt__ProjectileCollision_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform);
		void OnInitialize();
		void ExecuteUbergraph_Inventory_Chicken(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
