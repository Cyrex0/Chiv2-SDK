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
	 * BlueprintGeneratedClass BPF_LevelActors.BPF_LevelActors_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_LevelActors_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ApplyDrunkEffectToPlayer(class AActor* Target, class UObject* __WorldContext);
		void STATIC_CanActorAcceptDamage(class AActor* Actor, class UObject* __WorldContext, bool* _);
		void STATIC_LevelActorFlipDirection(class AActor* From, class AActor* To, class UObject* __WorldContext, eFlipDirection_EeFlipDirection* Direction, bool* Success);
		void STATIC_DestroyComponentAndChildren(class USceneComponent* Target, class UObject* __WorldContext);
		void STATIC_GetDirectionBetweenActors__4Dir_(class AActor* From, class AActor* To, class UObject* __WorldContext, eDirection_EeDirection* Direction, bool* Success);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
