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
	 * WidgetBlueprintGeneratedClass FadeWidget.FadeWidget_C
	 * Size -> 0x00C0 (FullSize[0x0308] - InheritedSize[0x0248])
	 */
	class UFadeWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Fade_Out;                                                // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Fade_In;                                                 // 0x0258(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_1;                                                // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              Requesters[0x50];                                        // 0x0268(0x0050) UNKNOWN PROPERTY: SetProperty
		CinematicBarsMode_ECinematicBarsMode                       Current_mode;                                            // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7DX1[0x7];                                   // 0x02B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             On_Is_Faded__Changed;                                    // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Is_faded_out_;                                           // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K5TK[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Fade_out_started;                                        // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Fade_out_finished;                                       // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              Listeners[0x10];                                         // 0x02F8(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		void Handle_requests_changed();
		void Construct();
		void FadeIn(float Playback_Speed);
		void FadeOut(float Playback_Speed);
		void Add_requester(class UObject* Requester);
		void Remove_requester(class UObject* Requester);
		void Update_requests_soon();
		void Snap_Fade_In();
		void WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1();
		void WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_2();
		void ExecuteUbergraph_FadeWidget(int EntryPoint);
		void Fade_out_finished__DelegateSignature();
		void Fade_out_started__DelegateSignature();
		void On_Is_Faded__Changed__DelegateSignature(bool Is_Faded_);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
