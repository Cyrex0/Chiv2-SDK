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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GrantVictoryToPlayer_MostKills.GrantVictoryToPlayer_MostKills_C
	 * Size -> 0x000C (FullSize[0x004C] - InheritedSize[0x0040])
	 */
	class UGrantVictoryToPlayer_MostKills_C : public UGrantVictoryToPlayer_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int                                                        MaxKills;                                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StartStage();
		void ExecuteUbergraph_GrantVictoryToPlayer_MostKills(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
