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
	 * Class TBLLoadingScreen.LoadingScreenPanelWidget
	 * Size -> 0x0020 (FullSize[0x0268] - InheritedSize[0x0248])
	 */
	class ULoadingScreenPanelWidget : public UUserWidget
	{
	public:
		class FScriptMulticastDelegate                             ContinueButtonClickedMC;                                 // 0x0248(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ContinueButtonClickedEvent;                              // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic

	public:
		void StopFadeAnimations();
		void SetStageEntries(TArray<struct FMapSpecificStageEntries> TextEntries);
		void SetMapTexture(class UTexture2D* Texture);
		void SetMapNameText(const class FText& Text);
		void SetMapDescriptionText(const class FText& Text);
		void SetContinueButtonVisibility(bool Visible);
		void SetBackGroundImageColorAndOpacity(const struct FLinearColor& ColorOpacity);
		void FadeOutMapTexture();
		void FadeInMapTexture();
		void EnabledScreenInputBlocking(bool Enable);
		static UClass* StaticClass();
	};

	/**
	 * Class TBLLoadingScreen.MapSpecificLoadingScreenConfig
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UMapSpecificLoadingScreenConfig : public UObject
	{
	public:
		TArray<struct FMapSpecificLoadingScreenConfigData>         Configs;                                                 // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMapSpecificLoadingScreenConfigData                 DefaultLoadingScreen;                                    // 0x0038(0x0068) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNQN[0x80];                                  // 0x00A0(0x0080) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Frontend_TitleBar_FadeOutTime;                           // 0x0120(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TitleBar_FadeOutTime;                                    // 0x0124(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Frontend_Widget_FadeOutTime;                             // 0x0128(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Widget_FadeOutTime;                                      // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlueprintGeneratedClass*                            DefaultLoadingScreenPanelBlueprint;                      // 0x0130(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class UClass* GetDefaultLoadingScreenPanelWidgetClass();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
