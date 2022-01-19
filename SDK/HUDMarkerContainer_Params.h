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
	 * Function HUDMarkerContainer.HUDMarkerContainer_C.AddSubwidget
	 */
	struct UHUDMarkerContainer_C_AddSubwidget_Params
	{
	public:
		class UHUDContainerSubWidget*                              SubWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDMarkerContainer.HUDMarkerContainer_C.RemoveSubwidget
	 */
	struct UHUDMarkerContainer_C_RemoveSubwidget_Params
	{
	public:
		class UHUDContainerSubWidget*                              SubWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetInitFromPool
	 */
	struct UHUDMarkerContainer_C_SubwidgetInitFromPool_Params
	{
	public:
		class UHUDContainerSubWidget*                              SubWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDMarkerContainer.HUDMarkerContainer_C.SubwidgetReturnToPool
	 */
	struct UHUDMarkerContainer_C_SubwidgetReturnToPool_Params
	{
	public:
		class UHUDContainerSubWidget*                              SubWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function HUDMarkerContainer.HUDMarkerContainer_C.ExecuteUbergraph_HUDMarkerContainer
	 */
	struct UHUDMarkerContainer_C_ExecuteUbergraph_HUDMarkerContainer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
