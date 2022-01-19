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
	 * Function ChatWithInput.ChatWithInput_C.GetIsInputMode
	 */
	struct UChatWithInput_C_GetIsInputMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.GetFactionColour
	 */
	struct UChatWithInput_C_GetFactionColour_Params
	{
	public:
		struct FColor                                              FactionColour;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.OnGenerateRow_1
	 */
	struct UChatWithInput_C_OnGenerateRow_1_Params
	{
	public:
		struct FChatLine                                           Item;                                                    // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UWidget*                                             ReturnValue;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.Switch to next input type
	 */
	struct UChatWithInput_C_Switch_to_next_input_type_Params
	{
	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.IsKeyHandled
	 */
	struct UChatWithInput_C_IsKeyHandled_Params
	{
	public:
		struct FKeyEvent                                           Key_Event;                                               // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         Handled;                                                 // 0x0038(0x00B8)  (Parm, OutParm)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.OnKeyChar
	 */
	struct UChatWithInput_C_OnKeyChar_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FCharacterEvent                                     InCharacterEvent;                                        // 0x0038(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0058(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.OnKeyDown
	 */
	struct UChatWithInput_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.OnKeyUp
	 */
	struct UChatWithInput_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.Construct
	 */
	struct UChatWithInput_C_Construct_Params
	{
	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.Switch To Type
	 */
	struct UChatWithInput_C_Switch_To_Type_Params
	{
	public:
		TBL_EChatType                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature
	 */
	struct UChatWithInput_C_BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_695_EnterLastChannelInputModeSignature__DelegateSignature_Params
	{
	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.Enter Input Mode
	 */
	struct UChatWithInput_C_Enter_Input_Mode_Params
	{
	public:
		TBL_EChatType                                              In_ChatType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.Enter Last Channel Input Mode
	 */
	struct UChatWithInput_C_Enter_Last_Channel_Input_Mode_Params
	{
	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UChatWithInput_C_BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_407_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		SlateCore_ETextCommit                                      CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UChatWithInput_C_BndEvt__ChatInputEditableTextBox_0_K2Node_ComponentBoundEvent_350_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature
	 */
	struct UChatWithInput_C_BndEvt__OverviewScreen_K2Node_ComponentBoundEvent_19_OverviewScreenStateChanged__DelegateSignature_Params
	{
	public:
		OverviewScreenState_EOverviewScreenState                   NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		OverviewScreenState_EOverviewScreenState                   PreviousState;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature
	 */
	struct UChatWithInput_C_BndEvt__ChatWidget_4_K2Node_ComponentBoundEvent_334_EnterInputModeSignature__DelegateSignature_Params
	{
	public:
		TBL_EChatType                                              InChatType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.Resized
	 */
	struct UChatWithInput_C_Resized_Params
	{
	public:
		bool                                                       Enlarged;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.ExecuteUbergraph_ChatWithInput
	 */
	struct UChatWithInput_C_ExecuteUbergraph_ChatWithInput_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.On Left Input Mode__DelegateSignature
	 */
	struct UChatWithInput_C_On_Left_Input_Mode__DelegateSignature_Params
	{
	};

	/**
	 * Function ChatWithInput.ChatWithInput_C.On Entered Input Mode__DelegateSignature
	 */
	struct UChatWithInput_C_On_Entered_Input_Mode__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
