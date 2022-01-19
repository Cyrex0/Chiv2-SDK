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
	 * BlueprintGeneratedClass Falling.Falling_C
	 * Size -> 0x0008 (FullSize[0x0178] - InheritedSize[0x0170])
	 */
	class UFalling_C : public UBaseKnockdown_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0170(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnAssemble_Falling();
		void EventLanded(class ACharacter* InTarget);
		void EventBeginState(const class FName& PreviousState, float PreviousStateTime, float AnimationLength);
		void EventTick(float DeltaSeconds);
		void ExecuteUbergraph_Falling(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
