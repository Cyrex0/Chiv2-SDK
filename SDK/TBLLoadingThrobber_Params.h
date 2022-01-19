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
	 * Function TBLLoadingThrobber.TBLLoadingThrobber_C.Tick
	 */
	struct UTBLLoadingThrobber_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function TBLLoadingThrobber.TBLLoadingThrobber_C.CustomEvent_1
	 */
	struct UTBLLoadingThrobber_C_CustomEvent_1_Params
	{
	};

	/**
	 * Function TBLLoadingThrobber.TBLLoadingThrobber_C.ExecuteUbergraph_TBLLoadingThrobber
	 */
	struct UTBLLoadingThrobber_C_ExecuteUbergraph_TBLLoadingThrobber_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
