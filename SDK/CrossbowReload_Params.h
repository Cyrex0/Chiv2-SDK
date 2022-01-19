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
	 * Function CrossbowReload.CrossbowReload_C.DisableCameraModifier
	 */
	struct UCrossbowReload_C_DisableCameraModifier_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CrossbowReload.CrossbowReload_C.EnableCameraModifier
	 */
	struct UCrossbowReload_C_EnableCameraModifier_Params
	{
	};

	/**
	 * Function CrossbowReload.CrossbowReload_C.OnAssemble_CrossbowReload
	 */
	struct UCrossbowReload_C_OnAssemble_CrossbowReload_Params
	{
	};

	/**
	 * Function CrossbowReload.CrossbowReload_C.EventEndAnimation
	 */
	struct UCrossbowReload_C_EventEndAnimation_Params
	{
	};

	/**
	 * Function CrossbowReload.CrossbowReload_C.EventBeginState
	 */
	struct UCrossbowReload_C_EventBeginState_Params
	{
	public:
		class FName                                                PreviousState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PreviousStateTime;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimationLength;                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CrossbowReload.CrossbowReload_C.EventBeginFire
	 */
	struct UCrossbowReload_C_EventBeginFire_Params
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bHeldQueue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function CrossbowReload.CrossbowReload_C.SoftRecovery
	 */
	struct UCrossbowReload_C_SoftRecovery_Params
	{
	};

	/**
	 * Function CrossbowReload.CrossbowReload_C.EventEndState
	 */
	struct UCrossbowReload_C_EventEndState_Params
	{
	public:
		class FName                                                NextState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bStartAttack;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function CrossbowReload.CrossbowReload_C.ExecuteUbergraph_CrossbowReload
	 */
	struct UCrossbowReload_C_ExecuteUbergraph_CrossbowReload_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
