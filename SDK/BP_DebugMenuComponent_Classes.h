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
	 * BlueprintGeneratedClass BP_DebugMenuComponent.BP_DebugMenuComponent_C
	 * Size -> 0x0008 (FullSize[0x0118] - InheritedSize[0x0110])
	 */
	class UBP_DebugMenuComponent_C : public UBlueprintDebugMenuComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0110(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void Force_end_by_time(class AActor* Stage);
		void Force_end_by_score(class AScoredStage_C* Stage);
		void Set_time_left__minutes_(class AActor* Stage, float Minutes);
		void Add_time__minutes_(class AActor* Stage, float Minutes);
		void Add_Score(class AScoredStage_C* Stage, int Score);
		void Set_score(class AScoredStage_C* Stage, int Score);
		void Set_Tickets(class AActor* Actor, TBL_EFaction Faction, int Num_tickets);
		void ExecuteUbergraph_BP_DebugMenuComponent(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
