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
	 * WidgetBlueprintGeneratedClass PinnedInteractableWidget.PinnedInteractableWidget_C
	 * Size -> 0x0100 (FullSize[0x0368] - InheritedSize[0x0268])
	 */
	class UPinnedInteractableWidget_C : public UHUDContainerSubWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0268(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeInActionOverlay;                                     // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOutUsableAnim;                                       // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOutAnim;                                             // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    OnUsed;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    StopUse;                                                 // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    InitiateUse;                                             // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UTBLTextBlock*                                       ActionDescriptionTextBlock;                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ActionNameOverlay;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLTextBlock*                                       ActionNameTextBlock;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UActorHealthBar_C*                                   ActorHealthBar_C_1;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            ActorHealthBarOverlay;                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaterialProgressBar_Circular_C*                     MaterialProgressBar;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            UsableActorOverlay;                                      // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            UseActionOverlay;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                DescriptionText;                                         // 0x02E8(0x0018) Edit, BlueprintVisible
		class FText                                                KeybindText;                                             // 0x0300(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UInteractableComponent*>                      InteractableComponents;                                  // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		class UInteractableComponent*                              Enabled_InteractableComponent;                           // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                ActorText;                                               // 0x0330(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ProgressPErcentage;                                      // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KVY2[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        FadeOutTimer;                                            // 0x0350(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        FadeOutUsableTimer;                                      // 0x0358(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        CanFadeOutTimer;                                         // 0x0360(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		float GetFadeOutAnimTime();
		void HighlightActor(class AActor* Actor, bool Enable);
		bool CanFadeOut();
		void SetInteractionDescription(class UInteractableComponent* Target);
		void SetProgress();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnUse(class APawn* Pawn, class UInteractableComponent* Interactable);
		void Use_Released(class APawn* Pawn, float UseTime);
		void OnInteractableLostFocus_Event_1(class APawn* Pawn, class UInteractableComponent* Interactable);
		void OnUseHeldInitiated_Event_1(class APawn* Pawn, class UInteractableComponent* Interactable);
		void OnInteractableEnabled_Event_1(bool Enabled);
		void OnAnimationStarted(class UWidgetAnimation* Animation);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnInteractbleFocus(class UInteractableComponent* Interactable);
		void OnInteractableLostFocus();
		void On_Assigned(class AActor* Actor, class UInteractableComponent* Interactable);
		void InitializeHealthBar(class UInteractableComponent* Comp);
		void FadeIn();
		void FadeOut();
		void CustomEvent_1();
		void FadeOutUsableOverlay();
		void CustomEvent_2();
		void FadeInUsableOverlay();
		void CustomEvent_3();
		void WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_1();
		void WidgetAnimationEvt_FadeOutUsableAnim_K2Node_WidgetAnimationEvent_2();
		void OnInitialized();
		void OnPossessedPawn_Event_1(class APawn* NewPawn);
		void OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event);
		void OnUseableActorFocused(class UInteractableComponent* Target);
		void ExecuteUbergraph_PinnedInteractableWidget(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
