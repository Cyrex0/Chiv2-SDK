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
	 * Function LookAtContainer.LookAtContainer_C.Update
	 */
	struct ULookAtContainer_C_Update_Params
	{
	};

	/**
	 * Function LookAtContainer.LookAtContainer_C.AddSubwidget
	 */
	struct ULookAtContainer_C_AddSubwidget_Params
	{
	public:
		class UHUDContainerSubWidget*                              SubWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LookAtContainer.LookAtContainer_C.RemoveSubwidget
	 */
	struct ULookAtContainer_C_RemoveSubwidget_Params
	{
	public:
		class UHUDContainerSubWidget*                              SubWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function LookAtContainer.LookAtContainer_C.ExecuteUbergraph_LookAtContainer
	 */
	struct ULookAtContainer_C_ExecuteUbergraph_LookAtContainer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
