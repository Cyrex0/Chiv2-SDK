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
	 * BlueprintGeneratedClass A_UseInteractable.A_UseInteractable_C
	 * Size -> 0x0038 (FullSize[0x00B8] - InheritedSize[0x0080])
	 */
	class UA_UseInteractable_C : public UA_MoveTo_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0080(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              Interactable;                                            // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Held;                                                    // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YEVV[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractableComponent*                              Interactable_Component;                                  // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UInteractableComponent*>                      InteractableComponents;                                  // 0x00A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UAITask_MoveTo*                                      AdjustmentAsyncTask;                                     // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Get_Location_or_Actor_I_Want_To_Move_To(const struct FUtilityAI_Context& C, class AActor** TargetActor, struct FVector* TargetLocation, class AAIController** Controller);
		void IsInRangeOfTarget(float AcceptanceMultiplier, bool* bInRange);
		void OnMoveFinished_C60871134FF654389219A2AFBCB9B884(AIModule_EPathFollowingResult Result, class AAIController* AIController);
		void OnRequestFailed_C60871134FF654389219A2AFBCB9B884();
		void On_Move_is_finished();
		void PerformAction(const struct FUtilityAI_Context& C);
		void CompleteAction(const struct FUtilityAI_Context& C);
		void OnInteractableStoppedBeingHeld_Event_1(class UInteractableComponent* InteractableUsed);
		void ExecuteUbergraph_A_UseInteractable(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
