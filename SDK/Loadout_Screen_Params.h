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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Loadout_Screen.Loadout_Screen_C.K2_GetFocusWidget
	 */
	struct ULoadout_Screen_C_K2_GetFocusWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.UpdateContentVisibility
	 */
	struct ULoadout_Screen_C_UpdateContentVisibility_Params
	{
	public:
		UMG_ESlateVisibility                                       InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.GetLoadoutSubclassButton
	 */
	struct ULoadout_Screen_C_GetLoadoutSubclassButton_Params
	{
	public:
		class UClass*                                              Subclass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutSubclassButton_C*                            SubclassButton;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.SelectNextSubclass
	 */
	struct ULoadout_Screen_C_SelectNextSubclass_Params
	{
	public:
		bool                                                       bIsNext;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.OnPreviewKeyDown
	 */
	struct ULoadout_Screen_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.ConstructLoadoutClassButtons
	 */
	struct ULoadout_Screen_C_ConstructLoadoutClassButtons_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.GetSpawnableClasses
	 */
	struct ULoadout_Screen_C_GetSpawnableClasses_Params
	{
	public:
		TArray<class UClass*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.GetCurrentWeapon
	 */
	struct ULoadout_Screen_C_GetCurrentWeapon_Params
	{
	public:
		class UClass*                                              CurrentLoadoutItemClass;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      WeaponGroup;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class ATBLPlayerController*                                Controller;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Loadout;                                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              CurrentWeaponClass;                                      // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.OnKeyDown
	 */
	struct ULoadout_Screen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.FindCurrentSubclass
	 */
	struct ULoadout_Screen_C_FindCurrentSubclass_Params
	{
	public:
		class UClass*                                              Subclass;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SaveLoadout;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.GetWeaponSelection
	 */
	struct ULoadout_Screen_C_GetWeaponSelection_Params
	{
	public:
		class UClass*                                              CharacterClass;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        WeaponSlot;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      WeaponList;                                              // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.GetDefaultWeapon
	 */
	struct ULoadout_Screen_C_GetDefaultWeapon_Params
	{
	public:
		TArray<class UClass*>                                      WeaponGroupArray;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UClass*                                              Weapon;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.GetCurrentLoadoutForClass
	 */
	struct ULoadout_Screen_C_GetCurrentLoadoutForClass_Params
	{
	public:
		class UClass*                                              CurrentClass;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLoadout                                            Loadout;                                                 // 0x0008(0x0038)  (Parm, OutParm, NoDestructor)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.SaveLoadout
	 */
	struct ULoadout_Screen_C_SaveLoadout_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.PlayNewLoadoutAnimation
	 */
	struct ULoadout_Screen_C_PlayNewLoadoutAnimation_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.NextSpawnWaveReplicated_Event_1
	 */
	struct ULoadout_Screen_C_NextSpawnWaveReplicated_Event_1_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.OnOpenedScreen
	 */
	struct ULoadout_Screen_C_OnOpenedScreen_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULoadout_Screen_C_BndEvt__SelectedButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.SetAllowedClasses
	 */
	struct ULoadout_Screen_C_SetAllowedClasses_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.OnInitialized
	 */
	struct ULoadout_Screen_C_OnInitialized_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.NewBaseClassSelected
	 */
	struct ULoadout_Screen_C_NewBaseClassSelected_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.InitSpawnableClasses
	 */
	struct ULoadout_Screen_C_InitSpawnableClasses_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.InitLoadout
	 */
	struct ULoadout_Screen_C_InitLoadout_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.InitClassSelectBar
	 */
	struct ULoadout_Screen_C_InitClassSelectBar_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.InitUI
	 */
	struct ULoadout_Screen_C_InitUI_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.InitLoadoutScreen
	 */
	struct ULoadout_Screen_C_InitLoadoutScreen_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.CloseAndConfirmLoadout
	 */
	struct ULoadout_Screen_C_CloseAndConfirmLoadout_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.Spectate
	 */
	struct ULoadout_Screen_C_Spectate_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.OpenTeamSelect
	 */
	struct ULoadout_Screen_C_OpenTeamSelect_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.PostYouWillRespawnAsNotification
	 */
	struct ULoadout_Screen_C_PostYouWillRespawnAsNotification_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.OnInputChanged
	 */
	struct ULoadout_Screen_C_OnInputChanged_Params
	{
	public:
		TBL_EGamepadInputMode                                      GamepadInputMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.NewSubclassSelected
	 */
	struct ULoadout_Screen_C_NewSubclassSelected_Params
	{
	public:
		class UClass*                                              Subclass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.OnStateChanged
	 */
	struct ULoadout_Screen_C_OnStateChanged_Params
	{
	public:
		OverviewScreenState_EOverviewScreenState                   NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		OverviewScreenState_EOverviewScreenState                   PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.Reset
	 */
	struct ULoadout_Screen_C_Reset_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.BindWidgets
	 */
	struct ULoadout_Screen_C_BindWidgets_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.SubclassSelected
	 */
	struct ULoadout_Screen_C_SubclassSelected_Params
	{
	public:
		class UClass*                                              Subclass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutClassSelectionWidget_C*                      LoadoutClassSelectionWidget;                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutSubclassButton_C*                            LoadoutClassButton;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsLocked;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.ItemClicked
	 */
	struct ULoadout_Screen_C_ItemClicked_Params
	{
	public:
		TBL_EInventoryItemSlot                                     Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutButton_C*                                    LoadoutButton;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.OnItemClicked
	 */
	struct ULoadout_Screen_C_OnItemClicked_Params
	{
	public:
		TBL_EInventoryItemSlot                                     Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              InventoryItem;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.PostShuffleModeMessage
	 */
	struct ULoadout_Screen_C_PostShuffleModeMessage_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.RandomClass
	 */
	struct ULoadout_Screen_C_RandomClass_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.ToggleShuffle
	 */
	struct ULoadout_Screen_C_ToggleShuffle_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.BackToInGameMenu
	 */
	struct ULoadout_Screen_C_BackToInGameMenu_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct ULoadout_Screen_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct ULoadout_Screen_C_BndEvt__RandomButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.PreConstruct
	 */
	struct ULoadout_Screen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
	 */
	struct ULoadout_Screen_C_BndEvt__ResumeButton_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct ULoadout_Screen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.LockedSubclassSelected
	 */
	struct ULoadout_Screen_C_LockedSubclassSelected_Params
	{
	public:
		class UClass*                                              Subclass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLevelLocked;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct ULoadout_Screen_C_BndEvt__CancelShuffleLockButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct ULoadout_Screen_C_BndEvt__ShuffleButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.UpdateShuffleButtons
	 */
	struct ULoadout_Screen_C_UpdateShuffleButtons_Params
	{
	public:
		bool                                                       bShuffle;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.ExecuteUbergraph_Loadout_Screen
	 */
	struct ULoadout_Screen_C_ExecuteUbergraph_Loadout_Screen_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.Loadout confirmed__DelegateSignature
	 */
	struct ULoadout_Screen_C_Loadout_confirmed__DelegateSignature_Params
	{
	};

	/**
	 * Function Loadout_Screen.Loadout_Screen_C.Class Selected__DelegateSignature
	 */
	struct ULoadout_Screen_C_Class_Selected__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
