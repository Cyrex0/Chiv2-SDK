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
	 * Function Interrupt.Interrupt_C.OnAssemble_Interrupt
	 */
	struct UInterrupt_C_OnAssemble_Interrupt_Params
	{
	};

	/**
	 * Function Interrupt.Interrupt_C.EventEndAnimation
	 */
	struct UInterrupt_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function Interrupt.Interrupt_C.ExecuteUbergraph_Interrupt
	 */
	struct UInterrupt_C_ExecuteUbergraph_Interrupt_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
