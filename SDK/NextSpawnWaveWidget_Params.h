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
	 * Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.Construct
	 */
	struct UNextSpawnWaveWidget_C_Construct_Params
	{
	};

	/**
	 * Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.NextSpawnWaveReplicated_Event_1
	 */
	struct UNextSpawnWaveWidget_C_NextSpawnWaveReplicated_Event_1_Params
	{
	public:
		class ASpawnWave*                                          SpawnWave;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NextSpawnWaveWidget.NextSpawnWaveWidget_C.ExecuteUbergraph_NextSpawnWaveWidget
	 */
	struct UNextSpawnWaveWidget_C_ExecuteUbergraph_NextSpawnWaveWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
