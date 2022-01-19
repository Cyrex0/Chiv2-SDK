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
	 * BlueprintGeneratedClass BaseSpawner.BaseSpawner_C
	 * Size -> 0x0070 (FullSize[0x0608] - InheritedSize[0x0598])
	 */
	class ABaseSpawner_C : public ASpawner
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0598(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                SpawnerName__Ingame_;                                    // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Fade_time;                                               // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Time_before_starting_fade;                               // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FStageActorAction                                   PlayerKilled_StageAction;                                // 0x05B8(0x0030) Edit, BlueprintVisible
		Spawnercolor_ESpawnercolor                                 Spawnercolor;                                            // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G0JZ[0x7];                                   // 0x05E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSpawnedPlayerKilled;                                   // 0x05F0(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bUsePlayerKilledStageAction;                             // 0x0600(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y2MD[0x3];                                   // 0x0601(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConstructableDestructionDistance;                        // 0x0604(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void KillConstructablesInRadius(const struct FVector& ForwardVector, const struct FVector& Location);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void Cinematics_ControllerPossessedPawn(class ATBLPlayerController* Controller, class ATBLCharacter* Pawn);
		void Add_HUD_Marker_to_Wave(class ASpawnWave* Wave);
		void Interp_Z(float Value);
		void Interp_rot(float Value);
		void OnPossessedCharacter(class ATBLCharacter* Character, class AController* Controller);
		void OnKilled_Event_1(const struct FDeathDamageTakenEvent& Event);
		void StopPlayerKilledStageAction();
		void OnSpawnedCharacter(class ATBLCharacter* NewCharacter, class USceneComponent* SpawnComp);
		void ExecuteUbergraph_BaseSpawner(int EntryPoint);
		void OnSpawnedPlayerKilled__DelegateSignature(class AActor* Killed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
