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
	 * Function NotificationIconWidget.NotificationIconWidget_C.UpdateWidget
	 */
	struct UNotificationIconWidget_C_UpdateWidget_Params
	{
	public:
		bool                                                       bHasUnviewed;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHasPurchasable;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustNotification
	 */
	struct UNotificationIconWidget_C_UpdateCustNotification_Params
	{
	public:
		struct FCustomizationEntry                                 CustomizationEntry;                                      // 0x0000(0x0080)  (BlueprintVisible, BlueprintReadOnly, Parm)

	};

	/**
	 * Function NotificationIconWidget.NotificationIconWidget_C.UpdateCustListNotification
	 */
	struct UNotificationIconWidget_C_UpdateCustListNotification_Params
	{
	public:
		TArray<struct FCustomizationEntry>                         CustomizationEntryList;                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

	};

	/**
	 * Function NotificationIconWidget.NotificationIconWidget_C.ExecuteUbergraph_NotificationIconWidget
	 */
	struct UNotificationIconWidget_C_ExecuteUbergraph_NotificationIconWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
