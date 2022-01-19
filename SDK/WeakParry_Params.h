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
	 * Function WeakParry.WeakParry_C.OnAssemble_WeakParry
	 */
	struct UWeakParry_C_OnAssemble_WeakParry_Params
	{
	};

	/**
	 * Function WeakParry.WeakParry_C.EventEndAnimation
	 */
	struct UWeakParry_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function WeakParry.WeakParry_C.EventBeginFire
	 */
	struct UWeakParry_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function WeakParry.WeakParry_C.EventBeginState
	 */
	struct UWeakParry_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function WeakParry.WeakParry_C.SoftRecovery
	 */
	struct UWeakParry_C_SoftRecovery_Params
	{
	};

	/**
	 * Function WeakParry.WeakParry_C.ExecuteUbergraph_WeakParry
	 */
	struct UWeakParry_C_ExecuteUbergraph_WeakParry_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
