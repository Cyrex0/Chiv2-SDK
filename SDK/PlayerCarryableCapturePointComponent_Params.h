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
	 * Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.PlayerSatisfiesCaptureRequirments
	 */
	struct UPlayerCarryableCapturePointComponent_C_PlayerSatisfiesCaptureRequirments_Params
	{
	public:
		class ATBLCharacter*                                       Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.SetupCarryableEvents
	 */
	struct UPlayerCarryableCapturePointComponent_C_SetupCarryableEvents_Params
	{
	public:
		class AInventoryItem*                                      Carryable;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnDropped_Event_1
	 */
	struct UPlayerCarryableCapturePointComponent_C_OnDropped_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.OnEquipped_Event_1
	 */
	struct UPlayerCarryableCapturePointComponent_C_OnEquipped_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function PlayerCarryableCapturePointComponent.PlayerCarryableCapturePointComponent_C.ExecuteUbergraph_PlayerCarryableCapturePointComponent
	 */
	struct UPlayerCarryableCapturePointComponent_C_ExecuteUbergraph_PlayerCarryableCapturePointComponent_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
