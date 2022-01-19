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
	 * Function AC_Block.AC_Block_C.Finish
	 */
	struct UAC_Block_C_Finish_Params
	{
	};

	/**
	 * Function AC_Block.AC_Block_C.CompleteAction
	 */
	struct UAC_Block_C_CompleteAction_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function AC_Block.AC_Block_C.PerformAction
	 */
	struct UAC_Block_C_PerformAction_Params
	{
	public:
		struct FUtilityAI_Context                                  C;                                                       // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

	};

	/**
	 * Function AC_Block.AC_Block_C.ExecuteUbergraph_AC_Block
	 */
	struct UAC_Block_C_ExecuteUbergraph_AC_Block_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
