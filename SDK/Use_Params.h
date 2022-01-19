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
	 * Function Use.Use_C.OnAssemble_Use
	 */
	struct UUse_C_OnAssemble_Use_Params
	{
	};

	/**
	 * Function Use.Use_C.EventEndAnimation
	 */
	struct UUse_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function Use.Use_C.EventBeginState
	 */
	struct UUse_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Use.Use_C.TriggerUseItem
	 */
	struct UUse_C_TriggerUseItem_Params
	{
	};

	/**
	 * Function Use.Use_C.ExecuteUbergraph_Use
	 */
	struct UUse_C_ExecuteUbergraph_Use_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
