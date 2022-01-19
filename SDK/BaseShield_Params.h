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
	 * Function BaseShield.BaseShield_C.ApplyHeraldry
	 */
	struct ABaseShield_C_ApplyHeraldry_Params
	{
	};

	/**
	 * Function BaseShield.BaseShield_C.GetCustomizationShield
	 */
	struct ABaseShield_C_GetCustomizationShield_Params
	{
	public:
		class UCTShield*                                           AsCTShield;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseShield.BaseShield_C.ShouldCustomizePlacedInWorldItem
	 */
	struct ABaseShield_C_ShouldCustomizePlacedInWorldItem_Params
	{
	public:
		class ATBLCharacter*                                       OwningCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseShield.BaseShield_C.GetShieldCollision
	 */
	struct ABaseShield_C_GetShieldCollision_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseShield.BaseShield_C.UserConstructionScript
	 */
	struct ABaseShield_C_UserConstructionScript_Params
	{
	};

	/**
	 * Function BaseShield.BaseShield_C.OnLoaded_93186E5C4C953E77222454BE85A78163
	 */
	struct ABaseShield_C_OnLoaded_93186E5C4C953E77222454BE85A78163_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseShield.BaseShield_C.DamageShield
	 */
	struct ABaseShield_C_DamageShield_Params
	{
	public:
		TBL_EInventoryItemDamagedState                             DamageState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BaseShield.BaseShield_C.OnInitialize
	 */
	struct ABaseShield_C_OnInitialize_Params
	{
	};

	/**
	 * Function BaseShield.BaseShield_C.OnAddedToInventoryChanged_Event_1
	 */
	struct ABaseShield_C_OnAddedToInventoryChanged_Event_1_Params
	{
	public:
		class AInventoryItem*                                      Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAddedToInventory;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function BaseShield.BaseShield_C.ExecuteUbergraph_BaseShield
	 */
	struct ABaseShield_C_ExecuteUbergraph_BaseShield_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
