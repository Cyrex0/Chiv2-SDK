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
	 * BlueprintGeneratedClass TicketsComponent.TicketsComponent_C
	 * Size -> 0x00A0 (FullSize[0x01A8] - InheritedSize[0x0108])
	 */
	class UTicketsComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnTicketsExhausted;                                      // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<int>                                                Tickets_Per_Team;                                        // 0x0120(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, AdvancedDisplay, HasGetValueTypeHash
		int                                                        Initial_Tickets;                                         // 0x0130(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        TempNewScore;                                            // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		class FScriptMulticastDelegate                             On_Tickets_Changed;                                      // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bAutoShutOffSequencesWhenTicketsRunOut;                  // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E87J[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Client_Tickets_Changed;                                  // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Tickets_Changed_Because_of_Kill;                      // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              Debug_Widget[0x28];                                      // 0x0170(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<TBL_EFaction>                                       TicketsSetPerTeam;                                       // 0x0198(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, AdvancedDisplay, HasGetValueTypeHash

	public:
		void Create_debug_menu_widget(class UUserWidget** Debug_menu_widget);
		void SetTicketCount_Internal(TBL_EFaction Faction, int TicketCount);
		void HandlePlayerKilled(class AController* Killed, class AController* Killer);
		void OnRep_Tickets_Per_Team();
		void Get_Tickets(TBL_EFaction Faction, int* Tickets, bool* Faction_Is_Being_Tracked);
		void Start(TBL_EFaction Faction);
		void Stop();
		void OnPlayerKilled_Event_1(class AController* Killer, class AController* Killed, class UDamageSource* DamageSource, const struct FDeathEvent& DeathEvent, const struct FDeathDamageTakenEvent& DamageEvent);
		void _Remove_Tickets(TBL_EFaction Faction, int Tickets_Delta);
		void Handle_Tickets_Exhausted(TBL_EFaction Faction);
		void ExecuteUbergraph_TicketsComponent(int EntryPoint);
		void On_Tickets_Changed_Because_of_Kill__DelegateSignature(TBL_EFaction Faction, int Delta, int New_Tickets);
		void Client_Tickets_Changed__DelegateSignature();
		void On_Tickets_Changed__DelegateSignature(TBL_EFaction Faction, int Delta, int New_Tickets);
		void OnTicketsExhausted__DelegateSignature(TBL_EFaction Faction);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
