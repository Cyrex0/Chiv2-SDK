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
	 * WidgetBlueprintGeneratedClass SpectatorPlayerStatusEntry.SpectatorPlayerStatusEntry_C
	 * Size -> 0x01C8 (FullSize[0x0410] - InheritedSize[0x0248])
	 */
	class USpectatorPlayerStatusEntry_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ClassIcon;                                               // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NameLabel;                                               // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar_3;                                           // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              steamIDimage;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              wholeBG;                                                 // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ATBLPlayerState*                                     PlayerState;                                             // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Name_Text;                                               // 0x0280(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        Team_Brush_Color;                                        // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateBrush                                         Class_Brush;                                             // 0x02A8(0x0088) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              Last_Class;                                              // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATBLTeam*                                            Last_Team;                                               // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSlateColor                                         Player_Name_Brush_Color;                                 // 0x0340(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PlayerStatusText;                                        // 0x0368(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       LastDead;                                                // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsValidPlaterState;                                      // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GH2J[0x6];                                   // 0x0382(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Avatar_Brush;                                            // 0x0388(0x0088) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateHealth();
		void SetupValidPlayerEntry();
		void SetupBlankPlayerEntry();
		void SetPlayerStatusText();
		void IsLocalPlayer(bool* IsLocalPlayer);
		void Update_Player_State(class ATBLPlayerState* In_State);
		void HasValidPlayerState(bool* Valid);
		void Update_Class_Image();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void flip();
		void ExecuteUbergraph_SpectatorPlayerStatusEntry(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
