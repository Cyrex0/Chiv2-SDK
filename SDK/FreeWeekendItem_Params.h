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
	 * Function FreeWeekendItem.FreeWeekendItem_C.PreConstruct
	 */
	struct UFreeWeekendItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function FreeWeekendItem.FreeWeekendItem_C.Setup
	 */
	struct UFreeWeekendItem_C_Setup_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UTexture2D*                                          Cover;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FreeWeekendItem.FreeWeekendItem_C.Construct
	 */
	struct UFreeWeekendItem_C_Construct_Params
	{
	};

	/**
	 * Function FreeWeekendItem.FreeWeekendItem_C.ExecuteUbergraph_FreeWeekendItem
	 */
	struct UFreeWeekendItem_C_ExecuteUbergraph_FreeWeekendItem_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
