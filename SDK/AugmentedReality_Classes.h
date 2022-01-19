﻿#pragma once

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
	 * Class AugmentedReality.ARBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnpinComponent(class USceneComponent* ComponentToUnpin);
		void STATIC_StopARSession();
		void STATIC_StartARSession(class UARSessionConfig* SessionConfig);
		void STATIC_SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
		void STATIC_RemovePin(class UARPin* PinToRemove);
		class UARPin* STATIC_PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName& DebugName);
		class UARPin* STATIC_PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName& DebugName);
		void STATIC_PauseARSession();
		TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
		TArray<struct FARTraceResult> STATIC_LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
		bool STATIC_IsSessionTypeSupported(AugmentedReality_EARSessionType SessionType);
		bool STATIC_IsSessionTrackingFeatureSupported(AugmentedReality_EARSessionType SessionType, AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature);
		bool STATIC_IsARSupported();
		AugmentedReality_EARWorldMappingState STATIC_GetWorldMappingStatus();
		AugmentedReality_EARTrackingQualityReason STATIC_GetTrackingQualityReason();
		AugmentedReality_EARTrackingQuality STATIC_GetTrackingQuality();
		TArray<struct FARVideoFormat> STATIC_GetSupportedVideoFormats(AugmentedReality_EARSessionType SessionType);
		class UARSessionConfig* STATIC_GetSessionConfig();
		TArray<struct FVector> STATIC_GetPointCloud();
		class UARTextureCameraImage* STATIC_GetPersonSegmentationImage();
		class UARTextureCameraImage* STATIC_GetPersonSegmentationDepthImage();
		class UARLightEstimate* STATIC_GetCurrentLightEstimate();
		class UARTextureCameraImage* STATIC_GetCameraImage();
		class UARTextureCameraDepth* STATIC_GetCameraDepth();
		struct FARSessionStatus STATIC_GetARSessionStatus();
		TArray<class UARTrackedPose*> STATIC_GetAllTrackedPoses();
		TArray<class UARTrackedPoint*> STATIC_GetAllTrackedPoints();
		TArray<class UARPlaneGeometry*> STATIC_GetAllTrackedPlanes();
		TArray<class UARTrackedImage*> STATIC_GetAllTrackedImages();
		TArray<class UAREnvironmentCaptureProbe*> STATIC_GetAllTrackedEnvironmentCaptureProbes();
		TArray<struct FARPose2D> STATIC_GetAllTracked2DPoses();
		TArray<class UARPin*> STATIC_GetAllPins();
		TArray<class UARTrackedGeometry*> STATIC_GetAllGeometries();
		void STATIC_DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
		void STATIC_DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
		class UARCandidateImage* STATIC_AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth);
		bool STATIC_AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTraceResultLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTraceResultLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UARTrackedGeometry* STATIC_GetTrackedGeometry(const struct FARTraceResult& TraceResult);
		AugmentedReality_EARLineTraceChannels STATIC_GetTraceChannel(const struct FARTraceResult& TraceResult);
		struct FTransform STATIC_GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);
		struct FTransform STATIC_GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);
		float STATIC_GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_UGYP[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQD4[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		class UARSaveWorldAsyncTaskBlueprintProxy* STATIC_ARSaveWorld(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
	 * Size -> 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
	 */
	class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNB0[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		class UARGetCandidateObjectAsyncTaskBlueprintProxy* STATIC_ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARLightEstimate
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARLightEstimate : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBasicLightEstimate
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UARBasicLightEstimate : public UARLightEstimate
	{
	public:
		float                                                      AmbientIntensityLumens;                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AmbientColorTemperatureKelvin;                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        AmbientColor;                                            // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetAmbientIntensityLumens();
		float GetAmbientColorTemperatureKelvin();
		struct FLinearColor GetAmbientColor();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AROriginActor
	 * Size -> 0x0000 (FullSize[0x0258] - InheritedSize[0x0258])
	 */
	class AAROriginActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPin
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UARPin : public UObject
	{
	public:
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     PinnedComponent;                                         // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9O04[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalToTrackingTransform;                                // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          LocalToAlignedTrackingTransform;                         // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		AugmentedReality_EARTrackingState                          TrackingState;                                           // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YRQU[0x1F];                                  // 0x00A1(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnARTrackingStateChanged;                                // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnARTransformUpdated;                                    // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QWC7[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)

	public:
		AugmentedReality_EARTrackingState GetTrackingState();
		class UARTrackedGeometry* GetTrackedGeometry();
		class USceneComponent* GetPinnedComponent();
		struct FTransform GetLocalToWorldTransform();
		struct FTransform GetLocalToTrackingTransform();
		class FName GetDebugName();
		void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSessionConfig
	 * Size -> 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
	 */
	class UARSessionConfig : public UDataAsset
	{
	public:
		bool                                                       bGenerateMeshDataFromTrackedGeometry;                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateCollisionForMeshData;                           // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateNavMeshForMeshData;                             // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMeshDataForOcclusion;                                // 0x0033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderMeshDataInWireframe;                              // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrackSceneObjects;                                      // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePersonSegmentationForOcclusion;                      // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AugmentedReality_EARWorldAlignment                         WorldAlignment;                                          // 0x0037(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		AugmentedReality_EARSessionType                            SessionType;                                             // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		AugmentedReality_EARPlaneDetectionMode                     PlaneDetectionMode;                                      // 0x0039(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHorizontalPlaneDetection;                               // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVerticalPlaneDetection;                                 // 0x003B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutoFocus;                                        // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		AugmentedReality_EARLightEstimationMode                    LightEstimationMode;                                     // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		AugmentedReality_EARFrameSyncMode                          FrameSyncMode;                                           // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutomaticCameraOverlay;                           // 0x003F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutomaticCameraTracking;                          // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetCameraTracking;                                    // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetTrackedObjects;                                    // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FSC3[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UARCandidateImage*>                           CandidateImages;                                         // 0x0048(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int                                                        MaxNumSimultaneousImagesTracked;                         // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		AugmentedReality_EAREnvironmentCaptureProbeType            EnvironmentCaptureProbeType;                             // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EWVQ[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      WorldMapData;                                            // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UARCandidateObject*>                          CandidateObjects;                                        // 0x0070(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FARVideoFormat                                      DesiredVideoFormat;                                      // 0x0080(0x000C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		AugmentedReality_EARFaceTrackingDirection                  FaceTrackingDirection;                                   // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		AugmentedReality_EARFaceTrackingUpdate                     FaceTrackingUpdate;                                      // 0x008D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6OZ4[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      SerializedARCandidateImageDatabase;                      // 0x0090(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		AugmentedReality_EARSessionTrackingFeature                 EnabledSessionTrackingFeature;                           // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SJ6W[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		bool ShouldResetTrackedObjects();
		bool ShouldResetCameraTracking();
		bool ShouldRenderCameraOverlay();
		bool ShouldEnableCameraTracking();
		bool ShouldEnableAutoFocus();
		void SetWorldMapData(TArray<unsigned char> WorldMapData);
		void SetSessionTrackingFeatureToEnable(AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature);
		void SetResetTrackedObjects(bool bNewValue);
		void SetResetCameraTracking(bool bNewValue);
		void SetFaceTrackingUpdate(AugmentedReality_EARFaceTrackingUpdate InUpdate);
		void SetFaceTrackingDirection(AugmentedReality_EARFaceTrackingDirection InDirection);
		void SetEnableAutoFocus(bool bNewValue);
		void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
		void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);
		TArray<unsigned char> GetWorldMapData();
		AugmentedReality_EARWorldAlignment GetWorldAlignment();
		AugmentedReality_EARSessionType GetSessionType();
		AugmentedReality_EARPlaneDetectionMode GetPlaneDetectionMode();
		int GetMaxNumSimultaneousImagesTracked();
		AugmentedReality_EARLightEstimationMode GetLightEstimationMode();
		AugmentedReality_EARFrameSyncMode GetFrameSyncMode();
		AugmentedReality_EARFaceTrackingUpdate GetFaceTrackingUpdate();
		AugmentedReality_EARFaceTrackingDirection GetFaceTrackingDirection();
		AugmentedReality_EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
		AugmentedReality_EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
		struct FARVideoFormat GetDesiredVideoFormat();
		TArray<class UARCandidateObject*> GetCandidateObjectList();
		TArray<class UARCandidateImage*> GetCandidateImageList();
		void AddCandidateObject(class UARCandidateObject* CandidateObject);
		void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldGameMode
	 * Size -> 0x0068 (FullSize[0x03A8] - InheritedSize[0x0340])
	 */
	class AARSharedWorldGameMode : public AGameMode
	{
	public:
		int                                                        BufferSizePerChunk;                                      // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAHN[0x64];                                  // 0x0344(0x0064) MISSED OFFSET (PADDING)

	public:
		void SetPreviewImageData(TArray<unsigned char> ImageData);
		void SetARWorldSharingIsReady();
		void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
		class AARSharedWorldGameState* GetARSharedWorldGameState();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldGameState
	 * Size -> 0x0038 (FullSize[0x0300] - InheritedSize[0x02C8])
	 */
	class AARSharedWorldGameState : public AGameState
	{
	public:
		TArray<unsigned char>                                      PreviewImageData;                                        // 0x02C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ARWorldData;                                             // 0x02D8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PreviewImageBytesTotal;                                  // 0x02E8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ARWorldBytesTotal;                                       // 0x02EC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PreviewImageBytesDelivered;                              // 0x02F0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ARWorldBytesDelivered;                                   // 0x02F4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6KW[0x8];                                   // 0x02F8(0x0008) MISSED OFFSET (PADDING)

	public:
		void K2_OnARWorldMapIsReady();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldPlayerController
	 * Size -> 0x0008 (FullSize[0x05B8] - InheritedSize[0x05B0])
	 */
	class AARSharedWorldPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_QRZ9[0x8];                                   // 0x05B0(0x0008) MISSED OFFSET (PADDING)

	public:
		void ServerMarkReadyForReceiving();
		void ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer);
		void ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer);
		void ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSkyLight
	 * Size -> 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
	 */
	class AARSkyLight : public ASkyLight
	{
	public:
		class UAREnvironmentCaptureProbe*                          CaptureProbe;                                            // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TV0V[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTexture
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UARTexture : public UTexture
	{
	public:
		AugmentedReality_EARTextureType                            TextureType;                                             // 0x00B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VLE[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timestamp;                                               // 0x00BC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExternalTextureGuid;                                     // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x00D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTextureCameraImage
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UARTextureCameraImage : public UARTexture
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTextureCameraDepth
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UARTextureCameraDepth : public UARTexture
	{
	public:
		AugmentedReality_EARDepthQuality                           DepthQuality;                                            // 0x00D8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		AugmentedReality_EARDepthAccuracy                          DepthAccuracy;                                           // 0x00D9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTemporallySmoothed;                                   // 0x00DA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXRT[0x5];                                   // 0x00DB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentCaptureProbeTexture
	 * Size -> 0x0020 (FullSize[0x0130] - InheritedSize[0x0110])
	 */
	class UAREnvironmentCaptureProbeTexture : public UTextureCube
	{
	public:
		AugmentedReality_EARTextureType                            TextureType;                                             // 0x0110(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99ND[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timestamp;                                               // 0x0114(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExternalTextureGuid;                                     // 0x0118(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x0128(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTraceResultDummy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTraceResultDummy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedGeometry
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UARTrackedGeometry : public UObject
	{
	public:
		struct FGuid                                               UniqueId;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIU2[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalToTrackingTransform;                                // 0x0040(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          LocalToAlignedTrackingTransform;                         // 0x0070(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		AugmentedReality_EARTrackingState                          TrackingState;                                           // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RB9N[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMRMeshComponent*                                    UnderlyingMesh;                                          // 0x00B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		AugmentedReality_EARObjectClassification                   ObjectClassification;                                    // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EP4S[0x17];                                  // 0x00B9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        LastUpdateFrameNumber;                                   // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LD9K[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DebugName;                                               // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WJOV[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool IsTracked();
		class UMRMeshComponent* GetUnderlyingMesh();
		AugmentedReality_EARTrackingState GetTrackingState();
		AugmentedReality_EARObjectClassification GetObjectClassification();
		struct FTransform GetLocalToWorldTransform();
		struct FTransform GetLocalToTrackingTransform();
		float GetLastUpdateTimestamp();
		int GetLastUpdateFrameNumber();
		class FName GetDebugName();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPlaneGeometry
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	class UARPlaneGeometry : public UARTrackedGeometry
	{
	public:
		struct FVector                                             Center;                                                  // 0x00EC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             Extent;                                                  // 0x00F8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_59FV[0x14];                                  // 0x0104(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UARPlaneGeometry*                                    SubsumedBy;                                              // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UARPlaneGeometry* GetSubsumedBy();
		AugmentedReality_EARPlaneOrientation GetOrientation();
		struct FVector GetExtent();
		struct FVector GetCenter();
		TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedPoint
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UARTrackedPoint : public UARTrackedGeometry
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedImage
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class UARTrackedImage : public UARTrackedGeometry
	{
	public:
		class UARCandidateImage*                                   DetectedImage;                                           // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           EstimatedSize;                                           // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6CRL[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FVector2D GetEstimateSize();
		class UARCandidateImage* GetDetectedImage();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedQRCode
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class UARTrackedQRCode : public UARTrackedImage
	{
	public:
		class FString                                              QRCode;                                                  // 0x00F8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Version;                                                 // 0x0108(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U04V[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARFaceGeometry
	 * Size -> 0x00F0 (FullSize[0x01E0] - InheritedSize[0x00F0])
	 */
	class UARFaceGeometry : public UARTrackedGeometry
	{
	public:
		struct FVector                                             LookAtTarget;                                            // 0x00E8(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTracked;                                              // 0x00F4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NL6R[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<AugmentedReality_EARFaceBlendShape, float>            BlendShapes;                                             // 0x00F8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E7KB[0x98];                                  // 0x0148(0x0098) MISSED OFFSET (PADDING)

	public:
		struct FTransform GetWorldSpaceEyeTransform(AugmentedReality_EAREye Eye);
		struct FTransform GetLocalSpaceEyeTransform(AugmentedReality_EAREye Eye);
		float GetBlendShapeValue(AugmentedReality_EARFaceBlendShape BlendShape);
		TMap<AugmentedReality_EARFaceBlendShape, float> GetBlendShapes();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentCaptureProbe
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class UAREnvironmentCaptureProbe : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_GLSM[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAREnvironmentCaptureProbeTexture*                   EnvironmentCaptureTexture;                               // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FVector GetExtent();
		class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedObject
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UARTrackedObject : public UARTrackedGeometry
	{
	public:
		class UARCandidateObject*                                  DetectedObject;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UARCandidateObject* GetDetectedObject();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedPose
	 * Size -> 0x0050 (FullSize[0x0140] - InheritedSize[0x00F0])
	 */
	class UARTrackedPose : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_VJ2I[0x50];                                  // 0x00F0(0x0050) MISSED OFFSET (PADDING)

	public:
		struct FARPose3D GetTrackedPoseData();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackableNotifyComponent
	 * Size -> 0x0150 (FullSize[0x0258] - InheritedSize[0x0108])
	 */
	class UARTrackableNotifyComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnAddTrackedGeometry;                                    // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedGeometry;                                 // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedGeometry;                                 // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedPlane;                                       // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedPlane;                                    // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedPlane;                                    // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedPoint;                                       // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedPoint;                                    // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedPoint;                                    // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedImage;                                       // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedImage;                                    // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedImage;                                    // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedFace;                                        // 0x01C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedFace;                                     // 0x01D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedFace;                                     // 0x01E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedEnvProbe;                                    // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedEnvProbe;                                 // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedEnvProbe;                                 // 0x0218(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedObject;                                      // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedObject;                                   // 0x0238(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedObject;                                   // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTypesDummyClass
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTypesDummyClass : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARCandidateImage
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UARCandidateImage : public UDataAsset
	{
	public:
		class UTexture2D*                                          CandidateTexture;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              FriendlyName;                                            // 0x0038(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Width;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Height;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		AugmentedReality_EARCandidateImageOrientation              Orientation;                                             // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3Q52[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		float GetPhysicalWidth();
		float GetPhysicalHeight();
		AugmentedReality_EARCandidateImageOrientation GetOrientation();
		class FString GetFriendlyName();
		class UTexture2D* GetCandidateTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARCandidateObject
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UARCandidateObject : public UDataAsset
	{
	public:
		TArray<unsigned char>                                      CandidateObjectData;                                     // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              FriendlyName;                                            // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBox                                                BoundingBox;                                             // 0x0050(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0NDU[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetFriendlyName(const class FString& NewName);
		void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
		void SetBoundingBox(const struct FBox& InBoundingBox);
		class FString GetFriendlyName();
		TArray<unsigned char> GetCandidateObjectData();
		struct FBox GetBoundingBox();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
