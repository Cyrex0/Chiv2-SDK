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
	 * BlueprintGeneratedClass TimeObjectiveComponent.TimeObjectiveComponent_C
	 * Size -> 0x0078 (FullSize[0x0180] - InheritedSize[0x0108])
	 */
	class UTimeObjectiveComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Duration_Seconds;                                        // 0x0110(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Bonus_Duration_Seconds;                                  // 0x0114(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Time_Sharing_Group_Name;                                 // 0x0118(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimespan                                           Time_To_Share;                                           // 0x0120(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Percent_Time_To_Share;                                   // 0x0128(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J0J5[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             On_Duration_Exceeded;                                    // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        Timer_Handle;                                            // 0x0140(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Max_Time_To_Share;                                       // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8BBP[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             MinutesRemaining;                                        // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FTimerHandle                                        MinutesLeftTimerHandle;                                  // 0x0160(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTimeObjectiveActive;                                   // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L7T7[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        LastMinuteTriggered;                                     // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Server_Start_Time_Seconds;                               // 0x0170(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TimeObjectiveInitialized;                                // 0x0174(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q0JJ[0x3];                                   // 0x0175(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        PrintStringTimerHandle;                                  // 0x0178(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetTimeRemaining(float* TimeSeconds);
		void Create_debug_menu_widget(class UUserWidget** Debug_menu_widget);
		class FString GetDebugStringInfo();
		void Get_Elapsed_Time_Minutes(float* Elapsed);
		void GetBonusTime(float* BonusTimeSeconds);
		void Get_Elapsed_Time_Seconds(float* Elapsed);
		void Get_Time_Left(float* Time_Left_Seconds);
		void Take_Shared_Time(const class FName& TimeSharingGroup, struct FTimespan* SharedTime);
		void Get_Total_Duration_Seconds(float* Duration);
		void Add_Bonus_Time(float Delta);
		void Is_Duration_Exceeded(bool* Exceeded);
		void ReceiveBeginPlay();
		void Start();
		void Stop();
		void PRIVATE_Handle_Duration_Exceeded();
		void PRIVATE_Handle_Bonus_Duration_Changed();
		void PRIVATE__Re_Start_Timer();
		void PRIVATE_Add_Shared_Bonus_Time();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_TimeObjectiveComponent(int EntryPoint);
		void MinutesRemaining__DelegateSignature(int MinutesRemaining);
		void On_Duration_Exceeded__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
