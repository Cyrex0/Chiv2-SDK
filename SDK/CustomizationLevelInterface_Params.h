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
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.ManuallySetCamera
	 */
	struct UCustomizationLevelInterface_C_ManuallySetCamera_Params
	{
	public:
		class UCameraComponent*                                    TargetCameraComp;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Camera;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_CustomizationCameras_C*                          CameraBlueprint;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCustomizationCharacter
	 */
	struct UCustomizationLevelInterface_C_GetCustomizationCharacter_Params
	{
	public:
		TBL_EAudioClassType                                        Class;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ATBLCharacter*                                       Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetCurrentFaction
	 */
	struct UCustomizationLevelInterface_C_GetCurrentFaction_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptRotate
	 */
	struct UCustomizationLevelInterface_C_AttemptRotate_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptZoom
	 */
	struct UCustomizationLevelInterface_C_AttemptZoom_Params
	{
	public:
		bool                                                       In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.CustomizationCategoryChanged
	 */
	struct UCustomizationLevelInterface_C_CustomizationCategoryChanged_Params
	{
	public:
		class FName                                                CategoryName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.GetSpecatorPawnSpawnLocation
	 */
	struct UCustomizationLevelInterface_C_GetSpecatorPawnSpawnLocation_Params
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialDeSpawn
	 */
	struct UCustomizationLevelInterface_C_RequestTutorialDeSpawn_Params
	{
	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.RequestTutorialSpawn
	 */
	struct UCustomizationLevelInterface_C_RequestTutorialSpawn_Params
	{
	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetClass
	 */
	struct UCustomizationLevelInterface_C_SetClass_Params
	{
	public:
		TBL_EAudioClassType                                        Class;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.EquipWeapon
	 */
	struct UCustomizationLevelInterface_C_EquipWeapon_Params
	{
	public:
		class UClass*                                              Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EAudioClassType                                        Class;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptFocus
	 */
	struct UCustomizationLevelInterface_C_AttemptFocus_Params
	{
	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptTurn
	 */
	struct UCustomizationLevelInterface_C_AttemptTurn_Params
	{
	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.AttemptBattlecry
	 */
	struct UCustomizationLevelInterface_C_AttemptBattlecry_Params
	{
	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.SetFaction
	 */
	struct UCustomizationLevelInterface_C_SetFaction_Params
	{
	public:
		TBL_EFaction                                               Faction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function CustomizationLevelInterface.CustomizationLevelInterface_C.ApplyAssets
	 */
	struct UCustomizationLevelInterface_C_ApplyAssets_Params
	{
	public:
		TArray<struct FCustomizationEntry>                         Assts;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TBL_EAudioClassType                                        Class;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TBL_EFaction                                               Faction;                                                 // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
