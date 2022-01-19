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
	 * WidgetBlueprintGeneratedClass TitleScreenManager.TitleScreenManager_C
	 * Size -> 0x0018 (FullSize[0x0458] - InheritedSize[0x0440])
	 */
	class UTitleScreenManager_C : public UTBLScreenManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0440(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            ScreenLayer;                                             // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTBLSafeZone*                                        TBLSafeZone_1;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetFadeDuration(float* Duration);
		void Push_Cinematic_Widget(class UClass* Widget_class, class UWidget** Widget);
		void Remove_Cinematic_Widget(class UWidget* Widget);
		void Request_cinematic_bars(class UObject* Requester, CinematicBarsMode_ECinematicBarsMode Mode);
		void Release_cinematic_bars(class UObject* Requester);
		void Request_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode);
		void Release_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode);
		void Request_fade_out(class UObject* Requester);
		void Release_fade_out__fade_in_(class UObject* Requester);
		void Add_Cinematic_Mode_Change_Listener();
		void Snap_Fade_In();
		void RequestRandomHint(float Chance, TBL_EHintType HintKey, TBL_EHintInputType HintInputType);
		void RequestSpecificHint(const class FName& HintKey);
		void Construct();
		void Destruct();
		void OnInitialized();
		void InputChanged(TBL_EGamepadInputMode GamepadInputMode);
		void ExecuteUbergraph_TitleScreenManager(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
