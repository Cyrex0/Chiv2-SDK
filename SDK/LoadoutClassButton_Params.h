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
	 * Function LoadoutClassButton.LoadoutClassButton_C.OnMouseButtonDoubleClick
	 */
	struct ULoadoutClassButton_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.Construct
	 */
	struct ULoadoutClassButton_C_Construct_Params
	{
	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.UpdatePawnClass
	 */
	struct ULoadoutClassButton_C_UpdatePawnClass_Params
	{
	public:
		class UClass*                                              PawnClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.OnPossessedPawn_Event_1
	 */
	struct ULoadoutClassButton_C_OnPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.OnClientPossessedPawn_Event_1
	 */
	struct ULoadoutClassButton_C_OnClientPossessedPawn_Event_1_Params
	{
	public:
		class APawn*                                               NewPawn;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.OnSelectedChanged
	 */
	struct ULoadoutClassButton_C_OnSelectedChanged_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.UpdateSelectable
	 */
	struct ULoadoutClassButton_C_UpdateSelectable_Params
	{
	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.PreConstruct
	 */
	struct ULoadoutClassButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULoadoutClassButton_C_BndEvt__SelectedButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.OnServerApprovedLoadout_Event_1
	 */
	struct ULoadoutClassButton_C_OnServerApprovedLoadout_Event_1_Params
	{
	public:
		bool                                                       ServerApprovedLoadout;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              RequestedSubclass;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLoadout                                            RequestedLoadout;                                        // 0x0010(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.OnInitialized
	 */
	struct ULoadoutClassButton_C_OnInitialized_Params
	{
	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULoadoutClassButton_C_BndEvt__SelectedButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.BndEvt__SelectedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULoadoutClassButton_C_BndEvt__SelectedButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{
	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.UnHoverButton
	 */
	struct ULoadoutClassButton_C_UnHoverButton_Params
	{
	public:
		bool                                                       Immediate;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.On Highlight Event
	 */
	struct ULoadoutClassButton_C_On_Highlight_Event_Params
	{
	public:
		bool                                                       Hovered;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.UpdateRank
	 */
	struct ULoadoutClassButton_C_UpdateRank_Params
	{
	public:
		struct FTBLOnlineStats                                     OnlineStats;                                             // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.OnlineStatsLevelUp_Event_1
	 */
	struct ULoadoutClassButton_C_OnlineStatsLevelUp_Event_1_Params
	{
	public:
		TArray<struct FLevelUpResult>                              LevelUpEvents;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.ClassSelected
	 */
	struct ULoadoutClassButton_C_ClassSelected_Params
	{
	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.OnAddedToFocusPath
	 */
	struct ULoadoutClassButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.OnRemovedFromFocusPath
	 */
	struct ULoadoutClassButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.ForceHover
	 */
	struct ULoadoutClassButton_C_ForceHover_Params
	{
	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.ExecuteUbergraph_LoadoutClassButton
	 */
	struct ULoadoutClassButton_C_ExecuteUbergraph_LoadoutClassButton_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.Class Previewed__DelegateSignature
	 */
	struct ULoadoutClassButton_C_Class_Previewed__DelegateSignature_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassButton.LoadoutClassButton_C.Class Selected__DelegateSignature
	 */
	struct ULoadoutClassButton_C_Class_Selected__DelegateSignature_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutClassButton_C*                               Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
