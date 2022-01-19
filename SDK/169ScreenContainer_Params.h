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
	 * Function 169ScreenContainer.169ScreenContainer_C.Construct
	 */
	struct U169ScreenContainer_C_Construct_Params
	{
	};

	/**
	 * Function 169ScreenContainer.169ScreenContainer_C.SetScaling
	 */
	struct U169ScreenContainer_C_SetScaling_Params
	{
	public:
		SlateCore_EVerticalAlignment                               ScaleBox_Vertical;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SlateCore_EHorizontalAlignment                             ScaleBox_Horizontal;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SlateCore_EVerticalAlignment                               SizeBox_Vertical;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		SlateCore_EHorizontalAlignment                             SizeBoxHorizontal;                                       // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function 169ScreenContainer.169ScreenContainer_C.ExecuteUbergraph_169ScreenContainer
	 */
	struct U169ScreenContainer_C_ExecuteUbergraph_169ScreenContainer_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
