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
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.ShowHeadDetails
	 */
	struct ABP_CustomizationCameras_C_ShowHeadDetails_Params
	{
	public:
		bool                                                       bShowHeadDetails;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetZoomLocation
	 */
	struct ABP_CustomizationCameras_C_GetZoomLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetRotLocation
	 */
	struct ABP_CustomizationCameras_C_GetRotLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.RealignCameraRotation
	 */
	struct ABP_CustomizationCameras_C_RealignCameraRotation_Params
	{
	public:
		class UCameraComponent*                                    _Camera;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCameraData
	 */
	struct ABP_CustomizationCameras_C_GetCameraData_Params
	{
	public:
		class UCameraComponent*                                    _Camera;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                _;                                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.CacheLights
	 */
	struct ABP_CustomizationCameras_C_CacheLights_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.GetCamera
	 */
	struct ABP_CustomizationCameras_C_GetCamera_Params
	{
	public:
		class FString                                              _;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UCameraComponent*                                    CameraComp;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.UserConstructionScript
	 */
	struct ABP_CustomizationCameras_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnFocused
	 */
	struct ABP_CustomizationCameras_C_OnFocused_Params
	{
	public:
		class FName                                                Camera;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnfocused
	 */
	struct ABP_CustomizationCameras_C_OnUnfocused_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeOut
	 */
	struct ABP_CustomizationCameras_C_FadeOut_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.FadeIn
	 */
	struct ABP_CustomizationCameras_C_FadeIn_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnCameraChange
	 */
	struct ABP_CustomizationCameras_C_OnCameraChange_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnItemChange
	 */
	struct ABP_CustomizationCameras_C_OnItemChange_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateBattlecry
	 */
	struct ABP_CustomizationCameras_C_ActivateBattlecry_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateFocus
	 */
	struct ABP_CustomizationCameras_C_ActivateFocus_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.ActivateTurn
	 */
	struct ABP_CustomizationCameras_C_ActivateTurn_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveBeginPlay
	 */
	struct ABP_CustomizationCameras_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.OnUnequipItem
	 */
	struct ABP_CustomizationCameras_C_OnUnequipItem_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.DeactivateFocus
	 */
	struct ABP_CustomizationCameras_C_DeactivateFocus_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.Zoom
	 */
	struct ABP_CustomizationCameras_C_Zoom_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.Rotate
	 */
	struct ABP_CustomizationCameras_C_Rotate_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.Reset
	 */
	struct ABP_CustomizationCameras_C_Reset_Params
	{
	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.ReceiveTick
	 */
	struct ABP_CustomizationCameras_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BP_CustomizationCameras.BP_CustomizationCameras_C.ExecuteUbergraph_BP_CustomizationCameras
	 */
	struct ABP_CustomizationCameras_C_ExecuteUbergraph_BP_CustomizationCameras_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
