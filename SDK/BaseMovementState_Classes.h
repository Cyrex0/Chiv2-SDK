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
	 * BlueprintGeneratedClass BaseMovementState.BaseMovementState_C
	 * Size -> 0x00C8 (FullSize[0x0228] - InheritedSize[0x0160])
	 */
	class UBaseMovementState_C : public UHorseMovementState
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0160(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FInputMovementStateRange>                    ForwardInputMovementRanges;                              // 0x0168(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FInputMovementStateRange>                    BackwardInputMovementRanges;                             // 0x0178(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FInputMovementStateRange                            ForwardBoostInputMovementRange;                          // 0x0188(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FInputMovementStateRange                            ForwardControlInputMovementRange;                        // 0x0198(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FInputMovementStateRange                            BackwardControlInputMovementRange;                       // 0x01A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FInputMovementStateRange                            BackwardBoostInputMovementRange;                         // 0x01B8(0x0010) Edit, BlueprintVisible, NoDestructor
		TArray<struct FInputMovementStateRange>                    ForwardStrafingInputMovementRanges;                      // 0x01C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FInputMovementStateRange>                    BackwardStrafingInputMovementRanges;                     // 0x01D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FInputMovementStateRange                            ForwardStrafingControlInputMovementRange;                // 0x01E8(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FInputMovementStateRange                            ForwardStrafingBoostInputMovementRange;                  // 0x01F8(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FInputMovementStateRange                            BackwardStrafingControlInputMovementRange;               // 0x0208(0x0010) Edit, BlueprintVisible, NoDestructor
		struct FInputMovementStateRange                            BackwardStrafingBoostInputMovementRange;                 // 0x0218(0x0010) Edit, BlueprintVisible, NoDestructor

	public:
		float GetTurnInputScale(TBL_EHorseTurnInput TurnInput);
		void GetMovementStateFromInput(float Input, TArray<struct FInputMovementStateRange>* InputMovementRanges, const struct FInputMovementStateRange& BoostInputMovementRange, const struct FInputMovementStateRange& ControlInputMovementRange, class FName* MovementState, float* SpeedPercentage);
		void SetTurn(float Scale, HorseInterpCategory_EHorseInterpCategory _, float Boost_Scale, HorseInterpCategory_EHorseInterpCategory __, float Control_Scale, HorseInterpCategory_EHorseInterpCategory ___);
		void SetAcceleration(float Scale, HorseInterpCategory_EHorseInterpCategory _, float Boost_Scale, HorseInterpCategory_EHorseInterpCategory __, float Control_Scale, HorseInterpCategory_EHorseInterpCategory ___);
		void SetTargetSpeedState__percentage_(const class FName& State, float Percent);
		void SetTargetSpeedState(const class FName& State);
		void SetMovement(float AccelScale, float AccelInterp, float AccelBoostModifier, float TurnScale, float TurnInterp, float TurnBoostModifier);
		void OnAssemble_BaseMovementState();
		void UpdateMovement();
		void ExecuteUbergraph_BaseMovementState(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
