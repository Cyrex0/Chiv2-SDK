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
	 * WidgetBlueprintGeneratedClass GenericHUDContainerOverlay.GenericHUDContainerOverlay_C
	 * Size -> 0x0010 (FullSize[0x04E0] - InheritedSize[0x04D0])
	 */
	class UGenericHUDContainerOverlay_C : public UHUDContainerWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            Overlay_1;                                               // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void AddSubwidget(class UHUDContainerSubWidget* SubWidget);
		void RemoveSubwidget(class UHUDContainerSubWidget* SubWidget);
		void ExecuteUbergraph_GenericHUDContainerOverlay(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
