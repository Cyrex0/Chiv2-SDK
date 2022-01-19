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
	 * BlueprintGeneratedClass CustomizationLevelInterface.CustomizationLevelInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomizationLevelInterface_C : public UInterface
	{
	public:
		void ManuallySetCamera(class UCameraComponent* TargetCameraComp, const class FName& Camera, class ABP_CustomizationCameras_C* CameraBlueprint);
		void GetCustomizationCharacter(TBL_EAudioClassType Class, class ATBLCharacter** Return_Value);
		void GetCurrentFaction(TBL_EFaction* Faction);
		void AttemptRotate(float Value);
		void AttemptZoom(bool In);
		void CustomizationCategoryChanged(const class FName& CategoryName);
		void GetSpecatorPawnSpawnLocation(struct FTransform* Transform);
		void RequestTutorialDeSpawn();
		void RequestTutorialSpawn();
		void SetClass(TBL_EAudioClassType Class);
		void EquipWeapon(class UClass* Weapon, TBL_EAudioClassType Class, TBL_EFaction Faction);
		void AttemptFocus();
		void AttemptTurn();
		void AttemptBattlecry();
		void SetFaction(TBL_EFaction Faction);
		void ApplyAssets(TArray<struct FCustomizationEntry> Assts, TBL_EAudioClassType Class, TBL_EFaction Faction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
