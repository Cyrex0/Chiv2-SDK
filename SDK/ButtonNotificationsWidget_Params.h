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
	 * Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.UpdateNotifications
	 */
	struct UButtonNotificationsWidget_C_UpdateNotifications_Params
	{
	public:
		int                                                        Notifications;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.NewNotification
	 */
	struct UButtonNotificationsWidget_C_NewNotification_Params
	{
	};

	/**
	 * Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.PreConstruct
	 */
	struct UButtonNotificationsWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.SetStyle
	 */
	struct UButtonNotificationsWidget_C_SetStyle_Params
	{
	public:
		NotificationsWidgetStyle_ENotificationsWidgetStyle         Style;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function ButtonNotificationsWidget.ButtonNotificationsWidget_C.ExecuteUbergraph_ButtonNotificationsWidget
	 */
	struct UButtonNotificationsWidget_C_ExecuteUbergraph_ButtonNotificationsWidget_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
