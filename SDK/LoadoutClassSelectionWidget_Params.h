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
	 * Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateClassSelectionWidget
	 */
	struct ULoadoutClassSelectionWidget_C_UpdateClassSelectionWidget_Params
	{
	public:
		class UClass*                                              ParentClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              CurrentSubclass;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnInitialized
	 */
	struct ULoadoutClassSelectionWidget_C_OnInitialized_Params
	{
	};

	/**
	 * Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.OnSubclassClicked
	 */
	struct ULoadoutClassSelectionWidget_C_OnSubclassClicked_Params
	{
	public:
		class UClass*                                              SubclassClicked;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutSubclassButton_C*                            LoadoutSubclassButton;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ClassSelected
	 */
	struct ULoadoutClassSelectionWidget_C_ClassSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSelectedSubclass
	 */
	struct ULoadoutClassSelectionWidget_C_UpdateSelectedSubclass_Params
	{
	public:
		class UClass*                                              Subclass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutSubclassButton_C*                            LoadoutClassButton;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.UpdateSubclassLockedState
	 */
	struct ULoadoutClassSelectionWidget_C_UpdateSubclassLockedState_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0050(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.ExecuteUbergraph_LoadoutClassSelectionWidget
	 */
	struct ULoadoutClassSelectionWidget_C_ExecuteUbergraph_LoadoutClassSelectionWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LoadoutClassSelectionWidget.LoadoutClassSelectionWidget_C.SubclassSelected__DelegateSignature
	 */
	struct ULoadoutClassSelectionWidget_C_SubclassSelected__DelegateSignature_Params
	{
	public:
		class UClass*                                              Subclass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutClassSelectionWidget_C*                      LoadoutClassSelectionWidget;                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ULoadoutSubclassButton_C*                            LoadoutClassButton;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsLocked;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
