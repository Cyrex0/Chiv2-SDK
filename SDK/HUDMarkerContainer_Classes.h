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
	 * WidgetBlueprintGeneratedClass HUDMarkerContainer.HUDMarkerContainer_C
	 * Size -> 0x0010 (FullSize[0x05F0] - InheritedSize[0x05E0])
	 */
	class UHUDMarkerContainer_C : public UHUDMarkerContainerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x05E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void AddSubwidget(class UHUDContainerSubWidget* SubWidget);
		void RemoveSubwidget(class UHUDContainerSubWidget* SubWidget);
		void SubwidgetInitFromPool(class UHUDContainerSubWidget* SubWidget);
		void SubwidgetReturnToPool(class UHUDContainerSubWidget* SubWidget);
		void ExecuteUbergraph_HUDMarkerContainer(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
