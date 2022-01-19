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
	 * AnimBlueprintGeneratedClass BPA_Weapon.BPA_Weapon_C
	 * Size -> 0x0869 (FullSize[0x0DB9] - InheritedSize[0x0550])
	 */
	class UBPA_Weapon_C : public UTBLWeaponAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0550(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0558(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x0588(0x0078)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0600(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x0648(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x06E8(0x0078)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0760(0x00C0)
		struct FAnimNode_RefPose                                   AnimGraphNode_LocalRefPose;                              // 0x0820(0x0018)
		unsigned char                                              UnknownData_0YEX[0x8];                                   // 0x0838(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt_2;                                  // 0x0840(0x01B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x09F0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0A10(0x0020)
		struct FAnimNode_LookAt                                    AnimGraphNode_LookAt;                                    // 0x0A30(0x01B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x0BE0(0x00B8)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x0C98(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x0CC0(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x0D60(0x0028)
		class FName                                                CharacterCombatState;                                    // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsServer;                                                // 0x0D90(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       is3P_OLD;                                                // 0x0D91(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DFVY[0x6];                                   // 0x0D92(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATBLCharacter*                                       OwnerCharacter;                                          // 0x0D98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Weapon_Montage;                                          // 0x0DA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                PreviousCharacterCombatState;                            // 0x0DA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimationSet_Base_C*                                AnimationSet;                                            // 0x0DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isCrossbow;                                              // 0x0DB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void OnNotifyEnd_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName);
		void OnNotifyBegin_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName);
		void OnInterrupted_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName);
		void OnBlendOut_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName);
		void OnCompleted_5F65EF304857BAD353FC03AA3A48AE87(const class FName& NotifyName);
		void OnNotifyEnd_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName);
		void OnNotifyBegin_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName);
		void OnInterrupted_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName);
		void OnBlendOut_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName);
		void OnCompleted_0D37C2FD43EE4809B08F48A3EF3BE365(const class FName& NotifyName);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_322C0E4248B876757229F28A45D42E2E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_Weapon_AnimGraphNode_SequencePlayer_E330FA0C4EC5291710335DB6D41528ED();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void EventOnCombatStateChanged(const class FName& PreviousState, const class FName& NewState);
		void ExecuteUbergraph_BPA_Weapon(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
