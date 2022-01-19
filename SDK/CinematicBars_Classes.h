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
	 * WidgetBlueprintGeneratedClass CinematicBars.CinematicBars_C
	 * Size -> 0x0138 (FullSize[0x0380] - InheritedSize[0x0248])
	 */
	class UCinematicBars_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    CinematicFadeInSlow;                                     // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CinematicFadeOut;                                        // 0x0258(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    CinematicFadeIn;                                         // 0x0260(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BottomBarBackground;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TopBarBackground;                                        // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		unsigned char                                              Light_Requests[0x50];                                    // 0x0278(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              Medium_Requests[0x50];                                   // 0x02C8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              Heavy_Requests[0x50];                                    // 0x0318(0x0050) UNKNOWN PROPERTY: SetProperty
		CinematicBarsMode_ECinematicBarsMode                       Current_mode;                                            // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OFHK[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             On_Mode_Changed;                                         // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void Handle_requests_changed();
		void FadeIn();
		void FadeOut();
		void Add_bar_requester(CinematicBarsMode_ECinematicBarsMode Mode, class UObject* Requester);
		void Remove_bar_requester(class UObject* Requester);
		void Update_requests_soon();
		void Construct();
		void ExecuteUbergraph_CinematicBars(int EntryPoint);
		void On_Mode_Changed__DelegateSignature(CinematicBarsMode_ECinematicBarsMode Mode);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
