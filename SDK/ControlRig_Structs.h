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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ControlRig.ERigExecutionType
	 */
	enum class ControlRig_ERigExecutionType : uint8_t
	{
		ERigExecutionType__Runtime = 0,
		ERigExecutionType__Editing = 1,
		ERigExecutionType__Max     = 2
	};

	/**
	 * Enum ControlRig.EBoneGetterSetterMode
	 */
	enum class ControlRig_EBoneGetterSetterMode : uint8_t
	{
		EBoneGetterSetterMode__LocalSpace  = 0,
		EBoneGetterSetterMode__GlobalSpace = 1,
		EBoneGetterSetterMode__Max         = 2
	};

	/**
	 * Enum ControlRig.ETransformGetterType
	 */
	enum class ControlRig_ETransformGetterType : uint8_t
	{
		ETransformGetterType__Initial = 0,
		ETransformGetterType__Current = 1,
		ETransformGetterType__Max     = 2
	};

	/**
	 * Enum ControlRig.EControlRigClampSpatialMode
	 */
	enum class ControlRig_EControlRigClampSpatialMode : uint8_t
	{
		EControlRigClampSpatialMode__Plane                           = 0,
		EControlRigClampSpatialMode__Cylinder                        = 1,
		EControlRigClampSpatialMode__Sphere                          = 2,
		EControlRigClampSpatialMode__EControlRigClampSpatialMode_MAX = 3
	};

	/**
	 * Enum ControlRig.ETransformSpaceMode
	 */
	enum class ControlRig_ETransformSpaceMode : uint8_t
	{
		ETransformSpaceMode__LocalSpace  = 0,
		ETransformSpaceMode__GlobalSpace = 1,
		ETransformSpaceMode__BaseSpace   = 2,
		ETransformSpaceMode__BaseJoint   = 3,
		ETransformSpaceMode__Max         = 4
	};

	/**
	 * Enum ControlRig.EControlRigDrawSettings
	 */
	enum class ControlRig_EControlRigDrawSettings : uint8_t
	{
		EControlRigDrawSettings__Points                      = 0,
		EControlRigDrawSettings__Lines                       = 1,
		EControlRigDrawSettings__LineStrip                   = 2,
		EControlRigDrawSettings__EControlRigDrawSettings_MAX = 3
	};

	/**
	 * Enum ControlRig.EControlRigDrawHierarchyMode
	 */
	enum class ControlRig_EControlRigDrawHierarchyMode : uint8_t
	{
		EControlRigDrawHierarchyMode__Axes = 0,
		EControlRigDrawHierarchyMode__Max  = 1
	};

	/**
	 * Enum ControlRig.EControlRigAnimEasingType
	 */
	enum class ControlRig_EControlRigAnimEasingType : uint8_t
	{
		EControlRigAnimEasingType__Linear                        = 0,
		EControlRigAnimEasingType__QuadraticEaseIn               = 1,
		EControlRigAnimEasingType__QuadraticEaseOut              = 2,
		EControlRigAnimEasingType__QuadraticEaseInOut            = 3,
		EControlRigAnimEasingType__CubicEaseIn                   = 4,
		EControlRigAnimEasingType__CubicEaseOut                  = 5,
		EControlRigAnimEasingType__CubicEaseInOut                = 6,
		EControlRigAnimEasingType__QuarticEaseIn                 = 7,
		EControlRigAnimEasingType__QuarticEaseOut                = 8,
		EControlRigAnimEasingType__QuarticEaseInOut              = 9,
		EControlRigAnimEasingType__QuinticEaseIn                 = 10,
		EControlRigAnimEasingType__QuinticEaseOut                = 11,
		EControlRigAnimEasingType__QuinticEaseInOut              = 12,
		EControlRigAnimEasingType__SineEaseIn                    = 13,
		EControlRigAnimEasingType__SineEaseOut                   = 14,
		EControlRigAnimEasingType__SineEaseInOut                 = 15,
		EControlRigAnimEasingType__CircularEaseIn                = 16,
		EControlRigAnimEasingType__CircularEaseOut               = 17,
		EControlRigAnimEasingType__CircularEaseInOut             = 18,
		EControlRigAnimEasingType__ExponentialEaseIn             = 19,
		EControlRigAnimEasingType__ExponentialEaseOut            = 20,
		EControlRigAnimEasingType__ExponentialEaseInOut          = 21,
		EControlRigAnimEasingType__ElasticEaseIn                 = 22,
		EControlRigAnimEasingType__ElasticEaseOut                = 23,
		EControlRigAnimEasingType__ElasticEaseInOut              = 24,
		EControlRigAnimEasingType__BackEaseIn                    = 25,
		EControlRigAnimEasingType__BackEaseOut                   = 26,
		EControlRigAnimEasingType__BackEaseInOut                 = 27,
		EControlRigAnimEasingType__BounceEaseIn                  = 28,
		EControlRigAnimEasingType__BounceEaseOut                 = 29,
		EControlRigAnimEasingType__BounceEaseInOut               = 30,
		EControlRigAnimEasingType__EControlRigAnimEasingType_MAX = 31
	};

	/**
	 * Enum ControlRig.EControlRigRotationOrder
	 */
	enum class ControlRig_EControlRigRotationOrder : uint8_t
	{
		EControlRigRotationOrder__XYZ                          = 0,
		EControlRigRotationOrder__XZY                          = 1,
		EControlRigRotationOrder__YXZ                          = 2,
		EControlRigRotationOrder__YZX                          = 3,
		EControlRigRotationOrder__ZXY                          = 4,
		EControlRigRotationOrder__ZYX                          = 5,
		EControlRigRotationOrder__EControlRigRotationOrder_MAX = 6
	};

	/**
	 * Enum ControlRig.ECRSimPointIntegrateType
	 */
	enum class ControlRig_ECRSimPointIntegrateType : uint8_t
	{
		ECRSimPointIntegrateType__Verlet                       = 0,
		ECRSimPointIntegrateType__SemiExplicitEuler            = 1,
		ECRSimPointIntegrateType__ECRSimPointIntegrateType_MAX = 2
	};

	/**
	 * Enum ControlRig.ECRSimConstraintType
	 */
	enum class ControlRig_ECRSimConstraintType : uint8_t
	{
		ECRSimConstraintType__Distance                 = 0,
		ECRSimConstraintType__DistanceFromA            = 1,
		ECRSimConstraintType__DistanceFromB            = 2,
		ECRSimConstraintType__Plane                    = 3,
		ECRSimConstraintType__ECRSimConstraintType_MAX = 4
	};

	/**
	 * Enum ControlRig.ECRSimPointForceType
	 */
	enum class ControlRig_ECRSimPointForceType : uint8_t
	{
		ECRSimPointForceType__Direction                = 0,
		ECRSimPointForceType__ECRSimPointForceType_MAX = 1
	};

	/**
	 * Enum ControlRig.ECRSimSoftCollisionType
	 */
	enum class ControlRig_ECRSimSoftCollisionType : uint8_t
	{
		ECRSimSoftCollisionType__Plane                       = 0,
		ECRSimSoftCollisionType__Sphere                      = 1,
		ECRSimSoftCollisionType__Cone                        = 2,
		ECRSimSoftCollisionType__ECRSimSoftCollisionType_MAX = 3
	};

	/**
	 * Enum ControlRig.ERigBoneType
	 */
	enum class ControlRig_ERigBoneType : uint8_t
	{
		ERigBoneType__Imported         = 0,
		ERigBoneType__User             = 1,
		ERigBoneType__ERigBoneType_MAX = 2
	};

	/**
	 * Enum ControlRig.ERigControlAxis
	 */
	enum class ControlRig_ERigControlAxis : uint8_t
	{
		ERigControlAxis__X                   = 0,
		ERigControlAxis__Y                   = 1,
		ERigControlAxis__Z                   = 2,
		ERigControlAxis__ERigControlAxis_MAX = 3
	};

	/**
	 * Enum ControlRig.ERigControlValueType
	 */
	enum class ControlRig_ERigControlValueType : uint8_t
	{
		ERigControlValueType__Initial                  = 0,
		ERigControlValueType__Current                  = 1,
		ERigControlValueType__Minimum                  = 2,
		ERigControlValueType__Maximum                  = 3,
		ERigControlValueType__ERigControlValueType_MAX = 4
	};

	/**
	 * Enum ControlRig.ERigControlType
	 */
	enum class ControlRig_ERigControlType : uint8_t
	{
		ERigControlType__Bool                = 0,
		ERigControlType__Float               = 1,
		ERigControlType__Vector2D            = 2,
		ERigControlType__Position            = 3,
		ERigControlType__Scale               = 4,
		ERigControlType__Rotator             = 5,
		ERigControlType__Transform           = 6,
		ERigControlType__TransformNoScale    = 7,
		ERigControlType__ERigControlType_MAX = 8
	};

	/**
	 * Enum ControlRig.ERigHierarchyImportMode
	 */
	enum class ControlRig_ERigHierarchyImportMode : uint8_t
	{
		ERigHierarchyImportMode__Append                 = 0,
		ERigHierarchyImportMode__Replace                = 1,
		ERigHierarchyImportMode__ReplaceLocalTransform  = 2,
		ERigHierarchyImportMode__ReplaceGlobalTransform = 3,
		ERigHierarchyImportMode__Max                    = 4
	};

	/**
	 * Enum ControlRig.ERigElementType
	 */
	enum class ControlRig_ERigElementType : uint8_t
	{
		ERigElementType__None                = 0,
		ERigElementType__Bone                = 1,
		ERigElementType__Space               = 2,
		ERigElementType__Control             = 3,
		ERigElementType__Curve               = 4,
		ERigElementType__All                 = 5,
		ERigElementType__ERigElementType_MAX = 6
	};

	/**
	 * Enum ControlRig.ERigSpaceType
	 */
	enum class ControlRig_ERigSpaceType : uint8_t
	{
		ERigSpaceType__Global            = 0,
		ERigSpaceType__Bone              = 1,
		ERigSpaceType__Control           = 2,
		ERigSpaceType__Space             = 3,
		ERigSpaceType__ERigSpaceType_MAX = 4
	};

	/**
	 * Enum ControlRig.EAimMode
	 */
	enum class ControlRig_EAimMode : uint8_t
	{
		EAimMode__AimAtTarget    = 0,
		EAimMode__OrientToTarget = 1,
		EAimMode__MAX            = 2
	};

	/**
	 * Enum ControlRig.EApplyTransformMode
	 */
	enum class ControlRig_EApplyTransformMode : uint8_t
	{
		EApplyTransformMode__Override = 0,
		EApplyTransformMode__Additive = 1,
		EApplyTransformMode__Max      = 2
	};

	/**
	 * Enum ControlRig.ERigUnitDebugPointMode
	 */
	enum class ControlRig_ERigUnitDebugPointMode : uint8_t
	{
		ERigUnitDebugPointMode__Point  = 0,
		ERigUnitDebugPointMode__Vector = 1,
		ERigUnitDebugPointMode__Max    = 2
	};

	/**
	 * Enum ControlRig.ERigUnitDebugTransformMode
	 */
	enum class ControlRig_ERigUnitDebugTransformMode : uint8_t
	{
		ERigUnitDebugTransformMode__Point = 0,
		ERigUnitDebugTransformMode__Axes  = 1,
		ERigUnitDebugTransformMode__Box   = 2,
		ERigUnitDebugTransformMode__Max   = 3
	};

	/**
	 * Enum ControlRig.EControlRigCurveAlignment
	 */
	enum class ControlRig_EControlRigCurveAlignment : uint8_t
	{
		EControlRigCurveAlignment__Front                         = 0,
		EControlRigCurveAlignment__Stretched                     = 1,
		EControlRigCurveAlignment__EControlRigCurveAlignment_MAX = 2
	};

	/**
	 * Enum ControlRig.EControlRigVectorKind
	 */
	enum class ControlRig_EControlRigVectorKind : uint8_t
	{
		EControlRigVectorKind__Direction                 = 0,
		EControlRigVectorKind__Location                  = 1,
		EControlRigVectorKind__EControlRigVectorKind_MAX = 2
	};

	/**
	 * Enum ControlRig.EControlRigModifyBoneMode
	 */
	enum class ControlRig_EControlRigModifyBoneMode : uint8_t
	{
		EControlRigModifyBoneMode__OverrideLocal  = 0,
		EControlRigModifyBoneMode__OverrideGlobal = 1,
		EControlRigModifyBoneMode__AdditiveLocal  = 2,
		EControlRigModifyBoneMode__AdditiveGlobal = 3,
		EControlRigModifyBoneMode__Max            = 4
	};

	/**
	 * Enum ControlRig.ERigUnitVisualDebugPointMode
	 */
	enum class ControlRig_ERigUnitVisualDebugPointMode : uint8_t
	{
		ERigUnitVisualDebugPointMode__Point  = 0,
		ERigUnitVisualDebugPointMode__Vector = 1,
		ERigUnitVisualDebugPointMode__Max    = 2
	};

	/**
	 * Enum ControlRig.EControlRigState
	 */
	enum class ControlRig_EControlRigState : uint8_t
	{
		EControlRigState__Init                 = 0,
		EControlRigState__Update               = 1,
		EControlRigState__Invalid              = 2,
		EControlRigState__EControlRigState_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ControlRig.RigElement
	 * Size -> 0x0018
	 */
	struct FRigElement
	{
	public:
		unsigned char                                              UnknownData_ZHAZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Index;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6NB[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigBone
	 * Size -> 0x00C8 (FullSize[0x00E0] - InheritedSize[0x0018])
	 */
	struct FRigBone : public FRigElement
	{
	public:
		class FName                                                ParentName;                                              // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ParentIndex;                                             // 0x0020(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RM1I[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          GlobalTransform;                                         // 0x0060(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0090(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<int>                                                Dependents;                                              // 0x00C0(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ERigBoneType                                    Type;                                                    // 0x00D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LMBT[0xF];                                   // 0x00D1(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigSpace
	 * Size -> 0x0078 (FullSize[0x0090] - InheritedSize[0x0018])
	 */
	struct FRigSpace : public FRigElement
	{
	public:
		ControlRig_ERigSpaceType                                   SpaceType;                                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQJ3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentName;                                              // 0x001C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ParentIndex;                                             // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QB5Q[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitialTransform;                                        // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LocalTransform;                                          // 0x0060(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigControlValue
	 * Size -> 0x0030
	 */
	struct FRigControlValue
	{
	public:
		struct FTransform                                          Storage;                                                 // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct ControlRig.RigControl
	 * Size -> 0x0168 (FullSize[0x0180] - InheritedSize[0x0018])
	 */
	struct FRigControl : public FRigElement
	{
	public:
		ControlRig_ERigControlType                                 ControlType;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8RPE[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParentName;                                              // 0x001C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ParentIndex;                                             // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SpaceName;                                               // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SpaceIndex;                                              // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7V0[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigControlValue                                    InitialValue;                                            // 0x0040(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    Value;                                                   // 0x0070(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_ERigControlAxis                                 PrimaryAxis;                                             // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCurve;                                                // 0x00A1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimatable;                                             // 0x00A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitTranslation;                                       // 0x00A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitRotation;                                          // 0x00A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitScale;                                             // 0x00A5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawLimits;                                             // 0x00A6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8S15[0x9];                                   // 0x00A7(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigControlValue                                    MinimumValue;                                            // 0x00B0(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRigControlValue                                    MaximumValue;                                            // 0x00E0(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bGizmoEnabled;                                           // 0x0110(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQ05[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GizmoName;                                               // 0x0114(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UCN[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          GizmoTransform;                                          // 0x0120(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        GizmoColor;                                              // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                Dependents;                                              // 0x0160(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTransientControl;                                     // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJUM[0xF];                                   // 0x0171(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigCurve
	 * Size -> 0x0008 (FullSize[0x0020] - InheritedSize[0x0018])
	 */
	struct FRigCurve : public FRigElement
	{
	public:
		float                                                      Value;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7CWA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigBoneHierarchy
	 * Size -> 0x0070
	 */
	struct FRigBoneHierarchy
	{
	public:
		unsigned char                                              UnknownData_T6KM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigBone>                                    Bones;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, int>                                     NameToIndexMapping;                                      // 0x0018(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H3J3[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigSpaceHierarchy
	 * Size -> 0x0068
	 */
	struct FRigSpaceHierarchy
	{
	public:
		unsigned char                                              UnknownData_GTCV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigSpace>                                   Spaces;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, int>                                     NameToIndexMapping;                                      // 0x0018(0x0050) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct ControlRig.RigCurveContainer
	 * Size -> 0x0070
	 */
	struct FRigCurveContainer
	{
	public:
		unsigned char                                              UnknownData_QH99[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigCurve>                                   Curves;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, int>                                     NameToIndexMapping;                                      // 0x0018(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WC3I[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigControlHierarchy
	 * Size -> 0x0068
	 */
	struct FRigControlHierarchy
	{
	public:
		unsigned char                                              UnknownData_9TMA[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigControl>                                 Controls;                                                // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, int>                                     NameToIndexMapping;                                      // 0x0018(0x0050) NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyContainer
	 * Size -> 0x01B0
	 */
	struct FRigHierarchyContainer
	{
	public:
		struct FRigBoneHierarchy                                   BoneHierarchy;                                           // 0x0000(0x0070) NativeAccessSpecifierPublic
		struct FRigSpaceHierarchy                                  SpaceHierarchy;                                          // 0x0070(0x0068) NativeAccessSpecifierPublic
		struct FRigControlHierarchy                                ControlHierarchy;                                        // 0x00D8(0x0068) NativeAccessSpecifierPublic
		struct FRigCurveContainer                                  CurveContainer;                                          // 0x0140(0x0070) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.ControlRigDrawInstruction
	 * Size -> 0x0070
	 */
	struct FControlRigDrawInstruction
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigDrawSettings                         PrimitiveType;                                           // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3I1F[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Positions;                                               // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZM7C[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0040(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.ControlRigDrawContainer
	 * Size -> 0x0010
	 */
	struct FControlRigDrawContainer
	{
	public:
		TArray<struct FControlRigDrawInstruction>                  Instructions;                                            // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.ControlRigGizmoDefinition
	 * Size -> 0x0060
	 */
	struct FControlRigGizmoDefinition
	{
	public:
		class FName                                                GizmoName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StaticMesh[0x28];                                        // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.ChannelMapInfo
	 * Size -> 0x0008
	 */
	struct FChannelMapInfo
	{
	public:
		int                                                        ControlIndex;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        ChannelIndex;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.ConstraintNodeData
	 * Size -> 0x00B0
	 */
	struct FConstraintNodeData
	{
	public:
		struct FTransform                                          RelativeParent;                                          // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FConstraintOffset                                   ConstraintOffset;                                        // 0x0030(0x0060) NoDestructor, NativeAccessSpecifierPublic
		class FName                                                LinkedNode;                                              // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransformConstraint>                        Constraints;                                             // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LGT8[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.AnimationHierarchy
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	struct FAnimationHierarchy : public FNodeHierarchyWithUserData
	{
	public:
		TArray<struct FConstraintNodeData>                         UserData;                                                // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.ControlRigIOSettings
	 * Size -> 0x0002
	 */
	struct FControlRigIOSettings
	{
	public:
		bool                                                       bUpdatePose;                                             // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateCurves;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRigBase
	 * Size -> 0x0118 (FullSize[0x0170] - InheritedSize[0x0058])
	 */
	struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0058(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		TMap<class FName, uint16_t>                                ControlRigBoneMapping;                                   // 0x0068(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		TMap<class FName, uint16_t>                                ControlRigCurveMapping;                                  // 0x00B8(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		TMap<class FName, uint16_t>                                InputToCurveMappingUIDs;                                 // 0x0108(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UNodeMappingContainer>                NodeMappingContainer;                                    // 0x0158(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FControlRigIOSettings                               InputSettings;                                           // 0x0160(0x0002) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FControlRigIOSettings                               OutputSettings;                                          // 0x0162(0x0002) Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bExecute;                                                // 0x0164(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KEH7[0xB];                                   // 0x0165(0x000B) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRig
	 * Size -> 0x01F0 (FullSize[0x0360] - InheritedSize[0x0170])
	 */
	struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0170(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UControlRig*                                         ControlRig;                                              // 0x0178(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Alpha;                                                   // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		Engine_EAnimAlphaInputType                                 AlphaInputType;                                          // 0x0184(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAlphaBoolEnabled : 1;                                   // 0x0185(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MGAN[0x2];                                   // 0x0186(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0188(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0190(0x0048) Edit, NoDestructor, NativeAccessSpecifierPrivate
		class FName                                                AlphaCurveName;                                          // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x01E0(0x0030) Edit, NoDestructor, NativeAccessSpecifierPrivate
		TMap<class FName, class FName>                             InputMapping;                                            // 0x0210(0x0050) NativeAccessSpecifierPrivate
		TMap<class FName, class FName>                             OutputMapping;                                           // 0x0260(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z4TB[0xB0];                                  // 0x02B0(0x00B0) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
	 * Size -> 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
	 */
	struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
	{
	public:
		TWeakObjectPtr<class UControlRig>                          ControlRig;                                              // 0x0170(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct ControlRig.ControlRigBindingTemplate
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	struct FControlRigBindingTemplate : public FMovieSceneSpawnSectionTemplate
	{
	};

	/**
	 * ScriptStruct ControlRig.ControlRigComponentInstanceData
	 * Size -> 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
	 */
	struct FControlRigComponentInstanceData : public FActorComponentInstanceData
	{
	public:
		class UControlRig*                                         AnimControlRig;                                          // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.ControlRigExecuteContext
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FControlRigExecuteContext : public FRigVMExecuteContext
	{
	public:
		unsigned char                                              UnknownData_74ZP[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.ControlRigDrawInterface
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FControlRigDrawInterface : public FControlRigDrawContainer
	{
	public:
		unsigned char                                              UnknownData_EPH5[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.ControlRigLayerInstanceProxy
	 * Size -> 0x00A0 (FullSize[0x0790] - InheritedSize[0x06F0])
	 */
	struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_2UWN[0xA0];                                  // 0x06F0(0x00A0) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.AnimNode_ControlRigInputPose
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0010(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKBM[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.CRFourPointBezier
	 * Size -> 0x0030
	 */
	struct FCRFourPointBezier
	{
	public:
		struct FVector                                             A;                                                       // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             C;                                                       // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             D;                                                       // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReference
	 * Size -> 0x0008
	 */
	struct FControlRigSequenceObjectReference
	{
	public:
		class UClass*                                              ControlRigClass;                                         // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReferences
	 * Size -> 0x0010
	 */
	struct FControlRigSequenceObjectReferences
	{
	public:
		TArray<struct FControlRigSequenceObjectReference>          Array;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
	 * Size -> 0x0020
	 */
	struct FControlRigSequenceObjectReferenceMap
	{
	public:
		TArray<struct FGuid>                                       BindingIds;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FControlRigSequenceObjectReferences>         References;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct ControlRig.ControlRigSequencerAnimInstanceProxy
	 * Size -> 0x02A0 (FullSize[0x0BE0] - InheritedSize[0x0940])
	 */
	struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_Z82D[0x2A0];                                 // 0x0940(0x02A0) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.CRSimContainer
	 * Size -> 0x0018
	 */
	struct FCRSimContainer
	{
	public:
		unsigned char                                              UnknownData_Q83X[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeStep;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeftForStep;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1E9M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.CRSimLinearSpring
	 * Size -> 0x0010
	 */
	struct FCRSimLinearSpring
	{
	public:
		int                                                        SubjectA;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SubjectB;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Equilibrium;                                             // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.CRSimPoint
	 * Size -> 0x0028
	 */
	struct FCRSimPoint
	{
	public:
		float                                                      Mass;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearDamping;                                           // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InheritMotion;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearVelocity;                                          // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.CRSimPointConstraint
	 * Size -> 0x0024
	 */
	struct FCRSimPointConstraint
	{
	public:
		ControlRig_ECRSimConstraintType                            Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VV4H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        SubjectA;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SubjectB;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DataA;                                                   // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DataB;                                                   // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.CRSimPointForce
	 * Size -> 0x0018
	 */
	struct FCRSimPointForce
	{
	public:
		ControlRig_ECRSimPointForceType                            ForceType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LHW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Coefficient;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalize;                                              // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SM6L[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.CRSimSoftCollision
	 * Size -> 0x0050
	 */
	struct FCRSimSoftCollision
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_ECRSimSoftCollisionType                         ShapeType;                                               // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0EC[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDistance;                                         // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDistance;                                         // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigAnimEasingType                       FalloffType;                                             // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDLX[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Coefficient;                                             // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInverted;                                               // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VYT6[0xB];                                   // 0x0045(0x000B) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.CRSimPointContainer
	 * Size -> 0x0060 (FullSize[0x0078] - InheritedSize[0x0018])
	 */
	struct FCRSimPointContainer : public FCRSimContainer
	{
	public:
		TArray<struct FCRSimPoint>                                 Points;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCRSimLinearSpring>                          Springs;                                                 // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointForce>                            Forces;                                                  // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCRSimSoftCollision>                         CollisionVolumes;                                        // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointConstraint>                       Constraints;                                             // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCRSimPoint>                                 PreviousStep;                                            // 0x0068(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigInstanceData
	 * Size -> 0x00D0 (FullSize[0x00D8] - InheritedSize[0x0008])
	 */
	struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
	{
	public:
		bool                                                       bAdditive;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyBoneFilter;                                        // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGLM[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputBlendPose                                     BoneFilter;                                              // 0x0010(0x0010) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Weight;                                                  // 0x0020(0x00A0) NativeAccessSpecifierPublic
		struct FMovieSceneEvaluationOperand                        Operand;                                                 // 0x00C0(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4AA[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
	{
	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyRef
	 * Size -> 0x0001
	 */
	struct FRigHierarchyRef
	{
	public:
		unsigned char                                              UnknownData_7EO2[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigHierarchyCopyPasteContent
	 * Size -> 0x0040
	 */
	struct FRigHierarchyCopyPasteContent
	{
	public:
		TArray<ControlRig_ERigElementType>                         Types;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Contents;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  LocalTransforms;                                         // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  GlobalTransforms;                                        // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigElementKey
	 * Size -> 0x000C
	 */
	struct FRigElementKey
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ERigElementType                                 Type;                                                    // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRFE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit : public FRigVMStruct
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnitMutable
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnitMutable : public FRigUnit
	{
	public:
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0008(0x0018) Transient, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SimBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SimBase : public FRigUnit
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedMinimum;                                      // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedMaximum;                                      // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C000[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatRange : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedMinimum;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedMaximum;                                      // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4GJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateTransformLerp : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_DRDW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TargetValue;                                             // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitialValue;                                            // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0074(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0P10[0xB];                                   // 0x0075(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          AccumulatedValue;                                        // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateQuatLerp : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_RVXE[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               TargetValue;                                             // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               InitialValue;                                            // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9R6B[0xB];                                   // 0x0035(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               AccumulatedValue;                                        // 0x0050(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             TargetValue;                                             // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialValue;                                            // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UTXK[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedValue;                                        // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatLerp : public FRigUnit_SimBase
	{
	public:
		float                                                      TargetValue;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7DQ[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateTransformMul : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_PLZ2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Multiplier;                                              // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitialValue;                                            // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlipOrder;                                              // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0071(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWOW[0xE];                                   // 0x0072(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          AccumulatedValue;                                        // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateQuatMul : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_SZMG[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Multiplier;                                              // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               InitialValue;                                            // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFlipOrder;                                              // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0031(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A847[0xE];                                   // 0x0032(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               AccumulatedValue;                                        // 0x0050(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorMul : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Multiplier;                                              // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialValue;                                            // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AXR3[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedValue;                                        // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6ZF[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatMul : public FRigUnit_SimBase
	{
	public:
		float                                                      Multiplier;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DKKA[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPHJ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Increment;                                               // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialValue;                                            // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0BJ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AccumulatedValue;                                        // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GM3A[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AccumulateFloatAdd : public FRigUnit_SimBase
	{
	public:
		float                                                      Increment;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIntegrateDeltaTime;                                     // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESYP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWJ2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AddBoneTransform
	 * Size -> 0x0050 (FullSize[0x0070] - InheritedSize[0x0020])
	 */
	struct FRigUnit_AddBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1OF2[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPostMultiply;                                           // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0065(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48M6[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedBoneIndex;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_II3P[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone_Target
	 * Size -> 0x0028
	 */
	struct FRigUnit_AimBone_Target
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Target;                                                  // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigVectorKind                           Kind;                                                    // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQJQ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Space;                                                   // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
	 * Size -> 0x0040
	 */
	struct FRigUnit_AimBone_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AL2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TTF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimBone
	 * Size -> 0x00C0 (FullSize[0x00E0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_Target                             Primary;                                                 // 0x0028(0x0028) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_AimBone_Target                             Secondary;                                               // 0x0050(0x0028) NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x007C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNPN[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_AimBone_DebugSettings                      DebugSettings;                                           // 0x0080(0x0040) NoDestructor, NativeAccessSpecifierPublic
		int                                                        BoneIndex;                                               // 0x00C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PrimaryCachedSpaceName;                                  // 0x00C4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PrimaryCachedSpaceIndex;                                 // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SecondaryCachedSpaceName;                                // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SecondaryCachedSpaceIndex;                               // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XWC[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.AimTarget
	 * Size -> 0x0050
	 */
	struct FAimTarget
	{
	public:
		float                                                      Weight;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E937[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             AlignVector;                                             // 0x0040(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0G1I[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AimConstraint
	 * Size -> 0x0058 (FullSize[0x0078] - InheritedSize[0x0020])
	 */
	struct FRigUnit_AimConstraint : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ControlRig_EAimMode                                        AimMode;                                                 // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ControlRig_EAimMode                                        UpMode;                                                  // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2Z59[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AimVector;                                               // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             UpVector;                                                // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZVBD[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAimTarget>                                  AimTargets;                                              // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FAimTarget>                                  UpTargets;                                               // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_041L[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AlphaInterpVector
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMapRange;                                               // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P057[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputRange                                         InRange;                                                 // 0x0020(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FInputRange                                         OutRange;                                                // 0x0028(0x0008) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClampResult;                                            // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0JC[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClampMin;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMax;                                                // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpResult;                                           // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYW6[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpSpeedIncreasing;                                   // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedDecreasing;                                   // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                ScaleBiasClamp;                                          // 0x0054(0x0030) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWRJ[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AlphaInterp
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bias;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMapRange;                                               // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9STU[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputRange                                         InRange;                                                 // 0x0018(0x0008) NoDestructor, NativeAccessSpecifierPublic
		struct FInputRange                                         OutRange;                                                // 0x0020(0x0008) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bClampResult;                                            // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VY9T[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ClampMin;                                                // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClampMax;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpResult;                                           // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NV5H[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpSpeedIncreasing;                                   // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpSpeedDecreasing;                                   // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                ScaleBiasClamp;                                          // 0x0044(0x0030) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RX9O[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimBase : public FRigUnit
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimEasing
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigAnimEasingType                       Type;                                                    // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTUX[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SourceMinimum;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7O1E[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimEasingType
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
	{
	public:
		ControlRig_EControlRigAnimEasingType                       Type;                                                    // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YAL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AEL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0010(0x0088) NativeAccessSpecifierPublic
		float                                                      SourceMinimum;                                           // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x009C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2LN[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_AnimRichCurve
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
	{
	public:
		struct FRuntimeFloatCurve                                  Curve;                                                   // 0x0008(0x0088) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ApplyFK
	 * Size -> 0x0090 (FullSize[0x00B0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_ApplyFK : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFTV[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x0060(0x0009) Edit, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_EApplyTransformMode                             ApplyTransformMode;                                      // 0x0069(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ETransformSpaceMode                             ApplyTransformSpace;                                     // 0x006A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YP7[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0070(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BaseJoint;                                               // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LO7V[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BeginExecution
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BeginExecution : public FRigUnit
	{
	public:
		struct FControlRigExecuteContext                           ExecuteContext;                                          // 0x0008(0x0018) Edit, Transient, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.BlendTarget
	 * Size -> 0x0040
	 */
	struct FBlendTarget
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EQY1[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BlendTransform
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BlendTransform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_K7CJ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Source;                                                  // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBlendTarget>                                Targets;                                                 // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
	 * Size -> 0x000C
	 */
	struct FRigUnit_BoneHarmonics_BoneTarget
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
	 * Size -> 0x0020
	 */
	struct FRigUnit_BoneHarmonics_WorkData
	{
	public:
		TArray<int>                                                BoneIndices;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveTime;                                                // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y2OT[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneHarmonics
	 * Size -> 0x0080 (FullSize[0x00A0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_BoneHarmonics_BoneTarget>           Bones;                                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveSpeed;                                               // 0x0030(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveFrequency;                                           // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x0054(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigAnimEasingType                       WaveEase;                                                // 0x006C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ME1[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaveMinimum;                                             // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigRotationOrder                        RotationOrder;                                           // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5IC[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_BoneHarmonics_WorkData                     WorkData;                                                // 0x0080(0x0020) Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ControlName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ControlName : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpaceName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_SpaceName : public FRigUnit
	{
	public:
		class FName                                                Space;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BoneName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BoneName : public FRigUnit
	{
	public:
		class FName                                                Bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
	 * Size -> 0x000C
	 */
	struct FRigUnit_CCDIK_RotationLimit
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Limit;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
	 * Size -> 0x0048
	 */
	struct FRigUnit_CCDIK_WorkData
	{
	public:
		TArray<struct FCCDIKChainLink>                             Chain;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                BoneIndices;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                RotationLimitIndex;                                      // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              RotationLimitsPerBone;                                   // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EffectorIndex;                                           // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GPY[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_CCDIK
	 * Size -> 0x00C0 (FullSize[0x00E0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MaxIterations;                                           // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x006C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F858[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseRotationLimit;                                       // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXTQ[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_CCDIK_RotationLimit>                RotationLimits;                                          // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MV2V[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_CCDIK_WorkData                             WorkData;                                                // 0x0090(0x0048) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URKQ[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
	 * Size -> 0x0028
	 */
	struct FRigUnit_ChainHarmonics_Reach
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X66B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ReachTarget;                                             // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ReachAxis;                                               // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachMinimum;                                            // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReachMaximum;                                            // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigAnimEasingType                       ReachEase;                                               // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OO9[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
	 * Size -> 0x0040
	 */
	struct FRigUnit_ChainHarmonics_Wave
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YO18[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaveFrequency;                                           // 0x0004(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveAmplitude;                                           // 0x0010(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveOffset;                                              // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WaveNoise;                                               // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMinimum;                                             // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveMaximum;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigAnimEasingType                       WaveEase;                                                // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MPR7[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
	 * Size -> 0x003C
	 */
	struct FRigUnit_ChainHarmonics_Pendulum
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCAK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PendulumStiffness;                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PendulumGravity;                                         // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumBlend;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumDrag;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumMinimum;                                         // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PendulumMaximum;                                         // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigAnimEasingType                       PendulumEase;                                            // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QSF[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             UnwindAxis;                                              // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnwindMinimum;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnwindMaximum;                                           // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
	 * Size -> 0x0090
	 */
	struct FRigUnit_ChainHarmonics_WorkData
	{
	public:
		struct FVector                                             Time;                                                    // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6W0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int>                                                Bones;                                                   // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              Ratio;                                                   // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     LocalTip;                                                // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumTip;                                             // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumPosition;                                        // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     PendulumVelocity;                                        // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     HierarchyLine;                                           // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VelocityLines;                                           // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ChainHarmonics
	 * Size -> 0x0210 (FullSize[0x0230] - InheritedSize[0x0020])
	 */
	struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                ChainRoot;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Speed;                                                   // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Reach                       Reach;                                                   // 0x0034(0x0028) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Wave                        Wave;                                                    // 0x005C(0x0040) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SSC7[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  WaveCurve;                                               // 0x00A0(0x0088) NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_Pendulum                    Pendulum;                                                // 0x0128(0x003C) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0164(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMOV[0xB];                                   // 0x0165(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DrawWorldOffset;                                         // 0x0170(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_ChainHarmonics_WorkData                    WorkData;                                                // 0x01A0(0x0090) Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Control
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Control : public FRigUnit
	{
	public:
		struct FEulerTransform                                     Transform;                                               // 0x0008(0x0024) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UUF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          base;                                                    // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          InitTransform;                                           // 0x0060(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0090(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x00C0(0x0009) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3E65[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Control_StaticMesh
	 * Size -> 0x0030 (FullSize[0x0100] - InheritedSize[0x00D0])
	 */
	struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
	{
	public:
		struct FTransform                                          MeshTransform;                                           // 0x00D0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ToSwingAndTwist : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_68G6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NPA[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Swing;                                                   // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Twist;                                                   // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_O2CP[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TWY[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertRotationToVector : public FRigUnit
	{
	public:
		struct FRotator                                            Input;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X68D[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertVectorToRotation : public FRigUnit
	{
	public:
		struct FVector                                             Input;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertQuaternion
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertQuaternion : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_36LY[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJA4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertRotation
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertRotation : public FRigUnit
	{
	public:
		struct FRotator                                            Input;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIF3[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertEulerTransform : public FRigUnit
	{
	public:
		struct FEulerTransform                                     Input;                                                   // 0x0008(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVCT[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ConvertTransform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_ConvertTransform : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_C1EL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Input;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEulerTransform                                     Result;                                                  // 0x0040(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GBT[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBaseMutable
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugBase : public FRigUnit
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugBezier
	 * Size -> 0x00A0 (FullSize[0x00C0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0020(0x0030) NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinimumU;                                                // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumU;                                                // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0058(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Detail;                                                  // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U3YD[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98JN[0xF];                                   // 0x00B1(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugHierarchy
	 * Size -> 0x0060 (FullSize[0x0080] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
	{
	public:
		ControlRig_EControlRigDrawHierarchyMode                    Mode;                                                    // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUUW[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CDTH[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QO2D[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLine
	 * Size -> 0x0080 (FullSize[0x00A0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FVector                                             A;                                                       // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x004C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_236M[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0060(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKIF[0xF];                                   // 0x0091(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugLineStrip
	 * Size -> 0x0070 (FullSize[0x0090] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0044(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZQGU[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XKR[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugPointMutable
	 * Size -> 0x0070 (FullSize[0x0090] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ERigUnitDebugPointMode                          Mode;                                                    // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1NC[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDV6[0xF];                                   // 0x0081(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugPoint
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ERigUnitDebugPointMode                          Mode;                                                    // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FI4[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0598[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0070(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQLW[0xF];                                   // 0x0071(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugArc
	 * Size -> 0x00A0 (FullSize[0x00C0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDegrees;                                          // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumDegrees;                                          // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        Detail;                                                  // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0074(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WL6L[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PBM7[0xF];                                   // 0x00B1(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugRectangle
	 * Size -> 0x0090 (FullSize[0x00B0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQ01[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_DebugTransformArrayMutable_WorkData
	{
	public:
		TArray<struct FTransform>                                  DrawTransforms;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
	 * Size -> 0x0090 (FullSize[0x00B0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
	{
	public:
		TArray<struct FTransform>                                  Transforms;                                              // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ERigUnitDebugTransformMode                      Mode;                                                    // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZTBQ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0034(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x004C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJ21[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0060(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0090(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S90Y[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_DebugTransformArrayMutable_WorkData        WorkData;                                                // 0x0098(0x0010) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7M53[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransformMutable
	 * Size -> 0x00A0 (FullSize[0x00C0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_ERigUnitDebugTransformMode                      Mode;                                                    // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BCO[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0054(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x006C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IMDS[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYVI[0xF];                                   // 0x00B1(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DebugTransform
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_XXB4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_ERigUnitDebugTransformMode                      Mode;                                                    // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5CT[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0044(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x005C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXU0[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNEE[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_8JRC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Delta;                                                   // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          PreviousValue;                                           // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Cache;                                                   // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_HFRT[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Delta;                                                   // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               PreviousValue;                                           // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Cache;                                                   // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Delta;                                                   // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PreviousValue;                                           // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Cache;                                                   // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delta;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousValue;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Cache;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
	 * Size -> 0x0020
	 */
	struct FRigUnit_DistributeRotation_Rotation
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5O9B[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
	 * Size -> 0x0050
	 */
	struct FRigUnit_DistributeRotation_WorkData
	{
	public:
		TArray<int>                                                BoneIndices;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                BoneRotationA;                                           // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                BoneRotationB;                                           // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              BoneRotationT;                                           // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  BoneLocalTransforms;                                     // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DistributeRotation
	 * Size -> 0x0078 (FullSize[0x0098] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_DistributeRotation_Rotation>        Rotations;                                               // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigAnimEasingType                       RotationEaseType;                                        // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ACKF[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_DistributeRotation_WorkData                WorkData;                                                // 0x0048(0x0050) Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
	 * Size -> 0x0040 (FullSize[0x0060] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FAQO[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VK8M[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
	{
	public:
		class FName                                                InstructionName;                                         // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
	{
	public:
		class FName                                                InstructionName;                                         // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
	 * Size -> 0x0028
	 */
	struct FRigUnit_FABRIK_WorkData
	{
	public:
		TArray<struct FFABRIKChainLink>                            Chain;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                BoneIndices;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EffectorIndex;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE0S[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FABRIK
	 * Size -> 0x0080 (FullSize[0x00A0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EffectorTransform;                                       // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GYWK[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        MaxIterations;                                           // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_FABRIK_WorkData                            WorkData;                                                // 0x0070(0x0028) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LOHV[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
	 * Size -> 0x0020
	 */
	struct FRigUnit_FitChainToCurve_Rotation
	{
	public:
		struct FQuat                                               Rotation;                                                // 0x0000(0x0010) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Ratio;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AE6[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
	 * Size -> 0x0060
	 */
	struct FRigUnit_FitChainToCurve_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8CN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CurveColor;                                              // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SegmentsColor;                                           // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFY5[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0030(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
	 * Size -> 0x0098
	 */
	struct FRigUnit_FitChainToCurve_WorkData
	{
	public:
		float                                                      ChainLength;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5G8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     BonePositions;                                           // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              BoneSegments;                                            // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     CurvePositions;                                          // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              CurveSegments;                                           // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                BoneIndices;                                             // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                BoneRotationA;                                           // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                BoneRotationB;                                           // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              BoneRotationT;                                           // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  BoneLocalTransforms;                                     // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_FitChainToCurve
	 * Size -> 0x0190 (FullSize[0x01B0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0030(0x0030) NoDestructor, NativeAccessSpecifierPublic
		ControlRig_EControlRigCurveAlignment                       Alignment;                                               // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATOY[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SamplingPrecision;                                       // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x007C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVectorPosition;                                      // 0x0088(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N4KH[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_FitChainToCurve_Rotation>           Rotations;                                               // 0x0098(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigAnimEasingType                       RotationEaseType;                                        // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5UJG[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_FitChainToCurve_DebugSettings              DebugSettings;                                           // 0x00B0(0x0060) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_FitChainToCurve_WorkData                   WorkData;                                                // 0x0110(0x0098) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NPYR[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MapRange_Float
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MapRange_Float : public FRigUnit
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinIn;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxIn;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinOut;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOut;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Clamp_Float
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Clamp_Float : public FRigUnit
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Min;                                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryFloatOp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryFloatOp : public FRigUnit
	{
	public:
		float                                                      Argument0;                                               // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Argument1;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZWSL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Add_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetBoneTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetBoneTransform : public FRigUnit
	{
	public:
		class FName                                                Bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JEOD[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int                                                        CachedBoneIndex;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0CBN[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlInitialTransform : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85DG[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int                                                        CachedControlIndex;                                      // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZJJ[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlTransform
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlTransform : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XWBU[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Minimum;                                                 // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Maximum;                                                 // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int                                                        CachedControlIndex;                                      // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6IG[0xC];                                   // 0x00B4(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlRotator
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlRotator : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ML7J[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            Rotator;                                                 // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Minimum;                                                 // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Maximum;                                                 // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int                                                        CachedControlIndex;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76ZY[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlVector
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlVector : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJGH[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Vector;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedControlIndex;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L812[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlVector2D
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlVector2D : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector;                                                  // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Minimum;                                                 // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Maximum;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedControlIndex;                                      // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9UB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlFloat
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlFloat : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedControlIndex;                                      // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetControlBool
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetControlBool : public FRigUnit
	{
	public:
		class FName                                                Control;                                                 // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MAJ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedControlIndex;                                      // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetCurveValue
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetCurveValue : public FRigUnit
	{
	public:
		class FName                                                Curve;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedCurveIndex;                                        // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetDeltaTime
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
	{
	public:
		float                                                      Result;                                                  // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E8YQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetInitialBoneTransform : public FRigUnit
	{
	public:
		class FName                                                Bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WDQ6[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int                                                        CachedBoneIndex;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83J8[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetJointTransform
	 * Size -> 0x0080 (FullSize[0x00A0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_GetJointTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Joint;                                                   // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ETransformGetterType                            Type;                                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ETransformSpaceMode                             TransformSpace;                                          // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYTH[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BaseJoint;                                               // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GIUO[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Output;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
	{
	public:
		class FName                                                Bone;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H3LE[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int                                                        CachedBoneIndex;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedSpaceIndex;                                        // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBCU[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetSpaceTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetSpaceTransform : public FRigUnit
	{
	public:
		class FName                                                Space;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           SpaceType;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGA4[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int                                                        CachedSpaceIndex;                                        // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZLAB[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetWorldTime
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
	{
	public:
		float                                                      Year;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Month;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Day;                                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeekDay;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Hours;                                                   // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minutes;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Seconds;                                                 // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverallSeconds;                                          // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_HighlevelBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_HighlevelBase : public FRigUnit
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_KalmanTransform
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_CKAD[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int                                                        BufferSize;                                              // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GKL[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Buffer;                                                  // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastInsertIndex;                                         // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQH3[0xC];                                   // 0x0094(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_KalmanVector
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_KalmanVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BufferSize;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I79P[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Buffer;                                                  // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastInsertIndex;                                         // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEZH[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_KalmanFloat
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BufferSize;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQXO[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Buffer;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastInsertIndex;                                         // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESUO[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBase : public FRigUnit
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       A;                                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GSRH[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolEquals
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       A;                                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_176T[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       A;                                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       B;                                                       // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x000A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DZ2[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolOr
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolNand
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolAnd
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       Value;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKAJ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolNot
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolConstant
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
	{
	public:
		bool                                                       Value;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05G2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorBase : public FRigUnit_MathBase
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorLerp
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
	{
	public:
		struct FLinearColor                                        A;                                                       // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        B;                                                       // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Result;                                                  // 0x002C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CI8A[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
	{
	public:
		struct FLinearColor                                        A;                                                       // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        B;                                                       // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Result;                                                  // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorMul
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorSub
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorAdd
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathColorFromFloat
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Result;                                                  // 0x000C(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OJA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      C;                                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlphaAngle;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BetaAngle;                                               // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GammaAngle;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bValid;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SN6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAtan
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAcos
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAsin
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatTan
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatCos
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSin
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatRad
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatDeg
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QIV8[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IfTrue;                                                  // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IfFalse;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRLS[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZ12[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WDV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YS2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLess
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N540[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatGreater
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZU6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5R5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatEquals
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPOW[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatRemap
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMinimum;                                           // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SourceMaximum;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMinimum;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetMaximum;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClamp;                                                  // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SP79[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYXF[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatLerp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatClamp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSign
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatRound
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatCeil
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatFloor
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAbs
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatNegate
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSqrt
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      A;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      B;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WLQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatPow
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMax
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMin
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMod
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatDiv
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatMul
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatSub
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatAdd
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstant
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KU3L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathFloatConstPi
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
	{
	public:
		ControlRig_EControlRigRotationOrder                        RotationOrder;                                           // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNX1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_YUO2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Input;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             TwistAxis;                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGIQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Swing;                                                   // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Twist;                                                   // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_48OI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		CoreUObject_EAxis                                          Axis;                                                    // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1K1K[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_J3PW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Quaternion;                                              // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U78U[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_4BMN[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionDot
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_59UL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CEQ2[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BJ6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               IfTrue;                                                  // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               IfFalse;                                                 // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_KN1V[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZN3N[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_MUJQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DFI[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_LDES[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FBP[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0040(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_F48B[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               A;                                                       // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               B;                                                       // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionMul
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_F2CX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TY29[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_94CU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_EControlRigRotationOrder                        RotationOrder;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T3WB[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
	{
	public:
		unsigned char                                              UnknownData_GI7Z[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TA1[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FVector                                             Euler;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigRotationOrder                        RotationOrder;                                           // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGSX[0xB];                                   // 0x0015(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FPE[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_FTEW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		CoreUObject_EAxis                                          Axis;                                                    // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigClampSpatialMode                     Type;                                                    // 0x0041(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKQR[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50M6[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Space;                                                   // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37FB[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x0084(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugThickness;                                          // 0x0094(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z8F2[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x00A0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
	{
	public:
		struct FVector                                             Location;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigRotationOrder                        RotationOrder;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KYJI[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Scale;                                                   // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEulerTransform                                     EulerTransform;                                          // 0x0060(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5IE[0xC];                                   // 0x0084(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_0N4F[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4236[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_E3PX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x004C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GY68[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YY4L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          IfTrue;                                                  // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          IfFalse;                                                 // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformLerp
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_3VLX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          A;                                                       // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          B;                                                       // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9EJ[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0080(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_BDVL[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformInverse
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_HGZV[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Local;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Parent;                                                  // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Global;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_UZT9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Global;                                                  // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Parent;                                                  // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Local;                                                   // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_Y5I3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          A;                                                       // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          B;                                                       // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformMul
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
	{
	public:
		unsigned char                                              UnknownData_8EXZ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEulerTransform                                     Result;                                                  // 0x0040(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTUJ[0xC];                                   // 0x0064(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
	{
	public:
		struct FEulerTransform                                     EulerTransform;                                          // 0x0008(0x0024) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HSDZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBase
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		CoreUObject_EAxis                                          Axis;                                                    // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigClampSpatialMode                     Type;                                                    // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNU1[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Minimum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Space;                                                   // 0x0020(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDrawDebug;                                              // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0IU[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DebugColor;                                              // 0x0054(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugThickness;                                          // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0068(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOML[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0008(0x0030) NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
	{
	public:
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x0008(0x0030) NoDestructor, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x003C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Tangent;                                                 // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56XX[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4AK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorParallel
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFQK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorAngle
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EP4U[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMirror
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Normal;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHUP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorClampLength
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumLength;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumLength;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x001C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSetLength
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35B3[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorUnit
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDot
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UNM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYEQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorCross
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDistance
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRTU[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorLength
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorRad
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDeg
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
	{
	public:
		bool                                                       Condition;                                               // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GU48[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             IfTrue;                                                  // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             IfFalse;                                                 // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2J2O[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tolerance;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NEG[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F29H[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorEquals
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBCR[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorRemap
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SourceMinimum;                                           // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SourceMaximum;                                           // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetMinimum;                                           // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TargetMaximum;                                           // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClamp;                                                  // 0x0044(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0UV[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Result;                                                  // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6RHD[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorLerp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             A;                                                       // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             B;                                                       // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      T;                                                       // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorClamp
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Minimum;                                                 // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Maximum;                                                 // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSign
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorRound
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorCeil
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorFloor
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorAbs
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorNegate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMax
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMin
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMod
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorDiv
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorScale
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Factor;                                                  // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BG5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorMul
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorSub
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorAdd
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
	 * Size -> 0x0040
	 */
	struct FRigUnit_ModifyBoneTransforms_PerBone
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFQU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
	 * Size -> 0x0010
	 */
	struct FRigUnit_ModifyBoneTransforms_WorkData
	{
	public:
		TArray<int>                                                CachedBoneIndices;                                       // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
	{
	public:
		TArray<struct FRigUnit_ModifyBoneTransforms_PerBone>       BoneToModify;                                            // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMinimum;                                           // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeightMaximum;                                           // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigModifyBoneMode                       Mode;                                                    // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9NX3[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_ModifyBoneTransforms_WorkData              WorkData;                                                // 0x0040(0x0010) Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
	 * Size -> 0x0014
	 */
	struct FRigUnit_MultiFABRIK_EndEffector
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
	 * Size -> 0x0060
	 */
	struct FRigUnit_MultiFABRIK_WorkData
	{
	public:
		unsigned char                                              UnknownData_G2S3[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiFABRIK
	 * Size -> 0x0088 (FullSize[0x00A8] - InheritedSize[0x0020])
	 */
	struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                RootBone;                                                // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRigUnit_MultiFABRIK_EndEffector>            Effectors;                                               // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3HJ[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        MaxIterations;                                           // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H3QX[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_MultiFABRIK_WorkData                       WorkData;                                                // 0x0048(0x0060) Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NoiseVector
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NoiseVector : public FRigUnit_MathBase
	{
	public:
		struct FVector                                             Position;                                                // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Speed;                                                   // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Frequency;                                               // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0034(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Time;                                                    // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2C2F[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_NoiseFloat
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Speed;                                                   // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frequency;                                               // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NSKT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SimBaseMutable
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SimBaseMutable : public FRigUnitMutable
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
	 * Size -> 0x0014
	 */
	struct FRigUnit_PointSimulation_BoneTarget
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        TranslationPoint;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PrimaryAimPoint;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        SecondaryAimPoint;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
	 * Size -> 0x0050
	 */
	struct FRigUnit_PointSimulation_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJK1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionScale;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawPointsAsSpheres;                                    // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUT7[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorldOffset;                                             // 0x0020(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
	 * Size -> 0x0088
	 */
	struct FRigUnit_PointSimulation_WorkData
	{
	public:
		struct FCRSimPointContainer                                Simulation;                                              // 0x0000(0x0078) NativeAccessSpecifierPublic
		TArray<int>                                                BoneIndices;                                             // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_PointSimulation
	 * Size -> 0x0190 (FullSize[0x01B0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
	{
	public:
		TArray<struct FCRSimPoint>                                 Points;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCRSimLinearSpring>                          Links;                                                   // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCRSimPointForce>                            Forces;                                                  // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCRSimSoftCollision>                         CollisionVolumes;                                        // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulatedStepsPerSecond;                                 // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ECRSimPointIntegrateType                        IntegratorType;                                          // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZ0V[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VerletBlend;                                             // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2APK[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRigUnit_PointSimulation_BoneTarget>         BoneTargets;                                             // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitLocalPosition;                                     // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0081(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MF46[0x2];                                   // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PrimaryAimAxis;                                          // 0x0084(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAimAxis;                                        // 0x0090(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34WM[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_PointSimulation_DebugSettings              DebugSettings;                                           // 0x00A0(0x0050) NoDestructor, NativeAccessSpecifierPublic
		struct FCRFourPointBezier                                  Bezier;                                                  // 0x00F0(0x0030) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_PointSimulation_WorkData                   WorkData;                                                // 0x0120(0x0088) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTSU[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_EndProfilingTimer
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
	{
	public:
		int                                                        NumberOfMeasurements;                                    // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5GM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Prefix;                                                  // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedTime;                                         // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        MeasurementsLeft;                                        // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_StartProfilingTimer
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionToAngle
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionToAngle : public FRigUnit
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97HW[0xC];                                   // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50RU[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
	{
	public:
		struct FVector                                             Axis;                                                    // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNZG[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_1MY4[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_UnaryQuaternionOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_2W2V[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument;                                                // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_InverseQuaterion
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryQuaternionOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_DZZU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Argument0;                                               // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Argument1;                                               // 0x0020(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FQuat                                               Result;                                                  // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RandomVector
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_RandomVector : public FRigUnit_MathBase
	{
	public:
		int                                                        Seed;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastResult;                                              // 0x0024(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastSeed;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeft;                                                // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_RandomFloat
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_RandomFloat : public FRigUnit_MathBase
	{
	public:
		int                                                        Seed;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Minimum;                                                 // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Maximum;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastResult;                                              // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastSeed;                                                // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeft;                                                // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneRotation
	 * Size -> 0x0030 (FullSize[0x0050] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetBoneRotation : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKEN[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x0030(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UI5L[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRML[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedBoneIndex;                                         // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneTransform
	 * Size -> 0x0050 (FullSize[0x0070] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J0OX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T8EA[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPFH[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedBoneIndex;                                         // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetBoneTranslation
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F8YH[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x003C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUVK[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedBoneIndex;                                         // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDBE[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlColor
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetControlColor : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0028(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedControlIndex;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBW8[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlTransform
	 * Size -> 0x0050 (FullSize[0x0070] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetControlTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1HQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XLZZ[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedControlIndex;                                      // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4HC1[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlRotator
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetControlRotator : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotator;                                                 // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0W42[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedControlIndex;                                      // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVector
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetControlVector : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Vector;                                                  // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           Space;                                                   // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOPI[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedControlIndex;                                      // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlVector2D
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetControlVector2D : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector;                                                  // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedControlIndex;                                      // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlFloat
	 * Size -> 0x0018 (FullSize[0x0038] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetControlFloat : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedControlIndex;                                      // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1ZS[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetControlBool
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetControlBool : public FRigUnitMutable
	{
	public:
		class FName                                                Control;                                                 // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue;                                               // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXMG[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedControlIndex;                                      // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetCurveValue
	 * Size -> 0x0010 (FullSize[0x0030] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetCurveValue : public FRigUnitMutable
	{
	public:
		class FName                                                Curve;                                                   // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedCurveIndex;                                        // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
	 * Size -> 0x0050 (FullSize[0x0070] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Space;                                                   // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0064(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CF2[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedBoneIndex;                                         // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        CachedSpaceIndex;                                        // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SetSpaceTransform
	 * Size -> 0x0050 (FullSize[0x0070] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
	{
	public:
		class FName                                                Space;                                                   // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WY5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ControlRig_EBoneGetterSetterMode                           SpaceType;                                               // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLF8[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        CachedSpaceIndex;                                        // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4F30[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
	 * Size -> 0x0048
	 */
	struct FRigUnit_SlideChain_WorkData
	{
	public:
		float                                                      ChainLength;                                             // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KCZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              BoneSegments;                                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int>                                                BoneIndices;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Transforms;                                              // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  BlendedTransforms;                                       // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SlideChain
	 * Size -> 0x0060 (FullSize[0x0080] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlideAmount;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6QA[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SlideChain_WorkData                        WorkData;                                                // 0x0038(0x0048) Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
	 * Size -> 0x0050
	 */
	struct FRigUnit_SpringIK_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MIYQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CY2[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0020(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
	 * Size -> 0x00A0
	 */
	struct FRigUnit_SpringIK_WorkData
	{
	public:
		TArray<int>                                                BoneIndices;                                             // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PoleVectorIndex;                                         // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W41G[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  Transforms;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCRSimPointContainer                                Simulation;                                              // 0x0028(0x0078) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_SpringIK
	 * Size -> 0x0160 (FullSize[0x0180] - InheritedSize[0x0020])
	 */
	struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                StartBone;                                               // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndBone;                                                 // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HierarchyStrength;                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectorStrength;                                        // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectorRatio;                                           // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootStrength;                                            // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RootRatio;                                               // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damping;                                                 // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipPolePlane;                                          // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigVectorKind                           PoleVectorKind;                                          // 0x0055(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB5P[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PoleVectorSpace;                                         // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0060(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x006C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLiveSimulation;                                         // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIEN[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        Iterations;                                              // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitLocalPosition;                                     // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x0081(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0IAQ[0xE];                                   // 0x0082(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_SpringIK_DebugSettings                     DebugSettings;                                           // 0x0090(0x0050) NoDestructor, NativeAccessSpecifierPublic
		struct FRigUnit_SpringIK_WorkData                          WorkData;                                                // 0x00E0(0x00A0) Transient, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Timeline
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Timeline : public FRigUnit_SimBase
	{
	public:
		float                                                      Speed;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AccumulatedValue;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C36Y[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
	{
	public:
		unsigned char                                              UnknownData_BZLI[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SecondsAgo;                                              // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BufferSize;                                              // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRange;                                               // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKMP[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Result;                                                  // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  Buffer;                                                  // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DeltaTimes;                                              // 0x0090(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastInsertIndex;                                         // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        UpperBound;                                              // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z52G[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TimeOffsetVector
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsAgo;                                              // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BufferSize;                                              // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRange;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9UDW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     Buffer;                                                  // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DeltaTimes;                                              // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastInsertIndex;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        UpperBound;                                              // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
	{
	public:
		float                                                      Value;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsAgo;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BufferSize;                                              // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeRange;                                               // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2FG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              Buffer;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DeltaTimes;                                              // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        LastInsertIndex;                                         // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        UpperBound;                                              // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryTransformOp
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryTransformOp : public FRigUnit
	{
	public:
		unsigned char                                              UnknownData_4JBA[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Argument0;                                               // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Argument1;                                               // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Result;                                                  // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_GetRelativeTransform
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_MultiplyTransform
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
	{
	};

	/**
	 * ScriptStruct ControlRig.ConstraintTarget
	 * Size -> 0x0040
	 */
	struct FConstraintTarget
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainOffset;                                         // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransformFilter                                    Filter;                                                  // 0x0035(0x0009) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FBT[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
	 * Size -> 0x0060
	 */
	struct FRigUnit_TransformConstraint_WorkData
	{
	public:
		TArray<struct FConstraintData>                             ConstraintData;                                          // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int, int>                                             ConstraintDataToTargets;                                 // 0x0010(0x0050) NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TransformConstraint
	 * Size -> 0x00C0 (FullSize[0x00E0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                Bone;                                                    // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ETransformSpaceMode                             BaseTransformSpace;                                      // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A62O[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BaseTransform;                                           // 0x0030(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BaseBone;                                                // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConstraintTarget>                           Targets;                                                 // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRigUnit_TransformConstraint_WorkData               WorkData;                                                // 0x0078(0x0060) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WGTU[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
	 * Size -> 0x01B0 (FullSize[0x01D0] - InheritedSize[0x0020])
	 */
	struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
	{
	public:
		class FName                                                StartJoint;                                              // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EndJoint;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleTarget;                                              // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spin;                                                    // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          EndEffector;                                             // 0x0040(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      IKBlend;                                                 // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LAY9[0xC];                                   // 0x0074(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartJointFKTransform;                                   // 0x0080(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          MidJointFKTransform;                                     // 0x00B0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          EndJointFKTransform;                                     // 0x00E0(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      PreviousFKIKBlend;                                       // 0x0110(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X94X[0xC];                                   // 0x0114(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartJointIKTransform;                                   // 0x0120(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          MidJointIKTransform;                                     // 0x0150(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          EndJointIKTransform;                                     // 0x0180(0x0030) Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		int                                                        StartJointIndex;                                         // 0x01B0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        MidJointIndex;                                           // 0x01B4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int                                                        EndJointIndex;                                           // 0x01B8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      UpperLimbLength;                                         // 0x01BC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LowerLimbLength;                                         // 0x01C0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DMHG[0xC];                                   // 0x01C4(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
	{
	public:
		unsigned char                                              UnknownData_U0YW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Root;                                                    // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q333[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x0050(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0080(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x008C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x009C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TLU[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x00A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x00A4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          Elbow;                                                   // 0x00B0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
	{
	public:
		struct FVector                                             Root;                                                    // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Effector;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZ4C[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Elbow;                                                   // 0x0040(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNY6[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
	 * Size -> 0x0040
	 */
	struct FRigUnit_TwoBoneIKSimple_DebugSettings
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LY9A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSPM[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WorldOffset;                                             // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
	 * Size -> 0x00F0 (FullSize[0x0110] - InheritedSize[0x0020])
	 */
	struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
	{
	public:
		class FName                                                BoneA;                                                   // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneB;                                                   // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EffectorBone;                                            // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HE28[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Effector;                                                // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PrimaryAxis;                                             // 0x0070(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondaryAxis;                                           // 0x007C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondaryAxisWeight;                                     // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PoleVector;                                              // 0x008C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_EControlRigVectorKind                           PoleVectorKind;                                          // 0x0098(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDX2[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PoleVectorSpace;                                         // 0x009C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStretch;                                          // 0x00A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UO4S[0x3];                                   // 0x00A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StretchStartRatio;                                       // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StretchMaximumRatio;                                     // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneALength;                                             // 0x00B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoneBLength;                                             // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPropagateToChildren;                                    // 0x00BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_50XY[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigUnit_TwoBoneIKSimple_DebugSettings              DebugSettings;                                           // 0x00C0(0x0040) NoDestructor, NativeAccessSpecifierPublic
		int                                                        BoneAIndex;                                              // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        BoneBIndex;                                              // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        EffectorBoneIndex;                                       // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int                                                        PoleVectorSpaceIndex;                                    // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Distance_VectorVector
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FRigUnit_Distance_VectorVector : public FRigUnit
	{
	public:
		struct FVector                                             Argument0;                                               // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Argument1;                                               // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Result;                                                  // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GFS3[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_BinaryVectorOp
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRigUnit_BinaryVectorOp : public FRigUnit
	{
	public:
		struct FVector                                             Argument0;                                               // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Argument1;                                               // 0x0014(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Result;                                                  // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQPH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Divide_VectorVector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Add_VectorVector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
	{
	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
	{
	public:
		struct FVector                                             Target;                                                  // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Damp;                                                    // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Blend;                                                   // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Position;                                                // 0x0020(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x002C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Acceleration;                                            // 0x0038(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCRSimPoint                                         Point;                                                   // 0x0044(0x0028) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_129D[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugTransform
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_9NW5[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Value;                                                   // 0x0010(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8M87[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneSpace;                                               // 0x004C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_048G[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugQuat
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
	{
	public:
		unsigned char                                              UnknownData_PEEC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Value;                                                   // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6C14[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Thickness;                                               // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneSpace;                                               // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51TC[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)

	};

	/**
	 * ScriptStruct ControlRig.RigUnit_VisualDebugVector
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
	{
	public:
		struct FVector                                             Value;                                                   // 0x0008(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0014(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ControlRig_ERigUnitVisualDebugPointMode                    Mode;                                                    // 0x0015(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3CS[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Thickness;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneSpace;                                               // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	};

	/**
	 * ScriptStruct ControlRig.StructReference
	 * Size -> 0x0008
	 */
	struct FStructReference
	{
	public:
		unsigned char                                              UnknownData_3BW9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
