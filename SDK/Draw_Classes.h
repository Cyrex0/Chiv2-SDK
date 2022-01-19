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
	 * BlueprintGeneratedClass Draw.Draw_C
	 * Size -> 0x0014 (FullSize[0x017C] - InheritedSize[0x0168])
	 */
	class UDraw_C : public UBaseCombatState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0168(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsWeak;                                                  // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TDFO[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeakStaminaPercent;                                      // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxThrowDrawTime;                                        // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float GetMaxDrawStrengthTime();
		void ToggleFocusHint(bool _);
		void CrosshairFire();
		void NeedsCharge(bool* bClickToFire);
		void Fire();
		void ClickToFire(bool* bClickToFire);
		void IsOutOfStamina(bool* OutOfStamina);
		void CrosshairAborted();
		void UpdateCrosshair();
		bool CanBeCancelled(bool bIsCancelIntoParry);
		float GetDrawStrengthModifier();
		void CrosshairInitiated();
		void OnAssemble_Draw();
		void EventEndAnimation();
		void EventTick(float DeltaSeconds);
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void EventEndState(const class FName& NextState, bool bStartAttack);
		void OnFocusPressed();
		void OnFocusReleased();
		void EventBeginFire(const class FName& AttackName, bool bHeldQueue);
		void TriggerWeakDraw();
		void OnAttackQueued(const class FName& AttackName);
		void MaxThrowHoldTime();
		void ExecuteUbergraph_Draw(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
