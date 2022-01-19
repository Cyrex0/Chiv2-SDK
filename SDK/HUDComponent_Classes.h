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
	 * BlueprintGeneratedClass HUDComponent.HUDComponent_C
	 * Size -> 0x0029 (FullSize[0x0131] - InheritedSize[0x0108])
	 */
	class UHUDComponent_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0108(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<struct FWidgetHudTypePair>                          Widget_Type_Pairs;                                       // 0x0110(0x0010) Edit, BlueprintVisible, Net, HasGetValueTypeHash
		TArray<class FName>                                        NewTags;                                                 // 0x0120(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       Is_Visible;                                              // 0x0130(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveBeginPlay();
		void Force_Init();
		void ExecuteUbergraph_HUDComponent(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
