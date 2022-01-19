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
	 * WidgetBlueprintGeneratedClass ChatWithInput.ChatWithInput_C
	 * Size -> 0x0115 (FullSize[0x035D] - InheritedSize[0x0248])
	 */
	class UChatWithInput_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeInTyping;                                            // 0x0250(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              BackgroundGradient;                                      // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Channel;                                                 // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatInputEditableTextBox*                           ChatInputEditableTextBox_1;                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatWidget*                                         ChatWidget_5;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      InputBox;                                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UInvalidationBox*                                    InvalidationBox_3;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             TypingBorder;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       Is_Ingame_Chat;                                          // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		TBL_EChatType                                              Chat_Type;                                               // 0x0299(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EYVT[0x6];                                   // 0x029A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Channel_Text;                                            // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        Hide_Self_Handle;                                        // 0x02B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             On_Entered_Input_Mode;                                   // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             On_Left_Input_Mode;                                      // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Is_In_Input_Mode;                                        // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SOE0[0x7];                                   // 0x02E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Hint_Text;                                               // 0x02E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int                                                        Input_Id;                                                // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WR3N[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Commit_text;                                             // 0x0308(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                OpenChatHint;                                            // 0x0320(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ClosedChatHint;                                          // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FColor                                              AgathaColour;                                            // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FColor                                              MasonColour;                                             // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FColor                                              FFAColour;                                               // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       Enlarged;                                                // 0x035C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		bool GetIsInputMode();
		void GetFactionColour(struct FColor* FactionColour);
		class UWidget* OnGenerateRow_1(const struct FChatLine& Item);
		void Switch_to_next_input_type();
		void IsKeyHandled(const struct FKeyEvent& Key_Event, struct FEventReply* Handled);
		struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void Construct();
		void Switch_To_Type(TBL_EChatType Type);
		void BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature();
		void Enter_Input_Mode(TBL_EChatType In_ChatType);
		void Enter_Last_Channel_Input_Mode();
		void BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, SlateCore_ETextCommit CommitMethod);
		void BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature(OverviewScreenState_EOverviewScreenState NewState, OverviewScreenState_EOverviewScreenState PreviousState);
		void BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature(TBL_EChatType InChatType);
		void Resized(bool Enlarged);
		void ExecuteUbergraph_ChatWithInput(int EntryPoint);
		void On_Left_Input_Mode__DelegateSignature();
		void On_Entered_Input_Mode__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
