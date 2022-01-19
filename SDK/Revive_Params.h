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
	 * Function Revive.Revive_C.OnAssemble_Revive
	 */
	struct URevive_C_OnAssemble_Revive_Params
	{
	};

	/**
	 * Function Revive.Revive_C.EventEndAnimation
	 */
	struct URevive_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function Revive.Revive_C.StartRevive
	 */
	struct URevive_C_StartRevive_Params
	{
	public:
		class ATBLCharacter*                                       DownedCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Revive.Revive_C.Revive
	 */
	struct URevive_C_Revive_Params
	{
	};

	/**
	 * Function Revive.Revive_C.EventEndState
	 */
	struct URevive_C_EventEndState_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bStartAttack;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Revive.Revive_C.ExecuteUbergraph_Revive
	 */
	struct URevive_C_ExecuteUbergraph_Revive_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
