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
	 * BlueprintGeneratedClass CrossbowReload.CrossbowReload_C
	 * Size -> 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
	 */
	class UCrossbowReload_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsSoftRecovery;                                          // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1MCY[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCameraModifier_FollowAnimation*                     CameraModifier;                                          // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DisableCameraModifier(const class FName& NextState);
		void EnableCameraModifier();
		void OnAssemble_CrossbowReload();
		void EventEndAnimation();
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void SoftRecovery();
		void EventEndState(const class FName& NextState, bool bStartAttack);
		void ExecuteUbergraph_CrossbowReload(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
