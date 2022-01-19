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
	 * Function NPC_Chicken.NPC_Chicken_C.UserConstructionScript
	 */
	struct ANPC_Chicken_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function NPC_Chicken.NPC_Chicken_C.ReceiveBeginPlay
	 */
	struct ANPC_Chicken_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function NPC_Chicken.NPC_Chicken_C.Client Hit
	 */
	struct ANPC_Chicken_C_Client_Hit_Params
	{
	};

	/**
	 * Function NPC_Chicken.NPC_Chicken_C.OnDropped_Event_1
	 */
	struct ANPC_Chicken_C_OnDropped_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       Character;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTransform                                          Transform;                                               // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NPC_Chicken.NPC_Chicken_C.OnInteractableEnabled_Event_1
	 */
	struct ANPC_Chicken_C_OnInteractableEnabled_Event_1_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NPC_Chicken.NPC_Chicken_C.K2_TornOff
	 */
	struct ANPC_Chicken_C_K2_TornOff_Params
	{
	};

	/**
	 * Function NPC_Chicken.NPC_Chicken_C.OnSetAttached
	 */
	struct ANPC_Chicken_C_OnSetAttached_Params
	{
	public:
		bool                                                       bAttached;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function NPC_Chicken.NPC_Chicken_C.ExecuteUbergraph_NPC_Chicken
	 */
	struct ANPC_Chicken_C_ExecuteUbergraph_NPC_Chicken_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
