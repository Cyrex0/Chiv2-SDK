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
	 * Function Deflect.Deflect_C.OnAssemble_Deflect
	 */
	struct UDeflect_C_OnAssemble_Deflect_Params
	{
	};

	/**
	 * Function Deflect.Deflect_C.EventBeginFire
	 */
	struct UDeflect_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Deflect.Deflect_C.EventBeginState
	 */
	struct UDeflect_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Deflect.Deflect_C.EarlyOut
	 */
	struct UDeflect_C_EarlyOut_Params
	{
	};

	/**
	 * Function Deflect.Deflect_C.DashJabOut
	 */
	struct UDeflect_C_DashJabOut_Params
	{
	};

	/**
	 * Function Deflect.Deflect_C.AllowParry
	 */
	struct UDeflect_C_AllowParry_Params
	{
	};

	/**
	 * Function Deflect.Deflect_C.TryStartAttack
	 */
	struct UDeflect_C_TryStartAttack_Params
	{
	};

	/**
	 * Function Deflect.Deflect_C.ExecuteUbergraph_Deflect
	 */
	struct UDeflect_C_ExecuteUbergraph_Deflect_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
