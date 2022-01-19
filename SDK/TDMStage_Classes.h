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
	 * BlueprintGeneratedClass TDMStage.TDMStage_C
	 * Size -> 0x012D (FullSize[0x0385] - InheritedSize[0x0258])
	 */
	class ATDMStage_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UObjectiveStatusDisplayComponent*                    Objective_Bar_Display_Component;                         // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTimeObjectiveComponent_C*                           TimeObjectiveComponent;                                  // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTicketsComponent_C*                                 TicketsComponent;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0278(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Blue_Died_Stage[0x10];                                   // 0x0280(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              Red_Died_Stage[0x10];                                    // 0x0290(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              Draw_Stage[0x10];                                        // 0x02A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		class FScriptMulticastDelegate                             On_Started;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Ended;                                                // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Red_Died;                                             // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Draw;                                                 // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Blue_Died;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Draw;                                                    // 0x0300(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Red_Dead;                                                // 0x0301(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Blue_Dead;                                               // 0x0302(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AutoStopSequences;                                       // 0x0303(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6VR7[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             On_Tickets_Exhausted;                                    // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int                                                        Current_Rout;                                            // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Enable_Sudden_Death;                                     // 0x031C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LPW8[0x3];                                   // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             On_Tickets_Changed;                                      // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              AgathaCommander[0x28];                                   // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              MasonCommander[0x28];                                    // 0x0358(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int                                                        StageIdNum;                                              // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       BlockDynamicMusic;                                       // 0x0384(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Create_debug_menu_widget(class UUserWidget** Debug_menu_widget);
		float GetTimeRemaining();
		float GetTimeRemainingPercent();
		int GetStageIdNum();
		class AActor* GetStageCommander(TBL_EFaction Faction);
		void CompleteStage();
		bool IsStageReadyToComplete();
		float GetTicketsRemainingPercentage();
		float Get_Faction_Tickets_Remaining_Percent(TBL_EFaction Faction);
		void UpdateTDMStageSettings();
		void Get_Time_Left(struct FTimespan* Time_Left);
		void _Remove_Tickets(TBL_EFaction Faction, int Delta);
		void Initialize_TDM_Stage(const struct FTDM_Stage_Properties& Settings);
		void StartStage();
		void BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_0_OnTicketsExhausted__DelegateSignature(TBL_EFaction Faction);
		void BndEvt__TimeObjectiveComponent_K2Node_ComponentBoundEvent_0_On_Duration_Exceeded__DelegateSignature();
		void BndEvt__TicketsComponent_K2Node_ComponentBoundEvent_1_On_Tickets_Changed__DelegateSignature(TBL_EFaction Faction, int Delta, int New_Tickets);
		void Force_Draw();
		void Last_Rout_Fired();
		void CustomEvent_1();
		void ForceMusic();
		void ExecuteUbergraph_TDMStage(int EntryPoint);
		void On_Tickets_Changed__DelegateSignature(TBL_EFaction Faction, int Delta, int NewTickets);
		void On_Tickets_Exhausted__DelegateSignature(TBL_EFaction Faction);
		void On_Draw__DelegateSignature();
		void On_Red_Died__DelegateSignature();
		void On_Blue_Died__DelegateSignature();
		void On_Ended__DelegateSignature();
		void On_Started__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
