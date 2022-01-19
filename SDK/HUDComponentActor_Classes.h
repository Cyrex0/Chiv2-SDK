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
	 * BlueprintGeneratedClass HUDComponentActor.HUDComponentActor_C
	 * Size -> 0x0020 (FullSize[0x0278] - InheritedSize[0x0258])
	 */
	class AHUDComponentActor_C : public AActor
	{
	public:
		class UHUDComponent_C*                                     HUDComponent;                                            // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FWidgetHudTypePair>                          Widget_Type_Pairs;                                       // 0x0268(0x0010) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
