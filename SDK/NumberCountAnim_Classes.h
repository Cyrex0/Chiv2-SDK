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
	 * WidgetBlueprintGeneratedClass NumberCountAnim.NumberCountAnim_C
	 * Size -> 0x00D0 (FullSize[0x0318] - InheritedSize[0x0248])
	 */
	class UNumberCountAnim_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTBLTextBlock*                                       TBLTextBlock_33;                                         // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      CurrentNumber;                                           // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetNumber;                                            // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                PrefixText_PosValue;                                     // 0x0260(0x0018) Edit, BlueprintVisible
		class FText                                                PrefixText_NegValue;                                     // 0x0278(0x0018) Edit, BlueprintVisible
		float                                                      LerpTime;                                                // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S4IZ[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0298(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FLinearColor                                        TextColour;                                              // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DefaultText;                                             // 0x0300(0x0018) Edit, BlueprintVisible

	public:
		void SetNumber(int Num, float LerpTime);
		void CustomEvent_1(float Value);
		void PreConstruct(bool IsDesignTime);
		void SetFontSize(int Size);
		void ExecuteUbergraph_NumberCountAnim(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
