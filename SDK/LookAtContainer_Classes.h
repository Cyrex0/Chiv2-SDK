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
	 * WidgetBlueprintGeneratedClass LookAtContainer.LookAtContainer_C
	 * Size -> 0x0018 (FullSize[0x04E8] - InheritedSize[0x04D0])
	 */
	class ULookAtContainer_C : public UHUDCrosshairContainerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInvalidationBox*                                    InvalidationBox_1;                                       // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            WrapBox_1;                                               // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Update();
		void AddSubwidget(class UHUDContainerSubWidget* SubWidget);
		void RemoveSubwidget(class UHUDContainerSubWidget* SubWidget);
		void ExecuteUbergraph_LookAtContainer(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
