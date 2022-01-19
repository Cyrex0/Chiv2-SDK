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
	 * Function ReleaseStab.ReleaseStab_C.OnAssemble_ReleaseStab
	 */
	struct UReleaseStab_C_OnAssemble_ReleaseStab_Params
	{
	};

	/**
	 * Function ReleaseStab.ReleaseStab_C.EventEndAnimation
	 */
	struct UReleaseStab_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function ReleaseStab.ReleaseStab_C.EventBeginFire
	 */
	struct UReleaseStab_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ReleaseStab.ReleaseStab_C.ExecuteUbergraph_ReleaseStab
	 */
	struct UReleaseStab_C_ExecuteUbergraph_ReleaseStab_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
