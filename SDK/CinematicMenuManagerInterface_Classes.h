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
	 * BlueprintGeneratedClass CinematicMenuManagerInterface.CinematicMenuManagerInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCinematicMenuManagerInterface_C : public UInterface
	{
	public:
		void RequestSpecificHint(const class FName& HintKey);
		void RequestRandomHint(float Chance, TBL_EHintType HintKey, TBL_EHintInputType HintInputType);
		void GetFadeDuration(float* Duration);
		void Snap_Fade_In();
		void Add_Cinematic_Mode_Change_Listener();
		void Release_fade_out__fade_in_(class UObject* Requester);
		void Request_fade_out(class UObject* Requester);
		void Release_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode);
		void Request_cinematic_HUD_mode(class UObject* Requester, CinematicMenuMode_ECinematicMenuMode Mode);
		void Release_cinematic_bars(class UObject* Requester);
		void Request_cinematic_bars(class UObject* Requester, CinematicBarsMode_ECinematicBarsMode Mode);
		void Remove_Cinematic_Widget(class UWidget* Widget);
		void Push_Cinematic_Widget(class UClass* Widget_class, class UWidget** Widget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
