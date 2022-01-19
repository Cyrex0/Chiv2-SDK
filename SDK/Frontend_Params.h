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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Frontend.Frontend_C.GetCustomizationCharacter
	 */
	struct AFrontend_C_GetCustomizationCharacter_Params
	{
	public:
		TBL_EAudioClassType                                        Class;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.GetCurrentFaction
	 */
	struct AFrontend_C_GetCurrentFaction_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.GetSpecatorPawnSpawnLocation
	 */
	struct AFrontend_C_GetSpecatorPawnSpawnLocation_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Frontend.Frontend_C.IsAtTitleScreen
	 */
	struct AFrontend_C_IsAtTitleScreen_Params
	{
	public:
		bool                                                       IsAtTitleScreen;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Frontend.Frontend_C.OverrideCamera
	 */
	struct AFrontend_C_OverrideCamera_Params
	{
	public:
		class UCameraComponent*                                    TargetCameraComp;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Camera;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_CustomizationCameras_C*                          CurrentCamera;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.SetupIgnoredCustomizationClasses
	 */
	struct AFrontend_C_SetupIgnoredCustomizationClasses_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.IsPersonalHeadCategory
	 */
	struct AFrontend_C_IsPersonalHeadCategory_Params
	{
	public:
		bool                                                       Return_Value;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Frontend.Frontend_C.GetCustomizationPawn
	 */
	struct AFrontend_C_GetCustomizationPawn_Params
	{
	public:
		TBL_EAudioClassType                                        ClassType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       Pawn;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.SetTargetCamera
	 */
	struct AFrontend_C_SetTargetCamera_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.GetTimeInState
	 */
	struct AFrontend_C_GetTimeInState_Params
	{
	public:
		float                                                      _;                                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.DistanceScaling
	 */
	struct AFrontend_C_DistanceScaling_Params
	{
	public:
		float                                                      _;                                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.SetStartCamera
	 */
	struct AFrontend_C_SetStartCamera_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.GetTBLPlayerController
	 */
	struct AFrontend_C_GetTBLPlayerController_Params
	{
	public:
		class ATBLPlayerController*                                TBLPlayerController;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.GetTBLSpectatorPawn
	 */
	struct AFrontend_C_GetTBLSpectatorPawn_Params
	{
	public:
		class ATBLSpectatorPawn*                                   SpectatorPawn;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.CacheAllCameras
	 */
	struct AFrontend_C_CacheAllCameras_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.AttemptBattlecry
	 */
	struct AFrontend_C_AttemptBattlecry_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.AttemptTurn
	 */
	struct AFrontend_C_AttemptTurn_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.AttemptFocus
	 */
	struct AFrontend_C_AttemptFocus_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.AttemptZoom
	 */
	struct AFrontend_C_AttemptZoom_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Frontend.Frontend_C.AttemptRotate
	 */
	struct AFrontend_C_AttemptRotate_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.ReceiveBeginPlay
	 */
	struct AFrontend_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.OnChangeCameraEvent
	 */
	struct AFrontend_C_OnChangeCameraEvent_Params
	{
	public:
		class FString                                              CameraName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                FrontendEvent;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.ReceiveTick
	 */
	struct AFrontend_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.CameraEvent
	 */
	struct AFrontend_C_CameraEvent_Params
	{
	public:
		class FString                                              CameraName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                FrontendEvent;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.StartFadeinSmoothing
	 */
	struct AFrontend_C_StartFadeinSmoothing_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.FinishFadeInSmoothing
	 */
	struct AFrontend_C_FinishFadeInSmoothing_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.ResetTimeInterpScaling
	 */
	struct AFrontend_C_ResetTimeInterpScaling_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.ApplyAssets
	 */
	struct AFrontend_C_ApplyAssets_Params
	{
	public:
		TArray<struct FCustomizationEntry>                         Assts;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TBL_EAudioClassType                                        Class;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.EquipWeapon
	 */
	struct AFrontend_C_EquipWeapon_Params
	{
	public:
		class UClass*                                              Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EAudioClassType                                        Class;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.SetFaction
	 */
	struct AFrontend_C_SetFaction_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.ApplySavedCustomization
	 */
	struct AFrontend_C_ApplySavedCustomization_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.EquipDefaultWeapons
	 */
	struct AFrontend_C_EquipDefaultWeapons_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.SetClass
	 */
	struct AFrontend_C_SetClass_Params
	{
	public:
		TBL_EAudioClassType                                        Class;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.UnEquipAllWeapons
	 */
	struct AFrontend_C_UnEquipAllWeapons_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.RequestTutorialSpawn
	 */
	struct AFrontend_C_RequestTutorialSpawn_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.RequestTutorialDeSpawn
	 */
	struct AFrontend_C_RequestTutorialDeSpawn_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.EquipAndApplyAssets
	 */
	struct AFrontend_C_EquipAndApplyAssets_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EAudioClassType                                        ClassType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FPrimaryAssetId>                             Assets;                                                  // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.CustomizationCategoryChanged
	 */
	struct AFrontend_C_CustomizationCategoryChanged_Params
	{
	public:
		class FName                                                CategoryName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.OnPlayerStateReplicated_Event_1
	 */
	struct AFrontend_C_OnPlayerStateReplicated_Event_1_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.ForceCharacterLOD
	 */
	struct AFrontend_C_ForceCharacterLOD_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.ManuallySetCamera
	 */
	struct AFrontend_C_ManuallySetCamera_Params
	{
	public:
		class UCameraComponent*                                    TargetCameraComp;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Camera;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_CustomizationCameras_C*                          CameraBlueprint;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.InitializeCameras
	 */
	struct AFrontend_C_InitializeCameras_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.OnNavWidgetBecameInvalid
	 */
	struct AFrontend_C_OnNavWidgetBecameInvalid_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.UpdateFieldOfView_OnCameraChange
	 */
	struct AFrontend_C_UpdateFieldOfView_OnCameraChange_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.CustomEvent_1
	 */
	struct AFrontend_C_CustomEvent_1_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.InterpolateFov
	 */
	struct AFrontend_C_InterpolateFov_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.SetTargetFov
	 */
	struct AFrontend_C_SetTargetFov_Params
	{
	public:
		float                                                      TargetFov;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Frontend.Frontend_C.DisableCustomizationCharacterSound
	 */
	struct AFrontend_C_DisableCustomizationCharacterSound_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.EnableCustomizationCharacterSound
	 */
	struct AFrontend_C_EnableCustomizationCharacterSound_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.CustomEvent_2
	 */
	struct AFrontend_C_CustomEvent_2_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.InitializeFov
	 */
	struct AFrontend_C_InitializeFov_Params
	{
	};

	/**
	 * Function Frontend.Frontend_C.ExecuteUbergraph_Frontend
	 */
	struct AFrontend_C_ExecuteUbergraph_Frontend_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
