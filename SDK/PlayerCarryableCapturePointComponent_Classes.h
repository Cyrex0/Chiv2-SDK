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
	 * BlueprintGeneratedClass PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C
	 * Size -> 0x0018 (FullSize[0x01E0] - InheritedSize[0x01C8])
	 */
	class UPlayerCarryableCapturePointComponent_C : public UPlayerCapturePointComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UClass*>                                      CarryableInventoryItemClass;                             // 0x01D0(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash

	public:
		bool PlayerSatisfiesCaptureRequirments(class ATBLCharacter* Player);
		void SetupCarryableEvents(class AInventoryItem* Carryable);
		void OnDropped_Event_1(class AInventoryItem* Item, class ATBLCharacter* Character, const struct FTransform& Transform);
		void OnEquipped_Event_1(class AInventoryItem* Item);
		void ExecuteUbergraph_PlayerCarryableCapturePointComponent(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
