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
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.GetClassLocked
	 */
	struct ULoadoutSubclassButton_C_GetClassLocked_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.InitSubclassButton
	 */
	struct ULoadoutSubclassButton_C_InitSubclassButton_Params
	{
	public:
		class UClass*                                              Subclass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.BndEvt__SubclassButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULoadoutSubclassButton_C_BndEvt__SubclassButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.SetSelected
	 */
	struct ULoadoutSubclassButton_C_SetSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSkipAnim;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.Clicked
	 */
	struct ULoadoutSubclassButton_C_Clicked_Params
	{
	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.BndEvt__SubclassButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULoadoutSubclassButton_C_BndEvt__SubclassButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.BndEvt__SubclassButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULoadoutSubclassButton_C_BndEvt__SubclassButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.SetLevelLocked
	 */
	struct ULoadoutSubclassButton_C_SetLevelLocked_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.UpdateNewItemsOverlay
	 */
	struct ULoadoutSubclassButton_C_UpdateNewItemsOverlay_Params
	{
	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.SetClassCapUI
	 */
	struct ULoadoutSubclassButton_C_SetClassCapUI_Params
	{
	public:
		bool                                                       IsLocked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.UpdateClassCount
	 */
	struct ULoadoutSubclassButton_C_UpdateClassCount_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.Construct
	 */
	struct ULoadoutSubclassButton_C_Construct_Params
	{
	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.ExecuteUbergraph_LoadoutSubclassButton
	 */
	struct ULoadoutSubclassButton_C_ExecuteUbergraph_LoadoutSubclassButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutSubclassButton.LoadoutSubclassButton_C.SubclassClicked__DelegateSignature
	 */
	struct ULoadoutSubclassButton_C_SubclassClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              SubclassClicked;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutSubclassButton_C*                            LoadoutSubclassButton;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
