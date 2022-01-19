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
	 * AnimBlueprintGeneratedClass BPA_BaseChar_Customization.BPA_BaseChar_Customization_C
	 * Size -> 0x1648 (FullSize[0x2B98] - InheritedSize[0x1550])
	 */
	class UBPA_BaseChar_Customization_C : public UTBLCharacterAnimInstance_Customization
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1550(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_TEDL[0x8];                                   // 0x1558(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x1560(0x0590)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x1AF0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x1B10(0x0020)
		struct FAnimNode_LegIK                                     AnimGraphNode_LegIK;                                     // 0x1B30(0x00F8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x1C28(0x0078)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x1CA0(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x1D68(0x0078)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x1DE0(0x00B8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1E98(0x0048)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose_2;                            // 0x1EE0(0x0018)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x1EF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x1F20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x1F48(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x1F70(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x1F98(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x1FC0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x1FE8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x2010(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x2038(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x2060(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x2088(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x20B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x20D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x2100(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x2128(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x2150(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x21C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x21F8(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x2270(0x0078)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x22E8(0x0078)
		struct FAnimNode_BlendListByInt                            AnimGraphNode_BlendListByInt;                            // 0x2360(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x2400(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x2478(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x24A8(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x2520(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x2550(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x25C8(0x0030)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x25F8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x2628(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x26A0(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x26D0(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x26F8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2728(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x27A0(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x27D0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x27F8(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2820(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2850(0x00B0)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x2900(0x0030)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x2930(0x0048)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x2978(0x0018)
		struct FAnimNode_BlendBoneByChannel                        AnimGraphNode_BlendBoneByChannel_2;                      // 0x2990(0x0068)
		struct FAnimNode_RotationMultiplier                        AnimGraphNode_RotationMultiplier;                        // 0x29F8(0x00F0)
		struct FAnimNode_BlendBoneByChannel                        AnimGraphNode_BlendBoneByChannel;                        // 0x2AE8(0x0068)
		bool                                                       isDefaultPose;                                           // 0x2B50(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isHelmetPose;                                            // 0x2B51(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isTorsoPose;                                             // 0x2B52(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isLegPose;                                               // 0x2B53(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int                                                        poseVeriaty;                                             // 0x2B54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFocusPose;                                             // 0x2B58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isTurnPose;                                              // 0x2B59(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isBattleCryPose;                                         // 0x2B5A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isAnotherTurnPose;                                       // 0x2B5B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3KIB[0x4];                                   // 0x2B5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationSet_BaseCustom_C*                          AnimationSet3P;                                          // 0x2B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isAnotherTurnPose_1;                                     // 0x2B68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isTurnBack;                                              // 0x2B69(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HVQL[0x2];                                   // 0x2B6A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TurnSection;                                             // 0x2B6C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isWeaponPose;                                            // 0x2B74(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TEU6[0x3];                                   // 0x2B75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        FrontendPositionId;                                      // 0x2B78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isLockHead;                                              // 0x2B7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_96GD[0x3];                                   // 0x2B7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      relaxIn_position;                                        // 0x2B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      relaxOut_position;                                       // 0x2B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      relaxOutLength;                                          // 0x2B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      relaxInLength;                                           // 0x2B8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATBLCharacter*                                       currentTBLCharacter;                                     // 0x2B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_BlendBoneByChannel_0D63C3EC474C1C3CE55E93A113E4CF90();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_RotationMultiplier_19952B4149691119AA4CA48D8F5528D9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_SequencePlayer_DF64BDD348F216FA2D214499D85E3173();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_TransitionResult_8B1F72CA4B3FB5DA91E364A1B46C4916();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseChar_Customization_AnimGraphNode_RigidBody_983A56E346564F6D9C754D9985E22E86();
		void PoseUpdate(const class FName& Pose);
		void ItemChange();
		void BlueprintInitializeAnimation();
		void ActivateBattlecry();
		void ActivateTurn();
		void ActivateFocus();
		void ItemUnequipped();
		void AnimNotify_FullBody_On();
		void AnimNotify_FullBody_Off();
		void Deactivate_Focus();
		void BlueprintBeginPlay();
		void OnCustomized();
		void AnimNotify_anim_blink_eye();
		void BlueprintOnAnimationSetChanged();
		void ExecuteUbergraph_BPA_BaseChar_Customization(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
