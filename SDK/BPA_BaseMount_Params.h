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
	 * Function BPA_BaseMount.BPA_BaseMount_C.UpdateFootStepSounds
	 */
	struct UBPA_BaseMount_C_UpdateFootStepSounds_Params
	{
	public:
		float                                                      bpp__DeltaSeconds__pf;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bpp__bHidden__pf;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.UpdateBPFootsteps
	 */
	struct UBPA_BaseMount_C_UpdateBPFootsteps_Params
	{
	public:
		float                                                      bpp__footstepsxdeltaxseconds__pfTT;                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.ExecuteUbergraph_BPA_BaseMount_3
	 */
	struct UBPA_BaseMount_C_ExecuteUbergraph_BPA_BaseMount_3_Params
	{
	public:
		int                                                        bpp__EntryPoint__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EventOnWantsToGallop
	 */
	struct UBPA_BaseMount_C_EventOnWantsToGallop_Params
	{
	public:
		bool                                                       bpp__bWantsToGallop__pf;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EventOnStartDismount
	 */
	struct UBPA_BaseMount_C_EventOnStartDismount_Params
	{
	public:
		class FName                                                bpp__Direction__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EventOnMovementStateChanged
	 */
	struct UBPA_BaseMount_C_EventOnMovementStateChanged_Params
	{
	public:
		class FName                                                bpp__InMovementState__pf;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__InPreviousMovementState__pf;                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EventOnMounted
	 */
	struct UBPA_BaseMount_C_EventOnMounted_Params
	{
	public:
		class FName                                                bpp__Direction__pf;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EventOnInterrupt
	 */
	struct UBPA_BaseMount_C_EventOnInterrupt_Params
	{
	public:
		struct FAnimDamageParams                                   bpp__DamageEvent__pf__const;                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EventOnCombatStateChanged
	 */
	struct UBPA_BaseMount_C_EventOnCombatStateChanged_Params
	{
	public:
		class AActor*                                              bpp__Actor__pf;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__PreviousState__pf;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                bpp__NewState__pf;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAttackInfo                                         bpp__EventAttackInfo__pf__const;                         // 0x0018(0x0108)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		class UCombatState*                                        bpp__InCombatState__pf;                                  // 0x0120(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EventDamageNoInterrupt
	 */
	struct UBPA_BaseMount_C_EventDamageNoInterrupt_Params
	{
	public:
		struct FAnimDamageParams                                   bpp__DamageEvent__pf__const;                             // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FC6E6BAF4385FFD331D5ACA8254329E6_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_FA3E9AF4442395773E74B6A1B38391CF_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D91FC0AF40002B244A6EF68A6CD55426_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_SequencePlayer_D82A91924FB17653E78A86969FB6E982_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_7347FC7B413E45C5D7E04BAEAFCE8AF8_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_ModifyBone_05AB1AFF4C252067604B1083122AA9E0_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_DFC697A94868FEB9CBBF008EBC0D31AD_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D14126864B46202BC1C454B2B88AE262_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_D026EA1B49BE5142AA208D9E2652D5EF_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B4925C1F4BB594BFED01928F520D5F1B_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_B112986B421E57A801067389601D4E6C_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_AB7BC3C1457A520DDBA69084D90DD32F
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_AB7BC3C1457A520DDBA69084D90DD32F_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A98AE2B540DEE4E50279EEB2E019BD6D_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_A677D1F849DE6EEA5B94D885CEFE5F28_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_7CCCB0A149F2A971E20DC3B4678CE270_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_754F9E194852E4B6366D55B617AA82F7_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_65DD35AD42235328042B9E8D0B69FA1A_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendSpacePlayer_211D4F9A44F688F9BCDCB58D5992FE85_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_E245939D479B5C9EAC1DB98632C055BC_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_CD30800C449D28C526BDE5A3AD625727
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_CD30800C449D28C526BDE5A3AD625727_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_84A9957A4FBCD05622F85B8BC4199029_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA
	 */
	struct UBPA_BaseMount_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPA_BaseMount_AnimGraphNode_BlendListByBool_8059DD964A87D7A0C63912A7F3B2C1BA_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.BlueprintUpdateAnimation
	 */
	struct UBPA_BaseMount_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      bpp__DeltaTimeX__pf;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.BlueprintBeginPlay
	 */
	struct UBPA_BaseMount_C_BlueprintBeginPlay_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.AnimNotify_hitDamage_End
	 */
	struct UBPA_BaseMount_C_AnimNotify_hitDamage_End_Params
	{
	};

	/**
	 * Function BPA_BaseMount.BPA_BaseMount_C.AnimGraph
	 */
	struct UBPA_BaseMount_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           bpp__AnimGraph__pf;                                      // 0x0000(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
