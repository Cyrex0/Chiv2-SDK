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
	 * Function FrontendCameraReference.FrontendCameraReference_C.UserConstructionScript
	 */
	struct AFrontendCameraReference_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function FrontendCameraReference.FrontendCameraReference_C.Focused
	 */
	struct AFrontendCameraReference_C_Focused_Params
	{
	};

	/**
	 * Function FrontendCameraReference.FrontendCameraReference_C.Unfocused
	 */
	struct AFrontendCameraReference_C_Unfocused_Params
	{
	};

	/**
	 * Function FrontendCameraReference.FrontendCameraReference_C.ReceiveTick
	 */
	struct AFrontendCameraReference_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function FrontendCameraReference.FrontendCameraReference_C.ExecuteUbergraph_FrontendCameraReference
	 */
	struct AFrontendCameraReference_C_ExecuteUbergraph_FrontendCameraReference_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
