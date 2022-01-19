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
	 * BlueprintGeneratedClass Frontend.Frontend_C
	 * Size -> 0x0210 (FullSize[0x0480] - InheritedSize[0x0270])
	 */
	class AFrontend_C : public ATBLFrontendLevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<class FString, class AFrontendCameraReference_C*>     CameraActors;                                            // 0x0278(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class AFrontendCameraReference_C*                          TargetCamera;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TargetAction;                                            // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InterpModifier;                                          // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetInterpModifier;                                    // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationAdjustment;                                      // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StateStartTime;                                          // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeInterpScaling;                                       // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NZIX[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Nav_widget[0x28];                                        // 0x02EC(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              RequestedCamera;                                         // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                RequestedEvent;                                          // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              LastValidCamera;                                         // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UCameraComponent*                                    TargetCameraComp;                                        // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EFaction                                               CurrentFaction;                                          // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8BJW[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimaryAssetId>                             AssetIds;                                                // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class ABP_CustomizationCameras_C*                          CurrentCamera;                                           // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TBL_EAudioClassType                                        CurrentClass;                                            // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LCCR[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<TBL_EInventoryItemSlot>                             AllInventoryItemsSlots;                                  // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FTransform                                          LastTutorialPawnTransform;                               // 0x0380(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class ASpawnSequence*                                      SpawnSequence;                                           // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      CurrentIgnoreCustomizationClasses;                       // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                CurrentCustomizationCategoryName;                        // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PreviousCharacterCamera;                                 // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		unsigned char                                              FrontendTitleScreen[0x28];                               // 0x03E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      TargetFov;                                               // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0ERZ[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AArcher_C*                                           _01_Archer_ExecuteUbergraph_Frontend_RefProperty;        // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFootman_C*                                          _03_Footman_ExecuteUbergraph_Frontend_RefProperty;       // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AVanguard_C*                                         _02_Vanguard_ExecuteUbergraph_Frontend_RefProperty;      // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AKnight_C*                                           _04_Knight_ExecuteUbergraph_Frontend_RefProperty;        // 0x0428(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFrontendCameraReference_C*                          Cam_StartCamera_ExecuteUbergraph_Frontend_RefProperty;   // 0x0430(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFrontendCameraReference_C*                          SpawnCamera_EdGraph_3_RefProperty;                       // 0x0438(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_CustomizationCameras_C*                          BP_CustomizationCamerasFootman_EdGraph_6_RefProperty;    // 0x0440(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_CustomizationCameras_C*                          BP_CustomizationCamerasVanguard_EdGraph_6_RefProperty;   // 0x0448(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_CustomizationCameras_C*                          BP_CustomizationCameras_Knight_EdGraph_6_RefProperty;    // 0x0450(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_CustomizationCameras_C*                          BP_CustomizationCamerasArcher_EdGraph_6_RefProperty;     // 0x0458(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AKnight_C*                                           _04_Knight_EdGraph_7_RefProperty;                        // 0x0460(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFootman_C*                                          _03_Footman_EdGraph_7_RefProperty;                       // 0x0468(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AVanguard_C*                                         _02_Vanguard_EdGraph_7_RefProperty;                      // 0x0470(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AArcher_C*                                           _01_Archer_EdGraph_7_RefProperty;                        // 0x0478(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetCustomizationCharacter(TBL_EAudioClassType Class, class ATBLCharacter** Return_Value);
		void GetCurrentFaction(TBL_EFaction* Faction);
		void GetSpecatorPawnSpawnLocation(struct FTransform* Transform);
		void IsAtTitleScreen(bool* IsAtTitleScreen);
		void OverrideCamera(class UCameraComponent* TargetCameraComp, const class FName& Camera, class ABP_CustomizationCameras_C* CurrentCamera);
		void SetupIgnoredCustomizationClasses();
		void IsPersonalHeadCategory(bool* Return_Value);
		void GetCustomizationPawn(TBL_EAudioClassType ClassType, class ATBLCharacter** Pawn);
		void SetTargetCamera();
		void GetTimeInState(float* _);
		void DistanceScaling(float* _);
		void SetStartCamera();
		void GetTBLPlayerController(class ATBLPlayerController** TBLPlayerController);
		void GetTBLSpectatorPawn(class ATBLSpectatorPawn** SpectatorPawn);
		void CacheAllCameras();
		void AttemptBattlecry();
		void AttemptTurn();
		void AttemptFocus();
		void AttemptZoom(bool In);
		void AttemptRotate(float Value);
		void ReceiveBeginPlay();
		void OnChangeCameraEvent(const class FString& CameraName, const class FName& FrontendEvent);
		void ReceiveTick(float DeltaSeconds);
		void CameraEvent(const class FString& CameraName, const class FName& FrontendEvent);
		void StartFadeinSmoothing();
		void FinishFadeInSmoothing();
		void ResetTimeInterpScaling();
		void ApplyAssets(TArray<struct FCustomizationEntry> Assts, TBL_EAudioClassType Class, TBL_EFaction Faction);
		void EquipWeapon(class UClass* Weapon, TBL_EAudioClassType Class, TBL_EFaction Faction);
		void SetFaction(TBL_EFaction Faction);
		void ApplySavedCustomization();
		void EquipDefaultWeapons();
		void SetClass(TBL_EAudioClassType Class);
		void UnEquipAllWeapons();
		void RequestTutorialSpawn();
		void RequestTutorialDeSpawn();
		void EquipAndApplyAssets(TBL_EFaction Faction, TBL_EAudioClassType ClassType, TArray<struct FPrimaryAssetId> Assets);
		void CustomizationCategoryChanged(const class FName& CategoryName);
		void OnPlayerStateReplicated_Event_1(class APlayerState* PlayerState);
		void ForceCharacterLOD();
		void ManuallySetCamera(class UCameraComponent* TargetCameraComp, const class FName& Camera, class ABP_CustomizationCameras_C* CameraBlueprint);
		void InitializeCameras();
		void OnNavWidgetBecameInvalid();
		void UpdateFieldOfView_OnCameraChange();
		void CustomEvent_1(float Value);
		void InterpolateFov();
		void SetTargetFov(float TargetFov);
		void DisableCustomizationCharacterSound();
		void EnableCustomizationCharacterSound();
		void CustomEvent_2();
		void InitializeFov();
		void ExecuteUbergraph_Frontend(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
